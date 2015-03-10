#Les asignamos un valor para que no de error la declaración de funciones
nombre = "tres"
contraseña = "ocho"
#Declaramos las variables
def validarnombre():
    global nombre #Esto evita un error cuando intentamos modificar una variable. dentro de la función
    while len(nombre)>12 or len(nombre)<6 or nombre.isalnum()==False:
        nombre = input("Introduce tu nombre de ususario: ")
        if len(nombre)>12:
            print("Recuerda que no puede medir más de 12 caracteres")
        if len(nombre)<6:
            print("Recuerda que no puede medir menos de 6 caracteres")
        if nombre.isalnum()==False:
            print("Recuerda que el nombre no debe contener caracteres no alfanuméricos")
    return True
def validarcontraseña():
    global contraseña #Esto evita un error cuando intentamos modificar una variable dentro de la función
    while len(contraseña)<8 or contraseña.isalnum()==True or contraseña.islower()==True or contraseña.isupper()==True:
        contraseña = input("Introduce tu contraseña: ")
        if len(contraseña)<8:
            print("Recuerda que debe ser un nombre igual o más largo que 8 caracteres")
        if contraseña.isupper()==True:
            print("Recuerda que también tienes que escribir en minúsculas")
        if contraseña.islower()==True:
            print("Recuerda que también tienes que escribir en mayúsculas")
        if contraseña.isalnum()==True:
            print("Recuerda que también debe contener al menos un caracter no alfanumérico")
        if chr(32) in contraseña:
            print("Recuerda que los espacios no están permitidos")
    return True
#Le pedimos al usuario que introduzca los datos
while validarnombre()!=True:
    validarnombre()
print("El usuario está bien escrito")
while validarcontraseña()!=True:
    validarcontraseña()
print("La contraseña es completamente segura")
