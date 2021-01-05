def main():
    l = input().split()
    a = int(l[0])
    b = int(l[1])
    total = a * 60 + b
    total -= 45
    if total > 0:
        total += 0
    else:
        total += 1440
    ret1 = total // 60
    ret2 = total % 60
    print(ret1,ret2)
main()
