def reverse(n):
    reversed = 0
    while n > 0:
        reversed = reversed * 10 + n % 10
        n //= 10
    return reversed
e = list(map(int, input().split()))
A, B = e[:2]
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))