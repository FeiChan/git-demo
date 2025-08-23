savedcmd_/home/cf/test/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/home/cf/test/"$$0) }' > /home/cf/test/hello.mod
