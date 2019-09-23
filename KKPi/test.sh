#!/bin/bash

date_pattern='^[0-9]{4}-((0([1-9]{1}))|(1[1|2]))-(([0-2]([0-9]{1}))|(3[0|1]))$'

test_date1='2018-06-22'
test_date2='2018-11-40'

if [[ $test_date1 =~  $date_pattern  ]]
then
    echo  "date_pattern regex math test_date1 "
fi

if [[ $test_date2 =~  $date_pattern  ]]
then
    echo  "date_pattern regex math test_date2 "
fi

if [[ $date_pattern =~  $test_date1  ]]
then
    echo  "date_pattern regex math test_date2, revert!! "
fi
