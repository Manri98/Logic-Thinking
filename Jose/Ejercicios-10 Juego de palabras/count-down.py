from tkinter import *
import time
import random

acierto = 0
numal = 0

palabras = [
    'agua','hola','casa','silla','teclado',
    'lápiz','ratón','sillón','origen','murciélago',
    'pájarito','arcilla','horrible','sufrible','reproductor',
    'fichas','alucinaciones','halógenos','centrifugar','plausible',
    'ambiguedades','seguridad','localización','fresadora','magullado',
    'zancadilla','enciclopedias','aguarrás','aborígenes','esternocleidomastoideo']

# FUNCIONES
def reloj():
    nsec = 30
    for x in range(nsec, -1, -1):
        time.sleep(1)
        minutes, seconds_rem = divmod(x, 60)
        cuenta.config(text="%02d:%02d" % (minutes, seconds_rem))
        cuenta.update_idletasks()

def nueva_palabra():
    global numal
    numal = random.choice(range(len(palabras)))
    palabra.config(text=palabras[numal])
    palabra.pack()
    reloj()

def validar():
    submit = v.get()
    objetivo = palabras[numal]
    if submit == objetivo:
        nueva_palabra()
    else:
        notif.config(text="Has fallado, repite")


# DECLARACIÓN DE LA VENTANA Y LOS CONTROLES
ventana = Tk()

#Notificaciones
notif = Label(ventana, text="")
notif.pack()

#Palabra a escribir
palabra = Label(ventana, text="")
palabra.pack()

#Caja de texto
v = StringVar()
e = Entry(ventana, textvariable=v)
e.pack()

#Validación 
siguiente = Button(ventana, text="Validar", command=validar)
siguiente.pack()

#Cuenta atrás
cuenta = Label(ventana, text="")
cuenta.pack()

nueva_palabra()

ventana.mainloop()



#v.set("a default value")
#s = v.get()











