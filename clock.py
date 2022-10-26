from tkinter import*
from tkinter.ttk import *


from time import strftime 

root = Tk()
root.title("TIME")
def time():
    string= strftime('%H:%M:%S %p')
    label.config(text = string )
    label.after(1000,time)


#adding color and font style

label = Label(root,font=("ds-digital",80),background= "green",foreground= "red")
#exporting the pack from the function 
label.pack(anchor= 'center')
time()
#calling of tkinter function
mainloop()
