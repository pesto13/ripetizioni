import es3

L = []

L = es3.genera_lista_random(100, 0, 100)
x = int(input("inserisci un numero: "))

print([y for y in L if y > x])