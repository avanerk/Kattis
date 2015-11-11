import math

data = raw_input().split(' ')

alt = int(data[0])
angle = int(data[1])

if angle > 180 and angle <= 359:
    print str(abs(int(alt / math.sin(math.radians(int(angle))))))
else:
    print "safe"