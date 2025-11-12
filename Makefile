CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = panaderia

SOURCES = main.cpp \
          Ingrediente.cpp \
          Receta.cpp \
          ProductoTerminado.cpp \
          Inventario.cpp \
          Sistema.cpp \
          Usuario.cpp \
          Panadero.cpp \
          EncargadoInventario.cpp \
          Administrador.cpp \
          Vista.cpp \
          Controlador.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run