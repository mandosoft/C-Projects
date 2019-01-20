import sys
input = sys.stdin.read()
N = int(input().split())
for i in N:
    input()
values = [int(x) for x in N]
g = [int(x) for x in N]
m = [int(x) for x in N]
print('Godzilla' if max(g)>=max(m) else 'MechaGodzilla')