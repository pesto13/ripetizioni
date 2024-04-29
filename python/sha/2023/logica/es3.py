
n = int(input("Inserisci numero: "))

conta = 0

for i in range(2,n):
    if(n%i==0):
        conta = conta + 1


if(conta!=0):
    print("il numero non è primo")
else:
    print("è primo")
