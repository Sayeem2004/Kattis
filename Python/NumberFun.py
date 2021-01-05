def main():
    n = int(input())
    for i in range(0,n):
        l = input().split()
        a = int(l[0])
        b = int(l[1])
        c = int(l[2])
        if a + b == c or a * b == c or a / b == c or b / a == c or a - b == c or b - a == c:
            print("Possible")
        else:
            print("Impossible")
main()
