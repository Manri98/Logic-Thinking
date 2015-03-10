from tkinter import *
import os
import random
i_cancion = 0
ventana = Tk()
tabla = ["The_Blasters_Dark_Night.mp3",
         "Stealers_Wheel_Stuck_In_The_Middle_With_You.mp3",
         "Simon_&_Garfunkel_Mrs_Robinson.mp3",
         "Rolling_Stones_Don\'t_Stop.mp3",
         "Nick_Drake_Pink_Moon.mp3",
         "Neil_Young_After_the_Gold_Rush_07_Don\'t_Let_t_Bring_You_Down.mp3",
         "Kula_shaker-fool_that_i_am.mp3",
         "Jet_Get_What_You_Need.mp3",
         "Chuck_Berry_You_Never_Can_Tell.mp3",
         "Chris_Isaak_Baby_did_a_bad_bad_thing.mp3"]

#tabla = ["The_Blasters_Dark_Night.mp3",
#         "Stealers_Wheel_Stuck_In_The_Middle_With_You.mp3",
#         "Simon_&_Garfunkel_Mrs_Robinson.mp3",
#         "Rolling_Stones_Don\'t_Stop.mp3",
#         "Nick_Drake_Pink_Moon.mp3",
#         "Neil_Young_After_the_Gold_Rush_07_Don\'t_Let_t_Bring_You_Down.mp3",
#         "Kula_shaker-fool_that_i_am.mp3",
#         "Jet_Get_What_You_Need.mp3",
#         "Chuck_Berry_You_Never_Can_Tell.mp3",
#         "Chris_Isaak_Baby_did_a_bad_bad_thing.mp3"]

def play():
    os.startfile(tabla[i_cancion])
    
def atras():
    global i_cancion
    if i_cancion == 0:
        i_cancion = len(tabla)-1
    else:
        i_cancion -= 1
    play()
    
def aleatorio():
    global i_cancion
    i_cancion = random.randint(0, 9)
    play()
    
def siguiente():
    global i_cancion
    if i_cancion >= len(tabla):
        i_cancion = 0
    else:
        i_cancion += 1
    play()

w = Label(ventana, text="BIENVENIDO AL REPRODUCTOR DE JOSE")
w.grid(row=0, column=0, columnspan=4)

bg1=PhotoImage(file="img/ant.png")
bt1 = Button(ventana, image=bg1, command=atras, width=64, height=64)
bt1.grid(row=1, column=0)

bg2=PhotoImage(file="img/play.png")
bt2 = Button(ventana, image=bg2, command=play, width=64, height=64)
bt2.grid(row=1, column=1)

bg3=PhotoImage(file="img/al.png")
bt3 = Button(ventana, image=bg3, command=aleatorio, width=64, height=64)
bt3.grid(row=1, column=2)

bg4=PhotoImage(file="img/sig.png")
bt4 = Button(ventana, image=bg4, command=siguiente, width=64, height=64)
bt4.grid(row=1, column=3)

ventana.mainloop()
