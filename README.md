# miLenguaje

Proyecto de ejemplo de un lenguaje tipo Bash que también puede ejecutar comandos de Linux.

## Estructura
- src/: código fuente
- examples/: scripts de ejemplo
- bin/: ejecutable compilado
- include/: headers adicionales

## Cómo compilar
```bash
g++ src/*.cpp -o bin/miLenguaje
```

## Cómo usar
```bash
./bin/miLenguaje examples/ejemplo.mylang
```
