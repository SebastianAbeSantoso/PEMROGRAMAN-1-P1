a = []
while len(a) != 2:
    b = input()
    a.extend(b.split())
kelipatan, character = a[:2]
kelipatan = int(kelipatan)
awal = 1
while awal != 51:
    if awal % kelipatan != 0:
        print(awal, end = ' ')
        awal += 1
    else:
        print(character, end = ' ')
        awal += 1