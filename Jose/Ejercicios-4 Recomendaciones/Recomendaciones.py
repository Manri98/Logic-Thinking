from tkinter import *
def verificar():
        r1 = 0
        r2 = 0
        r3 = 0
        r4 = 0
        r5 = 0
        r6 = 0
        r7 = 0
        import webbrowser
        if v1.get():
                r1 = 20
        if v2.get():
                r2 = 30
        if v4.get():
                r3 = 10
        if v5.get():
                r4 = -40
        if v5.get():
                r5 = -10
        if v6.get():
                r6 = +10
        if v7.get():
                r7 = -10
        res = r1+r2+r3+r4+r5+r6+r7
        if res >= 50:
                webbrowser.open("http://www.youtube.com/watch?v=QH2-TGUlwu4")
        if res >= 20 and res < 50:
                webbrowser.open("http://www.youtube.com/watch?v=odf1sSPdZ1c")
        if res >= 0 and res < 20:
                webbrowser.open("http://www.youtube.com/watch?v=rJNInqZG2XI")
        if res < 0 and res >= -20:
                webbrowser.open(" http://www.youtube.com/watch?v=6zapgcgtdzw")
        if res < -20 and res >= -40:
                webbrowser.open("http://www.youtube.com/kffacxfA7G4?t=44s")
        if res < -40 and res >= -60:
                webbrowser.open("http://www.youtube.com/watch?v=dQw4w9WgXcQ")
        print(res)
  

ventana = Tk()
v1 = IntVar()
v2 = IntVar()
v3 = IntVar()
v4 = IntVar()
v5 = IntVar()
v6 = IntVar()
v7 = IntVar()

bg = PhotoImage(file="play.png")
ci1 = PhotoImage(file="descojonandose.png")
ci2 = PhotoImage(file="enamorado.png")
ci3 = PhotoImage(file="feliz.png")
ci4 = PhotoImage(file="llorando.png")
ci5 = PhotoImage(file="muriendose.png")
ci6 = PhotoImage(file="sorprendido.png")
ci7 = PhotoImage(file="triste.png")

ch1 = Checkbutton(ventana, image=ci1, var=v1)
ch2 = Checkbutton(ventana, image=ci2, var=v2)
ch3 = Checkbutton(ventana, image=ci3, var=v3)
ch4 = Checkbutton(ventana, image=ci4, var=v4)
ch5 = Checkbutton(ventana, image=ci5, var=v5)
ch6 = Checkbutton(ventana, image=ci6, var=v6)
ch7 = Checkbutton(ventana, image=ci7, var=v7)
cm = Button(ventana, image=bg, text="Verificar", command=verificar, width=32, height=32)

ch1.grid(row=0, column=0)
ch2.grid(row=1, column=0)
ch3.grid(row=2, column=0)
ch4.grid(row=3, column=0)
ch5.grid(row=4, column=0)
ch6.grid(row=5, column=0)
ch7.grid(row=6, column=0)
cm.grid(row=3, column=1)

ventana.mainloop()
