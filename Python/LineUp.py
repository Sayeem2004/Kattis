def main():
    n = int(input())
    list = []
    list2 = []
    for i in range(0,n):
        a = input()
        list.append(a)
        list2.append(a)
    list2.sort()
    if list2 == list:
        print("INCREASING")
        return 0
    list2.sort(reverse=True)
    if list2 == list:
        print("DECREASING")
        return 0
    print("NEITHER")
main()
