

def calcola_imposta(stipendio_lordo):
    tasse = {
        15000: 23,
        28000: 27,
        55000: 38,
        75000: 41,
        'oltre': 43,
    }
    
    imposte = 0
    
    for k, v in tasse.items():
        diff = stipendio_lordo - k
        if diff > 0:
            imposte += k * v / 100
        else:
            imposte = stipendio_lordo * k / 100
        
        
    
    
    
    return imposte