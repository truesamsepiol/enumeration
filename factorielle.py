def fac(n):
    if n == 0 or n == 1:
        return 1;
    return n*fac(n-1)

if __name__ == "__main__":
    for i in range(6):
        print(fac(i))
