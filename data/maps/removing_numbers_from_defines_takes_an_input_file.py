import re

def clean_define_file(filename):
    cleaned = []

    with open(filename, 'r') as f:
        for line in f:
            line = line.strip()
            if not line:
                continue

            match = re.match(r'#define\s+([A-Za-z0-9_]+)', line)
            if match:
                cleaned.append(match.group(1))
            else:
                cleaned.append(line)

    return cleaned

result = clean_define_file('songs.txt')

with open('output_songs.txt', 'w') as out:
    for line in result:
        out.write(line + '\n')

'''
result = clean_define_file('flags.txt')

with open('output_flags.txt', 'w') as out:
    for line in result:
        out.write(line + '\n')

result = clean_define_file('vars.txt')

with open('output_vars.txt', 'w') as out:
    for line in result:
        out.write(line + '\n')

result = clean_define_file('opponents.txt')

with open('output_opponents.txt', 'w') as out:
    for line in result:
        out.write(line + '\n')'''


