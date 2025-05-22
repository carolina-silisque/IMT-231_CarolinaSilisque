# función que genera e imprime los primeros N términos de la serie alternada:
# 1, -2, 3, -4, 5, -6, ...
# Los valores deben imprimirse en una sola línea, separados por coma.

def serie_alternada (num):

    lista_en_serie=[] #para que se imprima en una sola linea
    for i in range(1, num+1):
        if i % 2 == 0:
            lista_en_serie.append(f"-{i}")
        else:
            lista_en_serie.append(f'{i}')
    print("esta es la serie alternada de los primeros N terminos")  
    print(", ".join(lista_en_serie))
    print("\n")