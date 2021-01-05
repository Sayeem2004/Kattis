import math

def main():
    list = input().split()
    n = int(list[0])
    l = int(list[1])
    w = int(list[2])
    max = math.sqrt(l * l + w * w)
    for i in range(0,n):
        q = int(input())
        if q <= max:
            print("DA")
        else:
            print("NE")
main()
