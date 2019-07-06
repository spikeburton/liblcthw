echo "Running unit tests:"

for i in tests/*_tests
do
  if test -f $i
  then
    if ./$i 2>> tests/tests.log
    then
      echo "$i \x1B[32mPASS\033[0m"
    else
      echo "\x1B[31mERROR\033[0m in test $i: here's tests/tests.log"
      echo "------"
      tail tests/tests.log
      exit 1
    fi
  fi
done

echo ""
