for i in range(1,101):
    print("Fizz"[(i%3)*4:]+"Buzz"[(i%7)*4:] or i)