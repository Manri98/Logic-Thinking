anch=30
anch2= anch-2
gf= anch-1
gp= 1
for i in range(anch):
    for d in range(gf):
        print(" ", end="")
    for p in range(i):
        print(d, end="")
        print(" ", end="")
    print("")
    gf = gf-1


anchu=8
spaces=anchu+2
for i in range(10):
    global spaces
    for h in range(spaces):
        print("_", end="")
    spaces = spaces-1
    for p in range(i):
        print(p+1, end="")
    for g in range(i):
        print(i, end="")
    print(" ")
print(spaces)
