import tkinter


def inserisci_attivita():
    todo = casella_input.get()
    if(todo != ''):
        todo_list.insert(0, casella_input.get())
        casella_input.delete(0, tkinter.END)

def rimuovi_attivita():
    indice = len(todo_list.curselection())
    if indice != 0:
        todo_list.delete(todo_list.curselection())

finestra = tkinter.Tk()
finestra.title('Attivita da fare')
finestra.geometry('500x400')

casella_input = tkinter.Entry(finestra, text='')
inserisci_btn = tkinter.Button(finestra, text='Aggiungi', command=inserisci_attivita)
todo_list = tkinter.Listbox(finestra)
rimuovi_btn = tkinter.Button(finestra, text='Rimuovi', command=rimuovi_attivita)

casella_input.pack()
inserisci_btn.pack()
todo_list.pack()
rimuovi_btn.pack()

finestra.mainloop()