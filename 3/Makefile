CC=gcc
LIBS_DYN= -lmath_dyn
LIBS_STATIC= -lmath
LDFLAGS_DYN=-L. $(LIBS_DYN)
LDFLAGS_STATIC= -L. $(LIBS_STATIC)
AR=ar




all: main_static main_dynamic

main_dynamic: main.o libmath_dyn.so
	$(CC) -o $@ $<  $(LDFLAGS_DYN) 
main_static: main.o libmath.a
	$(CC) -o $@ $<  $(LDFLAGS_STATIC) 

%.o: %.c
	$(CC) -c -o $@ $< 
%_dyn.o: %.c
	$(CC) -c -fPIC -o $@ $<
lib%_dyn.so: %_dyn.o
	$(CC) -shared -o $@ $< 
lib%.a: %.o
	$(AR) rcs $@ $< 
clean:
	rm -f *.a *.so *.o main_static main_dynamic
