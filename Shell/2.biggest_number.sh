#!/bin/sh
a=$1
b=$2
c=$3

if [ $# -ne 3 ]
then
echo "Invalid Arguments(Enter two values)"

else
if [ $a -gt $b ]
then
if [ $a -gt $c  ] 
then
echo "Biggest number is $a"
fi
fi

if [ $b -gt $c ]
then
if [ $b -gt $a ]
then
echo "Biggest number is $b"
fi
fi

if [ $c -gt $a ]
then
if [ $c -gt $b ]
then
echo "Biggest number is $c"
fi
fi

fi
