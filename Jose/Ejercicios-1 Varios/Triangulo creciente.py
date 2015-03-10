import time
print("Deletrea tu nombre")
nombre = input("Escribe tu nombre: ")
cant = len(nombre)
timer = 0
while timer < cant:
    print(nombre[timer])
    timer += 1
    time.sleep(0.5)
