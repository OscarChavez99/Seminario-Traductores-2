import analizadores as an

def auxreglas():
    n = 1
    file = open('rgl.txt', 'r')
    line = file.readlines()
    for l in line:
        l = l.rstrip()
        an.auxregl.append(l.split('\t'))
        
    for obj in an.auxregl:
        obj = an.Regla(n, int(obj[0]), int(obj[1]), str(obj[2]))
        n+=1
        an.lisreglas.append(obj)
    file.close()

def buscar(str):
        for objlex in an.listalexico:
            if objlex.cad == str:
                return objlex
            else:
                pass
    
def reglas():
    file = open('compilador.lr', 'r')
    line = file.readlines()
    for l in line:
        l = l.rstrip()
        an.matrizreglas.append(l.split('\t'))

    for i in range (len(an.matrizreglas)):
        for j in range(len(an.matrizreglas[i])):
            an.matrizreglas[i][j] = int(an.matrizreglas[i][j])
    file.close()

def eliminalistaVar(self):
        an.pila.pop()
        an.pila.pop()
        an.pila.pop()
        self.data = an.pila.pop()
        an.pila.pop()
        an.pila.pop()
        an.listavar.append(an.DefVar('Unknown ', self.data, self.lv))