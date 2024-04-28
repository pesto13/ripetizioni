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
        frase_text.config(state=tk.NORMAL)
        frase_text.delete('1.0', tk.END)
        frase_text.insert('1.0', frase)
        frase_text.config(state=tk.DISABLED)
    else:
        frase_text.config(state=tk.NORMAL)
        frase_text.delete('1.0', tk.END)
        frase_text.insert('1.0', 'Non ho capito cosa intendevi')
        frase_text.config(state=tk.DISABLED)

def confirm_action(felicita, frase_text):
    with open('stato.txt', 'a') as f:
        f.write(f"{global_username} {felicita}\n")
    # 
    frase_text.pack(pady=10, padx=10)
    rispondi(felicita, frase_text)

def draw_hang(vite):
    hang_text.delete('1.0', tk.END)
    hang_text.insert('1.0', disegni[-vite])
    
def fguess_char():
    global vite
    char = entry_char.get()
    if char not in parola_indovinare:
        vite -= 1
        draw_hang(vite)
        return
    else:
        print("fai robe")

global_username = 'TODO'
parola_indovinare = 'ciao'
vite = 5
finestra = tk.Tk()
finestra.title("Come ti senti oggi?")
finestra.geometry("500x900")
finestra.configure(bg="#03ecfc")

domanda_label = tk.Label(finestra, text="Come ti senti oggi?", font=("Helvetica", 14), bg="#03ecfc")
domanda_label.pack(pady=10)

button1 = tk.Button(finestra, text="\U0001F61F", font=("Segoe UI Emoji", 12), command=lambda: confirm_action(1, frase_text))
button1.pack(padx=10)

button2 = tk.Button(finestra, text="\U0001F610", font=("Segoe UI Emoji", 12), command=lambda: confirm_action(2, frase_text))
button2.pack(padx=10)

button3 = tk.Button(finestra, text="\U0001F604", font=("Segoe UI Emoji", 12), command=lambda: confirm_action(3, frase_text))
button3.pack(padx=10)

frase_text = tk.Text(finestra, font=("Helvetica", 16), bg="#03ecfc", state=tk.DISABLED)
frase_text.pack(padx=10)

label_indovina = tk.Label(finestra, text=f'{parola_indovinare}', font=("Helvetica", 16), bg="#03ecfc")
label_indovina.pack(padx=10)

entry_char = tk.Entry(finestra, font=("Helvetica", 12))
entry_char.pack(padx=10)

guess_char = tk.Button(finestra, text="Indovina Lettera", font=("Helvetica", 12), command=fguess_char)
guess_char.pack(padx=10)

hang_text = tk.Text(finestra, font=("Helvetica", 16), bg="#03ecfc")
hang_text.pack(padx=10)


finestra.mainloop()
