import pygame
import threading
import time

def play_music(file_path):
    # Inizializza pygame
    print(file_path)
    pygame.init()
    
    try:
        # Inizializza il modulo mixer
        pygame.mixer.init()
        
        # Carica il file audio
        pygame.mixer.music.load(file_path)
        
        # Riproduci la musica
        pygame.mixer.music.play()
        
        # Attendi fino a quando la riproduzione non è terminata
        while pygame.mixer.music.get_busy():
            pygame.time.Clock().tick(3)
        
    except pygame.error as e:
        print("Errore nella riproduzione del file audio:", e)

    # Chiudi pygame
    pygame.quit()


def ask_to_stop():
    while pygame.mixer.music.get_busy:
        risposta = input("vuoi fermare? ")
        if(risposta == 'si'):
            pygame.mixer.music.stop()
            break
        time.sleep(3)

file_path = "lofi.mp3"
threading.Thread(target=play_music, args=(file_path, )).start()
threading.Thread(target=ask_to_stop).start()