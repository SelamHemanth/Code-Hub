#!/bin/sh

if [ $# -ne 1 ]
then
echo "Invalid Arguments(Enter one argument as a file name)"
else
if [ -f "$1" ] 
then
echo "File is Founded"
else
echo "File is not Founded"
fi
fi

