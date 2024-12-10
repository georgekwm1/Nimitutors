"""Queue"""


class Queue():
    """Queue"""
    line = []

    def add(self, value):
        """Adds an item to the Queue"""
        self.line.append(value)

    def pop(self):
        """Removes an item from the Queue"""
        if len(self.line) == 0:
            print("Bottle is Empty")
            return
        self.line = self.line[1:]

    def print_stack(self):
        """Prints Queue"""
        print(f"Line: {self.line}")


new_queue = Queue()
new_queue.add(1)
new_queue.add(3)
new_queue.add(2)
new_queue.pop()
new_queue.pop()
new_queue.pop()
new_queue.pop()
new_queue.print_stack()
