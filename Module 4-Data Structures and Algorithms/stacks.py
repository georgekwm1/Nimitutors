"""Stacks"""


class Stacks():
    """Stack Class"""
    bottle = []

    def add(self, value):
        """Adds a value to the stack"""
        self.bottle.append(value)

    def pop(self):
        """Removes an item from the Stack"""
        if len(self.bottle) == 0:
            print("Bottle is Empty")
            return
        self.bottle.pop()

    def print_stack(self):
        """Print Stack"""
        print(f"Stack: {self.bottle}")


new_stack = Stacks()
new_stack.add(1)
new_stack.add(3)
new_stack.add(2)
new_stack.pop()
new_stack.pop()
new_stack.pop()
new_stack.pop()
new_stack.print_stack()
