def main():
    n = int(input())
    output = 0
    for i in range(0,n):
        c = int(input())
        p = c % 10
        b = c // 10
        output += b**p
    print(str(output))
main()
