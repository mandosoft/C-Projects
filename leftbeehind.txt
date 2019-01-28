
while True:
    x,y = input().split()
    x,y = int(x), int(y)
    ans=''
    if x==0 and y==0: break
    if x+y==13: ans='Never speak again.'
    elif x==y: ans='Undecided.'
    elif x>y: ans='To the convention.'
    elif x<y: ans='Left beehind.'
    print(ans)

