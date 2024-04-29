

zone = {
    'nord': 34,
    'sud': 1000,
    'isole': 2322,
    'centro': 2323
}

def fatturato_totale(zone):
    fatt = 0
    for v in zone.values():
        fatt += v
    return fatt

def peso_zone(zone, fatturato):
    
    for k, v in zone.items():
        perc = v / fatturato * 100
        print('valore in percentuale di ', k, ': ', perc)
        

fatturato = fatturato_totale(zone)
peso_zone(zone, fatturato)
