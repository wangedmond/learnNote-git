### Redis Introdution
1、默认使用0库，使用select进行切换，密码相同<BR>
2、redis使用单线程+多路复用技术，用来解决10k问题<br>

### 协议
1、resp是redis底层协议，可以用来设计客户端，hiredis是redis社区维护的客户端库

### Redis cmd
- key*
- exists key
- type key
- unlink key
- expire key 10
- ttl key

* dbsize
* select
* flushdb
* flushall

### redis string
* 可以替换memcached，二进制安全，可以存储图片或者序列化对象
* redis最基本数据类型，底层数据结构为动态字符串，超过1mb每次扩1mb，否则double，最大value512mb
* set k1 v1
* get k1
* append k1 v2
* strlen k1
* setnx k1 unv1
* set k2 1(incr k2 decr k2)(incrby k2 10  decrby k2 10)
* mset k1 v1 k2 v2
* mget k1 k2
* msetnx k1 v1 k2 v2
* set krange rangetest
* getrange krange 0 3
* set ranget krange 3 abc 
* setex k1 20 v1
* getset k1 newv1

### redis list
list是简单的字符串有序列表，底层是双向列表(QUICKLIST)，数据较少情况下会使用连续内存，此时结构为ziplist压缩列表，数据量多时会将多个压缩列表组合成快速列表，不使用传统和列表是由于会存在较多的指针，redis将列表和ziplist组合成quicklist，将多个压缩列表使用双向指针串联使用，可以满足快速插入删除操作，而且不会出现太多空间冗余，避免内存碎片。两端操作性能高，中间低，头插法 <BR>


- LPUSH/RPUSH  K1 V1 V2 V3
- lRANGE 0 -1
- LPOP RPOP
- RPOPLPUSH K2 K2
- LINDEX KEY INDEX
- LLEN K1
- LINSERT KEY BEFORE/AFTER V1 NEWV1
- LREM K1 2 V1
- LSET KEY INDEX V1


### redis set
set是string类型的无序集合，底层是一个value为null的hash表，操作复杂度为1<BR>
- SADD K1 V1 V2     //添加 
- SMEMBERS K1       //取出所有值
- SISMEMBER K1 V1    //判断是是否存在含有v1的值，存在1，不存在0
- SCARD K1  //返回个数
- SREM K1 V1 V2   //删除元素
- SPOP (pop and del)  //随机取值
- SRANDMEMBER K1 N    //随机取n个值，但是不删除
- SMOVE SOURE DESTINATION V1  //移动v1
- SINTER K1 K2
- SUNION K1 K2
- SDIFF K1 K2


### redis hash
hash是一个键值对类型，是一个string类型的filed和valuse的映射表，适合存储对象

当field-value长度较短而且个数较少时，使用zplist，否则使用hashtable

- HSET/HSETNX KEY FIELD VALUE
- HGET KEY FIELD
- HMSET K1 F1 V1 F2 V2
- HEXISTS K1 F1
- HKEYS K1
- HVALS K1

### redis sorted set
zset是一个没有重复元素的字符串集合，每个成员关联一个score，集合成员是唯一的，但是评分可以重复

ZEST底层使用了hash和跳跃表两个数据结构，hash用来关联元素value（field）和权重score（value），保障vlaue的唯一性，通过value找到对应的score。跳跃表用来给value排序，根据score的范围快速获取元素列表

- ZDD K1 SCORE1 V1 SCORE2 V2
- ZRANGE K1 0 -1 (WITHSCORES)
- ZRANGEBYSOCER K1 INDEX1 INDEX2
- ZRANGEBYSOCER K1 INDEX2 INDEX1
- ZINCRBY K1 ADDSCORE V1
- ZREM K1 V1
- ZCOUNT K1 200 300
- ZRANK K1 V1