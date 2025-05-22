#Función que genere los primeros N términos de la serie de Fibonacci inversa, es decir,
#  mostrar la secuencia en orden descendente.


def fibonacci_inverso(n):
    a = 0
    b = 1
    serie = []
    for i in range(n):
        
        serie.append(a)
        a, b = b, a + b

    for num in reversed(serie):
        print(num, end=" ")
        a, b = b, a + b  # intercambio: el nuevo "a" es el anterior "b", el nuevo "b" es a+b

