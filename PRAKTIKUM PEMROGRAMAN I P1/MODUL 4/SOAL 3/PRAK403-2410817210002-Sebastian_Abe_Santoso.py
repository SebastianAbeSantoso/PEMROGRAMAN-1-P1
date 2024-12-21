a = []
while len(a) != 2:
    b = input()
    a.extend(b.split())
init1, init2 = a[:2]
init1 = int(init1); init2 = int(init2)
no1 = init1; no2 = init2
step = -1 if init1 > init2 else 1
while no1 != init2 and no2 != init1:
    print(no1, no2,"-",end =' ')
    no1 += step; 
    no2 -= step; 
print(no1, no2)