import python_weather
import random
import re
import os

async def getweather():
    async with python_weather.Client(unit=python_weather.METRIC, locale=python_weather.Locale.ITALIAN) as client:
        weather = await client.get('Trento')
        print(weather.current.temperature)
        print(weather.current.description)
        return weather.current.description
    
    
def define_meteo(weather_description):
    if re.search('.*(P|p)iogg.*', weather_description):
        return 'pioggia'
    if re.search('.*(S|s)ol.*', weather_description) or re.search('.*(S|s)er.*', weather_description):
        return 'sole'
    if re.search('.(N|n)uv.*', weather_description):
        return 'nuvoloso'
    
    return 'IDK'

def get_weather_activity(weather):
    
    nome_file = ''
    if weather == 'pioggia':
        nome_file = 'pioggia.txt'
    if weather == 'sole':
        nome_file = 'sole.txt'
    if weather == 'nuvoloso':
        nome_file = 'nuvoloso.txt'
    if weather == 'IDK':
        return
    
    file = open(os.path.join('.', 'attivita_meteo', nome_file), 'r')
    content = file.readlines() 
    indice_random = random.randint(0, len(content) - 1)
    line = content[indice_random]
    
    return line