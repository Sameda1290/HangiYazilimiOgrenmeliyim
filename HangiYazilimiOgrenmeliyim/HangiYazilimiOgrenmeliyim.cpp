#include "kutuphane.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	short int secenek, is, ilgi, eglence, gelisim, is_1, is_2, is_3, is_4, is_5, is_6, is_7, is_8, eglence_1, eglence_2, dongu;
	string bosluk = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	do
	{
		cout << "Hangi Programlama Dilini Öğrenmeliyim?" << "\n\t Programlamayı ne için öğrenmek istiyorsun?" << "\n\t\t1. Çocuklarım için" << "\n\t\t2. Para kazanmak için" << "\n\t\t3. Bilmiyorum sadece bir tanesini göster" << "\n\t\t4. Eğlence için" << "\n\t\t5. İlgimi çektiği için" << "\n\t\t6. Kendimi geliştirmek için" << "\nLütfen bu numaralardan birini seçin: ";
		cin >> secenek;
		if (secenek == 1)
		{
			cout << bosluk << "Cevap: Scratch ile başlayın sonrasında ise Python ile devam edin.";
		}
		else if (secenek == 2)
		{
			cout << bosluk << "Fikrin var mı ?" << endl << "\t1. yok" << endl << "\t2. var" << endl << "Lütfen birisini seçin: ";
			cin >> is;
			if (is == 1)
			{
				cout << bosluk << "İş bulmak için istiyorsun anladım.\n" << "Hangi platform / alan?" << "\n\t1. Web\n\t2. 3D / Oyun\n\t3. Mobil\n\t4. Kuruluş\n\t5. Farketmez, sadece para istiyorum!\n\t6. Büyük teknoloji şirketleri ile çalışmak istiyorum\nLütfen birisini seçin: ";
				cin >> is_1;
				if (is_1 == 1)
				{
					cout << bosluk << "Web'i seçtin.\n\t1. Front-end (Web arayüzü)\n\t2. Back-end (Web altyapısı)\nLütfen birisini seçin: ";
					cin >> is_2;
					if (is_2 == 1)
					{
						cout << bosluk << "Front-end'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";
					}
					else if (is_2 == 2)
					{
						cout << bosluk << "Back-end'i seçtin.\nÇalışma tercihin\n\t1. Kurumsal\n\t2. Startup\nLütfen birisini seç: ";
						cin >> is_3;
						if (is_3 == 1)
						{
							cout << bosluk << "Kurumsal'ı seçtin.\n\tMicrosoft hakkında ne düşünüyorsun?\n\t\t1. İyi\n\t\t2. Kötü\nLütfen birisini seç: ";
							cin >> is_4;
							if (is_4 == 1)
							{
								cout << "İyiyi seçtin.\n\tÖğrenmen gereken dil: C#";

							}
							else if (is_4 == 2)
							{
								cout << "Kötüyü seçtin.\n\tÖğrenmen gereken dil: Java";

							}
							else
							{
								cout << "Lütfen birisini seç.";

							}
						}
						else if (is_3 == 2)
						{
							cout << bosluk << "Startup'ı seçtin.\nHenüz olgunlaşmamış ancak büyük bir potansiyele sahip yeni bir şey denemek ister misin?\n\t1. Evet\n\t2. Hayır\n\t3. Emin Değilim\nLütfen birisini seçin: ";
							cin >> is_5;
							if (is_5 == 1)
							{
								cout << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

							}
							else if (is_5 == 2)
							{
								cout << "Hayır'ı seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
								cin >> is_6;
								if (is_6 == 1)
								{
									cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

								}
								else if (is_6 == 2)
								{
									cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

								}
								else if (is_6 == 3)
								{
									cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

								}
								else
								{
									cout << "Lütfen bir numara girin.";

								}
							}
							else if (is_5 == 3)
							{
								cout << "Emin değilim'i seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
								cin >> is_6;
								if (is_6 == 1)
								{
									cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

								}
								else if (is_6 == 2)
								{
									cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

								}
								else if (is_6 == 3)
								{
									cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

								}
								else
								{
									cout << "Lütfen bir numara girin.";

								}
							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else
						{
							cout << "Lütfen bir numara girin.";

						}
					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else if (is_1 == 2)
				{
					cout << "3D / Oyun'u seçtin. Öğrenmen gereken dil: C++";

				}
				else if (is_1 == 3)
				{
					cout << "Mobil'i seçtin.\n\tHangi OS?\n\t\t1. iOS\n\t\t2. Android\nLütfen birisini seçin: ";
					cin >> is_7;
					if (is_7 == 1)
					{
						cout << "iOS'u seçtin.\nÖğrenmen gereken dil: Objective-C";

					}
					else if (is_7 == 2)
					{
						cout << "Android'i seçtin.\nÖğrenmen gereken dil: Java";

					}
					else
					{
						cout << "Lütfen bir numara girin.";

					}
				}
				else if (is_1 == 4)
				{
					cout << bosluk << "Kuruluş'u seçtin.\n\tMicrosoft hakkında ne düşünüyorsun?\n\t\t1. İyi\n\t\t2. Kötü\nLütfen birisini seç: ";
					cin >> is_4;
					if (is_4 == 1)
					{
						cout << "İyiyi seçtin.\n\tÖğrenmen gereken dil: C#";

					}
					else if (is_4 == 2)
					{
						cout << "Kötüyü seçtin.\n\tÖğrenmen gereken dil: Java";

					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else if (is_1 == 5)
				{
					cout << "Farketmez, sadece para istiyorum'u seçtin.\n\tÖğrenmen gereken dil: Java";

				}
				else if (is_1 == 6)
				{
					cout << "Büyük teknoloji şirketleri ile çalışmak istiyorum'u seçtin\n\t1. Microsoft mu\n2. Apple mı\n\t3. Facebook mu\n\t4. Google mı\nLütfen birisini seçin: ";
					cin >> is_7;
					if (is_7 == 1)
					{
						cout << "Microsoft'u seçtin.\n\tÖğrenmen gereken dil: C#";

					}
					else if (is_7 == 2)
					{
						cout << "Apple'ı seçtin.\n\tÖğrenmen gereken dil: Objective-C";

					}
					else if (is_7 == 3)
					{
						cout << "Facebook'u seçtin.\n\tÖğrenmen gereken dil: Python";

					}
					else if (is_7 == 4)
					{
						cout << "Google'ı seçtin.\n\tÖğrenmen gereken dil: Python";

					}
					else
					{
						cout << "Lütfen bir numara girin.";

					}
				}
				else
				{
					cout << "Lütfen bir numara girin.";

				}
			}
			else if (is == 2)
			{
				cout << "Evet'i seçtin.\n\tHangi platform / alan?\n\t\t1. Web\n\t\t2. 3D / Oyun\n\t\t3. Mobil\n\t\t4. Kuruluş\nLütfen birisini seçin: ";
				cin >> is_1;
				if (is_1 == 1)
				{
					cout << bosluk << "Web'i seçtin.\n\tWeb uygulamanız Twitter gibi gerçek-zamanlı bilgi sağlıyor mu?\n\t\t1. Evet\n\t\t2. Hayır\nLütfen birisini seçin: ";
					cin >> is_2;
					if (is_2 == 1)
					{
						cout << bosluk << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

					}
					else if (is_2 == 2)
					{
						cout << bosluk << "Hayır'ı seçtin.\n\tHenüz olgunlaşmamış ancak büyük bir potansiyele sahip yeni bir şey denemek ister misin?\n\t\t1. Evet\n\t\t2. Hayır\n\t\t3. Emin Değilim\nLütfen birisini seçin: ";
						cin >> is_5;
						if (is_5 == 1)
						{
							cout << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

						}
						else if (is_5 == 2)
						{
							cout << "Hayır'ı seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else if (is_5 == 3)
						{
							cout << "Emin değilim'i seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else
						{
							cout << "Lütfen bir numara girin.";

						}
					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else if (is_1 == 2)
				{
					cout << "3D / Oyun'u seçtin. Öğrenmen gereken dil: C++";

				}
				else if (is_1 == 3)
				{
					cout << "Mobil'i seçtin.\n\tHangi OS?\n\t\t1. iOS\n\t\t2. Android\nLütfen birisini seçin: ";
					cin >> is_7;
					if (is_7 == 1)
					{
						cout << "iOS'u seçtin.\nÖğrenmen gereken dil: Objective-C";

					}
					else if (is_7 == 2)
					{
						cout << "Android'i seçtin.\nÖğrenmen gereken dil: Java";

					}
					else
					{
						cout << "Lütfen bir numara girin.";

					}
				}
				else if (is_1 == 4)
				{
					cout << bosluk << "Kuruluş'u seçtin.\n\tMicrosoft hakkında ne düşünüyorsun?\n\t\t1. İyi\n\t\t2. Kötü\nLütfen birisini seç: ";
					cin >> is_4;
					if (is_4 == 1)
					{
						cout << "İyiyi seçtin.\n\tÖğrenmen gereken dil: C#";

					}
					else if (is_4 == 2)
					{
						cout << "Kötüyü seçtin.\n\tÖğrenmen gereken dil: Java";

					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else
				{
					cout << "Lütfen bir numara girin.";

				}
			}
		}
		else if (secenek == 3)
		{
			cout << "Bilmiyorum, sadece bir tanesini göster'i seçtin.\n\tÖğrenmen gereken dil: Python";

		}
		else if (secenek == 4)
		{
			cout << "Eğlence için'i seçtin.\n\tAklında iyi bir fikir veya platform var mı?\n\t\t1. Hayır\n\t\t2. Evet\nLütfen birisini seçin: ";
			cin >> eglence;
			if (eglence == 1)
			{
				cout << "Evet'i seçtin.\n\tHangi platform / alan?\n\t\t1. Web\n\t\t2. 3D / Oyun\n\t\t3. Mobil\n\t\t4. Kuruluş\nLütfen birisini seçin: ";
				cin >> is_1;
				if (is_1 == 1)
				{
					cout << bosluk << "Web'i seçtin.\n\tWeb uygulamanız Twitter gibi gerçek-zamanlı bilgi sağlıyor mu?\n\t\t1. Evet\n\t\t2. Hayır\nLütfen birisini seçin: ";
					cin >> is_2;
					if (is_2 == 1)
					{
						cout << bosluk << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

					}
					else if (is_2 == 2)
					{
						cout << bosluk << "Hayır'ı seçtin.\n\tHenüz olgunlaşmamış ancak büyük bir potansiyele sahip yeni bir şey denemek ister misin?\n\t\t1. Evet\n\t\t2. Hayır\n\t\t3. Emin Değilim\nLütfen birisini seçin: ";
						cin >> is_5;
						if (is_5 == 1)
						{
							cout << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

						}
						else if (is_5 == 2)
						{
							cout << "Hayır'ı seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else if (is_5 == 3)
						{
							cout << "Emin değilim'i seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else
						{
							cout << "Lütfen bir numara girin.";

						}
					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else if (is_1 == 2)
				{
					cout << "3D / Oyun'u seçtin. Öğrenmen gereken dil: C++";

				}
				else if (is_1 == 3)
				{
					cout << "Mobil'i seçtin.\n\tHangi OS?\n\t\t1. iOS\n\t\t2. Android\nLütfen birisini seçin: ";
					cin >> is_7;
					if (is_7 == 1)
					{
						cout << "iOS'u seçtin.\nÖğrenmen gereken dil: Objective-C";
					}
					else if (is_7 == 2)
					{
						cout << "Android'i seçtin.\nÖğrenmen gereken dil: Java";
					}
					else
					{
						cout << "Lütfen bir numara girin.";
					}
				}
				else if (is_1 == 4)
				{
					cout << bosluk << "Kuruluş'u seçtin.\n\tMicrosoft hakkında ne düşünüyorsun?\n\t\t1. İyi\n\t\t2. Kötü\nLütfen birisini seç: ";
					cin >> is_4;
					if (is_4 == 1)
					{
						cout << "İyiyi seçtin.\n\tÖğrenmen gereken dil: C#";
					}
					else if (is_4 == 2)
					{
						cout << "Kötüyü seçtin.\n\tÖğrenmen gereken dil: Java";
					}
					else
					{
						cout << "Lütfen birisini seç.";
					}
				}
				else
				{
					cout << "Lütfen bir numara girin.";
				}
			}
			else if (eglence == 2)
			{
				cout << "Hayır'ı seçtin.\n\tŞöyle öğrenmek istiyorum...\n\t\t1. En kolay yoldan\n\t\t2. En iyi yoldan\n\t\t3. Biraz zor yoldan\n\t\t4. En zor yoldan\nLütfen birisini seçin: ";
				cin >> eglence_1;
				if (eglence_1 == 1)
				{
					cout << "En kolay yoldan'ı seçtin.\n\tÖğrenmen gereken dil: Python";
				}
				else if (eglence_1 == 2)
				{
					cout << "En iyi yoldan'ı seçtin\n\tÖğrenmen gereken dil: Python";
				}
				else if (eglence_1 == 3)
				{
					cout << "Biraz zor yoldan'ı seçtin.\n\t1. Otomatik vites mi?\n\t2. Manuel vites mi?\nLütfen birisini seçin: ";
					cin >> eglence_2;
					if (eglence_2 == 1)
					{
						cout << "Otomatik vites'i seçtin.\n\tÖğrenmen gereken dil: Java";
					}
					else if (eglence_2 == 2)
					{
						cout << "Manuel vitesi seçtin.\n\tÖğrenmen gereken dil: C";
					}
					else
					{
						cout << "Lütfen birisini seçin.";
					}
				}
				else if (eglence_1 == 4)
				{
					cout << "En zor yoldan'ı seçtin.\n\tÖğrenmen gereken dil: C++";
				}
				else
				{
					cout << "Lütfen birisini seçin.";
				}
			}
			else
			{
				cout << "Lütfen birisini seçin.";
			}
		}
		else if (secenek == 5)
		{
			cout << "İlgimi çektiği için'i seçtin.\n\tAklında iyi bir fikir veya platform var mı?\n\t\t1. Hayır\n\t\t2. Evet\nLütfen birisini seçin: ";
			cin >> eglence;
			if (eglence == 1)
			{
				cout << "Evet'i seçtin.\n\tHangi platform / alan?\n\t\t1. Web\n\t\t2. 3D / Oyun\n\t\t3. Mobil\n\t\t4. Kuruluş\nLütfen birisini seçin: ";
				cin >> is_1;
				if (is_1 == 1)
				{
					cout << bosluk << "Web'i seçtin.\n\tWeb uygulamanız Twitter gibi gerçek-zamanlı bilgi sağlıyor mu?\n\t\t1. Evet\n\t\t2. Hayır\nLütfen birisini seçin: ";
					cin >> is_2;
					if (is_2 == 1)
					{
						cout << bosluk << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

					}
					else if (is_2 == 2)
					{
						cout << bosluk << "Hayır'ı seçtin.\n\tHenüz olgunlaşmamış ancak büyük bir potansiyele sahip yeni bir şey denemek ister misin?\n\t\t1. Evet\n\t\t2. Hayır\n\t\t3. Emin Değilim\nLütfen birisini seçin: ";
						cin >> is_5;
						if (is_5 == 1)
						{
							cout << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

						}
						else if (is_5 == 2)
						{
							cout << "Hayır'ı seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else if (is_5 == 3)
						{
							cout << "Emin değilim'i seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else
						{
							cout << "Lütfen bir numara girin.";

						}
					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else if (is_1 == 2)
				{
					cout << "3D / Oyun'u seçtin. Öğrenmen gereken dil: C++";

				}
				else if (is_1 == 3)
				{
					cout << "Mobil'i seçtin.\n\tHangi OS?\n\t\t1. iOS\n\t\t2. Android\nLütfen birisini seçin: ";
					cin >> is_7;
					if (is_7 == 1)
					{
						cout << "iOS'u seçtin.\nÖğrenmen gereken dil: Objective-C";
					}
					else if (is_7 == 2)
					{
						cout << "Android'i seçtin.\nÖğrenmen gereken dil: Java";
					}
					else
					{
						cout << "Lütfen bir numara girin.";
					}
				}
				else if (is_1 == 4)
				{
					cout << bosluk << "Kuruluş'u seçtin.\n\tMicrosoft hakkında ne düşünüyorsun?\n\t\t1. İyi\n\t\t2. Kötü\nLütfen birisini seç: ";
					cin >> is_4;
					if (is_4 == 1)
					{
						cout << "İyiyi seçtin.\n\tÖğrenmen gereken dil: C#";
					}
					else if (is_4 == 2)
					{
						cout << "Kötüyü seçtin.\n\tÖğrenmen gereken dil: Java";
					}
					else
					{
						cout << "Lütfen birisini seç.";
					}
				}
				else
				{
					cout << "Lütfen bir numara girin.";
				}
			}
			else if (eglence == 2)
			{
				cout << "Hayır'ı seçtin.\n\tŞöyle öğrenmek istiyorum...\n\t\t1. En kolay yoldan\n\t\t2. En iyi yoldan\n\t\t3. Biraz zor yoldan\n\t\t4. En zor yoldan\nLütfen birisini seçin: ";
				cin >> eglence_1;
				if (eglence_1 == 1)
				{
					cout << "En kolay yoldan'ı seçtin.\n\tÖğrenmen gereken dil: Python";
				}
				else if (eglence_1 == 2)
				{
					cout << "En iyi yoldan'ı seçtin\n\tÖğrenmen gereken dil: Python";
				}
				else if (eglence_1 == 3)
				{
					cout << "Biraz zor yoldan'ı seçtin.\n\t1. Otomatik vites mi?\n\t2. Manuel vites mi?\nLütfen birisini seçin: ";
					cin >> eglence_2;
					if (eglence_2 == 1)
					{
						cout << "Otomatik vites'i seçtin.\n\tÖğrenmen gereken dil: Java";
					}
					else if (eglence_2 == 2)
					{
						cout << "Manuel vitesi seçtin.\n\tÖğrenmen gereken dil: C";
					}
					else
					{
						cout << "Lütfen birisini seçin.";
					}
				}
				else if (eglence_1 == 4)
				{
					cout << "En zor yoldan'ı seçtin.\n\tÖğrenmen gereken dil: C++";
				}
				else
				{
					cout << "Lütfen birisini seçin.";
				}
			}
			else
			{
				cout << "Lütfen birisini seçin.";
			}
		}
		else if (secenek == 6)
		{
			cout << "Kendimi geliştirmek için'i seçtin.\n\tAklında iyi bir fikir veya platform var mı?\n\t\t1. Hayır\n\t\t2. Evet\nLütfen birisini seçin: ";
			cin >> eglence;
			if (eglence == 1)
			{
				cout << "Evet'i seçtin.\n\tHangi platform / alan?\n\t\t1. Web\n\t\t2. 3D / Oyun\n\t\t3. Mobil\n\t\t4. Kuruluş\nLütfen birisini seçin: ";
				cin >> is_1;
				if (is_1 == 1)
				{
					cout << bosluk << "Web'i seçtin.\n\tWeb uygulamanız Twitter gibi gerçek-zamanlı bilgi sağlıyor mu?\n\t\t1. Evet\n\t\t2. Hayır\nLütfen birisini seçin: ";
					cin >> is_2;
					if (is_2 == 1)
					{
						cout << bosluk << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

					}
					else if (is_2 == 2)
					{
						cout << bosluk << "Hayır'ı seçtin.\n\tHenüz olgunlaşmamış ancak büyük bir potansiyele sahip yeni bir şey denemek ister misin?\n\t\t1. Evet\n\t\t2. Hayır\n\t\t3. Emin Değilim\nLütfen birisini seçin: ";
						cin >> is_5;
						if (is_5 == 1)
						{
							cout << "Evet'i seçtin.\n\tÖğrenmen gereken dil: JavaScript";

						}
						else if (is_5 == 2)
						{
							cout << "Hayır'ı seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else if (is_5 == 3)
						{
							cout << "Emin değilim'i seçtin.\n\tHangi oyuncaklar favoriniz?\n\t\t1. Lego\n\t\t2. Play-Doh\n\t\t3. Eski bir oyuncağım var, ancak hala çok seviyorum!\nLütfen birisini seçin: ";
							cin >> is_6;
							if (is_6 == 1)
							{
								cout << "Lego'yu seçtin.\n\tÖğrenmen gereken dil: Python";

							}
							else if (is_6 == 2)
							{
								cout << "Play-Doh'u seçtin.\n\tÖğrenmen gereken dil: Ruby";

							}
							else if (is_6 == 3)
							{
								cout << "Eski oyuncağını seçtin.\n\tÖğrenmen gereken dil: PHP";

							}
							else
							{
								cout << "Lütfen bir numara girin.";

							}
						}
						else
						{
							cout << "Lütfen bir numara girin.";

						}
					}
					else
					{
						cout << "Lütfen birisini seç.";

					}
				}
				else if (is_1 == 2)
				{
					cout << "3D / Oyun'u seçtin. Öğrenmen gereken dil: C++";

				}
				else if (is_1 == 3)
				{
					cout << "Mobil'i seçtin.\n\tHangi OS?\n\t\t1. iOS\n\t\t2. Android\nLütfen birisini seçin: ";
					cin >> is_7;
					if (is_7 == 1)
					{
						cout << "iOS'u seçtin.\nÖğrenmen gereken dil: Objective-C";
					}
					else if (is_7 == 2)
					{
						cout << "Android'i seçtin.\nÖğrenmen gereken dil: Java";
					}
					else
					{
						cout << "Lütfen bir numara girin.";
					}
				}
				else if (is_1 == 4)
				{
					cout << bosluk << "Kuruluş'u seçtin.\n\tMicrosoft hakkında ne düşünüyorsun?\n\t\t1. İyi\n\t\t2. Kötü\nLütfen birisini seç: ";
					cin >> is_4;
					if (is_4 == 1)
					{
						cout << "İyiyi seçtin.\n\tÖğrenmen gereken dil: C#";
					}
					else if (is_4 == 2)
					{
						cout << "Kötüyü seçtin.\n\tÖğrenmen gereken dil: Java";
					}
					else
					{
						cout << "Lütfen birisini seç.";
					}
				}
				else
				{
					cout << "Lütfen bir numara girin.";
				}
			}
			else if (eglence == 2)
			{
				cout << "Hayır'ı seçtin.\n\tŞöyle öğrenmek istiyorum...\n\t\t1. En kolay yoldan\n\t\t2. En iyi yoldan\n\t\t3. Biraz zor yoldan\n\t\t4. En zor yoldan\nLütfen birisini seçin: ";
				cin >> eglence_1;
				if (eglence_1 == 1)
				{
					cout << "En kolay yoldan'ı seçtin.\n\tÖğrenmen gereken dil: Python";
				}
				else if (eglence_1 == 2)
				{
					cout << "En iyi yoldan'ı seçtin\n\tÖğrenmen gereken dil: Python";
				}
				else if (eglence_1 == 3)
				{
					cout << "Biraz zor yoldan'ı seçtin.\n\t1. Otomatik vites mi?\n\t2. Manuel vites mi?\nLütfen birisini seçin: ";
					cin >> eglence_2;
					if (eglence_2 == 1)
					{
						cout << "Otomatik vites'i seçtin.\n\tÖğrenmen gereken dil: Java";
					}
					else if (eglence_2 == 2)
					{
						cout << "Manuel vitesi seçtin.\n\tÖğrenmen gereken dil: C";
					}
					else
					{
						cout << "Lütfen birisini seçin.";
					}
				}
				else if (eglence_1 == 4)
				{
					cout << "En zor yoldan'ı seçtin.\n\tÖğrenmen gereken dil: C++";
				}
				else
				{
					cout << "Lütfen birisini seçin.";
				}
			}
			else
			{
				cout << "Lütfen birisini seçin.";
			}
		}
		cout << "\nTekrar denemek ister misin?\n\t0. Hayır\n\t1. Evet\nLütfen birisini girin: ";
		cin >> dongu;
	} while (dongu == 1);
	return 0;
}


