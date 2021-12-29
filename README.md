# Práctica Git

Joaquín Cerdán López

[Enlace del repositorio en gitHub](https://github.com/JoaquinCerdan/practicaGit.git)

## Alias

He creado los alias locales, se encuentran dentro de la carpeta .git, en el archivo config:
 - xek = checkout
 - ci = commit
 - st = status
 - br = branch

 He creado los alias globales, se encuentran en el archivo .gitconfig de nuestra carpeta personal (Adjunto el archivo omitiendo datos personales de la cuenta):
 - co = checkout
 - ci = commit
 - st = status
 - br = branch

## Bisect

He creado un bisect bad en un commit con un bug.

He realizado dos commits sin arreglar el bug, solo añadiendo funcionalidades.

He realizado un git reset para volver al HEAD.

Gracias a realizar el git bisect bad es mucho más fácil encontrar donde están los problemas del código.

## Hook

He activado el hook pre-commit y al realizar el commit no me dejaba ejecutarlo porque en la linea 67 encontraba un espacio en blanco. He borrado la siguiente linea:

```c++
cout << endl;
```

Tras esto he podido realizar el commit ya que la comprobación realizada por el hook era correcta.