#!/bin/bash

prev_dir=`pwd`

cd ..

files=`git status | grep 'оба добавлены' | awk '{print($3)}'`

for file in ${files}
do
    git add ${file}
done

cd ${prev_dir}
