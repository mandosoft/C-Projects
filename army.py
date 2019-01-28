from sys import stdin, stdout  
n = int(stdin.readline()) 
for i in range(n):
    input()
    values = [int(x) for x in raw_input().split()]
    g = [int(x) for x in raw_input().split()]
    m = [int(x) for x in raw_input().split()]
    print('Godzilla' if max(g)>=max(m) else 'MechaGodzilla')
    
    