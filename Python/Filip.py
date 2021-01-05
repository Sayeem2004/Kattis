def main():
    l = input().split()
    a = l[0]
    b = l[1]
    a = a[::-1]
    b = b[::-1]
    a = int(a)
    b = int(b)
    print(max(a,b))
main()
