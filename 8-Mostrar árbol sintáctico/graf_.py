from tkinter import*
from tkinter import ttk

# Creación de la ventana 1 (Léxico).
g_Lex = Tk()
g_Lex.title('Analizador Léxico')
g_Lex.resizable(0, 0)
# Frame
frm = ttk.Frame(g_Lex, padding=200)
frm.grid()
# Tabla
tab = ttk.Treeview(frm, columns=("c1", "c2")) # Análisis léxico
tab.grid(row=0, column=0, columnspan=3)
tab.heading("#0", text="Lexema")
tab.heading("c1", text="Token")
tab.heading("c2", text="Tipo")
label2 = Label(g_Lex,text="Analisis Léxico") 
label2.place(x = 460, y=430, height=40)
txtE = Text(g_Lex, width=40) 
txtE.place(x=52, y=10, height=150)
label = Label(g_Lex,text="Entrada") # TextBox Entrada
label.place(x = 170, y=160, height=40)

# Creación de la ventana 2 (Sintáctico).
g_Sint = Tk()
g_Sint.title('Analizador Sintáctico')

txtE2 = Text(g_Sint, width=144, height=20) # Pila
txtE2.place(x=22, y=10)
label3 = Label(g_Sint,text="Analisis Sintáctico")
label3.place(x = 600, y=335, height=40)

txtE3 = Text(g_Sint, width=20, height=20) # Salida
txtE3.place(x=1190, y=10)
label4 = Label(g_Sint,text="Salida") 
label4.place(x = 1230, y=335, height=40)

txtE4 = Text(g_Sint, width=130, height=20) # Árbol sintáctico
txtE4.place(x=200, y=370)
label5 = Label(g_Sint,text="Árbol ---->") 
label5.place(x = 100, y=570, height=40)

# Creación de la ventana 3 (Análisis semántico).
g_Sem = Tk()
g_Sem.title('Analizador Semántico')

# Frame
frmS = ttk.Frame(g_Sem, padding=200)
frmS.grid()
# Tabla
tabS = ttk.Treeview(frmS, columns=("c1", "c2"))
tabS.grid(row=0, column=0, columnspan=3)
tabS.heading("#0", text="Tipo")
tabS.heading("c1", text="Identificador")
tabS.heading("c2", text="Ámbito")
labelS = Label(g_Sem, text="Analisis Semántico") # Tabla de símbolos
labelS.place(x = 460, y=430, height=40)
