class Solution(object):
    def countNegatives(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        negs = 0
        for rows in range(len(grid)):
            for cols in range(len(grid[0])):
                if grid[rows][cols]<0:
                    negs+=1
               
        return negs
        
        
