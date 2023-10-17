#!/bin/sh
if [ $# -ne 2 ]
then
echo "Invalid Arguments(Enter two values)"
else
c=$(($1+$2))
echo "$c"
fi
