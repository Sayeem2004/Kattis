def main():
    e = input()
    a, b, c, d = 0, 0, 0, 0
    for i in e:
        e2 = ord(i)
        if e2 == 95:
            a += 1
        elif e2 > 96 and e2 < 123:
            b += 1
        elif e2 > 64 and e2 < 91:
            c += 1
        else:
            d += 1
    a = a / len(e)
    b = b / len(e)
    c = c / len(e)
    d = d / len(e)
    print(str(a))
    print(str(b))
    print(str(c))
    print(str(d))
main()
