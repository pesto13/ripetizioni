import locale
import tkinter as tk
import asyncio
import os
import frasi
import datetime
import calendar

def rispondi(text, frase_text):
    risposta = text
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

def confirm_action(entry, frase_text):
    text = entry.get()
    frase_text.pack(pady=10, padx=10)
    rispondi(text, frase_text)

def create_gui(root, date):
    root.title("Come ti senti oggi?")
    root.geometry("500x700")
    root.configure(bg="#03ecfc")
    
    benvenuto_label = tk.Label(root, text=date, font=("Helvetica", 16), bg="#03ecfc")
    benvenuto_label.pack(pady=10)
    
    domanda_label = tk.Label(root, text="Come ti senti oggi?", font=("Helvetica", 14), bg="#03ecfc")
    domanda_label.pack(pady=10)
    
    entry = tk.Entry(root, font=("Helvetica", 12))
    entry.pack(pady=5)
    
    frase_text = tk.Text(root, font=("Helvetica", 16), bg="#03ecfc", state=tk.DISABLED)
    frase_text.pack_forget()  # Nasconde il Text all'inizio
    
    button = tk.Button(root, text="Conferma", font=("Helvetica", 12), command=lambda: confirm_action(entry, frase_text))
    button.pack(pady=10)

def start_app():
    # Imposta la localizzazione italiana
    locale.setlocale(locale.LC_TIME, 'it_IT.UTF-8')
    oggi = datetime.date.today()
    numero_mese = oggi.month
    # Converte il numero del mese nel nome del mese
    nome_mese = calendar.month_name[numero_mese]
    root = tk.Tk()
    
    create_gui(root, 'Oggi è il ' + oggi.strftime('%d') + ' ' + nome_mese)
    root.mainloop()
