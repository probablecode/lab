FROM debian:buster
VOLUME /codeZ_demo
WORKDIR /codeZ_demo
COPY hello.c /codeZ_demo
RUN apt-get update && apt-get install -y gcc && gcc hello.c
ENTRYPOINT ["./a.out"]
