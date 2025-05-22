#Función que 
#reciba un entero N y muestre los primeros N números primos, uno por línea.
def contar_primos(N):

    def es_primo(num):
            if num < 2:
                return False
            for i in range(2, int(num**0.5) + 1):
                if num % i == 0:
                    return False
            return True
    print (f"estos son los primeros numeros primos")    
    for i in range(1, N + 1):
        
        if es_primo(i):
            print(f"{i}")




