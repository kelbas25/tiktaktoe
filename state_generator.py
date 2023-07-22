import random

"""

File for generating TikTakToe state games

"""


def generate_field():
    elements = ['X', '0', '-']

    field = ""

    for i in range(10):
        field += random.choice(elements)

    return field


def main():
    with open("100_000.in", 'w') as f:
        for i in range(100_000):
            f.write(generate_field()+'\n')

    with open("1_000_000.in", 'w') as f:
        for i in range(1_000_000):
            f.write(generate_field()+'\n')

    with open("10_000_000.in", 'w') as f:
        for i in range(10_000_000):
            f.write(generate_field()+'\n')

    with open("100_000_000.in", 'w') as f:
        for i in range(100_000_000):
            f.write(generate_field()+'\n')


if __name__ == '__main__':
    main()
