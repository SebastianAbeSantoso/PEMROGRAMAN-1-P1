def MaxBilangan(a, b, c, d):
    if a > b and a > c and a > d:
        return a
    elif b > a and b > c and b > d:
        return b
    elif c > a and c > b and c > d:
        return c
    elif d > a and d > b and d > c:
        return d
a = None; b = None; c = None; d = None; e = []
e = list(map(int, input().split()))
a, b, c, d = e[:4]
print(MaxBilangan(a, b, c, d))