def main():
    l = input().split()
    r1 = float(l[0])
    r2 = float(l[1])
    a1 = 3.14159265358979 * r1 * r1
    a2 = 3.14159265358979 * (r1-r2) * (r1-r2)
    ret = a2 / a1 * 100
    print(ret)
main()
