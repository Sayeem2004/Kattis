def main():
    n = int(input())
    for i in range(0,n):
        list = input().split()
        count = float(list[0])
        sec = float(list[1])
        bpm = 60 * count / sec
        difference = bpm / count
        apbm1 = bpm - difference
        apbm2 = bpm + difference
        print(apbm1,bpm,apbm2)
main() 
