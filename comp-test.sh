# #!/bin/bash
# for i in $(find . -type f -name "*.c") ;do if grep math.h "$i">/dev/null; then gcc -o out $i -lm ;else gcc -o out $i; fi ; done && for i in $(find . -type f -name "*.cpp") ; do g++ -o out $i  ; done  | grep error
#!/bin/bash
for i in $(find . -type f -name "*.c")
        do 
                if grep math.h "$i">/dev/null
                then gcc -o out "$i" -lm 
                else gcc -o out "$i"
                fi 
        done 
for i in $(find . -type f -name "*.cpp") 
do g++ -o out "$i" 
done  

if [ $? -eq 0 ] 
then 
  echo "Successfully compiled" 
  exit 0 
else 
  echo "Could compile program" >&2 
  exit 1 
fi
