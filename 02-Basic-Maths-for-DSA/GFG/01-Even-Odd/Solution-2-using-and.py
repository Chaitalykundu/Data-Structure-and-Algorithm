def evenOdd(n):
    if n&1:
        return False
    else:
        return True

    # Or
    # return n&1==0


if __name__ == "__main__":
    n = int(input("Enter a number: "))

    if evenOdd(n):
        print(n,"is Even")
    else:
        print(n,"is Odd")