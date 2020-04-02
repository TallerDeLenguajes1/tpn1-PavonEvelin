# Trabajo Práctico 1-PavonEvelin
- **PUNTO 1**

**El archivo .gitignore** :

- **¿Por qué es conveniente incluirlo?**

Es conveniente incluirlo porque el peso total del proyecto será mucho menor y eso redundará en un mejor mantenimiento y distribución del código.

- **¿Cuándo se debe hacer?**

Se debe hacer cuando hay código que no es necesario enviar a Git, ya sea porque sea privado para un desarrollador en concreto y no lo necesiten (o lo deban) conocer el resto de las personas.

- **¿Cómo usaria la página https://www.gitihnore.io/?**

Esta página básicamente permite escribir en un campo de búsqueda los nombres de todas las herramientas, sistemas, frameworks, lenguajes, etc. que puedas estar usando. Seleccionas todos los valores y luego generas el archivo de manera automática. Una vez generado el código de tu gitignore debemos copiarlo y pegarlo en tu archivo .gitignore, en la raiz de tu proyecto.

- **¿Cómo configuraría el archivo .gitignore?**

Configuración recomendada :
# -- Symfony2 -----------------------------------------
app/bootstrap.php.cache
app/bootstrap_cache.php.cache
app/config/parameters.ini
app/config/parameters.yml
app/cache/*
app/logs/*
vendor/*
web/bundles/*
web/css/*
web/js/*
web/uploads/*
 
# -- Composer -----------------------------------------
composer.phar
 
# -- PHPUnit ------------------------------------------
app/phpunit.xml  
 
# -- Editores -----------------------------------------
# vim
.*.sw[a-z]
*.un~
Session.vim
.netrwhist
 
# eclipse
*.pydevproject
.project
.metadata
bin/**
tmp/**
tmp/**/*
*.tmp
*.bak
*.swp
*~.nib
local.properties
.classpath
.settings/
.loadpath
.externalToolBuilders/
*.launch
.buildpath
 
# phpstorm
.idea/
 
# textmate
*.tmproj
*.tmproject
tmtags
 
# sublimetext
/*.sublime-project
*.sublime-workspace
 
# netbeans
nbproject/private/
build/
nbbuild/
dist/
nbdist/
nbactions.xml
nb-configuration.xml
 
# -- Sistemas Operativos ------------------------------
# Windows
Thumbs.db
ehthumbs.db
Desktop.ini
$RECYCLE.BIN/
 
# Linux
.*
!.gitignore
!.htaccess
*~
 
# Mac OS X
.DS_Store
.AppleDouble
.LSOverride
Icon
._*
.Spotlight-V100
.Trashes


# Explicación

Symfony2

app/bootstrap.php.cache
app/bootstrap_cache.php.cache  # sólo en Symfony 2.0
Archivos que genera Symfony2 para mejorar el rendimiento. Contienen todo el código de las clases que más se ejecutan en las aplicaciones Symfony2.

app/config/parameters.ini      # Symfony 2.0
app/config/parameters.yml      # Symfony 2.1
Archivos de configuración principales de Symfony2. Estos archivos pueden contener contraseñas y otros datos sensibles, por lo que nunca se suben al repositorio. En su lugar, crea un archivo llamado app/config/parameters.ini.dist (en Symfony 2.0) o app/config/parameters.yml.dist (en Symfony 2.1) que explique cómo debe crearlo cada usuario que utilice la aplicación.

app/cache/*

Directorio donde se generan todos los archivos temporales que mejoran el rendimiento de la aplicación. Entre otros, contiene todas las plantillas Twig compiladas a PHP, toda la información procesada de las anotaciones del código, todas las rutas compiladas a PHP, información del profiler, etc.

app/logs/*

Directorio donde se generan los archivos de log en los que Symfony2 escribe todos sus mensajes de depuración. Normalmente sólo hay un archivo de log por cada entorno de ejecución. Si no lo borras de vez en cuando, el archivo app/logs/dev.log puede llegar a ser gigantesco.

vendor/*

Directorio con todos los componentes y librerías de Symfony2. Estas dependencias nunca se suben al repositorio. Cada usuario que se baje esta aplicación, debe instalar los vendors con el comando php bin/vendors install.

web/bundles/*
web/css/*
web/js/*

Directorios donde Symfony2 vuelca todos los archivos web públicos (CSS y JavaScript) Los archivos CSS y JavaScript se regeneran en el servidor de producción con los commandos assets:install o assetic:dump.

web/uploads/*

Directorio donde se guardan los archivos subidos por los usuarios (imágenes, documentos, etc.).

**Composer**
composer.phar

Si eres de los que instalan Composer para cada aplicación Symfony2, este es el archivo creado por Composer en el directorio raíz del proyecto. Seguramente en el servidor de producción tendrás instalado Composer de forma global, tal y como se explica en la guía de instalación de Git por lo que es una buena idea excluir este archivo.

**PHPUnit**
app/phpunit.xml

Symfony2 incluye un archivo de configuración genérico para PHPUnit llamado app/phpunit.xml.dist. Normalmente cada programador crea una copia llamada app/phpunit.xml donde modifica las opciones de configuración para adaptarlas a sus necesidades particulares. Lo normal es no subir este archivo de configuración propio para que no afecte a la ejecución de los tests del resto de programadores del equipo de desarrollo.

**Editores**

Esta sección muestra los archivos más habituales creados los IDE y editores más populares para crear aplicaciones Symfony2 (vim, Eclipse, PHPStorm, TextMate, SublimeText y NetBeans).

Si utilizas un editor diferente, busca su configuración recomendada en los ejemplos del [proyecto gitignore] (https://github.com/github/gitignore).

**Sistemas Operativos**

Esta sección excluye los diferentes archivos temporales creados por los tres sistemas operativos más populares. Recuerda que es posible que tu aplicación se ejecute en diferentes sistemas operativos, así que no te quedes sólo con la configuración del sistema operativo que utilices en local.





- **PUNTO 2**

- **¿ A que se debe que los apartados b) y c) tengan el mismo resultado?**

Un puntero almacena la dirección de memoria de la variable apuntada, por lo tanto la dirección de memoria almacenada por el puntero es la misma que la dirección en la que se ubica la variable. 

- **¿Qué obtiene en el apartado d) ? ¿es igual a los anteriores? ¿por
qué?**

Obtengo la dirección de memoria del punter. No es igual a las anteriores, porque se esta mostrando la ubicación física del puntero y no el de la variable apuntada.


