#!/bin/bash

function commit(){
  ./jit commit
}
function help(){
  ./jit help
}
function error(){
  ./jit "${first_arg}"
}
function init(){
  ./jit init
}

first_arg="${1}"

if [[ "${first_arg}" == "help" ]]
then
  help
elif [[ "${first_arg}" == "commit" ]] 
then
  commit
elif [[ "${first_arg}" == "init" ]]
then
  init
else
  error
fi