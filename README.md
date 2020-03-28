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
