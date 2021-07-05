n = int(input())
l = list(range(2**n))
for c in range(1,n):
    for j in range(2**c, 2**n, 2**(c+1)):
        l[j:j+2**c] = reversed(l[j:j+2**c])
for i in l:
    print(i,end=' ')




#  0 1 3 2 4 5 7 6
# n = 3
