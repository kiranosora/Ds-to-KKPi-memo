#!/bin/bash
STAT=1
VER="0.0"
PAT="[0-9].[0-9]"
while [[ $STAT -eq 1 ]]
do
    echo "please input version: "
    read VER 
    echo "VER: $VER"
    if [[ $VER =~ $PAT ]]
    then
        STAT=0
        echo "STAT: $STAT"
    fi
done
pdflatex bes3memo.tex
mv bes3memo.pdf PDF/Ds2KKPi_v${VER}.pdf
echo "destination:  PDF/Ds2KKPi_v${VER}.pdf"
