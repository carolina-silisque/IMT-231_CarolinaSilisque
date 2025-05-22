# Opción 1:
# Función que reciba un número entero positivo N
# y calcule la suma de todos sus divisores propios (números 
# menores que N que lo dividen exactamente).
def suma_divisores(n):

    suma = 0
    for i in range(1, n):
        if n %  i == 0:
            suma += i
        
    print(f"la suma de los divisores propios es: {suma}\n")