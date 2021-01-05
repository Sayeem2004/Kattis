def main():
    a = input()
    list = [1,0,0]
    for i in a:
        if i == "A":
            if (list[0] == 1):
                list = [0,1,0]
            elif (list[1] == 1):
                list = [1,0,0]
        elif i == "B":
            if (list[1] == 1):
                list = [0,0,1]
            elif (list[2] == 1):
                list = [0,1,0]
        else:
            if (list[2] == 1):
                list = [1,0,0]
            elif (list[0] == 1):
                list = [0,0,1]
    if list == [1,0,0]:
        print(1)
    elif list == [0,1,0]:
        print(2)
    else:
        print(3)
main()
