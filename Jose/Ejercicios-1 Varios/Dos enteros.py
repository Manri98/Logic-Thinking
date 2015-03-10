entero1 = input("Dime el primer número: ")
entero2 = input("Dime el segundo número: ")

while entero2 <= entero1:
    print("Ese no me sirve")
    entero2 = input("Introduce uno nuevo: ")

print("Sus números son: ", entero1, "y ", entero2)
sn = input("¿Quiere cambiarlos?: ")
if sn == "y":
    entero1 = input("Dime el primer número: ")
    entero2 = input("Dime el segundo número: ")
    while entero2 <= entero1:
        print("Ese no me sirve")
        entero2 = input("Introduce uno nuevo: ")
    print("Sus números son: ", entero1, "y ", entero2)
elif sn == "n":
    print("Venga hasta luego!")
