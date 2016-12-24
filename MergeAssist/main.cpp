#include <string>
#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include <iterator>

#include <stdint.h>

const std::string first_branch =  "<<<<<<< HEAD";
const std::string delimiter =     "=======";
const std::string second_branch = ">>>>>>> omni_engine";

int main(int argc, char* argv[])
{
    std::string file_name;
    if(argc > 1)
    {
        file_name = std::string(argv[1]);
    }
    else
    {
        std::cerr << "Specify a file" << std::endl;
        return -1;
    }
    
    std::ifstream file_in;
    
    file_in.open(file_name.c_str());
    
    if(!file_in.is_open())
    {
        std::cerr << "Can't open file: " << file_name << std::endl;
        return -1;
    }
    
    std::vector<std::string> vec;
    std::string str;
    while (std::getline(file_in, str))
        vec.push_back(str);
    file_in.close();
    
    int64_t n_blocks = 0;
    int64_t n_resolved_blocks = 0;
    bool is_resolved = true;
    int64_t sb_index = -1;
    int64_t dlmr_index = -1;
    int64_t fb_index = -1;
    bool new_block = false;
    for(int64_t i = (vec.size() - 1); i >= 0; --i)
    {
        if(vec[i].find(second_branch) != std::string::npos)
            sb_index = static_cast<int64_t>(i);
        if(vec[i].find(delimiter) != std::string::npos)
            dlmr_index = static_cast<int64_t>(i);
        if(vec[i].find(first_branch) != std::string::npos)
        {
            fb_index = static_cast<int64_t>(i);
            if(sb_index >= 0 && dlmr_index >= 0)
            {
                new_block = true;
                n_blocks++;
            }
        }
        
        if(new_block)
        {
            if((sb_index - dlmr_index) == 1 || (dlmr_index - fb_index) == 1)  // This block may resolved
            {
                vec.erase(vec.begin() + sb_index);
                vec.erase(vec.begin() + dlmr_index);
                vec.erase(vec.begin() + fb_index);
                n_resolved_blocks++;
            }
            else
                // Нельзя мержить, блок не разрешен
                is_resolved = false;
            
            new_block = false;
            sb_index = dlmr_index = fb_index = -1;
        }
        
    }
    
    std::ofstream outfile(file_name.c_str());
    if(!outfile.is_open())
    {
        std::cerr << "Can't open file: " << file_name << std::endl;
        return -1;
    }
    
    // Копирование в файл новых наборов строк
    std::copy(vec.begin(), vec.end(), 
                std::ostream_iterator<std::string>(outfile, "\n"));
    outfile.close();
    
    if(n_resolved_blocks < n_blocks)
    {
        std::cout << "Processed: " << file_name << " not merged!";
        std::cout << " Num of blocks: " << n_blocks << "  Num of resolved: " << n_resolved_blocks << std::endl;
    }
    
    // 1 - don't merge, 0 - all blocks have been resolved
    if(new_block == false && sb_index == -1 && dlmr_index == -1 && fb_index == -1 && is_resolved == true )
        return 0;
    else
        return 1;
}