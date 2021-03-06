#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

for i in $(seq 1 8) ; do
    input="jack_${i}_in.txt"
    output="jack_${i}_out.txt"

    echo "${input}:"

    expected=$(head -n1 "${output}")
    computed=$(cat "${input}" | ./jack.out | head -n1)
    
    color="${GREEN}"
    [ "${expected}" != "${computed}" ] && color="${RED}"

    echo -ne "${color}"
    echo "expected: ${expected}"
    echo "computed: ${computed}"
    echo -e "${NC}"
done
