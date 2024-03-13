import random

File_conforto = 'frasi_conforto.txt'
File_gratitudine = 'frasi_gratitudine.txt'

def restituisci_frase(risposta):
    nome_file = ''
    if(risposta == 'Bene'):
        nome_file = File_gratitudine
    elif(risposta == 'Male'):
        nome_file = File_conforto
    
    file = open(nome_file, 'r')
    content = file.readlines() 
    indice_random = random.randint(0, len(content) - 1)
    line = content[indice_random]
    
    return line
    
    
    