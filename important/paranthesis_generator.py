from collections import deque

class Parantheses:
    def __init__(self, string, open, close):
        self.string = string
        self.open = open
        self.close = close


def parantheses_gen(num):
    result = []

    queue = deque()
    queue.append(Parantheses("", 0, 0))

    while queue:
        present = queue.popleft()

        if present.open == num and present.close == num:
            result.append(present.string)
        else:
            if present.open > present.close:
                queue.append(Parantheses(present.string+")", present.open, present.close+1))
            if present.open < num:
                queue.append(Parantheses(present.string+"(", present.open+1, present.close))
    return result

n = int(input())
print(parantheses_gen(n))

