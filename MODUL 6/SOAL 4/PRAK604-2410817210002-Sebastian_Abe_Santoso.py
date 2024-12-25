bintang = 0; tagar = 0
kode = input()
pesan = input()
if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()
result = []
for i in range(len(kode)):
    if kode[i] == ' ' and pesan[i] == ' ':
        result.append('')
    elif kode[i] == pesan[i]:
        result.append('*')  
        bintang += 1
    else:
        result.append('#')  
        tagar += 1
print("".join(result))  
print("* =", bintang)
print("# =", tagar)
if bintang >= tagar:
    print("Pesan Asli")
else:
    print("Pesan Palsu")