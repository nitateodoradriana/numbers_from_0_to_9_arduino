# Proiect Arduino: Afișare Numere pe Display cu 7 Segmente

## 🔍 Descriere
Acest proiect folosește o placă Arduino pentru a afișa numere pe un display cu 7 segmente (de tipul 1-digit, 2-digit sau 4-digit). Scopul proiectului este de a demonstra controlul unui display numeric cu ajutorul Arduino, util pentru ceasuri, contoare, sau afișaje simple.

## 🧰 Componente necesare
- Arduino UNO / Nano / orice placă compatibilă
- Display cu 7 segmente (cu/anod comun sau catod comun)
- Rezistențe (220Ω sau 330Ω, câte una pentru fiecare segment)
- Fire de conexiune
- Placă de test (breadboard)

## 🔌 Conectare
Dacă folosești un display simplu (fără driver), segmentele A-G și punctul zecimal (DP) trebuie conectate la pinii digitali ai Arduino-ului prin rezistențe. De exemplu:

| Segment | Pin Arduino |
|---------|-------------|
| A       | D2          |
| B       | D3          |
| C       | D4          |
| D       | D5          |
| E       | D6          |
| F       | D7          |
| G       | D8          |
| DP      | D9          |

> **Notă**: Dacă folosești un display cu mai multe cifre și control prin multiplexare, va trebui să adaugi pinii de control pentru fiecare digit (ex: D10, D11 etc.).

## 🧠 Funcționalitate
- Afișează un număr între 0 și 9 pe un display cu 7 segmente.
- Dacă ai mai multe cifre, numerele sunt afișate secvențial prin multiplexare.
- Poți modifica codul pentru a afișa un contor, un ceas, temperatura etc.
