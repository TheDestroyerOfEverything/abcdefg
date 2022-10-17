#!bin/bash
echo "Max num:"
sort -t= -nr log-{1..100} | head -1
echo "Min num:"
sort -n log-{1..100} | head -1
