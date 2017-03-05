import sys

linesWithJobs = sys.stdin.read().strip().split('\n')[1:]
jobs = [j.split(' ') for j in linesWithJobs]
jobs = [{'r': int(j[0]), 'p': int(j[1])} for j in jobs]

# TODO: your code here

cMax = 0

print cMax
