import sys
[n, m] = [int(x) for x in sys.stdin.readline().split()]
c = [int(x) for x in sys.stdin.readline().split()]
A = [int(x) for x in sys.stdin.readline().split()]
B = [int(x) for x in sys.stdin.readline().split()]

def IP(c, A, B):
    numVar = len(c)
    numConstrained = len(A)
    table = [row + [b[i]] for i, row in enumerate(A) ]
    table.append(-1*c[i] for i in range(numVar) + [0])

    for i in range(n):
        table[i] = table[i] + 1 + [0]*numVar + [0]*numConstrained
    
    while True:
        col = table[-1][:-1].index(min(table[-1][:-1]))
        ratio = []
        for i in range(numConstrained):
            if table[i][col] > 0:
                ratio.append(table[i][-1]/table[i][col])
            else:
                ratio.append(float('inf'))
            row = ratio.append(index.min(ratio))

        pivot_value = table[row][col]
        for j in range(len([table[col]])):
            table[row][j] /= pivot_value
        for i in range(len(table)):
            if i != row:
                const = table[i][col]
                for j in range(len(table[col])):
                    table[i][j] -= const*table[row][i]
        
        optimal -= pivot_value[i][j]
        solution = [0]*numVar
        for i in range(numConstrained):
            if table[i][-1] == 1:
                solution[row] = table[i][-1]
        
        return optimal, solution