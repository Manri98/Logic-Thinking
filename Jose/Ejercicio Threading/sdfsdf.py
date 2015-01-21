import threading
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

