def main():
    per = int(input())
    n = int(input())
    total = 0
    for i in range(0,n):
        a = int(input())
        total += a
    ret1 = per * (n+1) - total
    print(ret1)
main()
