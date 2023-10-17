#!/bin/sh

for var in $*
do
if [ -w $var ]
then
if [ -r $var ]
then
if [ -x $var ]
then
echo "'$var' have read,write,execute permissions"
fi
fi
fi
done
