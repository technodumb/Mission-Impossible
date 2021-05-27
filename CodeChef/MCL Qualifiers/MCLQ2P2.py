for _ in range(int(input())):
    a = [int(i) for i in input().split()]
    a = set(range(a[0], a[1]+1))
    b = [int(i) for i in input().split()]
    b= set(range(b[0], b[1]+1))
    c = [int(i) for i in input().split()]
    c = set(range(c[0], c[1]+1))
    inter = set.intersection(a, b, c)
    print("WIN" if len(inter) else "LOSE")

