#!/bin/bash

if [ $# -ne 1 ]
then
    echo "Usage: $0 <directory>"
    exit 1
fi

directory="$1"

if [ ! -d "$directory" ]
then
    echo "$directory is not a directory."
    exit 1
fi

echo "Directory files in $directory:"
ls -l "$directory"

