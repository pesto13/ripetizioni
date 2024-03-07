import python_weather

async def getweather():
    async with python_weather.Client(unit=python_weather.METRIC, locale=python_weather.Locale.ITALIAN) as client:
        weather = await client.get('Trento')
        print(weather.current.temperature)
        print(weather.current.description)

