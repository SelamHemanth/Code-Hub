#!/bin/bash

if [ $# -eq 0 ]
then
    echo "No arguments provided."
    exit 1
fi

for arg in "$@"
 do
    if [ -f "$arg" ]
	 then
        line_count=$(wc -l < "$arg")
        echo "$arg is a file with $line_count lines."
    elif [ -d "$arg" ]
	 then
         echo "$arg is a directory."
    else
        echo "$arg is not a valid file or directory."
    fi
done

