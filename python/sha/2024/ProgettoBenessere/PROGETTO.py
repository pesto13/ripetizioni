import tkinter as tk
import random
import tkinter.messagebox as mex

disegni= [
    """
     +------+
      |        |
     o        |
     /|\       |
     / \       |
               |
     ======
    """,

    """
     +------+
      |        |
     o        |
     /|\       |
               |
               |
     ======
    """,
    """
     +------+
      |        |
     o        |
      |        |
               |
               |
     ======
    """,
    """
     +------+
      |        |
     o        |
               |
               |
               |
     ======
    """,
        """
     +------+
      |        |
               |
               |
               |
               |
     ======
    """,
    """
     +------+
               |
               |
               |
               |
               |
     ======
    """,
]

file_conforto = 'frasi_conforto.txt'
file_gratitudine = 'frasi_gratitudine.txt'

def restituisci_frase(risposta):
    nome_file = ''
    if(risposta == 'Bene'):
        nome_file = file_gratitudine
    elif(risposta == 'Male'):
        nome_file = file_conforto  
    file = open(nome_file, 'r')
    contenuto= file.readlines()
    indice = random.randint(0, len(contenuto) - 1)
    line = contenuto[indice]
    line = line.replace('\n', '')
    return line

def rispondi(risposta, frase_text):    
    frase = restituisci_frase(risposta)
    label_giusta['text'] = frase
    label_nascosta['text'] = '*' * len(frase)

def azione1():
    file = open('stato.txt', 'a')
    file.write(' Male' + '\n')
    file.close()
    rispondi('Male', '')

def azione2():
    file = open('stato.txt', 'a')
    file.write(' Bene' + '\n')
    file.close()
    rispondi('Bene', '')

def disegna(p):
    testo.delete('1.0', tk.END)
    testo.insert(tk.END, disegni[p])

def parola(carattere):
    nascosta_parola = list(label_nascosta['text'])
    giusta_parola = label_giusta['text']
    for i in range(len(giusta_parola)):
        if giusta_parola[i] == carattere:
            nascosta_parola[i] = carattere      
    label_nascosta['text'] = ''.join(nascosta_parola)

def possibilità():
    vite = vite_label['text']
    vite = str(vite).replace(' ', '')
    vite = int(vite)
    carattere = entry_carattere.get()
    print(carattere)
    print(label_giusta['text'])
    if carattere not in label_giusta['text']:
        vite -= 1
        vite_label['text'] = vite
        disegna(vite)
        if vite == 0:
            vite_label['text'] = 'HAI PERSO!'
    else:
        parola(carattere)
        if label_nascosta['text'] == label_giusta['text']:
            vite_label['text'] = 'HAI VINTO!'

finestra = tk.Tk()
finestra.title("impiccato umore")
finestra.geometry("700x600")
finestra.configure(bg="#00CED1")

inizio_label = tk.Label(finestra, text="come va oggi?", font=("Helvetica", 14), bg="#00CED1")
inizio_label.pack(pady=17)

button1 = tk.Button(finestra, text="male", command=azione1, width=5)
button1.place(x=360,y=55)

button2 = tk.Button(finestra, text="bene", command=azione2, width=5)
button2.place(x=290,y=55)

label_giusta = tk.Label(finestra, text='', bg="#00CED1")

label_nascosta = tk.Label(finestra, text='', font=("Helvetica", 14), bg="#00CED1")
label_nascosta.pack(pady=40)

entry_carattere= tk.Entry(finestra)
entry_carattere.pack(pady=10)

vite= tk.Button(finestra, text="indovina lettera", command=possibilità)
vite.pack(padx=20)

testo = tk.Text(finestra, font=("Helvetica", 16), bg="#00CED1", height=10, width=10)
testo.pack(pady=15)

vite_label = tk.Label(finestra, text=5, font=("Helvatica",20), bg="#00CED1")
vite_label.pack(padx=10)

finestra.mainloop() 