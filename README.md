## Laboratory work VII

Данная лабораторная работа посвещена изучению систем документирования исходного кода на примере **Doxygen**

```ShellSession
$ open https://www.stack.nl/~dimitri/doxygen/manual/index.html
```

## Tasks

- [ ] 1. Создать публичный репозиторий с названием **lab07** на сервисе **GitHub**
- [ ] 2. Выполнить инструкцию учебного материала
- [ ] 3. Ознакомиться со ссылками учебного материала
- [ ] 4. Составить отчет и отправить ссылку личным сообщением в **Slack**

## Tutorial

```ShellSession
$ export GITHUB_USERNAME=hurrybomber//создаем переменную с логином гитхаба
$ export TEACHER_EMAIL=<rusdevops@gmail.com|justcppdev@gmail.com> //переменная с почтой преподавателя
$ alias edit=<nano|vi|vim|subl> //псевдоним для текстового редактора
$ alias gsed=sed # for *-nix system //псевдоним для команды sed
```

```ShellSession
$ cd ${GITHUB_USERNAME}/workspace //переходим в каталог
$ pushd . //повзращаем текующий каталог на верхний стек
~/hurrybomber/workspace ~/hurrybomber/workspace

$ source scripts/activate //выполняем скрипты
```

```ShellSession
$ wget https://redirector.gvt1.com/edgedl/go/go1.9.2.linux-amd64.tar.gz //скачиваем go
--2018-05-13 23:58:23--  https://redirector.gvt1.com/edgedl/go/go1.9.2.linux-amd64.tar.gz
Распознаётся redirector.gvt1.com (redirector.gvt1.com)… 64.233.165.198
Подключение к redirector.gvt1.com (redirector.gvt1.com)|64.233.165.198|:443... соединение установлено.
HTTP-запрос отправлен. Ожидание ответа… 302 Found
Адрес: https://r9---sn-n8v7zn7d.gvt1.com/edgedl/go/go1.9.2.linux-amd64.tar.gz?cms_redirect=yes&ip=46.39.53.179&ipbits=0&mm=28&mn=sn-n8v7zn7d&ms=nvh&mt=1526245033&mv=m&nh=IgpwcjAyLnN2bzA1KgkxMjcuMC4wLjE&pl=24&shardbypass=yes [переход]
--2018-05-13 23:58:24--  https://r9---sn-n8v7zn7d.gvt1.com/edgedl/go/go1.9.2.linux-amd64.tar.gz?cms_redirect=yes&ip=46.39.53.179&ipbits=0&mm=28&mn=sn-n8v7zn7d&ms=nvh&mt=1526245033&mv=m&nh=IgpwcjAyLnN2bzA1KgkxMjcuMC4wLjE&pl=24&shardbypass=yes
Распознаётся r9---sn-n8v7zn7d.gvt1.com (r9---sn-n8v7zn7d.gvt1.com)… 173.194.58.24
Подключение к r9---sn-n8v7zn7d.gvt1.com (r9---sn-n8v7zn7d.gvt1.com)|173.194.58.24|:443... соединение установлено.
HTTP-запрос отправлен. Ожидание ответа… 302 Found
Адрес: https://r5---sn-4g5e6n76.gvt1.com/edgedl/go/go1.9.2.linux-amd64.tar.gz?ip=46.39.53.179&ipbits=0&pl=24&shardbypass=yes&redirect_counter=1&cm2rm=sn-n8vz77y&req_id=6b4641aae22e6822&cms_redirect=yes&mm=34&mn=sn-4g5e6n76&ms=ltu&mt=1526244921&mv=m [переход]
--2018-05-13 23:58:24--  https://r5---sn-4g5e6n76.gvt1.com/edgedl/go/go1.9.2.linux-amd64.tar.gz?ip=46.39.53.179&ipbits=0&pl=24&shardbypass=yes&redirect_counter=1&cm2rm=sn-n8vz77y&req_id=6b4641aae22e6822&cms_redirect=yes&mm=34&mn=sn-4g5e6n76&ms=ltu&mt=1526244921&mv=m
Распознаётся r5---sn-4g5e6n76.gvt1.com (r5---sn-4g5e6n76.gvt1.com)… 173.194.151.139
Подключение к r5---sn-4g5e6n76.gvt1.com (r5---sn-4g5e6n76.gvt1.com)|173.194.151.139|:443... соединение установлено.
HTTP-запрос отправлен. Ожидание ответа… 200 OK
Длина: 104247844 (99M) [application/octet-stream]
Сохранение в: «go1.9.2.linux-amd64.tar.gz»

go1.9.2.linux-amd64 100%[===================>]  99,42M  11,0MB/s    за 9,3s    

2018-05-13 23:58:34 (10,7 MB/s) - «go1.9.2.linux-amd64.tar.gz» сохранён [104247844/104247844]


$ tar -C . -xzf go1.9.2.linux-amd64.tar.gz //разархивируем
$ rm -rf go1.9.2.linux-amd64.tar.gz //удаляем архив
$ echo "export GOROOT=`pwd`/go" >> scripts/activate //записываем строчку в файл со скриптом
$ echo "export GOPATH=`pwd`/go_modules" >> scripts/activate //аналогично
$ echo "export PATH=\${PATH}:\${GOROOT}/bin" >> scripts/activate //аналогично
$ echo "export PATH=\${PATH}:\${GOPATH}/bin" >> scripts/activate //аналогично
$ source scripts/activate //выполняем скрипты
$ go get github.com/prasmussen/gdrive //устанавливаем gdrive
```

```ShellSession
$ git clone https://github.com/${GITHUB_USERNAME}/lab06 projects/lab07 //копируем репозиторий
Cloning into 'projects/lab07'...
remote: Counting objects: 45, done.
remote: Compressing objects: 100% (28/28), done.
remote: Total 45 (delta 12), reused 38 (delta 9), pack-reused 0
Unpacking objects: 100% (45/45), done.

$ cd projects/lab07 //переходим в каталог
$ git remote remove origin //управление репозиторием
$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab07 //присваиваем новое имя
```

```ShellSession
$ mkdir docs //создаем каталог docs
$ doxygen -g docs/doxygen.conf //создаем документацию по проекту
Now edit the configuration file and enter

doxygen doxygen.conf

to generate the documentation for your project

MacBook-Air-mac:docs mac$ doxygen doxygen.conf
Searching for include files...
Searching for example files...
Searching for images...
Searching for dot files...
Searching for msc files...
Searching for dia files...
Searching for files to exclude
Searching INPUT for files to process...
Searching for files in directory /Users/mac/WhiteRabbitRo/workspace/projects/lab07/docs
Reading and parsing tag files
Parsing files
Building group list...
Building directory list...
Building namespace list...
Building file list...
Building class list...
Associating documentation with classes...
Computing nesting relations for classes...
Building example list...
Searching for enumerations...
Searching for documented typedefs...
Searching for members imported via using declarations...
Searching for included using directives...
Searching for documented variables...
Building interface member list...
Building member list...
Searching for friends...
Searching for documented defines...
Computing class inheritance relations...
Computing class usage relations...
Flushing cached template relations that have become invalid...
Computing class relations...
Add enum values to enums...
Searching for member function documentation...
Creating members for template instances...
Building page list...
Search for main page...
Computing page relations...
Determining the scope of groups...
Sorting lists...
Freeing entry tree
Determining which enums are documented
Computing member relations...
Building full member lists recursively...
Adding members to member groups.
Computing member references...
Inheriting documentation...
Generating disk names...
Adding source references...
Adding xrefitems...
Sorting member lists...
Computing dependencies between directories...
Generating citations page...
Counting data structures...
Resolving user defined references...
Finding anchors and sections in the documentation...
Transferring function references...
Combining using relations...
Adding members to index pages...
Generating style sheet...
Generating search indices...
Generating example documentation...
Generating file sources...
Generating file documentation...
Generating page documentation...
Generating group documentation...
Generating class documentation...
Generating namespace index...
Generating graph info page...
Generating directory documentation...
Generating index page...
Generating page index...
Generating module index...
Generating namespace index...
Generating namespace member index...
Generating annotated compound index...
Generating alphabetical compound index...
Generating hierarchical class index...
Generating member index...
Generating file index...
Generating file member index...
Generating example index...
finalizing index lists...
writing tag file...
lookup cache used 0/65536 hits=0 misses=0
finished...

$ cat docs/doxygen.conf | less //открываем для записи
```

```ShellSession
$ gsed -i 's/\(PROJECT_NAME.*=\).*$/\1 print/g' docs/doxygen.conf //записываем в параметр "Имя проекта" новое имя
$ gsed -i 's/\(EXAMPLE_PATH.*=\).*$/\1 examples/g' docs/doxygen.conf //в "Путь к примерам" - каталог examples
$ gsed -i 's/\(INCLUDE_PATH.*=\).*$/\1 examples/g' docs/doxygen.conf //включение каталога
$ gsed -i 's/\(EXTRACT_ALL.*=\).*$/\1 YES/g' docs/doxygen.conf //извлекаем все
$ gsed -i 's/\(INPUT *=\).*$/\1 README.md include/g' docs/doxygen.conf //вывод в ридми
$ gsed -i 's/\(USE_MDFILE_AS_MAINPAGE.*=\).*$/\1 README.md/g' docs/doxygen.conf //мэйнпэйдж - ридми
$ gsed -i 's/\(OUTPUT_DIRECTORY.*=\).*$/\1 docs/g' docs/doxygen.conf //директория вывода - docs
```

```ShellSession
$ gsed -i 's/lab06/lab07/g' README.md //записываем в ридми
```

```ShellSession
# документируем функции print 
$ edit include/print.hpp //открываем print.hpp в текстовом редакторе
```

```ShellSession
$ git add . //добавляем все
$ git commit -m"added doxygen.conf" //создаем коммит
[master 0ca899e] added doxygen.conf
48 files changed, 8714 insertions(+)
create mode 100644 .DS_Store
create mode 100644 docs/.DS_Store
create mode 100644 docs/doxygen.conf
create mode 100644 html/bc_s.png
create mode 100644 html/bdwn.png
create mode 100644 html/closed.png
create mode 100644 html/doc.png
create mode 100644 html/doxygen.css
create mode 100644 html/doxygen.png
create mode 100644 html/dynsections.js
create mode 100644 html/folderclosed.png
create mode 100644 html/folderopen.png
create mode 100644 html/index.html
create mode 100644 html/jquery.js
create mode 100644 html/md__r_e_a_d_m_e.html
create mode 100644 html/menu.js
create mode 100644 html/menudata.js
create mode 100644 html/nav_f.png
create mode 100644 html/nav_g.png
create mode 100644 html/nav_h.png
create mode 100644 html/open.png
create mode 100644 html/pages.html
create mode 100644 html/search/all_0.html
create mode 100644 html/search/all_0.js
create mode 100644 html/search/close.png
create mode 100644 html/search/mag_sel.png
create mode 100644 html/search/nomatches.html
create mode 100644 html/search/pages_0.html
create mode 100644 html/search/pages_0.js
create mode 100644 html/search/search.css
create mode 100644 html/search/search.js
create mode 100644 html/search/search_l.png
create mode 100644 html/search/search_m.png
create mode 100644 html/search/search_r.png
create mode 100644 html/search/searchdata.js
create mode 100644 html/splitbar.png
create mode 100644 html/sync_off.png
create mode 100644 html/sync_on.png
create mode 100644 html/tab_a.png
create mode 100644 html/tab_b.png
create mode 100644 html/tab_h.png
create mode 100644 html/tab_s.png
create mode 100644 html/tabs.css
create mode 100644 latex/Makefile
create mode 100644 latex/doxygen.sty
create mode 100644 latex/md__r_e_a_d_m_e.tex
create mode 100644 latex/refman.tex
create mode 100644 nano.save

$ git push origin master //выгружаем на гитхаб
Counting objects: 98, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (90/90), done.
Writing objects: 100% (98/98), 240.84 KiB | 2.71 MiB/s, done.
Total 98 (delta 17), reused 0 (delta 0)
remote: Resolving deltas: 100% (17/17), done.
To https://github.com/WhiteRabbitRo/lab07
* [new branch]      master -> master

```

```ShellSession
$ travis login --auto //логинимся автоматически на трэвисе
Successfully logged in as hurrybomber!

$ travis enable //подключаем сборку
Detected repository as hurrybomber/lab07, is this correct? |yes| yes
hurrybomber/lab07: enabled :)

```

```ShellSession
$ doxygen docs/doxygen.conf //подключение документации
Searching for include files...
Searching for files in directory /Users/hurrybomber/workspace/projects/lab07/examples
Searching for example files...
Searching for files in directory /Users/hurrybomber/workspace/projects/lab07/examples
Searching for images...
Searching for dot files...
Searching for msc files...
Searching for dia files...
Searching for files to exclude
Searching INPUT for files to process...
Searching for files in directory /Users/hurrybomber/workspace/projects/lab07/include
Reading and parsing tag files
Parsing files
Reading /Users/hurrybomber/workspace/projects/lab07/README.md...
Preprocessing /Users/hurrybomber/workspace/projects/lab07/include/print.hpp...
Parsing file /Users/hurrybomber/workspace/projects/lab07/include/print.hpp...
Building group list...
Building directory list...
Building namespace list...
Building file list...
Building class list...
Associating documentation with classes...
Computing nesting relations for classes...
Building example list...
Searching for enumerations...
Searching for documented typedefs...
Searching for members imported via using declarations...
Searching for included using directives...
Searching for documented variables...
Building interface member list...
Building member list...
Searching for friends...
Searching for documented defines...
Computing class inheritance relations...
Computing class usage relations...
Flushing cached template relations that have become invalid...
Computing class relations...
Add enum values to enums...
Searching for member function documentation...
Creating members for template instances...
Building page list...
Search for main page...
Computing page relations...
Determining the scope of groups...
Sorting lists...
Freeing entry tree
Determining which enums are documented
Computing member relations...
Building full member lists recursively...
Adding members to member groups.
Computing member references...
Inheriting documentation...
Generating disk names...
Adding source references...
Adding xrefitems...
Sorting member lists...
Computing dependencies between directories...
Generating citations page...
Counting data structures...
Resolving user defined references...
Finding anchors and sections in the documentation...
Transferring function references...
Combining using relations...
Adding members to index pages...
Generating style sheet...
Generating search indices...
Generating example documentation...
Generating file sources...
Generating code for file include/print.hpp...
Generating file documentation...
Generating docs for file include/print.hpp...
Generating docs for file README.md...
Generating page documentation...
Generating group documentation...
Generating class documentation...
Generating namespace index...
Generating graph info page...
Generating directory documentation...
Generating index page...
Generating page index...
Generating module index...
Generating namespace index...
Generating namespace member index...
Generating annotated compound index...
Generating alphabetical compound index...
Generating hierarchical class index...
Generating member index...
Generating file index...
Generating file member index...
Generating example index...
finalizing index lists...
writing tag file...
lookup cache used 1/65536 hits=2 misses=1
finished...

$ ls | grep "[^docs]" | xargs rm -rf //выводим внутренние каталоги и файлы + находим на выводе строки docs + формируем список аргументов и команд (рекурсивное удаление файлов)
$ mv docs/html/* . && rm -rf docs //удаляем перемещаем файлы и удаляем
$ git checkout -b gh-pages //создаем новую ветку
M    .DS_Store
D    CMakeLists.txt
D    README.md
D    docs/.DS_Store
D    docs/doxygen.conf
D    examples/example1.cpp
D    examples/example2.cpp
D    file.txt
D    html/bc_s.png
D    html/bdwn.png
D    html/closed.png
D    html/doc.png
D    html/doxygen.css
D    html/doxygen.png
D    html/dynsections.js
D    html/folderclosed.png
D    html/folderopen.png
D    html/index.html
D    html/jquery.js
D    html/md__r_e_a_d_m_e.html
D    html/menu.js
D    html/menudata.js
D    html/nav_f.png
D    html/nav_g.png
D    html/nav_h.png
D    html/open.png
D    html/pages.html
D    html/search/all_0.html
D    html/search/all_0.js
D    html/search/close.png
D    html/search/mag_sel.png
D    html/search/nomatches.html
D    html/search/pages_0.html
D    html/search/pages_0.js
D    html/search/search.css
D    html/search/search.js
D    html/search/search_l.png
D    html/search/search_m.png
D    html/search/search_r.png
D    html/search/searchdata.js
D    html/splitbar.png
D    html/sync_off.png
D    html/sync_on.png
D    html/tab_a.png
D    html/tab_b.png
D    html/tab_h.png
D    html/tab_s.png
D    html/tabs.css
D    include/print.hpp
D    latex/Makefile
D    latex/doxygen.sty
D    latex/md__r_e_a_d_m_e.tex
D    latex/refman.tex
D    nano.save
D    sources/print.cpp
D    tests/catch.hpp
D    tests/main.cpp
D    tests/test1.cpp
Switched to a new branch 'gh-pages'

$ git add . //добавляем все
$ git commit -m"added documentation" //создаем коммит
[gh-pages f4bdc62] added documentation
76 files changed, 700 insertions(+), 17241 deletions(-)
delete mode 100644 CMakeLists.txt
delete mode 100644 README.md
rename html/index.html => _r_e_a_d_m_e_8md.html (95%)
rename html/bc_s.png => bc_s.png (100%)
rename html/bdwn.png => bdwn.png (100%)
rename html/closed.png => closed.png (100%)
create mode 100644 dir_d44c64559bbebec7f509842c48db8b23.html
rename html/doc.png => doc.png (100%)
delete mode 100644 docs/.DS_Store
delete mode 100644 docs/doxygen.conf
rename html/doxygen.css => doxygen.css (100%)
rename html/doxygen.png => doxygen.png (100%)
rename html/dynsections.js => dynsections.js (100%)
delete mode 100644 examples/example1.cpp
delete mode 100644 examples/example2.cpp
delete mode 100644 file.txt
create mode 100644 files.html
rename html/folderclosed.png => folderclosed.png (100%)
rename html/folderopen.png => folderopen.png (100%)
rename html/pages.html => globals.html (82%)
create mode 100644 globals_func.html
delete mode 100644 html/search/all_0.js
delete mode 100644 html/search/pages_0.js
delete mode 100644 html/search/searchdata.js
delete mode 100644 include/print.hpp
rename html/md__r_e_a_d_m_e.html => index.html (99%)
rename html/jquery.js => jquery.js (100%)
delete mode 100644 latex/Makefile
delete mode 100644 latex/doxygen.sty
delete mode 100644 latex/md__r_e_a_d_m_e.tex
delete mode 100644 latex/refman.tex
rename html/menu.js => menu.js (100%)
rename html/menudata.js => menudata.js (82%)
delete mode 100644 nano.save
rename html/nav_f.png => nav_f.png (100%)
rename html/nav_g.png => nav_g.png (100%)
rename html/nav_h.png => nav_h.png (100%)
rename html/open.png => open.png (100%)
create mode 100644 print_8hpp.html
create mode 100644 print_8hpp_source.html
rename {html/search => search}/all_0.html (100%)
create mode 100644 search/all_0.js
create mode 100644 search/all_1.html
create mode 100644 search/all_1.js
create mode 100644 search/all_2.html
create mode 100644 search/all_2.js
rename {html/search => search}/close.png (100%)
create mode 100644 search/files_0.html
create mode 100644 search/files_0.js
create mode 100644 search/files_1.html
create mode 100644 search/files_1.js
create mode 100644 search/functions_0.html
create mode 100644 search/functions_0.js
rename {html/search => search}/mag_sel.png (100%)
rename {html/search => search}/nomatches.html (100%)
rename {html/search => search}/pages_0.html (100%)
create mode 100644 search/pages_0.js
rename {html/search => search}/search.css (100%)
rename {html/search => search}/search.js (100%)
rename {html/search => search}/search_l.png (100%)
rename {html/search => search}/search_m.png (100%)
rename {html/search => search}/search_r.png (100%)
create mode 100644 search/searchdata.js
delete mode 100644 sources/print.cpp
rename html/splitbar.png => splitbar.png (100%)
rename html/sync_off.png => sync_off.png (100%)
rename html/sync_on.png => sync_on.png (100%)
rename html/tab_a.png => tab_a.png (100%)
rename html/tab_b.png => tab_b.png (100%)
rename html/tab_h.png => tab_h.png (100%)
rename html/tab_s.png => tab_s.png (100%)
rename html/tabs.css => tabs.css (100%)
delete mode 100644 tests/catch.hpp
delete mode 100644 tests/main.cpp
delete mode 100644 tests/test1.cpp

$ git push origin gh-pages //выгружаем новую ветку
Counting objects: 24, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (24/24), done.
Writing objects: 100% (24/24), 11.97 KiB | 1.71 MiB/s, done.
Total 24 (delta 13), reused 0 (delta 0)
remote: Resolving deltas: 100% (13/13), completed with 1 local object.
To https://github.com/WhiteRabbitRo/lab07
* [new branch]      gh-pages -> gh-pages

$ git checkout master //возвращаемся к master
Switched to branch 'master'

```

```ShellSession
$ mkdir artifacts && cd artifacts //создаем директорию для скриншота и переходим в нее
$ sleep 20s && gnome-screenshot --file artifacts/screenshot.png //скриню (с задержкой)
# for macOS: $ screencapture -T 20 artifacts/screenshot.png
# open https://${GITHUB_USERNAME}.github.io/lab07/print_8hpp.html //переходим на страницу
$ gdrive upload screenshot.png //выгружаем на gdrive скриншот
Authentication needed
Go to the following url in your browser:
https://accounts.google.com/o/oauth2/auth?access_type=offline&client_id=367116221053-7n0vf5akeru7on6o2fjinrecpdoe99eg.apps.googleusercontent.com&redirect_uri=urn%3Aietf%3Awg%3Aoauth%3A2.0%3Aoob&response_type=code&scope=https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fdrive&state=state

Enter verification code: 4/AADx6h-f8sq2jUFwCmX2m4NxzchwKgIPyQlBukzwGqw5pp1ZJg4-Zcs
Uploading screenshot.png
Uploaded 1VgdOx3Auzkt6CGeYzBzH-z5Wp_F-yDb- at 63.6 KB/s, total 126.1 KB

$ SCREENSHOT_ID=`gdrive list | grep screenshot | awk '{ print $1; }'` //создаем переменную с параметрами
$ gdrive share ${SCREENSHOT_ID} --role reader --type user --email ${TEACHER_EMAIL} //отправляем скриншот
Granted reader permission to user

$ echo https://drive.google.com/open?id=${SCREENSHOT_ID} //переходим на страницу со скриншотом
```

## Report

```ShellSession 
$ popd //возвращаемся в workspace
~/hurrybomber/workspace
$ export LAB_NUMBER=07 //создаем переменную
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER} //копируем директорию
Cloning into 'tasks/lab07'...
remote: Counting objects: 62, done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 62 (delta 0), reused 0 (delta 0), pack-reused 59
Unpacking objects: 100% (62/62), done.

$ mkdir reports/lab${LAB_NUMBER} //создаем каталог
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md //создаем отчет
$ cd reports/lab${LAB_NUMBER} //переходим в каталог
$ edit REPORT.md //заполняем отчет
$ gistup -m "lab${LAB_NUMBER}" //выгружаем в гит
```

## Links

- [HTML](https://ru.wikipedia.org/wiki/HTML)
- [LAΤΕΧ](https://ru.wikipedia.org/wiki/LaTeX)
- [man](https://ru.wikipedia.org/wiki/Man_(%D0%BA%D0%BE%D0%BC%D0%B0%D0%BD%D0%B4%D0%B0_Unix))
- [CHM](https://ru.wikipedia.org/wiki/HTMLHelp)
- [PostScript](https://ru.wikipedia.org/wiki/PostScript)

```
Copyright (c) 2017 Братья Вершинины
```
