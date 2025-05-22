#Función que reciba un entero N e imprima un triángulo formado 
#por letras del alfabeto.
#Ejemplo para N = 4:

# def triangulo_alfabeto(num):
num = int(input("ingrese un numero "))
if num <= 0:
    print("La altura debe ser un número positivo.")
    

letras = str.ascii_uppercase 
for i in range(1, num + 1):
       
    print(" ".join(letras[:i]))
print("\n")  


    
    