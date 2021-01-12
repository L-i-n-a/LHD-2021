import time,os
def randomiser(max):
    number = os.getpid()*time.time_ns()%(max/3)
    return int(number)

print(randomiser(786))