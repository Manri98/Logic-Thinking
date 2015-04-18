import time
nombre = input("Introduzca su nombre: ")
time.sleep(1)
contador = 0
for contador in range(1, len(nombre)):
    print(nombre[:contador])
for contador in range(len(nombre), 0, -1):
    print(nombre[:contador])
