#!/bin/bash

file=$1
if test -f $file; then
    echo "$file found!"
else
    echo "$file not found!"
    exit -1
fi

while IFS= read -r line
do
    diff -u "../../../mmo/master/${line}" "../$line" | colordiff
done < "$file"