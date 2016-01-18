class Calculator:
    def __init__(self):
        pass
    
    def power(self, n, p):
        if n < 0 or p < 0:
            raise Exception('n and p should be non-negative')
        return n**p