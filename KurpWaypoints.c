#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double R, L, n;
	double l, E, X1, Y1, X2, Y2, X3, Y3, X4, Y4, Xson, Yson, Delta, Xkontrol, Ykontrol;

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
	/* Eşit aralıklı noktalar arasındaki yay uzunluğunun hesaplanması
	l = L / (n + 1); */
	l = L / (n + 1);
	printf("Eşit aralıklı noktalar arasındaki yay uzunluğunun değeri: %f\n", l);
	/* Hesaplanan “l” yay uzunluğuna karşılık gelen “ε” açı uzunluğu
	E = l / R; */
	E = l / R;
	printf("Hesaplanan “l” yay uzunluğuna karşılık gelen “ε” açı uzunluğu değeri: %f\n", E);
	/* Ara noktaların koordinatlarının hesaplanması
	X1 = R * sin(E);
	Y1 = 2 * R * ((sin(E / 2)^ 2));;
	X2 = R * sin(2 * E);
	Y2 = 2 * R * ((sin(2 * E / 2)^2));
	X3 = R * sin(3 * E);
	Y3 = 2 * R * ((sin(3 * E / 2)^2));
	X4 = R * sin(4 * E);
	Y4 = 2 * R * ((sin(4 * E / 2)^ 2));
	Xson = R * sin(5 * E);
	Yson = 2 * R * ((sin(5 * E / 2)^2)); */
	X1 = R * sin(E);
	Y1 = 2 * R * (pow(sin(E / 2), 2));;
	X2 = R * sin(2 * E);
	Y2 = 2 * R * (pow(sin(2 * E / 2), 2));
	X3 = R * sin(3 * E);
	Y3 = 2 * R * (pow(sin(3 * E / 2), 2));
	X4 = R * sin(4 * E);
	Y4 = 2 * R * (pow(sin(4 * E / 2), 2));
	Xson = R * sin(5 * E);
	Yson = 2 * R * (pow(sin(5 * E / 2), 2));
	printf("X1 değeri: %f\t Y1 değeri: %f\n", X1, Y1);
	printf("X2 değeri: %f\t Y2 değeri: %f\n", X2, Y2);
	printf("X3 değeri: %f\t Y3 değeri: %f\n", X3, Y3);
	printf("X4 değeri: %f\t Y4 değeri: %f\n", X4, Y4);
	printf("Xson değeri: %f\t Yson değeri: %f\n", Xson, Yson);
	/* Kontrol
	Δ = L / R;
	Xkontrol = R * sin(Δ);
	Ykontrol = 2 * R * ((sin(Δ / 2)^2)); */
	Delta = L / R;
	Xkontrol = R * sin(Delta);
	Ykontrol = 2 * R * (pow(sin(Delta / 2), 2));
	printf("Delta değeri: %f\n", Delta);
	printf("Xkontrol değeri: %f\n", Xkontrol);
	printf("Ykontrol değeri: %f\n", Ykontrol);

	return 0;
}
