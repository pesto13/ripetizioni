file = open('esercizi/pitagorica.txt', 'w')

for i in range(1, 10+1):
    for j in range(1, 10+1):
        val = i * j
        file.write(str(val))
        file.write('\t')
    file.write('\n')