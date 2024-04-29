import tkinter
import random

def readFileA(filename):
    with open(file=filename) as f:
        return f.readlines()

def compilaStudenti():
    val = classi_listbox.curselection()[0] + 1
    studenti_listbox.delete(0, tkinter.END)
    
    for s in readFileA(f'{val}.txt'):
        studenti_listbox.insert(tkinter.END, s)
        lista_studenti.append(s)

def estraifunz():
    print(random.choice(lista_studenti)) 
        

finestra = tkinter.Tk()
finestra.title("Studenti")

lista_studenti = []

classi_listbox = tkinter.Listbox(finestra)
for c in readFileA('classi.txt'):
    classi_listbox.insert(tkinter.END, c)
    
studenti_listbox = tkinter.Listbox(finestra)

selezione_classe = tkinter.Button(finestra, text='Seleziona classe', command=compilaStudenti)
estrai_button = tkinter.Button(finestra, text='Estrai', command=estraifunz)


classi_listbox.pack()
studenti_listbox.pack()
selezione_classe.pack()
estrai_button.pack()


finestra.mainloop()