def main():
    a = input()
    b = input().split()
    count = 0
    for i in b:
        if int(i) < 0:
            count += 1
    print(count)
main()
