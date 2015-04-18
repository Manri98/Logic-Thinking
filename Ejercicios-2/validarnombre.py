def validarnombre(nombre):
    while len(nombre)>12 or len(nombre)<6 or nombre.isalnum()==False:
        if len(nombre)>12 or len(nombre)<6:
            print("El usuario debe tener un mínimo de 6 caracteres y un máximo de 12.")
        if nombre.isalnum()==False:
            print("El nombre de usuario solo puede contener letras y números")
        nombre = input("Introduzca un nuevo nombre de usuario: ")
    print("Usuario válido")
    return True
    
