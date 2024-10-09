from matplotlib import pyplot as pp

x = [6, 12, 8, 10, 15, 5, 14, 7, 9, 11]
y = [70, 85, 75, 80, 90, 60, 88, 72, 78, 82]

pp.scatter(x, y, color='red', marker='x')

pp.title('Relation between time development and game ratings')
pp.xlabel('Development time (months)')
pp.ylabel('Ratings (0-100)')
pp.grid()

pp.show()