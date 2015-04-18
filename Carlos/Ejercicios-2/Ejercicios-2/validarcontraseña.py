def validarcontraseña(contraseña):
    while chr(32) in contraseña or len(contraseña)<8 or contraseña.isalnum()==True or contraseña.islower()==True or contraseña.isupper()==True or contraseña.isdigit()==True:
        if chr(32) in contraseña:
            print("No puede haber espacios en la contraseña. ")
        if len(contraseña)<8:
            print("La contraseña debe contener un mínimo de 8 caracteres. ")
        if contraseña.isalnum()==True:
            print("La contraseña debe contener al menos un caracter no alfanumérico. ")
        if contraseña.islower()==True:
            print("La contraseña debe contener al menos una mayúscula. ")
        if contraseña.isupper()==True:
            print("La contraseña debe contener al menos una minúscula. ")
        if contraseña.isdigit()==True:
            print("La contraseña debe contener letras. ")
            print("La contraseña es segura")
        contraseña = input("Introduzca una nueva contraseña: ")
    print("La contraseña es segura. ")
    return True
