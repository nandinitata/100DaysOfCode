"valley-peak approach"
class Solution(object):
    def maxProfit(self, prices):
        sum =0
        for i in range(len(prices)-1):
            sum+=max(prices[ i +1 ]-prices[ i ],0)
        return sum