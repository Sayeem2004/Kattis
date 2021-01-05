def main():
    n = int(input())
    count1 = 0
    for i in range(0,n):
        n2 = int(input())
        list = input().split()
        count1 += 1
        for i in list:
            if list.count(i) == 1:
                a = "Case #"
                a += str(count1)
                a += ":"
                print(a,i)
main()
