x = int(input())
p = int(input())
n = int(input())
total = 0
for i in range(n):
    total+= x*12
    total+= x*12*p/100

print(int(total))