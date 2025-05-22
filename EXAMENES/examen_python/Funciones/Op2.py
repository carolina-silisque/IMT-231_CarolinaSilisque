#Función que reciba un entero N e imprima un triángulo formado 
#por letras del alfabeto.
#Ejemplo para N = 4:

def triangulo_abecedario(num):
    if num <= 0:
            print("La altura debe ser un número positivo.")
            
    abecedario = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for i in range(1, num + 1):
            linea = ""
            for j in range(i):
                linea += abecedario 
            print(linea)

    print("\n")  
            