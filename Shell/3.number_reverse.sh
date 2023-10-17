#!/bin/sh

a=$1
c=0
if [ $# -ne 1 ]
then
echo "Invalid Arguments(Enter one value)"
else
while [ $a -gt 0 ]
do
d=$((a%10))
c=$((c*10+d))
a=$((a/10))
done
echo "$c"
fi
