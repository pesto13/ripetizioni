import tkinter as tk
import meteo
import asyncio
import os
import frasi

def rispondi(text, frase_text):
    risposta = text
    if risposta == 'Bene' or risposta == 'Male':
        frase = frasi.restituisci_frase(risposta)
        frase_text.config(state=tk.NORMAL)  # Abilita la modifica del Text
        frase_text.delete('1.0', tk.END)  # Pulisce il Text prima di inserire il nuovo valore
        frase_text.insert('1.0', frase)  # Inserisce la nuova frase nel Text
        frase_text.config(state=tk.DISABLED)  # Disabilita la modifica del Text
    else:
        frase_text.config(state=tk.NORMAL)  # Abilita la modifica del Text
        frase_text.delete('1.0', tk.END)  # Pulisce il Text
        frase_text.insert('1.0', 'Non ho capito cosa intendevi')  # Inserisce un messaggio predefinito
        frase_text.config(state=tk.DISABLED)  # Disabilita la modifica del Text

# Creazione della finestra principale
def gui_main():
    
    if os.name == 'nt':
        asyncio.set_event_loop_policy(asyncio.WindowsSelectorEventLoopPolicy())

    weather_description = asyncio.run(meteo.getweather())
    weather = meteo.define_meteo(weather_description)
    
    root = tk.Tk()
    root.title("Come ti senti oggi?")
    root.geometry("800x400")
    root.configure(bg="#03ecfc")
    

    # Etichetta di benvenuto
    benvenuto_label = tk.Label(root, text=weather, font=("Helvetica", 16), bg="#03ecfc")
    benvenuto_label.pack(pady=10)

    # Etichetta per la domanda
    domanda_label = tk.Label(root, text="Come ti senti oggi?", font=("Helvetica", 14), bg="#03ecfc")
    domanda_label.pack(pady=10)

    # Campo di inserimento
    entry = tk.Entry(root, font=("Helvetica", 12))
    entry.pack(pady=5)

    def intermedio():
        text = entry.get()
        frase_text.pack(pady=10)
        frase_text.pack(padx=10)
        rispondi(text, frase_text)
    # Pulsante di conferma
    frase_text = tk.Text(root, font=("Helvetica", 16), bg="#03ecfc", state=tk.DISABLED)
    frase_text.pack_forget()  # Nasconde il Text all'inizio
    button = tk.Button(root, text="Conferma", font=("Helvetica", 12), command=intermedio)
    button.pack(pady=10)
    
    # benvenuto_label = tk.Label(root, text=, font=("Helvetica", 16), bg="#03ecfc")

    # Esecuzione del loop principale
    root.mainloop()


