/*
1925. At Least Three Players Have Scored
There is an player_scores table with player and score
Please list all the points scored by 3 or more players

For example, in the table below, the score of 50 was obtained by Bryant, Carter, and Durant.
So it should output 50

Table definition: player_scores

columns_name	type	explaination
player	varchar	player's name
score	int	player's score
Example
Example 1:

Table content: player_scores

player	score
Jordan	63
Iverson	55
Bryant	50
Carter	50
McGrady	46
James	51
Durant	50
Wade	46
Anthony	42
Ginobili	39
After running your SQL statement, the table should return:

score
50
Example 2:

Table content: player_scores

player	score
Jordan	66
Iverson	66
Bryant	66
Carter	66
McGrady	50
James	50
Durant	50
Wade	46
Anthony	46
Ginobili	42
After running your SQL statement, the table should return:

score
50
66
*/

/*
1925. 超过3名球员所得到的分数
有一个 player_scores 表，有 player (球员) 和 score (得分)
请找到所有被三名或以上球员得过的分数

如在下面这一张表中，50 这个分数被 Bryant, Carter, Durant 三个人拿到过
所以应该输出 50

表定义: player_scores (球员得分表)

列名	类型	注释
player	varchar	球员姓名
score	int	分数
Example
样例一：

表内容: player_scores

player	score
Jordan	63
Iverson	55
Bryant	50
Carter	50
McGrady	46
James	51
Durant	50
Wade	46
Anthony	42
Ginobili	39
在运行你的 SQL 语句之后，表应返回：

score
50
样例二：

表内容: player_scores

player	score
Jordan	66
Iverson	66
Bryant	66
Carter	66
McGrady	50
James	50
Durant	50
Wade	46
Anthony	46
Ginobili	42
在运行你的 SQL 语句之后，表应返回：

score
50
66
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT score FROM player_scores GROUP By score HAVING COUNT(player) >= 3