# A nivel de botones en Access

## Que es Macros

Es un conjunto de instrucciones que se ejecutan de forma automatica cuando se ejecuta una accion.

### Como crear un macro

1. Seleccionar la accion que se quiere automatizar
2. Seleccionar la opcion de grabar macro
3. Seleccionar el nombre de la macro
4. y listo eso es todo, asi de facil se crea un macro, si tienen dudas busquen en youtube o en google.

## Expresiones

Son una combinacion de valores, operadores y funciones que se evaluan para producir un resultado.

## Codigo

```vb
Private Sub CommandButton1_Click()
    Dim a As Integer
    Dim b As Integer
    Dim c As Integer
    a = 10
    b = 20
    c = a + b
    MsgBox c
End Sub
```