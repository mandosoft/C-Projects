from sys import stdin, stdout
import math  
while 1:
    m,p,l,e,r,s,n=map(int,stdin.readline().split()) 
    for i in range(n):m,p,l = p/s,l/r,e*m
    print(math.floor(m))