
File_conforto = 'frasi_conforto.txt'
File_gratitudine = 'frasi_gratitudine.txt'

def restituisci_frase(risposta):
    nome_file = ''
    if(risposta == 'Bene'):
        nome_file = File_gratitudine
    else:
        nome_file = File_conforto
    
    file = open(nome_file, 'r')
    content = file.readlines() 
    
    
    line = content[2]
    
    return line
    
    
    