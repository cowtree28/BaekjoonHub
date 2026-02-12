import math

a,b = map(int, input().split())
c,d = map(int, input().split())

deno = math.lcm(b,d)
mole = (deno // b) * a + (deno // d) * c
deno, mole = map(lambda x: x // math.gcd(deno, mole), (deno, mole))
print(mole, deno)