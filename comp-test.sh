# #!/bin/bash
# for i in $(find . -type f -name "*.c") ;do if grep math.h "$i">/dev/null; then gcc -o out $i -lm ;else gcc -o out $i; fi ; done && for i in $(find . -type f -name "*.cpp") ; do g++ -o out $i  ; done  | grep error
#!/bin/bash
set -e
compile () {
  find . -type f -name "*.c" | while read -r i
  do 
    if grep math.h "$i" 2>/dev/null
    then gcc -o out "$i" -lm  2>/dev/null
    else gcc -o out "$i" 2>/dev/null
    fi 
  done 
  find . -type f -name "*.cpp" | while read -r i
  do g++ -o out "$i"  2>/dev/null
  done
}
#
if compile
then 
  echo "Successfully compiled" 
  exit 0 
else 
  echo "Couldn't compile program" >&2 
  exit 1 
fi
