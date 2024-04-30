import tkinter as tk
import tkinter.messagebox as mex

def check_login(username, password):
    f = open('db.txt', 'r')
    for line in f:
        file_username, file_password = line.strip().split(' ')
        if username == file_username and password == file_password:
            return True
    f.close()
    
    return False

def handle_login():
    username = username_entry.get()
    password = password_entry.get()
    
    if check_login(username, password):
        f = open('logged.txt', 'w')
        f.write(username)
        f.close()
        finestra.destroy()
        import MainPage
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
    f =  open('db.txt', 'a')
    f.write(username + ' ' + password + '\n')
    f.close()
    
    f = open('logged.txt', 'w')
    f.write(username)
    f.close()
    finestra.destroy()
    import MainPage

finestra = tk.Tk()
finestra.title("Login")
finestra.geometry("500x300")
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