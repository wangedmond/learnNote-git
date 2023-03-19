# awk
yum install gawk
cat log | awk '{print $1}' | awk -F "." '{print $1}'| sort | uniq -c | sort -rn