from matplotlib import pyplot as pp

ages = [5, 7, 8, 12, 15, 22, 25, 30, 35, 40, 45, 50]
bins = [0, 10, 20, 30, 40, 50]

pp.hist(ages, bins)

pp.title('Player age by age interval')
pp.xlabel('Age intervals')
pp.ylabel('Player age')
pp.grid()

pp.show()