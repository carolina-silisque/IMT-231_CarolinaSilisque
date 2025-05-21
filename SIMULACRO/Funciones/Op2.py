#Función que recibe un número N y muestra una pirámide 
# de asteriscos centrada de altura N.


def piramide_asteriscos(num):
    if num <= 0:
        print("La altura debe ser un número positivo.")
        return

    for i in range(1, num + 1):
        espacios = ' ' * (num - i)  # Espacios para centrar los asteriscos
        asteriscos = '*' * (2 * i - 1)  # Asteriscos en cada fila
        print(espacios + asteriscos)
    print("\n")   
