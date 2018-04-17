import matplotlib.pyplot as plt
import numpy as np

datos = np.loadtxt("u_t_final.txt")
plt.figure(figsize=(10,10))
plt.plot(datos[:,0], datos[:,1])
plt.title("Funcion u en t=0.5")
plt.xlabel("x")
plt.ylabel("y")
plt.savefig("u_t_final.pdf")
plt.close()
