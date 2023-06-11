FROM cpp_gcc
RUN mkdir /usr/src/MCT-Inisder
COPY ./Insider/MCT-Linux-Insider.cpp /usr/src/MCT-Insider
WORKDIR /usr/src/MCT
RUN g++ MCT-Linux-Insider.cpp -o MCT-Linux-Insider
CMD ["./MCT-Linux"]
