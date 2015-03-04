Gr = 0.0000000663
def calculofuerza(Gr, m1, m2, d):
    global result
    num = Gr*m1*m2
    den = d**2
    result = num/den
def conversion(result):
    global final
    final = result*100000
m1 = int(input("¿Cuanto pesa el primer cuerpo?"))
m2 = int(input("¿Cuanto pesa el segundo cuerpo?"))
d = int(input("¿Cuánta distancia hay entre ellos?"))
calculofuerza(Gr, m1, m2, d)
conversion(result)
print("La fuerza de atracción entre el cuerpo 1(", m1, ") y el cuerpo 2(", m2, ") es de ", final, " dinas", sep="")
