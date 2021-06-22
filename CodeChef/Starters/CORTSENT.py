from string import ascii_lowercase, ascii_uppercase
l1 = set(ascii_lowercase[:13])
l2 = set(ascii_uppercase[13:])

for _ in range(int(input())):
    i = input().split()
    k = int(i[0])
    s = i[1:]
    flag = True
    for i in s:
        if set(i).issubset(l1):
            pass
        elif set(i).issubset(l2):
            pass
        else:
            flag = False
    if flag:
        print("YES")
    else:
        print("NO")