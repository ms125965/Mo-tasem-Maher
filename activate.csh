"""• ‘NO’ (means NW in Portuguese) if the residence is in Northwestern Nlogonia;
• ‘NE’ if the residence is in Northeastern Nlogonia;
• ‘SE’ if the residence is in Southeastern Nlogonia;
• ‘SO’ (means SW in Portuguese) if the residence is in Southwestern Nlogonia."""
x=[]
n=0
while True :
    q=int(input())
    if (q != 0):
        a, s = map(int, input().split())
        for z in range(1,q+1):
            w,e=map(int,input().split())
            if (w>a and e>s):
                x.append('NE')
            elif (w<a and e>s):
                x.append('NO')
            elif (w>a and e<s):
                x.append('SE')
            elif (w<a and e<s):
                x.append('SO')
            else :
                x.append('divisa')
            n +=1
    else :
        break
v=0
while v<n :
    print (x[v])
    v +=1

