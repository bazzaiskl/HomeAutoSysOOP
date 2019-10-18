run:
	g++ heater.cpp light.cpp appliance.cpp input.cpp UI.cpp main.cpp -o exe
	./exe

test:
	g++ heater.cpp light.cpp appliance.cpp input.cpp UI.cpp main.cpp -o exe
	./exe <testIn >testOut

	diff testOut testComp
