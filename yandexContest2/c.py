def calculate_z_function(s):
    n = len(s)
    z = [0] * n
    l, r = 0, 0  # Границы самого правого совпадения
    for i in range(1, n):
        if i <= r:
            z[i] = min(r - i + 1, z[i - l])
        while i + z[i] < n and s[z[i]] == s[i + z[i]]:
            z[i] += 1
        if i + z[i] - 1 > r:
            l, r = i, i + z[i] - 1
    return z

# Ввод строки
s = input()

# Вычисление z-функции
z_function = calculate_z_function(s)

# Вывод результата
print(" ".join(map(str, z_function)))
