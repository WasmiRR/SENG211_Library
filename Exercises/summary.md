# SENG211 - Object-Oriented Programming Özet Arşivi 🚀
Bu dosya, SENG211 dersi boyunca işlenen konuların, hocanın slayt tuzaklarının ve CLion'da denediğimiz pratiklerin tekil özetidir.

---

## 📌 Hafta 1: C++ Syntax ve Temelleri

### 1. Program Anatomisi ve Tokens
* **Keywords (Anahtar Kelimeler):** Dilin kendi rezerve kelimeleridir (`int`, `return`, `class`, `if` vb.). Asla değişken ismi olarak kullanılamazlar[cite: 10].
* **Identifiers (Tanımlayıcılar):** Bizim veya kütüphanelerin koyduğu isimlerdir (`main`, `vizeNotu`, `std`, `cout`)[cite: 11].
* **C++ Case-Sensitive'dir:** `score` ile `Score` tamamen farklı iki şeydir[cite: 11].

### 2. Preprocessor ve Namespaces
* `#include <iostream>` bir fonksiyon çağrısı değil, **preprocessor direktifidir**[cite: 15]. Kod derlenmeden önce alet çantasını projeye dahil eder.
* **`std::cout` Neden `std::` ile yazılır?** İsim çakışmalarını (name collision) önlemek için[cite: 17].
* ⚠️ **Kritik Kural:** Header (başlık) dosyalarında asla `using namespace std;` kullanılmaz[cite: 17]!

### 3. Değişken Tanımlama ve Güvenlik (List Initialization)
Modern C++'ta değişkenler **süslü parantez `{}`** ile tanımlanmalıdır[cite: 22]:
```cpp
int yas{20};          // Doğru ve güvenli
double ortalama{3.75}; // Doğru
-------------------------------------------------------------------

## Fundamental Tip vs Sınıf: int, double, bool, char dilin temel (fundamental) tipleridir; ancak std::string bir temel tip değil, standart kütüphane sınıfıdır. Sınavlarda "Hangisi fundamental tiptir?" sorusunun 1 numaralı tuzağıdır.


Sınavlarda kod okuma sorularında en çok buradan vururlar,
 buraya çok dikkat et:Initializer List (Süslü Parantez {}):std::vector<int> a{10}; yazıldığında vektörün içinde sadece tek bir eleman (10) bulunur.   b{10, 20, 30}; yazıldığında ise listelenen 3 eleman oluşur.   Count / Value Construction (Normal Parantez ()):std::vector<int> c(10); yazıldığında bu bir eleman değil boyuttur; yani içinde 10 tane sıfır (0) olan bir vektör oluşturur.   d(3, 7); yazıldığında ise 3 tane eleman oluşturur ve her birinin değeri 7 olur.   Özet kural: {10} ile (10) kod yazarken veya okurken tamamen farklı anlamlara gelir!   