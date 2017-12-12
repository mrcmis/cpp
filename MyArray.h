#ifndef MYARRAY_H
#define MYARRAY_H

/*
 * klasa reprezentująca tablicę intów
 */
 
class MyArray{
 	
public:
//referencja do rozmiaru tablicy
	const int &size;
/*konstruktor ustawiajacy rozmiar
 * alokuje pamięć na size intów i przypisuje do zmiennej array
*/	
	MyArray(int size);
/*konstruktor kopiujący
 * alokuje nową tablicę i kopiuje elemnty ze starej za pomocą pętli for
 */
	MyArray(const MyArray &myArray);	
//destruktor zwlaniający pamięc po tablicy 	
	~MyArray();
//funkcja wypisujaca tablice za pomocą pętli for 	
	void print();
//funckja zwracajaca element tablicy, umozliwia ustawienie elementu	
	int &at (int index) const;
/*funkcja zmieniajaca rozmiar tablicy
 *tworzy nową tablicę o podanym rozmiarze
 * przpisuje elementy starej tablicy 
 * zwalnia pamięć po starej tablicy
 * przypisuje składowej array nową tablicę
 * zmienia rozmiar tablicy 
*/	
	void resize(int newSize);
	
private:
//rozmiar tablicy
	int trueSize;
//tablica
	int *array;
};

#endif 