class Solution:
    def minOperationsToFlip(self, expression: str) -> int:
        n = len(expression)

        def evaluate(mapping):
            stack = []
            for char in expression:
                if char == ')':
                    val2 = stack.pop()
                    op = stack.pop()
                    val1 = stack.pop()
                    stack.pop()
                    if op == '&':
                        stack.append(val1 & val2)
                    elif op == '|':
                        stack.append(val1 | val2)
                elif char in {'0', '1', '&', '|', '(', ')'}:
                    stack.append(mapping[char])

            if len(stack) == 1:
                return stack[0]
            return stack[-1]

        variables = set([char for char in expression if char.isalpha()])
        mappings = []
        n = len(variables)
        for i in range(2 ** n):
            mapping = {}
            for j, var in enumerate(variables):
                mapping[var] = (i >> (n - j - 1)) & 1
            mappings.append(mapping)

        results = []
        for mapping in mappings:
            results.append(evaluate(mapping))

        return len(set(results))
