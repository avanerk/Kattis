from itertools import groupby
s = raw_input()
print ''.join(c for c, unused in groupby(s))