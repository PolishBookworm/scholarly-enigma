def main(a,b,c):
    for n in range(4):
        a_ = a % 3
        b_ = b % 3
        c_ = c % 3
        if (a_ + b_ + c_) % 3 != 0:
            return False
        a -= a_
        b -= b_
        c -= c_
        a /= 3
        b /= 3
        c /= 3
    return True

a = int(input())
b = int(input())
c = int(input())
