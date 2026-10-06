# Konzolni kalkulator

Preprost program v jeziku C++, namenjen računanju z dvema številoma prek ukazne vrstice. Projekt uporablja CMake za gradnjo in standard C++20.

## Funkcionalnosti

- Seštevanje (`+`), odštevanje (`-`), množenje (`*`) in deljenje (`/`).
- Računanje z decimalnimi števili tipa `double`.
- Opozorilo ob poskusu deljenja z nič.
- Opozorilo ob izbiri nepodprte operacije.

## Zahteve

- CMake različice 3.16 ali novejši.
- Prevajalnik s podporo za C++20, na primer GCC ali Clang
- Orodje za gradnjo, ki ga uporablja izbrani generator CMake (na primer Make, Ninja ali Visual Studio).

## Gradnja

V korenski mapi projekta izvedi:

```sh
cmake -S . -B build
cmake --build build
```

## Zagon

Na Linuxu ali macOS:

```sh
./build/app
```

Na Windows pri generatorju z eno konfiguracijo:

```powershell
.\build\app.exe
```

Pri gradnji z Visual Studio v konfiguraciji Debug:

```powershell
.\build\Debug\app.exe
```

## Trenutna omejitev

Program še ne preverja veljavnosti številskega vnosa. Ob pozivih za števili zato vnesi veljavni številski vrednosti.

## Primer uporabe

Vnesi prvo število, operacijo in drugo število, vsako v svoji vrstici. Za izračun `12.5 + 7.5` je vnos:

```text
12.5
+
7.5
```

Pričakovani rezultat je `20`. Program nato izpiše sporočilo `Hvala za uporabo kalkulatorja.` in se zaključi. Za nov izračun ga ponovno zaženi.

## Struktura projekta

- `main.cpp` – izvorna koda kalkulatorja.
- `CMakeLists.txt` – konfiguracija gradnje.
- `README.md` – opis projekta in navodila za uporabo.
- `NAVODILA.md` – navodila za vajo.
