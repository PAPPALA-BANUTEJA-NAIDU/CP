from collections import OrderedDict

class lru_cache:
    def __init__(self, capacity):
        self.cache = OrderedDict()
        self.capacity = capacity

    def get(self, key):
        if key not in self.cache:
            return -1
        else:
            self.cache.move_to_end(key)
            return self.cache[key]

    def put(self, key, value):
        self.cache[key] = value
        self.cache.move_to_end(key)
        if len(self.cache) > self.capacity:
            self.cache.popitem(last=False)

    def printall(self):
        return self.cache

def main():
    n = int(input())
    cache = lru_cache(n)
    while True:
        query = input().split()
        if query[0] == "put":
            key, value = query[1].split("=")
            cache.put(key, value)
        elif query[0] == "get":
            print(cache.get(query[1]))
        elif query[0] == "printall":
            print(cache.printall())
        elif query[0] == "exit":
            break
        else:
            print("Invalid input")
            break

main()



