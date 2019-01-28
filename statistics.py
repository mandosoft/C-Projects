import sys

c = 1
for line in sys.stdin.readlines():
    x = [int(w) for w in line.split()]
    print('Case',c,':',.format(min(x[1:]), max(x[1:]), max(x[1:]) - min(x[1:])))
    c += 1