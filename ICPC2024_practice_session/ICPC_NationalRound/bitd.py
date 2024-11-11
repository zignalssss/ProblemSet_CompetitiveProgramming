# Dictionary mapping keypad numbers to possible letters
keypad = {
    '2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl',
    '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'
}

def generate_possibilities(sequence):
    if not sequence:
        return ['']
    
    possibilities = []
    for letter in keypad[sequence[0]]:
        for sub_possibility in generate_possibilities(sequence[1:]):
            possibilities.append(letter + sub_possibility)
    
    return possibilities

def is_valid_sequence(word, sequence):
    current_seq = ''
    for letter in word:
        for key, value in keypad.items():
            if letter in value:
                current_seq += key * (value.index(letter) + 1)
                break
    return current_seq == sequence

def find_shortest_lexicographically_smallest(possibilities, sequence):
    valid_words = [word for word in possibilities if is_valid_sequence(word, sequence)]
    if not valid_words:
        return None
    shortest_length = min(len(word) for word in valid_words)
    shortest_words = [word for word in valid_words if len(word) == shortest_length]
    return min(shortest_words)

def decode_keypad_sequence(sequence):
    possibilities = generate_possibilities(sequence)
    return find_shortest_lexicographically_smallest(possibilities, sequence)

# Main function to run test cases
def main():
    test_cases = ['4442227222', '22228', '66666666355533']
    for case in test_cases:
        result = decode_keypad_sequence(case)
        print(f"Input: {case}")
        print(f"Output: {result}")
        print()

if __name__ == "__main__":
    main()