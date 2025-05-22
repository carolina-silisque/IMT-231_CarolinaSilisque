from Funciones import suma_divisores, contar_primos

while True:
    print("--------   MENU DE OPCIONES   -------")
    print("1. Calcular la suma de todos los divisores de un número N (excluyendo el propio número).")
    print("2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.")
    print("3. Mostrar los primeros N números primos.")
    print("4. Generar la secuencia de los primeros N términos de la serie de Fibonacc inversa.")
    print("5. Salir del programa.")
    print("Seleccione una opcion: \n")

    opcion = int(input("Ingrese la opción de Menu "))
    

    if opcion == 1:
       num = int(input("Ingrese un número: "))
       suma_divisores(num)
       

    elif opcion == 2:
        filas= int(input('ingrese el numero de filas(altura) que tendra la piramide: \n'))
        # piramide_asteriscos(filas)

    elif opcion == 3:
        N = int(input("ingrese un numero para saber los primeros N numeros primos: \n"))  
        contar_primos(N)

    elif opcion == 4:
        num = int(input("¿Cuántos términos de Fibonacci querés ver? "))
    #    contar_primos(num)

                                
    elif opcion == 5 :
        print("Gracias por usar el programa, Hasta luego!")
        break
    else:
        print("Opcion no valida. Intente nuevamente.\n")


