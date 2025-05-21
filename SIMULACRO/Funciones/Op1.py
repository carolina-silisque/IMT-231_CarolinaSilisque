#Contar cuántos números entre 1 y N son divisibles por 3 **o** terminan
#en 3.

def num_entre_3 (n):
    if n < 1:
        print("Debe ser mayor o igual a 1.")
        return

    contador = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or str(i).endswith('3'):
            contador += 1

    
    print(f"Hay {contador} números entre 1 y {n} que son divisibles por 3 o terminan en 3.\n")
