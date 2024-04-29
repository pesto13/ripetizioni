import tkinter


def aumenta():
    numero = int(numero_lbl['text'])
    numero_lbl.config(text = numero + 1)

def diminuisci():
    numero = int(numero_lbl['text'])
    numero_lbl.config(text = numero - 1)
    
finestra = tkinter.Tk()
finestra.title('Attivita da fare')
finestra.geometry('200x200')

incrementa_btn = tkinter.Button(finestra, text='+', command=aumenta, width=5, height=5)
numero_lbl = tkinter.Label(finestra, text='0', width=5, height=5)
diminuisci_btn = tkinter.Button(finestra, text='-', command=diminuisci, width=5, height=5)

incrementa_btn.pack(padx=10,side=tkinter.LEFT)
numero_lbl.pack(padx=10, side=tkinter.LEFT)
diminuisci_btn.pack(padx=10, side=tkinter.LEFT)

finestra.mainloop()