import math 

def floor(a,b):
    # return a//b
    return math.floor(a/b)

def ceil(a,b):
    if(a%b==0):
        return a//b
    return (a//b)+1
    # return math.ceil(a/b)


if __name__ == "__main__":
    a = int(input("Enter a number: "))
    b = int(input("Enter another number: "))

    print(f"Floor is {floor(a,b)} and Ceil is {ceil(a,b)}")