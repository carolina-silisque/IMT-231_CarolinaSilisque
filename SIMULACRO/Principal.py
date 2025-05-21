from Funciones import num_entre_3

print("--------   MENU DE OPCIONES   -------")

while True:
    
    print("1. Contar cuántos números entre 1 y N son divisibles por 3 **o** terminan en 3.")
    print("2. Imprimir una pirámide de asteriscos de altura N.")
    print("3. Dado un número N, mostrar la secuencia de los primeros N términos de la serie: 1, -2, 3, -4, 5, -6, ...")
    print("4. Mostrar la cantidad de números primos entre 1 y N.")
    print("5. Verificar si un número es palíndromo (número capicúa).")
    print("6. Salir del programa.")
    print("Seleccione una opcion\n")


    opcion = int(input("Ingrese la opción de Menu "))
    

    if opcion == 1:
       num = int(input("Ingrese un número: "))
       num_entre_3(num)
       

    elif opcion == 2:
        n1 = int(input("Ingrese un número: "))

    elif opcion == 3:
        n1 = int(input("Ingrese un número: "))
    elif opcion == 4:
       n1 = int(input("Ingrese un número: "))
    elif opcion == 5:
        n1 = int(input("Ingrese un número: "))

    elif opcion == 6 :
        print("Gracias por usar el programa, Hasta luego!")
        break
    else:
        print("Opcion no valida. Intente nuevamente.")

