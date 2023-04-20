### Redis Introdution
1、默认使用0库，使用select进行切换，密码相同<BR>
2、redis使用单线程+多路复用技术，用来解决10k问题<br>

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
SADD K1 V1 V1
SMEMBERS K1
SMEMBERS K1 V1
SCARD K1
SREM K1 V1 V2
SPOP