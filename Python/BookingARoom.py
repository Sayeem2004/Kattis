def main():
    a = input().split()
    rooms = int(a[0])
    booked = int(a[1])
    list = [i+1 for i in range(0,rooms)]
    for i in range(0,booked):
        b = int(input())
        list[b-1] = 0
    if booked >= rooms:
        print("too late")
        return 0
    for i in list:
        if i != 0:
            print(i)
            return 0
main()
