# Git in GitHub: praktična vaja in dokumentacija testnega projekta

## Naloga

Vse pojme in tehnologije, navedene v tem dokumentu, raziščite, predelajte in preizkusite na lastnem testnem projektu.

Na začetku pripravite in jasno predstavite svoj testni programski projekt. Lahko gre za preprost program, na primer kalkulator, majhno spletno aplikacijo ali skripto.

Pripravite dokumentacijo v **formatu PDF** z zaslonskimi posnetki, iz katerih je razvidno, da ste vse opisane funkcionalnosti in ukaze sami preizkusili na svojem projektu. Vse izvedene korake tudi jasno dokumentirajte. Če česa ni mogoče prikazati, zadostuje pisna dokumentacija omenjenega.

Dokumentacija bo dokaz, da ste naloge dejansko izvedli.

## Osnovni pojmi

### Osnove nadzora verzij

- Kaj je nadzor verzij in zakaj je pomemben.
- Razlike med centraliziranimi in distribuiranimi sistemi.
- Ključni pojmi: repozitorij, commit, veja (branch), združevanje (merge), kloniranje in fork.

## Osnove Gita

- Namestitev in konfiguracija Gita (uporabnik, e-poštni naslov in SSH ključi).
- Inicializacija repozitorija.
- Dodajanje sprememb v staging in potrjevanje (commit).
- Pregled zgodovine in sprememb (`git log`, `git diff`, `git status`).
- Uporaba `.gitignore` za ignoriranje datotek.

## Veje in združevanje

- Ustvarjanje in preklapljanje med vejami.
- Združevanje vej z glavno vejo.
- Reševanje konfliktov pri združevanju.
- Razlika med fast-forward in non-fast-forward merge.

## Oddaljeni repozitoriji (GitHub)

- Kloniranje oddaljenih repozitorijev.
- Dodajanje oddaljenega repozitorija (`origin`).
- Uporaba `git fetch`, `git pull` in `git push`.
- Uporaba forkov in prispevanje k javnim projektom.

## Sodelovalni potek dela

- Pull requesti (PR).
- Najboljše prakse pri pregledih kode.
- Pravila zaščite vej.
- Uporaba issues za sledenje nalogam.

## Napredna uporaba Gita

- Rebase v primerjavi z merge.
- Interaktivni rebase za čisto zgodovino.
- Cherry-picking commitov.
- `git stash` za začasno shranjevanje dela.
- Git oznake (tags) in semantično verzioniranje (semantic versioning).

## Razveljavljanje napak

- Spreminjanje commitov (`git commit --amend`).
- `git reset` (`--soft`, `--mixed`, `--hard`).
- `git revert`.
- Reševanje težav z detached HEAD.

## Sodelovanje v večjem obsegu

- Git delovni tokovi: GitFlow, GitHub Flow in trunk-based development.
- Upravljanje velikih repozitorijev (submodules in monorepos).
- Osnove CI (GitHub Actions).

## Varnost in dobre prakse

- Podpisovanje commitov (GPG).
- Izogibanje shranjevanju gesel v repozitoriju.
- Higiena `.gitignore`.
- Uporaba Dependabot ali orodij za preverjanje ranljivosti.

## Dokumentacija in komunikacija

- Pisanje jasnih commit sporočil.
- Vzdrževanje strukturiranega `README`.
- Uporaba GitHub Wiki/Projects za dokumentacijo.
