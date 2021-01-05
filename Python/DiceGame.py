def main():
    l1 = [int(i) for i in input().split()]
    l2 = [int(i) for i in input().split()]
    a = sum(l1)
    b = sum(l2)
    if (a > b):
        print("Gunnar")
    elif (a < b):
        print("Emma")
    else:
        print("Tie")
main()
