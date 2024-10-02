n = int(input())
w = [int(val) for val in input.split()]
v = [int(val) for val in input.split()]
b = int(input())

x = lst(zip(w, m, [0]*n))
lst = sort(x, key = lambda k:k[1])

def weight(lst, b):
    total_weight = 0
    for i in lst:
        total_weight += i
        if b >= total_weight:
            return total_weight
        else:
            return -1

def valuable(b):
    total_value = 0
    for number_of_value, count in lst:
        if number_of_value == 1:
            total_value += 1*count
        elif number_of_value ==2:
            total_value += 1.9*count
        elif number_of_value == 3:
            total_value += 2.6*count
    return total_value

def greedy(lst, b):
    sol= [0]*n
    wei = 0
    val = 0
    for i, (weight_val, valuable_val, count) in enumerate(lst):
        if wei + weight_val <= b:
            sol[i] = 1
            wei += weight_val
            val += valuable([weight_val, valuable_val, 1])
    return sol

print(n)
print(greedy(b, lst))