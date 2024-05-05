import tkinter as tk
import random
import tkinter.messagebox as mex

def controlla_login(username, password):
    file= open('credenziali.txt', 'r')
    credenziali = []
    for line in file:
        # credenziali è una lista che prende i valori di username e password
        # strip toglie gli spazi bianchi ad inizio e fine della line
        # split spezza la line nelle 2 credenziali
        # è la split che dalla line crea una lista di 2 elementi
        credenziali = line.strip().split(' ')
        # se matcha allora return true
        if username == credenziali[0] and password == credenziali[1]:
            # appena trovo l'utente loggo subito, senza controllare tutti gli altri
            return True
    file.close()
    # se non trovo niente dentro al file significa che il for ha fatto tutti i giri e di
    # conseguenza non è presente il tuo utente
    return False

def login():
    username = username_entry.get()
    password = password_entry.get()
    if controlla_login(username, password):
        file= open('login.txt', 'w')
        file.write(username)
        file.close()
        finestra.destroy()
    else:
        mex.showerror('errore', 'credenziali non valide')

def registrazione():
    username = username_entry.get()
    password = password_entry.get()
    if username == '' or password == '':
        mex.showerror('errore', 'username o password non corretti')
        return
    if ' ' in username or ' ' in password:
        mex.showerror('errore', 'username o password non corretti')
        return
    file=  open('credenziali.txt', 'a')
    file.write(username + ' ' + password + '\n')
    file.close()
    file= open('login.txt', 'w')
    file.write(username)
    file.close()
    finestra.destroy()

finestra = tk.Tk()
finestra.title("login")
finestra.geometry("500x230")
finestra.configure(bg="#00CED1")

benvenuto_label = tk.Label(finestra,text='BENVENUTO NELL\'APPLICAZIONE',font=("Helvetica", 16), bg="#00CED1")
benvenuto_label.pack(pady=20)

username_label = tk.Label(finestra,text='username:', font=("Helvetica", 16), bg="#00CED1")
username_label.place(x=95,y=70)

username_entry = tk.Entry(finestra,font=("Helvetica", 12))
username_entry.pack(pady=5)

password_label = tk.Label(finestra,text='password:', font=("Helvetica", 16), bg="#00CED1")
password_label.place(x=95,y=112)

password_entry = tk.Entry(finestra,font=("Helvetica", 12))
password_entry.pack(pady=10)

button = tk.Button(finestra, text="login", font=("Helvetica", 12), command=login)
button.pack(pady=10)

button = tk.Button(finestra, text="registrati", font=("Helvetica", 12), command=registrazione)
button.pack(padx=10)
finestra.mainloop()

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
    # file readlines prende tutto il file e mette in ogni cella della lista una singola riga
    contenuto= file.readlines() 
    indice = random.randint(0, len(contenuto) - 1)
    line = contenuto[indice]
    return line

def rispondi(risposta, frase_text):    
    frase = restituisci_frase(risposta)
    label_giusta['text'] = frase
    # mette la stringa in lista
    frase = list(frase)
    random.shuffle(frase)
    # mette la lista in stringa
    file = ''.join(frase)
    label_casuale['text'] = file
    # crea una lista con _ per ogni lettera dalla frase
    label_nascosta['text'] = ['_' for x in range(len(file))]
    
def azione1():
    file = open('stato.txt', 'a')
    file.write(username + ' Male' + '\n')
    file.close()
    rispondi('Male', '')

def azione2():
    file = open('stato.txt', 'a')
    file.write(username + ' Bene' + '\n')
    file.close()
    rispondi('Bene', '')

def disegna(p):
    testo.delete('0.0', tk.END)
    testo.insert('0.0', disegni[p])

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
    if carattere not in label_giusta['text']:
        vite -= 1
        vite_label['text'] = vite
        disegna(vite)
        if vite == 0:
            label_casuale['text'] = 'HAI PERSO!'
    else:
        parola(carattere)
        if label_nascosta['text'] == label_giusta['text']:
            label_casuale['text'] = 'HAI VINTO!'

file= open('login.txt', 'r')
username = file.read()
file.close()

finestra = tk.Tk()
finestra.title("come va oggi?")
finestra.geometry("700x900")
finestra.configure(bg="#00CED1")

inizio_label = tk.Label(finestra, text="come va oggi?", font=("Helvetica", 14), bg="#00CED1")
inizio_label.pack(pady=20)

button1 = tk.Button(finestra, text="male", font=("Segoe UI Emoji", 12), command=azione1)
button1.place(x=350,y=50)

button2 = tk.Button(finestra, text="bene", font=("Segoe UI Emoji", 12), command=azione2)
button2.place(x=280,y=50)

label_giusta = tk.Label(finestra, text='', font=("Helvetica", 16), bg="#00CED1")

label_casuale = tk.Label(finestra, text='', font=("Helvetica", 16), bg="#00CED1")
label_casuale.pack(pady=50)

label_nascosta = tk.Label(finestra, text='', font=("Helvetica", 16), bg="#00CED1")
label_nascosta.pack(padx=10)

entry_carattere= tk.Entry(finestra, font=("Helvetica", 12))
entry_carattere.pack(pady=10)

vite= tk.Button(finestra, text="indovina lettera", font=("Helvetica", 12), command=possibilità)
vite.pack(padx=5)

vite_label = tk.Label(finestra, text=5, font=("Helvetica", 14), bg="#00CED1")
vite_label.pack(pady=10)

testo= tk.Text(finestra, font=("Helvetica", 16), bg="#00CED1")
testo.pack(padx=10)

finestra.mainloop()

