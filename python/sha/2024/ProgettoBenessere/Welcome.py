import tkinter as tk
import tkinter.messagebox as mex
import MainPage

def check_login(username, password):
    with open('db.txt', 'r') as f:
        for line in f:
            file_username, file_password = line.strip().split(' ')
            if username == file_username and password == file_password:
                return True
    
    return False

def handle_login():
    username = username_entry.get()
    password = password_entry.get()
    
    if check_login(username, password):
        finestra.destroy()
        MainPage.start_app(username)
    else:
        mex.showerror('Errore', 'Credenziali non valide')

def handle_register():
    username = username_entry.get()
    password = password_entry.get()
    
    if username == '' or password == '':
        mex.showerror('Errore', 'Nome utente o password Non corretti')
        return
    
    if ' ' in username or ' ' in password:
        mex.showerror('Errore', 'Nome utente o password Non corretti')
        return
    
    with open('db.txt', 'a') as f:
        f.write(username + ' ' + password + '\n')
    
    finestra.destroy()
    MainPage.start_app(username)

finestra = tk.Tk()
finestra.title("Login")
finestra.geometry("500x700")
finestra.configure(bg="#03ecfc")

benvenuto_label = tk.Label(finestra, text='Benvenuto nell\'applicazione', font=("Helvetica", 16), bg="#03ecfc")
benvenuto_label.pack(pady=10)

username_entry = tk.Entry(finestra, font=("Helvetica", 12))
username_entry.pack(pady=5)

password_entry = tk.Entry(finestra, font=("Helvetica", 12))
password_entry.pack(pady=5)

button = tk.Button(finestra, text="Login", font=("Helvetica", 12), command=handle_login)
button.pack(pady=10)

button = tk.Button(finestra, text="Registrati", font=("Helvetica", 12), command=handle_register)
button.pack(pady=10)
finestra.mainloop()