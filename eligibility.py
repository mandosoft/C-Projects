for _ in range(int(input())):
    a = input().split()
    if (int(a[1].split('/')[0])>=2010 or int(a[2].split('/')[0])>=1991): ans='eligible'
    elif int(a[3])>=41: ans='ineglible'
    else: ans='coach petitions'
    print(a[0], ans)

