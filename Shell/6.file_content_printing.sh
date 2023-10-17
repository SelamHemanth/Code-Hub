#!/bin/sh

if [ $# -ne 3 ]
then
echo "Invalid Arguments(Enter one file name and two indexes)"
else
if [ -f $1 ]
then
head -n $3 $1 | tail -n $(($3-$2+1))
fi
fi
