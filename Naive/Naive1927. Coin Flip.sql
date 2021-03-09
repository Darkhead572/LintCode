/*
1927. Coin Flip
Given a coins table, the side attribute represents the front and back of the coin, p represents the front side (positive), and n represents the back side (negative)
Swap all p and n values (for example, change all p values to n and vice versa).
It is required to use only one UPDATE statement, and no intermediate temporary tables.

Table definition: coins

columns_name	type	explaination
id	int unsigned	primary key
side	char	Sides of the coin
Example
Example 1:

Table content: coins

id	side
1	p
2	n
3	p
4	n
After running the SQL statement you have written, you will get the following table:

id	side
1	n
2	p
3	n
4	p
Example 2:

Table content: coins

id	side
1	p
2	n
After running the SQL statement you have written, you will get the following table:

id	side
1	n
2	p
Notice
Tip:

You can solve this problem by learning UPDATE statement and conditional judgment related knowledge in SQL statements.
Only one UPDATE statement can be written, please do not write any SELECT statement.
We will individually verify whether the data in the database has been modified to the following information.
*/

/*
1927. 硬币翻面
给定一个 coins 表，其中的 side 属性表示硬币的正反面，p 表示正面 (positive)，n 表示反面 (negative)
交换所有的 p 和 n 值（例如，将所有 p 值改为 n，反之亦然）。
要求只使用一个更新 (UPDATE) 语句，并且没有中间的临时表。

表定义: coins (硬币表)

列名	类型	注释
id	int unsigned	主键
side	varchar	硬币的面
Example
样例一：

表内容: coins

id	side
1	p
2	n
3	p
4	n
运行你所编写的 SQL 语句之后，将会得到以下表：

id	side
1	n
2	p
3	n
4	p
样例二：

表内容: coins

id	side
1	p
2	n
运行你所编写的 SQL 语句之后，将会得到以下表：

id	side
1	n
2	p
Notice
提示：

你可以通过学习 SQL 语句中的 UPDATE 语句和条件判断相关知识来解决该问题。
只能写一个 UPDATE 语句，请不要编写任何 SELECT 语句。
我们会单独验证数据库中的数据是否都被修改为如下的信息。
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

UPDATE coins SET side = IF(side = 'n', 'p', 'n')