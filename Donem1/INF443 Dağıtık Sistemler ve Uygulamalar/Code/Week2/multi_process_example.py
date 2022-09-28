import random
import math
import time


def cpu_bound(number):
    return sum(i * i for i in range(number))


# Generate 2D coords in the range -1, 1
def generate_coords():
    x, y = 2 * random.random() - 1, 2 * random.random() - 1
    return (x,y)

#Understand if it is in circle with radius 1
def is_in_circle(point2D):
    x, y = point2D
    if math.sqrt(x**2 + y**2) < 1:
        return True
    return False

def pi_computer(n):
    in_circle_counter = 0
    for i in range(n):
        p = generate_coords()
        in_circle_counter += is_in_circle(p)
    return 4 * in_circle_counter/n