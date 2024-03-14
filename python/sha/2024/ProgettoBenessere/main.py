import meteo
import asyncio
import os
import frasi

if __name__ == '__main__':
    if os.name == 'nt':
        asyncio.set_event_loop_policy(asyncio.WindowsSelectorEventLoopPolicy())

    weather_description = asyncio.run(meteo.getweather())
    weather = meteo.define_meteo(weather_description)
    print(meteo.get_weather_activity(weather))
    print('😁')
    while(True):
        risposta = input('Come ti senti oggi?')
        if(risposta == 'Bene' or risposta == 'Male'):
            frase = frasi.restituisci_frase(risposta)
        else:
            print('Non ho capito cosa intendevi')
        print(frase)