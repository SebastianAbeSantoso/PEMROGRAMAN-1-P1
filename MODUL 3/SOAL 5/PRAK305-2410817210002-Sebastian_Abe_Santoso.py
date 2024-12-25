s = input(); s = int(s)
m = (s % 3600) // 60; h = (s % 86400) // 3600; d = s // 86400; detik = s % 60; d = int(d)
if d < 1: print(f"{h:02}:{m:02}:{detik:02}")
else: print(f"{d} hari {h:02}:{m:02}:{detik:02}")