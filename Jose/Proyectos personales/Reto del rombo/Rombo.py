anch=100
anch2= anch-2
gf= anch-1
gp= 1
for i in range(anch):
    for d in range(gf):
        print(" ", end="")
    for p in range(i):
        print("+", end="")
        print(" ", end="")
    print("")
    gf = gf-1
for i in range(anch2, 0, -1):
    for d in range(gp):
        print(" ", end="")
    for p in range(i):
        print("+", end="")
        print(" ", end="")
    print("")
    gp = gp+1
