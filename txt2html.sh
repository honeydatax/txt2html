printf "\ec\e[44;36m\n"
cat $1 | sed y/'<'/'['/ | sed y/'>'/']'/ | sed y/'\\'/'_'/ | sed y/'#'/'-'/ | sed y/'&'/'-'/  > $1.txt
./txt2html $1.txt > $1.html
