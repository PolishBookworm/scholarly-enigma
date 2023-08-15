def main(a,b):
    c = []
    for n in range(4):
        a_ = a % 3
        b_ = b % 3
        c.append((3-(a_+b_))%3)
        a -= a_
        b -= b_
        a /= 3
        b /= 3
    return c

a = int(input())
b = int(input())
c_ = main(a,b)
c = 0
pow3 = 1
for tul in c_:
    c += tul * pow3
    pow3 *= 3
print(int(c)
