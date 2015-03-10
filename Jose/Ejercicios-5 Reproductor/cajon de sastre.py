from tkinter import *
import os
import random

ventana = Tk()

def uno():
    open('Chris_Isaak_Baby_did_a_bad_bad_thing.mp3')
def dos():
    open('Chuck_Berry_You_Never_Can_Tell.mp3')
def tres():
    open('Jet_Get_What_You_Need.mp3')
def cuatro():
    open('Kula_shaker-fool_that_i_am.mp3')
def cinco():
    open('Neil_Young_After_the_Gold_Rush_07_Don\'t_Let_t_Bring_You_Down.mp3')
def seis():
    open('Nick_Drake_Pink_Moon.mp3')
def siete():
    open('Rolling_Stones_Don\'t_Stop.mp3')
def ocho():
    open('Simon_&_Garfunkel_Mrs_Robinson.mp3')
def nueve():
    open('Stealers_Wheel_Stuck_In_The_Middle_With_You.mp3')
def diez():
    open("The_Blasters_Dark_Night.mp3")
    
def crearaleatorio():
    rand = random.randit(1, 10)
    if rand == 1:
        uno()
    if rand == 2:
        dos()
    if rand == 3:
        tres()
    if rand == 4:
        cuatro()
    if rand == 5:
        cinco()
    if rand == 6:
        seis()
    if rand == 7:
        siete()
    if rand == 8:
        ocho()
    if rand == 9:
        nueve()
    if rand == 10:
        diez()
    


anti = PhotoImage(file="ant.png")
sigi = PhotoImage(file="sig.png")
buci = PhotoImage(file="buc.png")
ali = PhotoImage(file="al.png")
favi = PhotoImage(file="fav.png")
playi = PhotoImage(file="play.png")

ant = Button(ventana, image=anti, text="command=antc", width=64, height=64)
sig = Button(ventana, image=sigi, text="command=sigc", width=64, height=64)
buc = Button(ventana, image=buci, text="command=bucc", width=64, height=64)
al = Button(ventana, image=ali, text="command=alc", width=64, height=64)
fav = Button(ventana, image=favi, text="command=favc", width=64, height=64)
play = Button(ventana, image=playi, command=uno, width=64, height=64)

ant.grid(row=0, column=0)
buc.grid(row=0, column=1)
al.grid(row=0, column=2)
sig.grid(row=0, column=3)
fav.grid(row=2, column=1)
play.grid(row=2, column=2)


crearaleatorio()

#def antc
#def sigc
#def bucc
#def alc
#def favc

