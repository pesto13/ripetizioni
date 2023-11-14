file = open('esercizi/es1.txt', 'r')

l = file.readlines()

x = 0
for parola in l:
    x = x + 1
    print("Parola",x,":", parola)


file.close()