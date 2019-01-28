from sys import stdin, stdout
while 1:
chessBoard = [['A','B','C','D','E','F','G','H'] * 8 for i in range(8)]
x,x1,y,y1=map(int,stdin.readline().split()) 
print(chessBoard)