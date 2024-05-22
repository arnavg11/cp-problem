Las Vegas

Input file: standard input Output file: standard output Time limit: 2 seconds Memory limit: 256 megabytes

Alice just won her dream trip to Las Vegas in a lucky draw. However, it was a ticket only for one. So Bob, her close friend, unfortunately cannot accompany her. The least she can do for Bob is use her recently patented high tech camera to recreate the whole of Las Vegas in VR.

The whole city can be represented as an n m grid where aij represents the complexity of the processing required to capture the monument situated at position (i,j). Let us assume the upper part of the matrix is towards the north of the city.

The camera processes the city in chunks of data and converts their pictures to 3D for the VR recreation. Due to its processing limitations, the camera can only process a chunk if the sum of complexities of all the points in the chunk is less than or equal to a certain limit M.

Standing at a point in the city, Alice can use the camera to process a chunk consisting of the next D diagonal points in a particular diagonal direction(like north-west, south-east, etc.). For example, when the chunk is processed, if Alice is at (2,2), the chosen direction is south-east and D is 3, then the points (2,2), (3,3) and (4,4) will be captured.

However, the camera’s software can stitch the images together to make a 3D virtual city only if all of them were shot in the same direction.

Since Las Vegas was built in a desert, the points surrounding the city have 0 processing complexity. Also, if Alice stands in the desert, she will not have a stable enough base to take a helpful photo. Thus, she must always stand in the city to take a photo.

Due to her camera’s limited memory, she wants to minimise the number of total photographs. Output the minimum number of photographs required and -1 if it is not possible to make a complete VR map.

Input

The first line contains 3 integers n, m, D and M(2 n;m 1000, 2 D 4106, 4 M 109), where n is the number of rows, m is the number of columns, D is the diagonal distance upto which the camera can process land and M is the maximum permissible complexity of a chunk.

The next n rows consist of m space separated integers aij (1 aij M) representing the complexity of point(i,j).

It is guaranteed that D  n  m 4  106.

Output

Output a single integer representing the minimum number of photos needed and -1 if it is not possible to make a complete map of the city.

Example



|standard input|standard output|
| - | - |
|4 4 3 16 1 4 1 5 5 8 2 6 4 9 3 9 9 2 3 9|8|

Note

In the sample test case, chunks can be taken standing on (1,1), (1,2), (1,3), (1,4), (3,2), (2,4), (3,4), (4,4)

all in the southwest direction. Note that we cannot take a chunk standing on (2,2) in the south east direction as 8 + 3 + 9 > 16.
Page 2 of 2![](Aspose.Words.9517a903-0fdf-4443-8e4f-74bc247629f9.001.png)
