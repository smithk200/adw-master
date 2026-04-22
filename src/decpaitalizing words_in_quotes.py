import re

def decapitalize_quotes(input_str):
    pattern = r'_\("([A-Z\s&]+)"\)'

    def decapitalize(match):
        original_str = match.group(1)
        parts = original_str.split('&')

        decapitalized_parts = [
            ' '.join([
                word.capitalize() if word.isalpha() else word
                for word in part.split()
            ])
            for part in parts
        ]

        decapitalized_str = ' & '.join(decapitalized_parts)
        return '_("' + decapitalized_str + '")'

    return re.sub(pattern, decapitalize, input_str)


def process_file(filepath, output_path):
    with open(filepath, 'r') as f:
        content = f.read()

    updated_content = decapitalize_quotes(content)

    with open(output_path, 'w') as f:
        f.write(updated_content)

process_file('input.txt', 'output.txt')
