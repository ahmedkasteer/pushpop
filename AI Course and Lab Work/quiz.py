import heapq

def astar(start_node, goal_node, heuristic_func):
    # Initialize the start node
    start_node.g_score = 0
    start_node.f_score = heuristic_func(start_node, goal_node)
    open_set = [start_node]

    while open_set:
        # Select the node with the lowest cost
        current_node = heapq.heappop(open_set)

        # Check if the goal node has been reached
        if current_node == goal_node:
            path = []
            while current_node:
                path.append(current_node)
                current_node = current_node.parent
            return path[::-1]

        #checking the childs of the node and neighbours
        for neighbor in current_node.neighbors:
            tentative_g_score = current_node.g_score + neighbor.cost
            if tentative_g_score < neighbor.g_score:
                neighbor.parent = current_node
                neighbor.g_score = tentative_g_score
                neighbor.f_score = tentative_g_score + heuristic_func(neighbor, goal_node)
                if neighbor not in open_set:
                    heapq.heappush(open_set, neighbor)

class Node:
    def __init__(self, name):
        self.name = name
        self.neighbors = []
        self.parent = None
        self.g_score = float('inf')
        self.f_score = float('inf')

    def add_neighbor(self, neighbor, cost):
        self.neighbors.append((neighbor, cost))

def heuristic(node, goal_node):
  # this is heuristic function. 
    return ((node.x - goal_node.x)

# Create the graph
start_node = Node('A')
node_b = Node('B')
node_c = Node('C')
node_d = Node('D')
node_e = Node('E')
goal_node = Node('G')

start_node.add_neighbor(node_b, 4)
start_node.add_neighbor(node_c, 2)
node_b.add_neighbor(node_d, 5)
node_c.add_neighbor(node_d, 8)
node_c.add_neighbor(node_e, 10)
node_d.add_neighbor(goal_node, 0)
node_e.add_neighbor(goal_node, 0)

# Calling the A* function
path = astar('A', 'B', '3')
if path is None:
    print("No path found")
else:
    for node in path:
        print(node.name)

