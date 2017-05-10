#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

for i in $(seq 1 9) ; do
    input="neh_${i}_in.txt"
    output="neh_${i}_out.txt"

    echo "${input}:"

    expected=$(head -n1 "${output}")
    computed=$(cat "${input}" | ./neh.out | head -n1)
    
    color="${GREEN}"
    [ "${expected}" != "${computed}" ] && color="${RED}"

    echo -ne "${color}"
    echo "expected: ${expected}"
    echo "computed: ${computed}"
    echo -e "${NC}"
done
