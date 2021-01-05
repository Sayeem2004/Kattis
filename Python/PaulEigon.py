def main():
    n = [int(i) for i in input().split()]
    a = (n[1] + n[2]) // n[0];
    if a % 2 == 0:
        print("paul")
    else:
        print("opponent")
main()
