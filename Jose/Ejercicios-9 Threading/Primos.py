"""import threading
import time

name = ['J', 'o', 's', 'e']
def nombre():
    for x in range(0, len(name)):
        print(name[x])
        time.sleep(0.2)

def numeros():
    for i in range(1, len(name)+len(name)+1):
        print(i)
        time.sleep(0.1)

def deletrea():
    print('Deletreame tu nombre')
    time.sleep(0.5)
    for o in range(0,100):
        name[o]=input(o)

nom = threading.Thread(name='nombre', target=nombre)
num = threading.Thread(name='worker', target=numeros)

deletrea()
nom.start()
num.start()
import threading
import time"""
import time
import threading

i=0

def impresion():
    global i
    for i in range(1, 101):
        print(i)
        time.sleep(0.1)

def comprobación(num):
    a=0
    for k in range(1, 101):
        if(n % k==0):
            a=a+1
    if(a!=2):
        pass
    else:
        print('p')


imprime = threading.Thread(name='imprime', target=impresion)
comprueba = threading.Thread(name='comprueba', target = comprobación, args=(i))

imprime.start()
comprueba.start()
