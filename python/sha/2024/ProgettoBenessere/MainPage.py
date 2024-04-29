import tkinter as tk
import frasi

disegni = [
    """
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========
    """,
    """
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========
    """,
    """
  +---+
  |   |
  O   |
  |  |
      |
      |
=========
    """,
    """
  +---+
  |   |
  O   |
      |
      |
      |
=========

    """,
    """
  +---+
      |
      |
      |
      |
      |
=========
    """
]


def rispondi(felicita_lvl, frase_text):
    risposta = ''
    if felicita_lvl == 1 or felicita_lvl == 2:
        risposta = 'Male'
    else:
        risposta = 'Bene'

    if risposta == 'Bene' or risposta == 'Male':
        frase = frasi.restituisci_frase(risposta)
        label_indovina['text'] = frase
        frase_text.config(state=tk.NORMAL)
        frase_text.delete('1.0', tk.END)
        frase_text.insert('1.0', frase)
        frase_text.config(state=tk.DISABLED)
    else:
        frase_text.config(state=tk.NORMAL)
        frase_text.delete('1.0', tk.END)
        frase_text.insert('1.0', 'Non ho capito cosa intendevi')
        frase_text.config(state=tk.DISABLED)

def confirm_action1():
    file = open('stato.txt', 'a')
    file.write(global_username + ' 1' + '\n')
    file.close()
    frase_text.pack(pady=10, padx=10)
    rispondi(1, frase_text)

def confirm_action3():
    file = open('stato.txt', 'a')
    file.write(global_username + ' 3' + '\n')
    file.close()
    frase_text.pack(pady=10, padx=10)
    rispondi(3, frase_text)

def draw_hang(v):
    hang_text.delete('1.0', tk.END)
    hang_text.insert('1.0', disegni[v])

def update_parola(char):
    for i in range(len(parola_indovinare)):
        if parola_indovinare[i] == char:
            hidden_parola[i] = char
            
    label_indovina['text'] = hidden_parola
    
    
def fguess_char():
    vite = vite_label['text'].replace(' ', '')
    vite = int(vite)
    char = entry_char.get()
    if char not in parola_indovinare:
        vite -= 1
        vite_label['text'] = vite
        draw_hang(vite)
        if vite == 0:
            label_indovina['text'] = 'HAI PERSO'
    else:
        update_parola(char)
        if hidden_parola == parola_indovinare:
            label_indovina['text'] = 'HAI VINTO'

    
global_username = 'TODO'
parola_indovinare = 'ciao'
hidden_parola = ['_' for _ in range(len(parola_indovinare))]

finestra = tk.Tk()
finestra.title("Come ti senti oggi?")
finestra.geometry("500x900")
finestra.configure(bg="#03ecfc")

vite_label = tk.Label(finestra, text="Come ti senti oggi?", font=("Helvetica", 14), bg="#03ecfc")
vite_label.pack(pady=10)

button1 = tk.Button(finestra, text="Male", font=("Segoe UI Emoji", 12), command=confirm_action1)
button1.pack(padx=10)

button3 = tk.Button(finestra, text="Bene", font=("Segoe UI Emoji", 12), command=confirm_action3)
button3.pack(padx=10)

frase_text = tk.Text(finestra, font=("Helvetica", 16), bg="#03ecfc", state=tk.DISABLED)
frase_text.pack(padx=10)

label_indovina = tk.Label(finestra, text='', font=("Helvetica", 16), bg="#03ecfc")
label_indovina.pack(padx=10)

entry_char = tk.Entry(finestra, font=("Helvetica", 12))
entry_char.pack(padx=10)

guess_char = tk.Button(finestra, text="Indovina Lettera", font=("Helvetica", 12), command=fguess_char)
guess_char.pack(padx=10)

vite_label = tk.Label(finestra, text=5, font=("Helvetica", 14), bg="#03ecfc")
vite_label.pack(pady=10)

hang_text = tk.Text(finestra, font=("Helvetica", 16), bg="#03ecfc")
hang_text.pack(padx=10)


finestra.mainloop()
