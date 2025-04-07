import tkinter
import random

ROWS = 25
COLS = 25
TILE_SIZE = 25

WINDOW_WIDTH = COLS * TILE_SIZE
WINDOW_HEIGHT = ROWS * TILE_SIZE

#gmae window
window = tkinter.Tk()

window.title("Snake")
window.resizable(False, False)
Canvas = tkinter.Canvas(window, width = WINDOW_WIDTH, height = WINDOW_HEIGHT, bg = "black", highlightthickness = 0, border = 0)
Canvas.pack()
window.update()

#center the window
window_width = window.winfo_width()
window_height = window.winfo_height()
screen_width = window.winfo_screenwidth()
screen_height = window.winfo_screenheight()

window_x = int((screen_width/2) - (window_width/2))
window_y = int((screen_height/2) - (window_height/2))

#format ((w)*(h)+(x)+(y))
window.geometry(f"{window_width}x{window_height}+{window_x}+{window_y}")

window.mainloop()