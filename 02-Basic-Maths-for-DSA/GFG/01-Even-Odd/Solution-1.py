def evenOdd(n):
    if n%2 == 0:
        return True
    else:
        return False

if __name__ == "__main__":
    n = int(input("Enter a number: "))

    if evenOdd(n):
        print(n,"is Even")
    else:
        print(n,"is Odd")
