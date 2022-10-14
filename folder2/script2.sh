#!bin/bash
for (( i=1; i<10; i++ )); do

echo $i>log-0$i

done  

for (( j=10; j<=100; j++ )); do
echo $j>log-$j

done
