Note that for a given direction, we can calculate the time required to process each diagonal independently.

So for a given direction(say south-west), and a given diagonal, we make an array of these diagonal elements in the order in which they appear if we go along the chosen direction and add D-1 zeroes to the end of it if we happen to take an image at the south-west most point along the diagonal. 

We then prefix it so that we can access the sum of complexities in constant time (pre-calculating the sum of the next D integer from each point will also work).

Note that the first(left) element can only be covered if we take a photo standing on that point. Our next objective should be to cover the left most uncovered element. This can be done if a photo is taken from any element with an index in the range [min(0, i-D+1), i] where i is the index of the element being considered. 

Taking the photo from a point with the maximum index and a sum of complexities that is less than or equal to M will minimise the number of photos taken in that diagonal. If it is not possible to find an index in this range such that sum lesser than or equal to M, then it is not possible to cover all points using that direction.

We then sum up the minimum number of photos required for each diagonal and get the result for a particular direction.

We can calculate this sum for all 4 directions and output the minimum among these.

This can be implemented in O(Dmn)
