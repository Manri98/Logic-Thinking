from tkinter import *
import time

global indice0 
global indice1 
global dificultad
global aciertos
aciertos = 0
indice0 = 0
indice1 = 0
dificultad = 15

palabra = [
    ['hola','comida','sartén','frigorífico'],
    ['gato','perro','saltar','nevera'],
    ['mesa','patata','jugaremos','paraguas'],
    ['casa','escribir','teclado','guitarra'],   
    ['cosa','leche','álgebra','pingüino'],
    ['pez','reloj','historia','estrafalario']
    ]


# FUNCIONES
def reloj():    
    for x in range(dificultad, -1, -1):
        time.sleep(1)
        minutes, seconds_rem = divmod(x, 60)
        w.config(text="%02d:%02d" % (minutes, seconds_rem))
        w.update_idletasks()
        v = StringVar()
    if indice0 == len(palabra):
        indice0 = 0
    elif: indice0 = indice0 + 1
    

def nueva_palabra():
    if aciertos == 3:
        dificultad = 12
        indice1 = indice1 + 1 
    if aciertos == 6:
        dificultad = 9
        indice1 = indice1 + 1 
    if aciertos == 9:
        dificultad = 6
        indice1 = indice1 + 1 
    w.config(text=palabra[indice0][indice1])
    reloj()

def Comprobacion():
    if e.cget("text") == palabra[indice0][indice1]:
        aciertos += aciertos

        


# DECLARACIÓN DE LA VENTANA Y LOS CONTROLES
ventana = Tk()

p = Label(ventana, text=palabra[indice0][indice1])
p.pack()

w = Label(ventana, text="")
w.pack()

v = StringVar()
e = Entry(ventana, textvariable=v)
e.pack()

b = Button(ventana, text="Nueva", command=nueva_palabra)
b.pack()

c = Button(ventana, text="Comprobar", command=Comprobacion)
c.pack()

ventana.mainloop()

