
def leggidafile(nomefile): 
    file= open(nomefile, "r") 
    testo=file.read() 
    righe=testo.splitlines() 
    file.close() 
    return righe

def is_login(value, username, password):
    for login in value:
        login = login.split(" ")
        if(login[0] == username and login[1] == password):
            return True
    return False


username = input("Inserisci il nome utente: ")
password = input("Inserisci password: ")

value = leggidafile('pass.pw',)
result = is_login(value, username, password)

print(result)


