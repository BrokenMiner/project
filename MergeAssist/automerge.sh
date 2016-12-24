#!/bin/bash

prev_dir=`pwd`

cd ..

files=`git status|grep 'оба добавлены:'|awk '{print($3,$4)}'|sed "a*"|sed "s/*/\n/g"`

for file in ${files}
do
    MergeAssist/edit_file ${file} >> not_merge_out.log
    if [ $? -eq 0 ]
       then echo "${file}" >> candidate_to_merge.txt
    fi
done

cd ${prev_dir}

