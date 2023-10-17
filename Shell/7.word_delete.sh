#!/bin/sh

if [ $# -eq 0 ]
 then
  echo "Arguments not correct"
else
if [ -f $1 ]
then
grep -vw $2 $1 | cat > $3
mv $3 $1
cat $1
fi
fi
