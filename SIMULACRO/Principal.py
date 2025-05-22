from Funciones import num_entre_3, piramide_asteriscos, serie_alternada
from Funciones import contar_primos,es_palindromo,pedir_numero_positivo


while True:
    print("--------   MENU DE OPCIONES   -------")
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
        filas= int(input('ingrese el numero de filas(altura) que tendra la piramide\n'))
        piramide_asteriscos(filas)

    elif opcion == 3:
        num = int (input('ingrese un numero '))
        serie_alternada(num)

    elif opcion == 4:
       num = int(input("Ingrese un número: "))
       contar_primos(num)

    elif opcion == 5:
        num = pedir_numero_positivo("Ingrese un número positivo: ")
        es_palindromo(num)
                                
    elif opcion == 6 :
        print("Gracias por usar el programa, Hasta luego!")
        break
    else:
        print("Opcion no valida. Intente nuevamente.\n")

