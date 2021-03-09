/*
1930. Public Rental Housing Information Query
The rooms table records tenant information (tenant_id) and rent of public rental housing
The tenants table records the name of the tenant (name)
Please write a SQL statement to query the id, rent and name of the tenant of all rooms. If there is no tenant yet, it will be null.

Table definition 1: rooms

columns_name	type	explaination
id	int unsigned	primary key
tenant_id	int	tenant's id
rent	int	rent
Table definition 2: tenants

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	tenant's name
Example
Example 1:

Table content 1: rooms

id	tenant_id	rent
1	2	300
2	3	400
3	null	300
4	1	500
Table content 2: tenants

id	name
1	zhangsan
2	lisi
3	wanger
After running your SQL statement, the table should return:

id	rent	name
1	300	lisi
2	400	wanger
3	300	null
4	500	zhangsan
Example 2:

Table content 1: rooms

id	tenant_id	rent
1	2	300
2	3	400
3	null	300
Table content 2: tenants

id	name
1	zhangsan
2	lisi
3	wanger
After running your SQL statement, the table should return:

id	rent	name
1	300	lisi
2	400	wanger
3	300	null
*/

/*
1930. 公租房信息查询
rooms 表记录了公租房的租客信息 (tenant_id) 和租金 (rent)
tenants 表记录了租客的姓名 (name)
请编写 SQL 语句，查询所有房间的id、租金和他的租房人姓名，如果还没有租客，则为 null。

表定义 1: rooms (房间表)

列名	类型	注释
id	int unsigned	主键
tenant_id	int	租客 id
rent	int	租金
表定义 2: tenants (租客表)

列名	类型	注释
id	int unsigned	主键
name	varchar	租客姓名
Example
样例一：

表内容 1: rooms

id	tenant_id	rent
1	2	300
2	3	400
3	null	300
4	1	500
表内容 2: tenants

id	name
1	zhangsan
2	lisi
3	wanger
在运行你的 SQL 语句之后，表应返回：

id	rent	name
1	300	lisi
2	400	wanger
3	300	null
4	500	zhangsan
样例二：

表内容 1: rooms

id	tenant_id	rent
1	2	300
2	3	400
3	null	300
表内容 2: tenants

id	name
1	zhangsan
2	lisi
3	wanger
在运行你的 SQL 语句之后，表应返回：

id	rent	name
1	300	lisi
2	400	wanger
3	300	null
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT rooms.id, rooms.rent, tenants.name FROM rooms LEFT JOIN tenants ON rooms.tenant_id = tenants.id