plain_text = input("Inserisci il testo in chiaro: ")
key = int(input("Inserisci la chiave"))
cipher_text = ''


for c in plain_text:
    if(c != ' '):
        if(c >='A' and c<='Z'):
            print(chr((ord(c)+key-65)%26+65))
        if(c >='a' and c<='z'):
            print(chr((ord(c)+key-97)%26+97))
    else: 
        print(' ')
