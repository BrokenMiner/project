#!/bin/bash

file=$1
if test -f $file; then
    echo "$file found!"
else
    echo "$file not found!"
    exit -1
fi

prev_dir=`pwd`

while IFS= read -r line
do
    cd ..
    git add "${line}"
    cd ${prev_dir}
done < "$file"