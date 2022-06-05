import csv 
import matplotlib.pyplot as plt

posx = []
posy = []

with open("orbitdata.csv", mode = 'r') as file:
    data = csv.reader(file)

    for lines in data:
        posx.append(float(lines[0]))
        posy.append(float(lines[1]))



plt.plot(posx, posy)
plt.show()
