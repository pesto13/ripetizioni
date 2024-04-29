import tkinter

def conversione():
    
    text1 = casella1_input.get()
    text2 = casella2_input.get()
    
    if text1 == '' and text2 == '':
        print('Inserisci almeno uno dei due valori')
        return
    
    if text1 != '' and text2 != '':
        print('Inserisci un solo valore')
        return
    
    if text1 != '':
        val=float(text1)*1.8+32
        casella2_input.delete(0,tkinter.END)
        casella2_input.insert(0, val)
    else:
        val=float(text2)-32*1.8
        casella1_input.delete(0,tkinter.END)
        casella1_input.insert(0, val)
    
    
finestra=tkinter.Tk()
finestra.title("Conversione di Temperatura")
finestra.geometry("300x300")

casella1_input=tkinter.Entry(finestra)
casella1_input.grid(row=0, column=0)

casella1=tkinter.Label(finestra, text="°C")
casella1.grid(row=0, column=1)

casella2_input=tkinter.Entry(finestra)
casella2_input.grid(row=1, column=0)

casella2=tkinter.Label(finestra, text="°F")
casella2.grid(row=1, column=1)

btn = tkinter.Button(finestra, text="converti", command=conversione)
btn.grid(row=2,column=0)

finestra.mainloop()