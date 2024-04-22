import locale
import tkinter as tk
import frasi
import datetime
import calendar

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
    # scrivi file
    oggi = datetime.date.today()
    oggi = oggi.strftime('%d/%m/%Y')
    with open('stato.txt', 'a') as f:
        f.write(f"{global_username} {oggi} {felicita}\n")
    # 
    frase_text.pack(pady=10, padx=10)
    rispondi(felicita, frase_text)

def create_gui(root, date):
    root.title("Come ti senti oggi?")
    root.geometry("500x700")
    root.configure(bg="#03ecfc")
    
    benvenuto_label = tk.Label(root, text=date, font=("Helvetica", 16), bg="#03ecfc")
    benvenuto_label.pack(pady=10)
    
    domanda_label = tk.Label(root, text="Come ti senti oggi?", font=("Helvetica", 14), bg="#03ecfc")
    domanda_label.pack(pady=10)
    
    button1 = tk.Button(root, text="\U0001F61F", font=("Segoe UI Emoji", 12), command=lambda: confirm_action(1, frase_text))
    button1.pack(padx=10)
    
    button2 = tk.Button(root, text="\U0001F610", font=("Segoe UI Emoji", 12), command=lambda: confirm_action(2, frase_text))
    button2.pack(padx=10)
    
    button3 = tk.Button(root, text="\U0001F604", font=("Segoe UI Emoji", 12), command=lambda: confirm_action(3, frase_text))
    button3.pack(padx=10)
    
    frase_text = tk.Text(root, font=("Helvetica", 16), bg="#03ecfc", state=tk.DISABLED)
    frase_text.pack_forget()  # Nasconde il Text all'inizio

def start_app(username):
    global global_username
    global_username = username
    # Imposta la localizzazione italiana
    locale.setlocale(locale.LC_TIME, 'it_IT.UTF-8')
    oggi = datetime.date.today()
    numero_mese = oggi.month
    # Converte il numero del mese nel nome del mese
    nome_mese = calendar.month_name[numero_mese]
    root = tk.Tk()
    
    create_gui(root, 'Oggi è il ' + oggi.strftime('%d') + ' ' + nome_mese)
    root.mainloop()
