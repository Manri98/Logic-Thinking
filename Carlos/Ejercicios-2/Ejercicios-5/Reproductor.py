from tkinter import *
import os
import random

global indice

#CODIGO DEL BOTON REWIND
def Atras():
    global indice
    if (indice == 0):
        indice = len(tabla)
        os.open(tabla[indice])       
    else:
        indice = indice-1
        os.open(tabla[indice])
    return

#CODIGO DEL BOTON PLAY
def play():
    global indice
    indice = 0
    os.open(tabla[indice],777)



#CODIGO DEL BOTON RANDOM
def Aleatorio():
    global indice
    indice = random.randint(0,9)
    os.open(tabla[indice])
    return


#CODIGO DEL BOTON FORWARD
def Adelante():
    global indice
    if (indice == len(tabla)):
        indice = 0
        os.open(tabla[indice])       
    else:
        indice = indice+1
        os.open(tabla[indice])
    return    

ventana = Tk()

#TABLA DE CANCIONES
tabla = ["The Blasters - Dark Night  (From Dusk Till Dawn).mp3",
         "Stealers Wheel - Stuck In The Middle With You (Reservoir Dogs).mp3",
         "Simon & Garfunkel - Mrs Robinson.mp3",
         "Rolling Stones - Don\'t Stop.mp3",
         "Nick Drake - Pink Moon.mp3",
         "Neil Young - After the Gold Rush - 07 - Don\'t Let It Bring You Down.mp3",
         "Kula_shaker-fool_that_i_am.mp3",
         "Jet - Get What You Need.mp3",
         "Chuck Berry - You Never Can Tell  (Pulp Fiction).mp3",
         "Chris Isaak - Baby did a bad bad thing.mp3"]        


#LABEL DE BIENVENIDA
w = Label(ventana, text="BIENVENIDO AL REPRODUCTOR DE MANRIQUE")
w.grid(row=0, column=0, columnspan=4)

#ATRAS, BUCLE, ALEATORIO Y ADELANTE

bg1=PhotoImage(file="atras.png")
bt1 = Button(ventana, image=bg1, text="Verificar", command=Atras, width=64, height=64)
bt1.grid(row=1, column=0)

bg2=PhotoImage(file="bucle.png")
bt2 = Button(ventana, image=bg2, text="Verificar", width=64, height=64)
bt2.grid(row=1, column=1)

bg3=PhotoImage(file="aleatorio.png")
bt3 = Button(ventana, image=bg3, text="Verificar", command=Aleatorio, width=64, height=64)
bt3.grid(row=1, column=2)

bg4=PhotoImage(file="adelante.png")
bt4 = Button(ventana, image=bg4, text="Verificar", command=Adelante, width=64, height=64)
bt4.grid(row=1, column=3)


#FAVORITOS Y PLAY
bg4 = PhotoImage(file="fav.png")

cm = Button(ventana, image=bg4, text="fav", width=64, height=64)
cm.grid(row=4, column=1)

bg5 = PhotoImage(file="play.png")

cm = Button(ventana, image=bg5, text="start", command=play, width=64, height=64)
cm.grid(row=4, column=2)

#EMOCIONES
variable1 = IntVar()
variable2 = IntVar()
variable3 = IntVar()
variable4 = IntVar()

check = Checkbutton(ventana, text="Alegre     ", var=variable1)
check.grid(row=3, column=0)
check = Checkbutton(ventana, text="Triste     ", var=variable2)
check.grid(row=3, column=1)
check = Checkbutton(ventana, text="Meditación ", var=variable3)
check.grid(row=3, column=2)
check = Checkbutton(ventana, text="No pensar  ", var=variable4)
check.grid(row=3, column=3)


ventana.mainloop()

