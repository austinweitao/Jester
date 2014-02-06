CC := g++ # This is the main compiler
# CC := clang --analyze # and comment out the linker last line for sanity

CFLAGS := -g -Wall -std=c++0x

SENSOR_LIB := ../sensor/lib
SENSOR_INC := ../sensor/include
JESTER_LIB := ../lib
JESTER_INC := ../include
LIBS := -lcarmine -ljester -lpthread

TLIB := -L $(JESTER_LIB) -L $(SENSOR_LIB)
TINC := -I $(JESTER_INC) -I $(SENSOR_INC)

SkeletonVisualizer:
	@echo " Building tests"
	@echo " $(CC) $(CFLAGS) $(TINC) $@.cpp -o ../bin/$@ $(TLIB) $(LIBS)"; \
	 $(CC) $(CFLAGS) $(TINC) $@.cpp -o ../bin/$@ $(TLIB) $(LIBS)