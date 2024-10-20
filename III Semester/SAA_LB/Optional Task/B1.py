import heapq

def generate_A(limit):
    A = set([1])
    heap = [1]
    result = []

    while len(result) < limit:
        current = heapq.heappop(heap)
        result.append(current)

        for new_num in [2 * current + 1, 3 * current + 1]:
            if new_num not in A:
                heapq.heappush(heap, new_num)
                A.add(new_num)

    return result

print(generate_A(1000))