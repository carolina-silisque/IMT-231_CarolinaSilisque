# función que recibe un número entero positivo e indica si es un palíndromo (capicúa).
# Debe validarse que el número ingresado sea mayor a 0.
def pedir_numero_positivo(mensaje):
    num = -1
    while num <= 0:
        num = int(input(mensaje))
        if num <= 0:
            print(" Debe ingresar un número mayor a 0.")
    return num

def es_palindromo(num):
    
    num_str = str(num)
    izq = 0
    der = len(num_str)-1  #len cuenta la cantidad de numeros

    for i in range (0, len(num_str)):
        if num_str[izq] == num_str[der]:
            izq += 1
            der -= 1
        else:
            print(f"El número {num} no es palindromo\n")
            return
    print(f"El número {num} es palíndromo\n")


