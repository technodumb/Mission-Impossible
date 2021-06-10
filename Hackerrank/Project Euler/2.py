def evenfib(n):
    if n < 1:
        return n
    elif n==1:
        return 2
    else:
        return (4 * evenfib(n-1))+evenfib(n-2)

for _ in range(int(input())):
    n = int(input())
    i,s = 1,0
    while True:
        term = evenfib(i)
        if term>n:
            break
        else:
            s+=term
        i+=1
    print(s)
