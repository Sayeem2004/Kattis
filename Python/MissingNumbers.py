def main():
    n = int(input())
    end = 0
    list = []
    count = 0
    for i in range(1,n+1):
        a = int(input())
        list.append(a)
        if i == n:
            end = a
    for i in range(1,end+1):
        if i not in list:
            print(i)
            count += 1
    if count == 0:
        print("good job")
main()
