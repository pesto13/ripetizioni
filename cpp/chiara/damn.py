


from typing import Any


class negro:

    def __init__(self) -> None:
        self.x = 12
        self.y = 2

    def __getattribute__(self, __name: str) -> Any:
        print("sega")
        return super().__getattribute__(__name)
    
    def __call__(self, *args: Any, **kwds: Any) -> Any:
        

        return self.x + self.y
    

a = negro()

b = negro()

a.sega = 214

print(a.sega)