from Operaciones import sumar, restar, multiplicar, dividir

print("----- CALCULADORA -----")

while True:
    print("\nOPERACIONES:")
    print("1. SUMA")
    print("2. RESTA")
    print("3. MULTIPLICACIÓN")
    print("4. DIVISIÓN")
    print("5. SALIR")

    try:
        opcion = int(input("Ingrese la opción de operación: "))
    except ValueError:
        print("Debe ingresar un número válido.")
        continue

    if opcion == 1:
        n1 = int(input("Ingrese el primer número: "))
        n2 = int(input("Ingrese el segundo número: "))
        resultado = sumar(n1, n2)
        print(f"La suma entre {n1} y {n2} es: {resultado}")

    if opcion == 2:
        n1 = int(input("Ingrese el primer número: "))
        n2 = int(input("Ingrese el segundo número: "))
        resultado = restar(n1, n2)
        print(f"La resta entre {n1} y {n2} es: {resultado}")

    if opcion == 3:
        n1 = int(input("Ingrese el primer número: "))
        n2 = int(input("Ingrese el segundo número: "))
        resultado = multiplicar(n1, n2)
        print(f"La multiplicación entre {n1} y {n2} es: {resultado}")

    if opcion == 4:
        n1 = int(input("Ingrese el primer número: "))
        n2 = int(input("Ingrese el segundo número: "))
        if n2 == 0:
            print("Error: No se puede dividir entre cero.")
        else:
            resultado = dividir(n1, n2)
            print(f"La división entre {n1} y {n2} es: {resultado}")

    if opcion == 5:
        print("Gracias por usar la calculadora.")
        break

    if(opcion >5 or opcion <1):
        print("Opcion no valida. Intente nuevamente.")