#!/usr/bin/env python

import matplotlib.pyplot as plt
import numpy as np
from tabulate import tabulate
import pandas as pd

n = np.arange(start=1, stop=5e2)  # step=1e2
a_n = np.array((n + 3) / (n + 7))
df = pd.DataFrame({"a_n": a_n})
df.index += 1
print(tabulate(df, headers="keys", floatfmt=".12f"))

fig, ax = plt.subplots()
ax.plot(n, a_n, label=r"$a_n$")  # ax.scatter
ax.plot(n, np.full((n.size), 1), label="Límite")
legend = ax.legend(loc="best", shadow=True)
plt.savefig("p5.pdf")
