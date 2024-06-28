class Solution(object):
    def countPairs(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        sums = []
        sums.append(target)
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                sums.append(nums[i] + nums[j])
        sums.sort()
        def binSearch(l, h, target):
            print(sums[l:h])
            if l == h:
                if sums[l] == target:
                    return l
                else:
                    return 0
            else:
                mid = int((l+h)/2)
                if sums[mid] >= target:
                    return binSearch(l, mid, target)
                else:
                    return binSearch(mid+1, h, target)

        return binSearch(0, len(sums), target)
        