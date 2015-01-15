import threading
import time

x = 0
nombre = "CARLOS"
y = 1

def Letras():
    global x
    global nombre
    if not x == len(nombre):
        print (nombre[x])
        x += 1
        n = threading.Thread(name='Numeeros', target=Numeros)
        n.start()
   
def Numeros():
    global y
    print (y)
    y += 1
    print (y)
    y += 1
    l = threading.Thread(name='Letras', target=Letras)
    l.start()





l = threading.Thread(name='Letras', target=Letras)
n = threading.Thread(name='Numeros', target=Numeros)

