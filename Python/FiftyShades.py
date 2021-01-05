def main():
    n = int(input())
    count = 0
    for i in range(0,n):
        a = input().lower()
        if "rose" in a or "pink" in a:
            count += 1
    if count == 0:
        print("I must watch Star Wars with my daughter")
    else:
        print(count)
main()
