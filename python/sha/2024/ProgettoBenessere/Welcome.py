import tkinter as tk
import tkinter.messagebox as mex
import MainPage

def check_login(username, password):
    
    # leggi da file
    file_username = 'sha'
    file_password = 'ca'
    
    if username == file_username and password == file_password:
        return True

    return False

def handle_login(username_entry, password_entry, root):
    username = username_entry.get()
    password = password_entry.get()
    
    if check_login(username, password):
        root.destroy()
        MainPage.start_app()
    else:
        mex.showerror('Errore', 'Credenziali non valide')

def create_gui(root):
    root.title("Login")
    root.geometry("500x700")
    root.configure(bg="#03ecfc")
    
    benvenuto_label = tk.Label(root, text='Benvenuto nell\'applicazione', font=("Helvetica", 16), bg="#03ecfc")
    benvenuto_label.pack(pady=10)
    
    username_entry = tk.Entry(root, font=("Helvetica", 12))
    username_entry.pack(pady=5)
    
    password_entry = tk.Entry(root, font=("Helvetica", 12))
    password_entry.pack(pady=5)
    
    button = tk.Button(root, text="Login", font=("Helvetica", 12), command=lambda: handle_login(username_entry, password_entry, root))
    button.pack(pady=10)
    

def start_app():
    root = tk.Tk()
    create_gui(root)
    root.mainloop()
    