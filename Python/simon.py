lines = raw_input()

for i in range(int(lines)):
    text = raw_input()
    if text.startswith("simon says"):
        print " ".join(text.split()[2:])
    else:
        print "\n"