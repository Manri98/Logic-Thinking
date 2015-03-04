Gr = 0.0000000663

def calculofuerza(Gr, m1, m2, d):
    global result
    num = Gr*m1*m2
    den = d**2
    result = num/den

def conversion(result):
    global final
    final = result*100000

print("¿Cuanto pesa el primer cuerpo?")
m1 = int(input())
print("¿Cuanto pesa el segundo cuerpo?")
m2 = int(input())
print("¿Cuánta distancia hay entre ellos?")
d = int(input())

calculofuerza(Gr, m1, m2, d)
print("La fuerza de atracción entre el cuerpo 1(", m1, ") y el cuerpo 2(", m2, ") es de ", result, " newtons", sep="")

#print("¿Quieres convertirlo a dinas?")
accept = input("¿Quieres convertirlo a dinas?")

if accept == "y":
      conversion(result)
      print("La fuerza de atracción entre el cuerpo 1(", m1, ") y el cuerpo 2(", m2, ") es de ", final, " dinas", sep="")
else:
      pass
