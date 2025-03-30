import tkinter
import random

ROWS = 25
COLS = 25
TILE_SIZE = 25

WINDOW_WIDTH = COLS * TILE_SIZE
WINDOW_HEIGHT = ROWS * TILE_SIZE

#gmae windows
windows = tkinter.tk()

windows.title("Snake game")
windows_resizable = (False, False)

windows.mainloop()
