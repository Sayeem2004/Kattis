def main():
    e = input().strip().split()
    x,y,z = int(e[0]), int(e[1]), int(e[2])
    for i in range(1, z+1):
        if i%x == 0 and i%y == 0:
            print("FizzBuzz")
        elif i%x == 0:
            print("Fizz")
        elif i%y == 0:
            print("Buzz")
        else:
            print(str(i))
main()
