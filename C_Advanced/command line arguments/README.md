##Date:19-10-2023      Topic: command line arguments

1   Implement the calculator program using Command line arguments

eg., input:  >./calc   56 + 671
output : 727

note: when giving * in commandline, always give "*"

2   sorting a list of names received on command line argument, with options like -r and -i

if -r option is given strings are to be sorted in descending order.
if -r option is not there, strings are to be sorted in ascending order.

if -i option is given, strings are to be compared using stricmp function (case insensitive)

if -i option is not given, strings are to be compared using strcmp function (case sensitive)

eg.,


./sort -r -i abc Abe def dEf gHi aBc iKf deF
these strings are to be sorted in descending order considering capital and small letters as same.

./sort -r abc Abe def dEf gHi aBc iKf deF
these strings are to be sorted in descending order considering capital and small letters as different.

./sort -i abc Abe def dEf gHi aBc iKf deF
  these strings are to be sorted in ascending order considering capital and small letters as same.  

./sort abc Abe def dEf gHi aBc iKf deF
  these strings are to be sorted in ascending order considering capital and small letters as different.
