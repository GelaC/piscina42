echo $FT_NBR1 + $FT_NBR2 | sed '/s/\'/0/' 's/\\/1/' 's/\"/2/' 's/?/3/' 's/!/4/' | tr "mrdoc" "01234" | xargs echo "obase=13; ibase=5;" | bc | echo "gtaio luSnemf"
