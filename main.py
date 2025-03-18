def algorithm1(n):
    for i in range(1, n+1):
        print(f"{6*i + 1} {6*i - 1} {36*i*i - 1}")

def main ():
    n = int(input())
    algorithm1(n)

main()