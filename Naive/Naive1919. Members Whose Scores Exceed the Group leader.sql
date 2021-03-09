/*
1919. Members Whose Scores Exceed the Group leader
The team table contains all the group members' name (name), their group leader (group_leader) also belongs to the group members, each group member has an id, and there is also a list of the id of the group leader corresponding to the group members.

Table definition: group_members

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	group member's name
score	int	group member's score
group_leader_id	int	group leader id
Given the group_members table, write a SQL query that can get the names of group members whose score exceeds their group leader (group_leader).

Example
Eample 1:

Table content: group_members

id	name	score	group_leader_id
1	Bryant	81	4
2	Iverson	60	1
3	Carter	51	null
4	McGrady	62	null
In the above table, Bryant is the only group member whose score exceeds his group leader.

name
Bryant
Eample 2:

Table content: group_members

id	name	score	group_leader_id
1	Bryant	81	null
2	Iverson	60	3
3	Carter	51	1
In the above table, Bryant is the only group member whose score exceeds his group leader.

name
Iverson
*/

/*
1919. 分数超过组长的组员
group_members 表包含所有的组员姓名 (name)，他们的组长 (group_leader) 也属于组员，每个组员有一个 id，此外还有一列对应组员的组长的 id

表定义: group_members （组员表）

列名	类型	注释
id	int unsigned	主键
name	varchar	组员姓名
score	int	组员分数
group_leader_id	int	组长 id
给定 group_members 表，编写一个 SQL 语句，该查询可以获取分数超过他们组长 (group_leade) 的组员的姓名。

Example
样例一：

表内容: group_members

id	name	score	group_leader_id
1	Bryant	81	4
2	Iverson	60	1
3	Carter	51	null
4	McGrady	62	null
在上述表格中，Bryant 是唯一一个分数超过他的组长的组员。

name
Bryant
样例二：

表内容: group_members

id	name	score	group_leader_id
1	Bryant	81	null
2	Iverson	60	3
3	Carter	51	1
在上述表格中，Bryant 是唯一一个分数超过他的组长的组员。

name
Iverson
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT x.name FROM group_members as x, group_members as y WHERE NOT ISNULL(x.group_leader_id) AND x.group_leader_id = y.id AND x.score > y.score