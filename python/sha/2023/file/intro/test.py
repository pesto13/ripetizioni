file = open('libri2.txt', 'r+')
testo = file.readlines()
print("Riga",2,":",testo[1])
file.close()