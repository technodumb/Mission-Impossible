for i in range(int(input())):
    x,m,d = [int(j) for j in input().split(" ")]
    print(min(x*m,x+d))

