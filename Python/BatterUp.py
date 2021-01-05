def main():
    n = input()
    count = 0
    total = 0
    list = input().split()
    for i in list:
        if int(i) != -1:
            count += 1
            total += int(i)
    ret = total / count
    print(ret)
main()
