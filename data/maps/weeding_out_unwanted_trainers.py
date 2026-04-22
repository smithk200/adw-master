import re
import os

def process_flags_in_file(input_file, acceptable_flags):
    flag_pattern = re.compile(r'\bTRAINER_\w+')

    def replace_flag(match):
        flag = match.group(0)
        if flag not in acceptable_flags:
            #print("Replacing: "+str(flag))  # DEBUG
            return 'TRAINER_NONE'
        #else:
            #print("Keeping: "+str(flag))  # DEBUG
        return flag

    with open(input_file, 'r') as infile:
        content = infile.read()

    updated_content = flag_pattern.sub(replace_flag, content)

    with open(input_file, 'w') as outfile:
        outfile.write(updated_content)

def load_flags_from_file(filepath):
    with open(filepath, 'r') as f:
        return set(line.strip() for line in f if line.strip())

def process_directory(root_dir, acceptable_flags):
    # Walk through the directory and its subdirectories
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            # Only process the scripts.inc file
            if filename == 'scripts.inc':
                input_file = os.path.join(dirpath, filename)
                print("Processing file: {}".format(input_file))

                # Call process_flags_in_file for each scripts.inc file
                process_flags_in_file(input_file, acceptable_flags)

root_dir = 'C:/decomps/adw-2/data/maps'
acceptable_flags = load_flags_from_file('output_opponents.txt')
process_directory(root_dir, acceptable_flags)
