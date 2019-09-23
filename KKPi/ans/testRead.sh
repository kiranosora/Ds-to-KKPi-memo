IFS0=$IFS
IFS=$'\n'
A=`ps -ef`
for line in ${A}
do
    echo "line: $line"
    break;
done
IFS=$IFS0
echo "IFS: $IFS"

