import math

def main():
    l = input().split()
    s1 = int(l[0])
    deg = int(l[1])
    length = s1 / math.sin(deg * 3.14159265358979 / 180)
    length = math.ceil(length)
    ret = int(length)
    print(ret)
main()
