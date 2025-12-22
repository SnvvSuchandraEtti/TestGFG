class Solution:
	def isCycle(self, V, edges):
		#Code here
		        # Build adjacency list
        adj = [[] for _ in range(V)]
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
        
        # DFS function to detect cycle
        def hasCycle(node, parent, visited):
            visited[node] = True
            for neighbor in adj[node]:
                if not visited[neighbor]:
                    if hasCycle(neighbor, node, visited):
                        return True
                elif neighbor != parent:
                    return True
            return False
        
        visited = [False] * V
        # Check for cycle in each component
        for i in range(V):
            if not visited[i]:
                if hasCycle(i, -1, visited):
                    return True
        
        return False