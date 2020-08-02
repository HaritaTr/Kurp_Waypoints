#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double R, L, n;

		// Bilinenleri isteyelim.
	/* R; Kurbun yarıçapı (Proje mühendisi olan harita mühendisi veya inşaat mühendisi tarafınca belirlenir.)
	L; Developman boyu
	n; Kurp üzerindeki ara nokta sayısı (sabit) */
	printf("Kurbun yarıçapı (R) değerini giriniz: ");
	scanf("%lf", &R);
	printf("Developman boyu (L) değerini giriniz: ");
	scanf("%lf", &L);
	printf("Kurp üzerindeki ara nokta sayısı (n) değerini giriniz: ");
	scanf("%lf", &n);

		// Bilinmeyenlerin hesaplanması;
	printf("\n\t=== Hesap sonuçları! === \n");
	/* 2.1.1- Eşit aralıklı noktalar arasındaki yay uzunluğunun hesaplanması

	 l = L / (n + 1);
	2.1.2- Hesaplanan “l” yay uzunluğuna karşılık gelen “ε” açı uzunluğu

	ε = l / R;
	2.1.3- Ara Noktaların Koordinatlarının hesaplanması

	 X1 = R * Sin(ε);
	 Y1 = 2 * R * ((Sin(ε / 2)^ 2));;
	X2 = R * Sin(2 * ε);
	Y2 = 2 * R * ((Sin(2 * ε / 2)^2));
	X3 = R * Sin(3 * ε);
	Y3 = 2 * R * ((Sin(3 * ε / 2)^2));
	 X4 = R * Sin(4 * ε);
	Y4 = 2 * R * ((Sin(4 * ε / 2)^ 2));
	Xson = R * Sin(5 * ε);
	Yson = 2 * R * ((Sin(5 * ε / 2)^2));
	2.1.4- Kontrol

	Δ = L / R;
	Xkontrol = R * Sin(Δ);
	Ykontrol = 2 * R * ((Sin(Δ / 2)^2)); */

	return 0;
}
