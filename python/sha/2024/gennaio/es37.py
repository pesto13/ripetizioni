import random

def scrivisufile(nomefile, parola, aggiungi= False): 
    if aggiungi:
        file=open(nomefile, "a") 
    else: 
        file=open(nomefile, "w") 
        
    file.write(parola)
    file.close()

base_string = input("inserisci parola di base: ")
ls = list(base_string)
file=open(base_string+'_anagrammi.txt', "w")
file.close()

for i in range(10):
    random.shuffle(ls)
    result = ''.join(ls)
    print(result)
    
    answer = input("Questa è una parola di senso compiuto? ")
    if(answer == 'SI'):
        print("ci sono")
        scrivisufile(base_string+'_anagrammi.txt', result, True)
        

