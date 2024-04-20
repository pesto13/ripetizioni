import tkinter as tk
import meteo
import asyncio
import os
import frasi

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

def create_gui(root, weather):
    root.title("Come ti senti oggi?")
    root.geometry("800x400")
    root.configure(bg="#03ecfc")
    
    benvenuto_label = tk.Label(root, text=weather, font=("Helvetica", 16), bg="#03ecfc")
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
    if os.name == 'nt':
        asyncio.set_event_loop_policy(asyncio.WindowsSelectorEventLoopPolicy())

    weather_description = asyncio.run(meteo.getweather())
    weather = meteo.define_meteo(weather_description)
    
    root = tk.Tk()
    create_gui(root, weather)
    root.mainloop()
