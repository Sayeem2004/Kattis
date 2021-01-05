def main():
    n = int(input())
    l = []
    while (n > 0):
        l.append(n%2)
        n = n / 2
    ret = 0
    l = reverse(l)
    for i in range(0,len(l)):
        ret += l[i] * 2**i
    print(ret)
main()
