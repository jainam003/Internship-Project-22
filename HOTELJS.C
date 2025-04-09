/*
					Author:Jainam ShaH
					Objective:Hotel Menu
*/
#include <stdio.h>
#include <conio.h>
#define PRICE 40
void main()
{
	int choice, south, southPrice, idli, idliPlate, dosa, dosaPlate, vada, vadaPlate, utapam, utapamPlate;
	int Russian, Beef, BeefPlate, RussianPrice, kasha, kashaPlate, Okroshka, OkroshkaPlate, Blini, BliniPlate;
	int gujarati, gujaratiPrice, roti, rotiPlate, sabji, sabjiPlate, rice, ricePlate, dal, dalPlate;
	int punjabi, chicken, chickenPlate, punjabiPrice, paratha, parathaPlate, mutton, muttonPlate;
	int rajasthani, rajasthaniPrice, biryani, biryaniPlate;
	int italian, pizza, pizzaPlate, italianPrice, wrap, wrapPlate, pasta, pastaPlate, panini, paniniPlate;
	int Maxican, MaxicanPrice, tortas, tortasPlate, tostadas, tostadasPlate, friesPlate, fries, seafoodPlate, seafood;
	int bengali, bengaliPrice, biriyani, biriyaniPlate, curry, curryPlate;
	int kashmiri, kashmiriPrice, muttonDish, muttonDishPlate, chickenDish, chickenDishPlate, kababPlate, kabab, fishDishPlate, fishDish;
	int korean, bibimbap, bibimbapPlate, koreanPrice, japchae, japchaePlate, kimchi, kimchiPlate, bulgogi, bulgogiPlate;
	int american, americanPrice, desserts, dessertsPlate, appetizers, appetizersPlate, saladPlate, salad, beveragesPlate, beverages;
	int chinese, beef, beefPlate, chinesePrice, soup, soupPlate, rolls, rollsPlate, noodles, noodlesPlate;
	int france, francePrice, drinksPlate, drinks;
	int greek, appetizer, appetizerPlate, greekPrice, platters, plattersPlate, gyro, gyroPlate;
	int thai, thaiPrice, vegAppetizers, vegAppetizersPlate, soups, soupsPlate, nonvegAppetizersPlate, nonvegAppetizers, momosPlate, momos;
	int british, bangers, bangersPlate, britishPrice, pudding, puddingPlate, mash, mashPlate, pie, piePlate;
	int indonesian, indonesianPrice, Noodels, NoodelsPlate, meatDishesPlate, meatDishes, fishPlate, fish;
	int vietnamese, vietnamesePrice;
	int middleeastern, middleeasternPrice, sandwiches, sandwichesPlate, donerPlate, doner;
	int goan, goanPrice, caldeen, caldeenPlate, caferal, caferalPlate;
	int soul, soulPrice, nachos, nachosPlate, toast, toastPlate, breadPlate, bread;
	int peruvian, peruvianPrice, Tallarines, TallarinesPlate, entradus, entradusPlate, carnesPlate, carnes, polloPlate, pollo;
	int pakistani, pakistaniPrice, kofta, koftaPlate, handi, handiPlate, kormaPlate, korma, karahiPlate, karahi;
	int Bangladeshi, BangladeshiPrice, bhajesPlate, bhajes, bhartaPlate, bharta;
	int nepali, nepaliPrice, thukpa, thukpaPlate, chat, chatPlate;

mainMenu:

	printf("\n1-----------South Cuisine");
	printf("\n2-----------Russian Cuisine");
	printf("\n3-----------Gujarati Cuisine");
	printf("\n4-----------Punjabi Cuisine");
	printf("\n5-----------Rajasthani Cuisine");
	printf("\n6-----------Italian Cuisine");
	printf("\n7-----------Maxican Cuisine");
	printf("\n8-----------Bengali Cuisine");
	printf("\n9-----------Kashmiri Cuisine");
	printf("\n10-----------Korean Cuisine");
	printf("\n11-----------American Cuisine");
	printf("\n12-----------Chinese Cuisine");
	printf("\n13-----------France Cuisine");
	printf("\n14-----------Greek Cuisine");
	printf("\n15-----------Thai Cuisine");
	printf("\n16-----------British Cuisine");
	printf("\n17-----------Indonesian Cuisine");
	printf("\n18-----------Vietnamese Cuisine");
	printf("\n19-----------Middle Eastern Cuisine");
	printf("\n20-----------Goan Cuisine");
	printf("\n21-----------Soul Cuisine");
	printf("\n22-----------Peruvian Cuisine");
	printf("\n23-----------Pakistani Cuisine");
	printf("\n24-----------Bangladeshi Cuisine");
	printf("\n25-----------Nepali Cuisine");
	printf("\n26-----------exit");

	printf("\n\nEnter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("\nYou are in South Cuisine: ");

		printf("\n1--------idli");
		printf("\n2--------dosa");
		printf("\n3--------vada");
		printf("\n4--------utapam");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &south);
		switch (south)
		{
		case 1:
			printf("\nYou selected idli in south");

			printf("\n1-------rava idli");
			printf("\n2-------rice idli");
			printf("\n3-------dahi idli");

			printf("\n\nEnter the choice: ");
			scanf("%d", &idli);
			switch (idli)
			{
			case 1:
				printf("\nYou selected rava idli in idli");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &idliPlate);
				southPrice = idliPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", idliPlate, southPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected rice idli in idli");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &idliPlate);
				southPrice = idliPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", idliPlate, southPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected dahi idli in idli");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &idliPlate);
				southPrice = idliPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", idliPlate, southPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the idli switch
			break;

		case 2:
			printf("\nYou selected dosa in south");

			printf("\n1-------rava dosa");
			printf("\n2-------masala dosa");
			printf("\n3-------cheese dosa");

			printf("\n\nEnter the choice: ");
			scanf("%d", &dosa);
			switch (dosa)
			{
			case 1:
				printf("\nYou selected rava dosa in dosa");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dosaPlate);
				southPrice = dosaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dosaPlate, southPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected masala dosa in dosa");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dosaPlate);
				southPrice = dosaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dosaPlate, southPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected cheese dosa in dosa");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dosaPlate);
				southPrice = dosaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dosaPlate, southPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the dosa switch
			break;
		case 3:
			printf("\nYou selected vada in south");

			printf("\n1-------Medu Vada");
			printf("\n2-------Dahi vadda");
			printf("\n3-------Bread vada");

			printf("\n\nEnter the choice: ");
			scanf("%d", &vada);
			switch (vada)
			{
			case 1:
				printf("\nYou selected Medu vada in vada");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &vadaPlate);
				southPrice = vadaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", vadaPlate, southPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Dahi vada in vada");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &vadaPlate);
				southPrice = vadaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", vadaPlate, southPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Bread vada in vada");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &vadaPlate);
				southPrice = vadaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", vadaPlate, southPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the vada switch
			break;
		case 4:
			printf("\nYou selected utapam in south");

			printf("\n1-------Regular utapam");
			printf("\n2-------Masala utapam");
			printf("\n3-------cheese utapam");

			printf("\n\nEnter the choice: ");
			scanf("%d", &utapam);
			switch (utapam)
			{
			case 1:
				printf("\nYou selected Regular utapam in utapam");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &utapamPlate);
				southPrice = utapamPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", utapamPlate, southPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Masala utapam in utapam");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &utapamPlate);
				southPrice = utapamPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", utapamPlate, southPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected cheese utapam in utapam");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &utapamPlate);
				southPrice = utapamPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", utapamPlate, southPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the utapam switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of south switch
		break;
		//-----------------------------------------------------------------------------------------------------------------------------------------
	case 2:
		printf("\nYou are in Russian Cuisine: ");

		printf("\n1--------Beef");
		printf("\n2--------Kasha");
		printf("\n3--------Okroshka");
		printf("\n4--------Blini");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &Russian);
		switch (Russian)
		{
		case 1:
			printf("\nYou selected Beef in Russian");

			printf("\n1-------alambre");
			printf("\n2-------bakso");
			printf("\n3-------balbucua");

			printf("\n\nEnter the choice: ");
			scanf("%d", &Beef);
			switch (Beef)
			{
			case 1:
				printf("\nYou selected alambre in Beef");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &BeefPlate);
				RussianPrice = BeefPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", BeefPlate, RussianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected bakso in Beef");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &BeefPlate);
				RussianPrice = BeefPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", BeefPlate, RussianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected balbucua in Beef");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &BeefPlate);
				RussianPrice = BeefPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", BeefPlate, RussianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the Beef switch
			break;

		case 2:
			printf("\nYou selected kasha in Russian");

			printf("\n1-------normal kasha");
			printf("\n2-------jam kasha");
			printf("\n3-------special kasha");

			printf("\n\nEnter the choice: ");
			scanf("%d", &kasha);
			switch (kasha)
			{
			case 1:
				printf("\nYou selected normal kasha in kasha");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kashaPlate);
				RussianPrice = kashaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kashaPlate, RussianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected jam kasha in kasha");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kashaPlate);
				RussianPrice = kashaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kashaPlate, RussianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected special kasha in kasha");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kashaPlate);
				RussianPrice = kashaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kashaPlate, RussianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the kasha switch
			break;
		case 3:
			printf("\nYou selected Okroshka in Russian");

			printf("\n1-------kvass");
			printf("\n2-------soup");
			printf("\n3-------cold Okroshka");

			printf("\n\nEnter the choice: ");
			scanf("%d", &Okroshka);
			switch (Okroshka)
			{
			case 1:
				printf("\nYou selected kvass in Okroshka");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &OkroshkaPlate);
				RussianPrice = OkroshkaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", OkroshkaPlate, RussianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected soup in Okroshka");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &OkroshkaPlate);
				RussianPrice = OkroshkaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", OkroshkaPlate, RussianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected cold Okroshka in Okroshka");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &OkroshkaPlate);
				RussianPrice = OkroshkaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", OkroshkaPlate, RussianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the Okroshka switch
			break;
		case 4:
			printf("\nYou selected Blini in Russian");

			printf("\n1-------butter Blini");
			printf("\n2-------sour cream Blini");
			printf("\n3-------jam Blini");

			printf("\n\nEnter the choice: ");
			scanf("%d", &Blini);
			switch (Blini)
			{
			case 1:
				printf("\nYou selected butter Blini in Blini");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &BliniPlate);
				RussianPrice = BliniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", BliniPlate, RussianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected sour cream Blini in Blini");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &BliniPlate);
				RussianPrice = BliniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", BliniPlate, RussianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected jam Blini in Blini");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &BliniPlate);
				RussianPrice = BliniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", BliniPlate, RussianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the Blini switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of Russian switch
		break;
		//--------------------------------------------------------------------------------------------------------------------------------------
	case 3:
		printf("\nYou are in Gujarati Cuisine: ");

		printf("\n1--------Roti");
		printf("\n2--------Sabji");
		printf("\n3--------Rice");
		printf("\n4--------Dal");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &gujarati);
		switch (gujarati)
		{
		case 1:
			printf("\nYou selected roti in gujarati");

			printf("\n1-------fulka roti");
			printf("\n2-------plane roti");
			printf("\n3-------makai roti");

			printf("\n\nEnter the choice: ");
			scanf("%d", &roti);
			switch (roti)
			{
			case 1:
				printf("\nYou selected fulka roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				gujaratiPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, gujaratiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected plane roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				gujaratiPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, gujaratiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected makai roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				gujaratiPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, gujaratiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the roti switch
			break;

		case 2:
			printf("\nYou selected sabji in gujarati");

			printf("\n1-------batata sabji");
			printf("\n2-------tamato sabji");
			printf("\n3-------chana sabji");

			printf("\n\nEnter the choice: ");
			scanf("%d", &sabji);
			switch (sabji)
			{
			case 1:
				printf("\nYou selected batata sabji in sabji");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sabjiPlate);
				gujaratiPrice = sabjiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sabjiPlate, gujaratiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tamato sabji in sabji");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sabjiPlate);
				gujaratiPrice = sabjiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sabjiPlate, gujaratiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected chana sabji in sabji");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sabjiPlate);
				gujaratiPrice = sabjiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sabjiPlate, gujaratiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the sabji switch
			break;
		case 3:
			printf("\nYou selected rice in gujarati");

			printf("\n1-------plain rice");
			printf("\n2-------jeera rice");
			printf("\n3-------masala rice");

			printf("\n\nEnter the choice: ");
			scanf("%d", &rice);
			switch (rice)
			{
			case 1:
				printf("\nYou selected plain rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				gujaratiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, gujaratiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected jeera rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				gujaratiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, gujaratiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected masala  rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				gujaratiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, gujaratiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the rice switch
			break;
		case 4:
			printf("\nYou selected dal in gujarati");

			printf("\n1-------Regular dal");
			printf("\n2-------Masala dal");
			printf("\n3-------fry dal");

			printf("\n\nEnter the choice: ");
			scanf("%d", &dal);
			switch (dal)
			{
			case 1:
				printf("\nYou selected Regular dal in dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				gujaratiPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, gujaratiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Masala dal in dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				gujaratiPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, gujaratiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected fry dal in dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				gujaratiPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, gujaratiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the dal switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of gujarati switch
		break;
		//-------------------------------------------------------------------------------------------------------------------------------------
	case 4:
		printf("\nYou are in punjabi Cuisine: ");

		printf("\n1--------chicken");
		printf("\n2--------paratha");
		printf("\n3--------mutton");
		printf("\n4--------rice");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &punjabi);
		switch (punjabi)
		{
		case 1:
			printf("\nYou selected chicken in punjabi");

			printf("\n1-------butter");
			printf("\n2-------tandori");
			printf("\n3-------tikki");

			printf("\n\nEnter the choice: ");
			scanf("%d", &chicken);
			switch (chicken)
			{
			case 1:
				printf("\nYou selected butter in chicken");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenPlate);
				punjabiPrice = chickenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenPlate, punjabiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tandori in chicken");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenPlate);
				punjabiPrice = chickenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenPlate, punjabiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected tikki in chicken");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenPlate);
				punjabiPrice = chickenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenPlate, punjabiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the chicken switch
			break;

		case 2:
			printf("\nYou selected paratha in punjabi");

			printf("\n1-------normal paratha");
			printf("\n2-------jam paratha");
			printf("\n3-------special paratha");

			printf("\n\nEnter the choice: ");
			scanf("%d", &paratha);
			switch (paratha)
			{
			case 1:
				printf("\nYou selected normal paratha in paratha");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &parathaPlate);
				punjabiPrice = parathaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", parathaPlate, punjabiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected jam paratha in paratha");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &parathaPlate);
				punjabiPrice = parathaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", parathaPlate, punjabiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected special paratha in paratha");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &parathaPlate);
				punjabiPrice = parathaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", parathaPlate, punjabiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the paratha switch
			break;
		case 3:
			printf("\nYou selected mutton in punjabi");

			printf("\n1-------seekh");
			printf("\n2-------barra");
			printf("\n3-------pepper mutton");

			printf("\n\nEnter the choice: ");
			scanf("%d", &mutton);
			switch (mutton)
			{
			case 1:
				printf("\nYou selected seekh in mutton");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &muttonPlate);
				punjabiPrice = muttonPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", muttonPlate, punjabiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected barra in mutton");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &muttonPlate);
				punjabiPrice = muttonPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", muttonPlate, punjabiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected pepper mutton in mutton");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &muttonPlate);
				punjabiPrice = muttonPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", muttonPlate, punjabiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the mutton switch
			break;
		case 4:
			printf("\nYou selected rice in punjabi");

			printf("\n1-------steamed rice");
			printf("\n2-------jeera rice");
			printf("\n3-------curd rice");

			printf("\n\nEnter the choice: ");
			scanf("%d", &rice);
			switch (rice)
			{
			case 1:
				printf("\nYou selected steamed rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				punjabiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, punjabiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  jeera rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				punjabiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, punjabiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected curd rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				punjabiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, punjabiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the rice switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of punjabi switch
		break;
		//------------------------------------------------------------------------------------------------------------------------------------------
	case 5:
		printf("\nYou are in rajasthani Cuisine: ");

		printf("\n1--------Roti");
		printf("\n2--------Sabji");
		printf("\n3--------Biryani");
		printf("\n4--------Dal");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &rajasthani);
		switch (rajasthani)
		{
		case 1:
			printf("\nYou selected roti in rajasthani");

			printf("\n1-------Batti ");
			printf("\n2-------Bafla roti");
			printf("\n3-------makai roti");

			printf("\n\nEnter the choice: ");
			scanf("%d", &roti);
			switch (roti)
			{
			case 1:
				printf("\nYou selected batti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				rajasthaniPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, rajasthaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected baflaroti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				rajasthaniPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, rajasthaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected makai roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				rajasthaniPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, rajasthaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the roti switch
			break;

		case 2:
			printf("\nYou selected sabji in rajasthani");

			printf("\n1-------Gatte sabji");
			printf("\n2-------papad sabji");
			printf("\n3-------sangri sabji");

			printf("\n\nEnter the choice: ");
			scanf("%d", &sabji);
			switch (sabji)
			{
			case 1:
				printf("\nYou selected Gattte sabji in sabji");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sabjiPlate);
				rajasthaniPrice = sabjiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sabjiPlate, rajasthaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected papad sabji in sabji");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sabjiPlate);
				rajasthaniPrice = sabjiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sabjiPlate, rajasthaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected sangri sabji in sabji");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sabjiPlate);
				rajasthaniPrice = sabjiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sabjiPlate, rajasthaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the sabji switch
			break;
		case 3:
			printf("\nYou selected Biryani in rajasthani");

			printf("\n1-------regular biryani");
			printf("\n2-------vegetable biryani");
			printf("\n3-------masoor biryani");

			printf("\n\nEnter the choice: ");
			scanf("%d", &biryani);
			switch (biryani)
			{
			case 1:
				printf("\nYou selected regular biryani in biryani");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &biryaniPlate);
				rajasthaniPrice = biryaniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", biryaniPlate, rajasthaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected vegetable biryani in biryani");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &biryaniPlate);
				rajasthaniPrice = biryaniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", biryaniPlate, rajasthaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected masoor biryani in biryani");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &biryaniPlate);
				rajasthaniPrice = biryaniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", biryaniPlate, rajasthaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the biryani switch
			break;
		case 4:
			printf("\nYou selected dal in rajasthani");

			printf("\n1-------Regular dal");
			printf("\n2-------Masala dal");
			printf("\n3-------fry dal");

			printf("\n\nEnter the choice: ");
			scanf("%d", &dal);
			switch (dal)
			{
			case 1:
				printf("\nYou selected Regular dal in dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				rajasthaniPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, rajasthaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Masala dal in dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				rajasthaniPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, rajasthaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected fry dal in dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				rajasthaniPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, rajasthaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the dal switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of rajasthani switch
		break;
		//-----------------------------------------------------------------------------------------------------------------------------------------------
	case 6:
		printf("\nYou are in italian Cuisine: ");

		printf("\n1--------pizza");
		printf("\n2--------wrap");
		printf("\n3--------pasta");
		printf("\n4--------panini");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &italian);
		switch (italian)
		{
		case 1:
			printf("\nYou selected pizza in italian");

			printf("\n1-------margherita");
			printf("\n2-------sausage");
			printf("\n3-------mushroom");

			printf("\n\nEnter the choice: ");
			scanf("%d", &pizza);
			switch (pizza)
			{
			case 1:
				printf("\nYou selected margherita in pizza");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pizzaPlate);
				italianPrice = pizzaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pizzaPlate, italianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected sausage in pizza");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pizzaPlate);
				italianPrice = pizzaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pizzaPlate, italianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected mushroom in pizza");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pizzaPlate);
				italianPrice = pizzaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pizzaPlate, italianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the pizza switch
			break;

		case 2:
			printf("\nYou selected wrap in italian");

			printf("\n1-------turkey wrap");
			printf("\n2-------tuna wrap");
			printf("\n3-------crispy wrap");

			printf("\n\nEnter the choice: ");
			scanf("%d", &wrap);
			switch (wrap)
			{
			case 1:
				printf("\nYou selected turkey wrap in wrap");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &wrapPlate);
				italianPrice = wrapPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", wrapPlate, italianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tuna wrap in wrap");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &wrapPlate);
				italianPrice = wrapPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", wrapPlate, italianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected crispy wrap in wrap");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &wrapPlate);
				italianPrice = wrapPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", wrapPlate, italianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the wrap switch
			break;
		case 3:
			printf("\nYou selected pasta in italian");

			printf("\n1-------lasagna");
			printf("\n2-------penne");
			printf("\n3-------red pasta");

			printf("\n\nEnter the choice: ");
			scanf("%d", &pasta);
			switch (pasta)
			{
			case 1:
				printf("\nYou selected lasagna in pasta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pastaPlate);
				italianPrice = pastaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pastaPlate, italianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected penne in pasta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pastaPlate);
				italianPrice = pastaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pastaPlate, italianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected red pasta in pasta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pastaPlate);
				italianPrice = pastaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pastaPlate, italianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the pasta switch
			break;
		case 4:
			printf("\nYou selected panini in italian");

			printf("\n1-------grilled panini");
			printf("\n2-------ham panini");
			printf("\n3-------swiss panini");

			printf("\n\nEnter the choice: ");
			scanf("%d", &panini);
			switch (panini)
			{
			case 1:
				printf("\nYou selected grilled panini in panini");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &paniniPlate);
				italianPrice = paniniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", paniniPlate, italianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  ham panini in panini");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &paniniPlate);
				italianPrice = paniniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", paniniPlate, italianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected swiss panini in panini");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &paniniPlate);
				italianPrice = paniniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", paniniPlate, italianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the panini switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of italian switch
		break;
		//---------------------------------------------------------------------------------------------------------------------------------------------
	case 7:
		printf("\nYou are in Maxican Cuisine: ");

		printf("\n1--------Tostadas");
		printf("\n2--------Seafood");
		printf("\n3--------Tortas");
		printf("\n4--------Fries");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &Maxican);
		switch (Maxican)
		{
		case 1:
			printf("\nYou selected tostadas in Maxican");

			printf("\n1-------Bean tostadas ");
			printf("\n2-------Beef tostadas");
			printf("\n3-------chicken tostadas");

			printf("\n\nEnter the choice: ");
			scanf("%d", &tostadas);
			switch (tostadas)
			{
			case 1:
				printf("\nYou selected bean tostadas in tostadas");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &tostadasPlate);
				MaxicanPrice = tostadasPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", tostadasPlate, MaxicanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected beef tostadas in tostadas");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &tostadasPlate);
				MaxicanPrice = tostadasPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", tostadasPlate, MaxicanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected chicken tostadas in tostadas");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &tostadasPlate);
				MaxicanPrice = tostadasPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", tostadasPlate, MaxicanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the tostadas switch
			break;

		case 2:
			printf("\nYou selected seafood in Maxican");

			printf("\n1-------fried shrimp seafood");
			printf("\n2-------shrimp cocktail seafood");
			printf("\n3-------saven sea soup seafood");

			printf("\n\nEnter the choice: ");
			scanf("%d", &seafood);
			switch (seafood)
			{
			case 1:
				printf("\nYou selected fried shrimp seafood in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				MaxicanPrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, MaxicanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected shrimp cocktail seafood in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				MaxicanPrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, MaxicanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected saven sea soup seafood in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				MaxicanPrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, MaxicanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the seafood switch
			break;
		case 3:
			printf("\nYou selected tortas in Maxican");

			printf("\n1-------machaca tortas");
			printf("\n2-------chorizo tortas");
			printf("\n3-------cheese tortas");

			printf("\n\nEnter the choice: ");
			scanf("%d", &tortas);
			switch (tortas)
			{
			case 1:
				printf("\nYou selected machaca tortas in tortas");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &tortasPlate);
				MaxicanPrice = tortasPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", tortasPlate, MaxicanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected chorizo tortas in tortas");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &tortasPlate);
				MaxicanPrice = tortasPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", tortasPlate, MaxicanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected cheese tortas in tortas");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &tortasPlate);
				MaxicanPrice = tortasPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", tortasPlate, MaxicanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the tortas switch
			break;
		case 4:
			printf("\nYou selected fries in Maxican");

			printf("\n1-------cheese fries");
			printf("\n2-------salsa fries");
			printf("\n3-------plain fries");

			printf("\n\nEnter the choice: ");
			scanf("%d", &fries);
			switch (fries)
			{
			case 1:
				printf("\nYou selected cheese fries in fries");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &friesPlate);
				MaxicanPrice = friesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", friesPlate, MaxicanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected salsa fries in fries");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &friesPlate);
				MaxicanPrice = friesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", friesPlate, MaxicanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected plain fries in fries");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &friesPlate);
				MaxicanPrice = friesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", friesPlate, MaxicanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the fries switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of Maxican switch
		break;
		//------------------------------------------------------------------------------------------------------------------------------------
	case 8:
		printf("\nYou are in bengali Cuisine: ");

		printf("\n1--------fries");
		printf("\n2--------biriyani");
		printf("\n3--------curry");
		printf("\n4--------roti");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &bengali);
		switch (bengali)
		{
		case 1:
			printf("\nYou selected fries in bengali");

			printf("\n1-------fish");
			printf("\n2-------prown");
			printf("\n3-------dimer");

			printf("\n\nEnter the choice: ");
			scanf("%d", &fries);
			switch (fries)
			{
			case 1:
				printf("\nYou selected fish in fries");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &friesPlate);
				bengaliPrice = friesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", friesPlate, bengaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected prown in fries");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &friesPlate);
				bengaliPrice = friesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", friesPlate, bengaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected dimer in fries");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &friesPlate);
				bengaliPrice = friesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", friesPlate, bengaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the fries switch
			break;

		case 2:
			printf("\nYou selected biriyani in bengali");

			printf("\n1-------mutton biriyani");
			printf("\n2-------chicken biriyani");
			printf("\n3-------dhakai biriyani");

			printf("\n\nEnter the choice: ");
			scanf("%d", &biriyani);
			switch (biriyani)
			{
			case 1:
				printf("\nYou selected mutton biriyani in biriyani");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &biriyaniPlate);
				bengaliPrice = biriyaniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", biriyaniPlate, bengaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected chicken biriyani in biriyani");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &biriyaniPlate);
				bengaliPrice = biriyaniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", biriyaniPlate, bengaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected dhakai biriyani in biriyani");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &biriyaniPlate);
				bengaliPrice = biriyaniPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", biriyaniPlate, bengaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the biriyani switch
			break;
		case 3:
			printf("\nYou selected curry in bengali");

			printf("\n1-------veg");
			printf("\n2-------egg");
			printf("\n3-------normal curry");

			printf("\n\nEnter the choice: ");
			scanf("%d", &curry);
			switch (curry)
			{
			case 1:
				printf("\nYou selected veg in curry");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &curryPlate);
				bengaliPrice = curryPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", curryPlate, bengaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected egg in curry");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &curryPlate);
				bengaliPrice = curryPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", curryPlate, bengaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected normal curry in curry");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &curryPlate);
				bengaliPrice = curryPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", curryPlate, bengaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the curry switch
			break;
		case 4:
			printf("\nYou selected roti in bengali");

			printf("\n1-------butter roti");
			printf("\n2-------kulcha roti");
			printf("\n3-------aalu roti");

			printf("\n\nEnter the choice: ");
			scanf("%d", &roti);
			switch (roti)
			{
			case 1:
				printf("\nYou selected butter roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				bengaliPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, bengaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  kulcha roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				bengaliPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, bengaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected aalu roti in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				bengaliPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, bengaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the roti switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of bengali switch
		break;
		//----------------------------------------------------------------------------------------------------------------------------------
	case 9:
		printf("\nYou are in kashmiri Cuisine: ");

		printf("\n1--------ChickenDish");
		printf("\n2--------FishDish");
		printf("\n3--------MuttonDish");
		printf("\n4--------Kabab");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &kashmiri);
		switch (kashmiri)
		{
		case 1:
			printf("\nYou selected chickenDish in kashmiri");

			printf("\n1-------Waaza kokur ");
			printf("\n2-------kokur rogan josh");
			printf("\n3-------palak kokur");

			printf("\n\nEnter the choice: ");
			scanf("%d", &chickenDish);
			switch (chickenDish)
			{
			case 1:
				printf("\nYou selected waaza kokur in chickenDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenDishPlate);
				kashmiriPrice = chickenDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenDishPlate, kashmiriPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected kokur rogan josh in chickenDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenDishPlate);
				kashmiriPrice = chickenDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenDishPlate, kashmiriPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  palak kokur in chickenDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenDishPlate);
				kashmiriPrice = chickenDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenDishPlate, kashmiriPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the chickenDish switch
			break;

		case 2:
			printf("\nYou selected fishDish in kashmiri");

			printf("\n1------- Haak Gadh ");
			printf("\n2------- Nadur Gadh");
			printf("\n3-------Yakhin");

			printf("\n\nEnter the choice: ");
			scanf("%d", &fishDish);
			switch (fishDish)
			{
			case 1:
				printf("\nYou selected haak in fishDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &fishDishPlate);
				kashmiriPrice = fishDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", fishDishPlate, kashmiriPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Nadur gadh in fishDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &fishDishPlate);
				kashmiriPrice = fishDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", fishDishPlate, kashmiriPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Yakhin in fishDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &fishDishPlate);
				kashmiriPrice = fishDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", fishDishPlate, kashmiriPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the fishDish switch
			break;
		case 3:
			printf("\nYou selected muttonDish in kashmiri");

			printf("\n1-------Yakhni muttonDish");
			printf("\n2-------Roga Josh muttonDish");
			printf("\n3-------Michi Korma muttonDish");

			printf("\n\nEnter the choice: ");
			scanf("%d", &muttonDish);
			switch (muttonDish)
			{
			case 1:
				printf("\nYou selected Yakhni muttonDish in muttonDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &muttonDishPlate);
				kashmiriPrice = muttonDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", muttonDishPlate, kashmiriPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Roga Josh muttonDish in muttonDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &muttonDishPlate);
				kashmiriPrice = muttonDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", muttonDishPlate, kashmiriPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Mirchi Korma muttonDish in muttonDish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &muttonDishPlate);
				kashmiriPrice = muttonDishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", muttonDishPlate, kashmiriPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the muttonDish switch
			break;
		case 4:
			printf("\nYou selected kabab in kashmiri");

			printf("\n1-------muttton kabab");
			printf("\n2-------tabak kabab");
			printf("\n3------- shammi kabab");

			printf("\n\nEnter the choice: ");
			scanf("%d", &kabab);
			switch (kabab)
			{
			case 1:
				printf("\nYou selected mutton kabab in kabab");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kababPlate);
				kashmiriPrice = kababPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kababPlate, kashmiriPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tabak kabab in kabab");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kababPlate);
				kashmiriPrice = kababPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kababPlate, kashmiriPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected shammi kabab in kabab");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kababPlate);
				kashmiriPrice = kababPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kababPlate, kashmiriPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the kabab switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of kashmiri switch
		break;
		//-------------------------------------------------------------------------------------------------------------------------------
	case 10:
		printf("\nYou are in korean Cuisine: ");

		printf("\n1--------bibimbap");
		printf("\n2--------japchae");
		printf("\n3--------kimchi");
		printf("\n4--------bulgogi");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &korean);
		switch (korean)
		{
		case 1:
			printf("\nYou selected bibimbap in korean");

			printf("\n1-------jinja");
			printf("\n2-------soy");
			printf("\n3-------jeonju");

			printf("\n\nEnter the choice: ");
			scanf("%d", &bibimbap);
			switch (bibimbap)
			{
			case 1:
				printf("\nYou selected jinja in bibimbap");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bibimbapPlate);
				koreanPrice = bibimbapPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bibimbapPlate, koreanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected soy in bibimbap");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bibimbapPlate);
				koreanPrice = bibimbapPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bibimbapPlate, koreanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected jeonju in bibimbap");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bibimbapPlate);
				koreanPrice = bibimbapPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bibimbapPlate, koreanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the bibimbap switch
			break;

		case 2:
			printf("\nYou selected japchae in korean");

			printf("\n1-------gochu japchae");
			printf("\n2-------buchu japchae");
			printf("\n3-------beoseot japchae");

			printf("\n\nEnter the choice: ");
			scanf("%d", &japchae);
			switch (japchae)
			{
			case 1:
				printf("\nYou selected gochu japchae in japchae");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &japchaePlate);
				koreanPrice = japchaePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", japchaePlate, koreanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected buchu japchae in japchae");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &japchaePlate);
				koreanPrice = japchaePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", japchaePlate, koreanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected beoseot japchae in japchae");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &japchaePlate);
				koreanPrice = japchaePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", japchaePlate, koreanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the japchae switch
			break;
		case 3:
			printf("\nYou selected kimchi in korean");

			printf("\n1-------baek");
			printf("\n2-------nabak");
			printf("\n3-------kakdugi kimchi");

			printf("\n\nEnter the choice: ");
			scanf("%d", &kimchi);
			switch (kimchi)
			{
			case 1:
				printf("\nYou selected baek in kimchi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kimchiPlate);
				koreanPrice = kimchiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kimchiPlate, koreanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected nabak in kimchi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kimchiPlate);
				koreanPrice = kimchiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kimchiPlate, koreanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected kakdugi kimchi in kimchi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kimchiPlate);
				koreanPrice = kimchiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kimchiPlate, koreanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the kimchi switch
			break;
		case 4:
			printf("\nYou selected bulgogi in korean");

			printf("\n1-------simple bulgogi");
			printf("\n2-------eonyang bulgogi");
			printf("\n3-------gwanyang bulgogi");

			printf("\n\nEnter the choice: ");
			scanf("%d", &bulgogi);
			switch (bulgogi)
			{
			case 1:
				printf("\nYou selected simple bulgogi in bulgogi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bulgogiPlate);
				koreanPrice = bulgogiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bulgogiPlate, koreanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  eonyang bulgogi in bulgogi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bulgogiPlate);
				koreanPrice = bulgogiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bulgogiPlate, koreanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected gwanyang bulgogi in bulgogi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bulgogiPlate);
				koreanPrice = bulgogiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bulgogiPlate, koreanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the bulgogi switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of korean switch
		break;
		//----------------------------------------------------------------------------------------------------------------------------------
	case 11:
		printf("\nYou are in american Cuisine: ");

		printf("\n1--------appetizers");
		printf("\n2--------beverages");
		printf("\n3--------desserts");
		printf("\n4--------salad");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &american);
		switch (american)
		{
		case 1:
			printf("\nYou selected appetizers in american");

			printf("\n1-------Mozzarella stricks ");
			printf("\n2-------Stuffed poppers");
			printf("\n3-------Sampler platter");

			printf("\n\nEnter the choice: ");
			scanf("%d", &appetizers);
			switch (appetizers)
			{
			case 1:
				printf("\nYou selected Mozzarella stricks in appetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizersPlate);
				americanPrice = appetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizersPlate, americanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Stuffed poppers in appetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizersPlate);
				americanPrice = appetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizersPlate, americanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Sampler platter in appetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizersPlate);
				americanPrice = appetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizersPlate, americanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the appetizers switch
			break;

		case 2:
			printf("\nYou selected beverages in american");

			printf("\n1------- Coffee ");
			printf("\n2------- Ice tea");
			printf("\n3-------Hot cocoa");

			printf("\n\nEnter the choice: ");
			scanf("%d", &beverages);
			switch (beverages)
			{
			case 1:
				printf("\nYou selected coffee in beverages");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &beveragesPlate);
				americanPrice = beveragesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", beveragesPlate, americanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Ice tea in beverages");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &beveragesPlate);
				americanPrice = beveragesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", beveragesPlate, americanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Hot cocoa in beverages");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &beveragesPlate);
				americanPrice = beveragesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", beveragesPlate, americanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the beverages switch
			break;
		case 3:
			printf("\nYou selected desserts in american");

			printf("\n1-------Chocolate cake");
			printf("\n2-------Cocont flan");
			printf("\n3-------Banana split");

			printf("\n\nEnter the choice: ");
			scanf("%d", &desserts);
			switch (desserts)
			{
			case 1:
				printf("\nYou selected Chocolate cake in desserts");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dessertsPlate);
				americanPrice = dessertsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dessertsPlate, americanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Cocont flan in desserts");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dessertsPlate);
				americanPrice = dessertsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dessertsPlate, americanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Banana split in desserts");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dessertsPlate);
				americanPrice = dessertsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dessertsPlate, americanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the desserts switch
			break;
		case 4:
			printf("\nYou selected salad in american");

			printf("\n1------- House special salad");
			printf("\n2------- Spinach salad");
			printf("\n3------- Cranberry salad");

			printf("\n\nEnter the choice: ");
			scanf("%d", &salad);
			switch (salad)
			{
			case 1:
				printf("\nYou selected House specia salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				americanPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, americanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Spinach salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				americanPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, americanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Cranberry salad salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				americanPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, americanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the salad switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of american switch
		break;
		//----------------------------------------------------------------------------------------------------------------------------------------------
	case 12:
		printf("\nYou are in chinese Cuisine: ");

		printf("\n1--------beef");
		printf("\n2--------soup");
		printf("\n3--------rolls");
		printf("\n4--------noodles");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &chinese);
		switch (chinese)
		{
		case 1:
			printf("\nYou selected beef in chinese");

			printf("\n1-------curry");
			printf("\n2-------garlic");
			printf("\n3-------chili");

			printf("\n\nEnter the choice: ");
			scanf("%d", &beef);
			switch (beef)
			{
			case 1:
				printf("\nYou selected curry in beef");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &beefPlate);
				chinesePrice = beefPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", beefPlate, chinesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected garlic in beef");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &beefPlate);
				chinesePrice = beefPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", beefPlate, chinesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected chili in beef");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &beefPlate);
				chinesePrice = beefPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", beefPlate, chinesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the beef switch
			break;

		case 2:
			printf("\nYou selected soup in chinese");

			printf("\n1-------chicken soup");
			printf("\n2-------tomato soup");
			printf("\n3-------egg soup");

			printf("\n\nEnter the choice: ");
			scanf("%d", &soup);
			switch (soup)
			{
			case 1:
				printf("\nYou selected chicken soup in soup");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupPlate);
				chinesePrice = soupPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupPlate, chinesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tomato soup in soup");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupPlate);
				chinesePrice = soupPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupPlate, chinesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected egg soup in soup");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupPlate);
				chinesePrice = soupPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupPlate, chinesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the soup switch
			break;
		case 3:
			printf("\nYou selected rolls in chinese");

			printf("\n1-------veg");
			printf("\n2-------spring");
			printf("\n3-------mixed rolls");

			printf("\n\nEnter the choice: ");
			scanf("%d", &rolls);
			switch (rolls)
			{
			case 1:
				printf("\nYou selected veg in rolls");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rollsPlate);
				chinesePrice = rollsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rollsPlate, chinesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected spring in rolls");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rollsPlate);
				chinesePrice = rollsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rollsPlate, chinesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected mixed rolls in rolls");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rollsPlate);
				chinesePrice = rollsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rollsPlate, chinesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the rolls switch
			break;
		case 4:
			printf("\nYou selected noodles in chinese");

			printf("\n1-------hakka noodles");
			printf("\n2-------ulon noodles");
			printf("\n3-------soba noodles");

			printf("\n\nEnter the choice: ");
			scanf("%d", &noodles);
			switch (noodles)
			{
			case 1:
				printf("\nYou selected hakka noodles in noodles");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &noodlesPlate);
				chinesePrice = noodlesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", noodlesPlate, chinesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  ulon noodles in noodles");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &noodlesPlate);
				chinesePrice = noodlesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", noodlesPlate, chinesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected soba noodles in noodles");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &noodlesPlate);
				chinesePrice = noodlesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", noodlesPlate, chinesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the noodles switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of chinese switch
		break;
		//--------------------------------------------------------------------------------------------------------------------------------------------------
	case 13:
		printf("\nYou are in france Cuisine: ");

		printf("\n1--------pasta");
		printf("\n2--------drinks");
		printf("\n3--------desserts");
		printf("\n4--------salad");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &france);
		switch (france)
		{
		case 1:
			printf("\nYou selected pasta in france");

			printf("\n1-------Cremy lemon ");
			printf("\n2-------cheese");
			printf("\n3-------Radicchio");

			printf("\n\nEnter the choice: ");
			scanf("%d", &pasta);
			switch (pasta)
			{
			case 1:
				printf("\nYou selected Cremy lemon in pasta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pastaPlate);
				francePrice = pastaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pastaPlate, francePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected cheese in pasta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pastaPlate);
				francePrice = pastaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pastaPlate, francePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Radicchio in pasta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &pastaPlate);
				francePrice = pastaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", pastaPlate, francePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the pasta switch
			break;

		case 2:
			printf("\nYou selected drinks in france");

			printf("\n1------- Caramel mocca ");
			printf("\n2------- Ice tea");
			printf("\n3-------Hot cocoa");

			printf("\n\nEnter the choice: ");
			scanf("%d", &drinks);
			switch (drinks)
			{
			case 1:
				printf("\nYou selected Caramel mocca in drinks");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &drinksPlate);
				francePrice = drinksPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", drinksPlate, francePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Ice tea in drinks");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &drinksPlate);
				francePrice = drinksPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", drinksPlate, francePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Hot cocoa in drinks");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &drinksPlate);
				francePrice = drinksPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", drinksPlate, francePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the drinks switch
			break;
		case 3:
			printf("\nYou selected desserts in france");

			printf("\n1------- Asparanges Frittata");
			printf("\n2-------Eggplant Parmigiana");
			printf("\n3-------Gloucestershire Lamb Pie");

			printf("\n\nEnter the choice: ");
			scanf("%d", &desserts);
			switch (desserts)
			{
			case 1:
				printf("\nYou selected Asparanges Frittata in desserts");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dessertsPlate);
				francePrice = dessertsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dessertsPlate, francePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Eggplant Parmigiana in desserts");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dessertsPlate);
				francePrice = dessertsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dessertsPlate, francePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Gloucestershire Lamb Pie in desserts");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dessertsPlate);
				francePrice = dessertsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dessertsPlate, francePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the desserts switch
			break;
		case 4:
			printf("\nYou selected salad in france");

			printf("\n1-------  Bocconicini salad");
			printf("\n2------- Panzanella salad");
			printf("\n3------- Antipasto Pasta salad");

			printf("\n\nEnter the choice: ");
			scanf("%d", &salad);
			switch (salad)
			{
			case 1:
				printf("\nYou selected Bocconicini  salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				francePrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, francePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Panzanella salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				francePrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, francePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Antipasto Pasta salad salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				francePrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, francePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the salad switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of france switch
		break;
		//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 14:
		printf("\nYou are in greek Cuisine: ");

		printf("\n1--------appetizer");
		printf("\n2--------salad");
		printf("\n3--------platters");
		printf("\n4--------gyro");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &greek);
		switch (greek)
		{
		case 1:
			printf("\nYou selected appetizer in greek");

			printf("\n1-------hummus");
			printf("\n2-------tzatziki");
			printf("\n3-------dolmas");

			printf("\n\nEnter the choice: ");
			scanf("%d", &appetizer);
			switch (appetizer)
			{
			case 1:
				printf("\nYou selected hummus in appetizer");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizerPlate);
				greekPrice = appetizerPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizerPlate, greekPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tzatziki in appetizer");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizerPlate);
				greekPrice = appetizerPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizerPlate, greekPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected dolmas in appetizer");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizerPlate);
				greekPrice = appetizerPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizerPlate, greekPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the appetizer switch
			break;

		case 2:
			printf("\nYou selected salad in greek");

			printf("\n1-------troy salad");
			printf("\n2-------tonno salad");
			printf("\n3-------horiatiki salad");

			printf("\n\nEnter the choice: ");
			scanf("%d", &salad);
			switch (salad)
			{
			case 1:
				printf("\nYou selected troy salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				greekPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, greekPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected tonno salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				greekPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, greekPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected horiatiki salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				greekPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, greekPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the salad switch
			break;
		case 3:
			printf("\nYou selected platters in greek");

			printf("\n1-------mousaka");
			printf("\n2-------syro");
			printf("\n3-------pastitsio platters");

			printf("\n\nEnter the choice: ");
			scanf("%d", &platters);
			switch (platters)
			{
			case 1:
				printf("\nYou selected mousaka in platters");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &plattersPlate);
				greekPrice = plattersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", plattersPlate, greekPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected syro in platters");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &plattersPlate);
				greekPrice = plattersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", plattersPlate, greekPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected pastitsio platters in platters");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &plattersPlate);
				greekPrice = plattersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", plattersPlate, greekPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the platters switch
			break;
		case 4:
			printf("\nYou selected gyro in greek");

			printf("\n1-------philly gyro");
			printf("\n2-------eggplant gyro");
			printf("\n3-------yogurt gyro");

			printf("\n\nEnter the choice: ");
			scanf("%d", &gyro);
			switch (gyro)
			{
			case 1:
				printf("\nYou selected philly gyro in gyro");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &gyroPlate);
				greekPrice = gyroPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", gyroPlate, greekPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  eggplant gyro in gyro");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &gyroPlate);
				greekPrice = gyroPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", gyroPlate, greekPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected yogurt gyro in gyro");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &gyroPlate);
				greekPrice = gyroPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", gyroPlate, greekPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the gyro switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of greek switch
		break;
		//-------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 15:
		printf("\nYou are in thai Cuisine: ");

		printf("\n1--------Soups");
		printf("\n2--------Momos");
		printf("\n3--------VegAppetizers");
		printf("\n4-------- NonvegAppetizers");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &thai);
		switch (thai)
		{
		case 1:
			printf("\nYou selected soups in thai");

			printf("\n1-------Sweet corn");
			printf("\n2-------Wonton soup");
			printf("\n3-------Manchow");

			printf("\n\nEnter the choice: ");
			scanf("%d", &soups);
			switch (soups)
			{
			case 1:
				printf("\nYou selected Sweet corn in soups");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupsPlate);
				thaiPrice = soupsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupsPlate, thaiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Wonton soup in soups");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupsPlate);
				thaiPrice = soupsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupsPlate, thaiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Manchow in soups");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupsPlate);
				thaiPrice = soupsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupsPlate, thaiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the soups switch
			break;

		case 2:
			printf("\nYou selected momos in thai");

			printf("\n1------- Veg momos ");
			printf("\n2------- Chiken momos");
			printf("\n3-------pork momos");

			printf("\n\nEnter the choice: ");
			scanf("%d", &momos);
			switch (momos)
			{
			case 1:
				printf("\nYou selected Veg momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				thaiPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, thaiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Chiken momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				thaiPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, thaiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  pork momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				thaiPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, thaiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the momos switch
			break;
		case 3:
			printf("\nYou selected VegAppetizers in thai");

			printf("\n1------- Spring Roll");
			printf("\n2-------panner pepper chilly");
			printf("\n3-------Baby corn Pepper salt");

			printf("\n\nEnter the choice: ");
			scanf("%d", &vegAppetizers);
			switch (vegAppetizers)
			{
			case 1:
				printf("\nYou selected Spring Roll in vegAppetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &vegAppetizersPlate);
				thaiPrice = vegAppetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", vegAppetizersPlate, thaiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected panner pepper chilly in vegAppetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &vegAppetizersPlate);
				thaiPrice = vegAppetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", vegAppetizersPlate, thaiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Baby corn Pepper salt in vegAppetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &vegAppetizersPlate);
				thaiPrice = vegAppetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", vegAppetizersPlate, thaiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the vegAppetizers switch
			break;
		case 4:
			printf("\nYou selected  nonvegAppetizers in thai");

			printf("\n1-------  Chicken Winglet");
			printf("\n2------- Drums of Heaven");
			printf("\n3------- Pork pepper chilly");

			printf("\n\nEnter the choice: ");
			scanf("%d", &nonvegAppetizers);
			switch (nonvegAppetizers)
			{
			case 1:
				printf("\nYou selected Chicken Winglet in  nonvegAppetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &nonvegAppetizersPlate);
				thaiPrice = nonvegAppetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", nonvegAppetizersPlate, thaiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Drums of Heaven in  nonvegAppetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &nonvegAppetizersPlate);
				thaiPrice = nonvegAppetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", nonvegAppetizersPlate, thaiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Pork pepper chilly in  nonvegAppetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &nonvegAppetizersPlate);
				thaiPrice = nonvegAppetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", nonvegAppetizersPlate, thaiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  nonvegAppetizers switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of thai switch
		break;
		//-------------------------------------------------------------------------------------------------------------------------------------------------
	case 16:
		printf("\nYou are in british Cuisine: ");

		printf("\n1--------bangers");
		printf("\n2--------pudding");
		printf("\n3--------mash");
		printf("\n4--------pie");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &british);
		switch (british)
		{
		case 1:
			printf("\nYou selected bangers in british");

			printf("\n1-------pork");
			printf("\n2-------lamb");
			printf("\n3-------simple");

			printf("\n\nEnter the choice: ");
			scanf("%d", &bangers);
			switch (bangers)
			{
			case 1:
				printf("\nYou selected pork in bangers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bangersPlate);
				britishPrice = bangersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bangersPlate, britishPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected lamb in bangers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bangersPlate);
				britishPrice = bangersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bangersPlate, britishPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected simple in bangers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bangersPlate);
				britishPrice = bangersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bangersPlate, britishPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the bangers switch
			break;

		case 2:
			printf("\nYou selected pudding in british");

			printf("\n1-------batter pudding");
			printf("\n2-------corn pudding");
			printf("\n3-------haggis pudding");

			printf("\n\nEnter the choice: ");
			scanf("%d", &pudding);
			switch (pudding)
			{
			case 1:
				printf("\nYou selected batter pudding in pudding");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &puddingPlate);
				britishPrice = puddingPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", puddingPlate, britishPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected corn pudding in pudding");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &puddingPlate);
				britishPrice = puddingPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", puddingPlate, britishPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected haggis pudding in pudding");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &puddingPlate);
				britishPrice = puddingPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", puddingPlate, britishPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the pudding switch
			break;
		case 3:
			printf("\nYou selected mash in british");

			printf("\n1-------wasabi");
			printf("\n2-------paris");
			printf("\n3-------pancetta mash");

			printf("\n\nEnter the choice: ");
			scanf("%d", &mash);
			switch (mash)
			{
			case 1:
				printf("\nYou selected wasabi in mash");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &mashPlate);
				britishPrice = mashPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", mashPlate, britishPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected paris in mash");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &mashPlate);
				britishPrice = mashPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", mashPlate, britishPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected pancetta mash in mash");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &mashPlate);
				britishPrice = mashPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", mashPlate, britishPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the mash switch
			break;
		case 4:
			printf("\nYou selected pie in british");

			printf("\n1-------apple pie");
			printf("\n2-------pecan pie");
			printf("\n3-------cherry pie");

			printf("\n\nEnter the choice: ");
			scanf("%d", &pie);
			switch (pie)
			{
			case 1:
				printf("\nYou selected apple pie in pie");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &piePlate);
				britishPrice = piePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", piePlate, britishPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  pecan pie in pie");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &piePlate);
				britishPrice = piePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", piePlate, britishPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected cherry pie in pie");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &piePlate);
				britishPrice = piePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", piePlate, britishPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the pie switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of british switch
		break;
		//------------------------------------------------------------------------------------------------------------------------------------------------
	case 17:
		printf("\nYou are in Indonesian Cuisine: ");

		printf("\n1--------Soups");
		printf("\n2--------fish");
		printf("\n3--------Noodels");
		printf("\n4--------meatDishes");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &indonesian);
		switch (indonesian)
		{
		case 1:
			printf("\nYou selected soups in indonesian");

			printf("\n1-------Soto mie soup");
			printf("\n2-------Tong seng soup");
			printf("\n3-------Gule soup");

			printf("\n\nEnter the choice: ");
			scanf("%d", &soups);
			switch (soups)
			{
			case 1:
				printf("\nYou selected Soto mie soup in soups");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupsPlate);
				indonesianPrice = soupsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupsPlate, indonesianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Tong seng soup in soups");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupsPlate);
				indonesianPrice = soupsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupsPlate, indonesianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Gule soup in soups");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &soupsPlate);
				indonesianPrice = soupsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", soupsPlate, indonesianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the soups switch
			break;

		case 2:
			printf("\nYou selected fish in indonesian");

			printf("\n1------- Ikan balado ");
			printf("\n2------- Pampano bakar");
			printf("\n3-------Lele panyet");

			printf("\n\nEnter the choice: ");
			scanf("%d", &fish);
			switch (fish)
			{
			case 1:
				printf("\nYou selected Ikan balado in fish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &fishPlate);
				indonesianPrice = fishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", fishPlate, indonesianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Pampano bakar in fish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &fishPlate);
				indonesianPrice = fishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", fishPlate, indonesianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Lele panyet in fish");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &fishPlate);
				indonesianPrice = fishPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", fishPlate, indonesianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the fish switch
			break;
		case 3:
			printf("\nYou selected Noodels in indonesian");

			printf("\n1------- Mie Goreng");
			printf("\n2-------Bihun Goreng");
			printf("\n3-------Mie Ayam");

			printf("\n\nEnter the choice: ");
			scanf("%d", &Noodels);
			switch (Noodels)
			{
			case 1:
				printf("\nYou selected Mie Goreng in Noodels");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &NoodelsPlate);
				indonesianPrice = NoodelsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", NoodelsPlate, indonesianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Bihun Goreng in Noodels");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &NoodelsPlate);
				indonesianPrice = NoodelsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", NoodelsPlate, indonesianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Mie Ayam in Noodels");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &NoodelsPlate);
				indonesianPrice = NoodelsPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", NoodelsPlate, indonesianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the Noodels switch
			break;
		case 4:
			printf("\nYou selected  meatDishes in indonesian");

			printf("\n1-------  Sate Ayam");
			printf("\n2------- Iga Bakar");
			printf("\n3------- Ayam Penyet");

			printf("\n\nEnter the choice: ");
			scanf("%d", &meatDishes);
			switch (meatDishes)
			{
			case 1:
				printf("\nYou selected Sate Ayam in  meatDishes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &meatDishesPlate);
				indonesianPrice = meatDishesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", meatDishesPlate, indonesianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Iga Bakar in  meatDishes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &meatDishesPlate);
				indonesianPrice = meatDishesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", meatDishesPlate, indonesianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Ayam Penyet in  meatDishes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &meatDishesPlate);
				indonesianPrice = meatDishesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", meatDishesPlate, indonesianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  meatDishes switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of indonesian switch
		break;
		//-------------------------------------------------------------------------------------------------------------------------------------------------------
	case 18:
		printf("\nYou are in vietnamese Cuisine: ");

		printf("\n1--------noodles");
		printf("\n2--------salad");
		printf("\n3--------rice");
		printf("\n4--------seafood");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &vietnamese);
		switch (vietnamese)
		{
		case 1:
			printf("\nYou selected noodles in vietnamese");

			printf("\n1-------beef");
			printf("\n2-------duck");
			printf("\n3-------vang");

			printf("\n\nEnter the choice: ");
			scanf("%d", &noodles);
			switch (noodles)
			{
			case 1:
				printf("\nYou selected beef in noodles");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &noodlesPlate);
				vietnamesePrice = noodlesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", noodlesPlate, vietnamesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected duck in noodles");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &noodlesPlate);
				vietnamesePrice = noodlesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", noodlesPlate, vietnamesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected vang in noodles");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &noodlesPlate);
				vietnamesePrice = noodlesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", noodlesPlate, vietnamesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the noodles switch
			break;

		case 2:
			printf("\nYou selected salad in vietnamese");

			printf("\n1-------pork salad");
			printf("\n2-------chicken salad");
			printf("\n3-------delight salad");

			printf("\n\nEnter the choice: ");
			scanf("%d", &salad);
			switch (salad)
			{
			case 1:
				printf("\nYou selected pork salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				vietnamesePrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, vietnamesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected chicken salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				vietnamesePrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, vietnamesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected delight salad in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				vietnamesePrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, vietnamesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the salad switch
			break;
		case 3:
			printf("\nYou selected rice in vietnamese");

			printf("\n1-------pork");
			printf("\n2-------shrimp");
			printf("\n3-------basil rice");

			printf("\n\nEnter the choice: ");
			scanf("%d", &rice);
			switch (rice)
			{
			case 1:
				printf("\nYou selected pork in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				vietnamesePrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, vietnamesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected shrimp in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				vietnamesePrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, vietnamesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected basil rice in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				vietnamesePrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, vietnamesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the rice switch
			break;
		case 4:
			printf("\nYou selected seafood in vietnamese");

			printf("\n1-------redfish seafood");
			printf("\n2-------salmon seafood");
			printf("\n3-------fillet seafood");

			printf("\n\nEnter the choice: ");
			scanf("%d", &seafood);
			switch (seafood)
			{
			case 1:
				printf("\nYou selected redfish seafood in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				vietnamesePrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, vietnamesePrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  salmon seafood in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				vietnamesePrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, vietnamesePrice);
				getch();
				break;
			case 3:
				printf("\nYou selected fillet seafood in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				vietnamesePrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, vietnamesePrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the seafood switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of vietnamese switch
		break;
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 19:
		printf("\nYou are in Middle Eastern Cuisine: ");

		printf("\n1--------Appetizers");
		printf("\n2--------Salad");
		printf("\n3--------Sandwiches");
		printf("\n4--------Doner");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &middleeastern);
		switch (middleeastern)
		{
		case 1:
			printf("\nYou selected Appetizers in middleeastern ");

			printf("\n1-------Hommous");
			printf("\n2-------Ghannouj");
			printf("\n3-------Falatel");

			printf("\n\nEnter the choice: ");
			scanf("%d", &appetizers);
			switch (appetizers)
			{
			case 1:
				printf("\nYou selected Hommous in appetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizersPlate);
				middleeasternPrice = appetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizersPlate, middleeasternPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Ghannouj in appetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizersPlate);
				middleeasternPrice = appetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizersPlate, middleeasternPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Falatel in appetizers");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &appetizersPlate);
				middleeasternPrice = appetizersPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", appetizersPlate, middleeasternPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the appetizers switch
			break;

		case 2:
			printf("\nYou selected Salad in middleeastern ");

			printf("\n1------- Tubbouli ");
			printf("\n2------- Fattoush");
			printf("\n3-------Caesar");

			printf("\n\nEnter the choice: ");
			scanf("%d", &salad);
			switch (salad)
			{
			case 1:
				printf("\nYou selected Tubbouli in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				middleeasternPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, middleeasternPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Fattoush in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				middleeasternPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, middleeasternPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Caesar in salad");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &saladPlate);
				middleeasternPrice = saladPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", saladPlate, middleeasternPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the salad switch
			break;
		case 3:
			printf("\nYou selected Sandwiches in middleeastern ");

			printf("\n1-------Lumb");
			printf("\n2-------Shawarmu");
			printf("\n3-------Arabic");

			printf("\n\nEnter the choice: ");
			scanf("%d", &sandwiches);
			switch (sandwiches)
			{
			case 1:
				printf("\nYou selected Lumb in sandwiches");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sandwichesPlate);
				middleeasternPrice = sandwichesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sandwichesPlate, middleeasternPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Shawarmu in sandwiches");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sandwichesPlate);
				middleeasternPrice = sandwichesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sandwichesPlate, middleeasternPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Arabic in sandwiches");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &sandwichesPlate);
				middleeasternPrice = sandwichesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", sandwichesPlate, middleeasternPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the sandwiches switch
			break;
		case 4:
			printf("\nYou selected  Doner in middleeastern ");

			printf("\n1------- Spam");
			printf("\n2------- Canned");
			printf("\n3------- Beanf");

			printf("\n\nEnter the choice: ");
			scanf("%d", &doner);
			switch (doner)
			{
			case 1:
				printf("\nYou selected Spam in  doner");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &donerPlate);
				middleeasternPrice = donerPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", donerPlate, middleeasternPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  Canned in  doner");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &donerPlate);
				middleeasternPrice = donerPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", donerPlate, middleeasternPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Beanf in  doner");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &donerPlate);
				middleeasternPrice = donerPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", donerPlate, middleeasternPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  doner switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of middleeastern  switch
		break;
		//-------------------------------------------------------------------------------------------------------------------------------------------------------
	case 20:
		printf("\nYou are in goan Cuisine: ");

		printf("\n1--------seafood");
		printf("\n2--------chicken");
		printf("\n3--------caldeen");
		printf("\n4--------caferal");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &goan);
		switch (goan)
		{
		case 1:
			printf("\nYou selected seafood in goan");

			printf("\n1-------crab");
			printf("\n2-------prawns");
			printf("\n3-------buffad");

			printf("\n\nEnter the choice: ");
			scanf("%d", &seafood);
			switch (seafood)
			{
			case 1:
				printf("\nYou selected crab in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				goanPrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, goanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected prawns in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				goanPrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, goanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected buffad in seafood");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &seafoodPlate);
				goanPrice = seafoodPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", seafoodPlate, goanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the seafood switch
			break;

		case 2:
			printf("\nYou selected chicken in goan");

			printf("\n1-------sukka chicken");
			printf("\n2-------xacutti chicken");
			printf("\n3-------chilly chicken");

			printf("\n\nEnter the choice: ");
			scanf("%d", &chicken);
			switch (chicken)
			{
			case 1:
				printf("\nYou selected sukka chicken in chicken");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenPlate);
				goanPrice = chickenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenPlate, goanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected xacutti chicken in chicken");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenPlate);
				goanPrice = chickenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenPlate, goanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected chilly chicken in chicken");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chickenPlate);
				goanPrice = chickenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chickenPlate, goanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the chicken switch
			break;
		case 3:
			printf("\nYou selected caldeen in goan");

			printf("\n1-------pomfret");
			printf("\n2-------kingfish");
			printf("\n3-------bhindi caldeen");

			printf("\n\nEnter the choice: ");
			scanf("%d", &caldeen);
			switch (caldeen)
			{
			case 1:
				printf("\nYou selected pomfret in caldeen");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &caldeenPlate);
				goanPrice = caldeenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", caldeenPlate, goanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected kingfish in caldeen");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &caldeenPlate);
				goanPrice = caldeenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", caldeenPlate, goanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected bhindi caldeen in caldeen");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &caldeenPlate);
				goanPrice = caldeenPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", caldeenPlate, goanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the caldeen switch
			break;
		case 4:
			printf("\nYou selected caferal in goan");

			printf("\n1-------veg caferal");
			printf("\n2-------galinha caferal");
			printf("\n3-------masala caferal");

			printf("\n\nEnter the choice: ");
			scanf("%d", &caferal);
			switch (caferal)
			{
			case 1:
				printf("\nYou selected veg caferal in caferal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &caferalPlate);
				goanPrice = caferalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", caferalPlate, goanPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected  galinha caferal in caferal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &caferalPlate);
				goanPrice = caferalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", caferalPlate, goanPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected masala caferal in caferal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &caferalPlate);
				goanPrice = caferalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", caferalPlate, goanPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the caferal switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of goan switch
		break;
		//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 21:
		printf("\nYou are in soul Cuisine: ");

		printf("\n1--------Toast");
		printf("\n2--------Momos");
		printf("\n3--------Nachos");
		printf("\n4-------- Bread");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &soul);
		switch (soul)
		{
		case 1:
			printf("\nYou selected toast in soul");

			printf("\n1-------Grilled");
			printf("\n2-------Cheese");
			printf("\n3-------Butter");

			printf("\n\nEnter the choice: ");
			scanf("%d", &toast);
			switch (toast)
			{
			case 1:
				printf("\nYou selected Grilled in toast");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &toastPlate);
				soulPrice = toastPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", toastPlate, soulPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Cheese in toast");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &toastPlate);
				soulPrice = toastPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", toastPlate, soulPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Butter in toast");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &toastPlate);
				soulPrice = toastPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", toastPlate, soulPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the toast switch
			break;

		case 2:
			printf("\nYou selected momos in soul");

			printf("\n1------- Veg momos ");
			printf("\n2------- Steamed momos");
			printf("\n3-------Fried momos");

			printf("\n\nEnter the choice: ");
			scanf("%d", &momos);
			switch (momos)
			{
			case 1:
				printf("\nYou selected Veg momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				soulPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, soulPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Steamed momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				soulPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, soulPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Fried momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				soulPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, soulPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the momos switch
			break;
		case 3:
			printf("\nYou selected nachos in soul");

			printf("\n1------- Chicken");
			printf("\n2-------Totches");
			printf("\n3-------Philly");

			printf("\n\nEnter the choice: ");
			scanf("%d", &nachos);
			switch (nachos)
			{
			case 1:
				printf("\nYou selected Chicken in nachos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &nachosPlate);
				soulPrice = nachosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", nachosPlate, soulPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Totches in nachos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &nachosPlate);
				soulPrice = nachosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", nachosPlate, soulPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Philly in nachos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &nachosPlate);
				soulPrice = nachosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", nachosPlate, soulPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the nachos switch
			break;
		case 4:
			printf("\nYou selected  bread in soul");

			printf("\n1------- Corn");
			printf("\n2------- Sweet");
			printf("\n3------- French");

			printf("\n\nEnter the choice: ");
			scanf("%d", &bread);
			switch (bread)
			{
			case 1:
				printf("\nYou selected Corn in  bread");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &breadPlate);
				soulPrice = breadPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", breadPlate, soulPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Sweet in  bread");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &breadPlate);
				soulPrice = breadPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", breadPlate, soulPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected French in  bread");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &breadPlate);
				soulPrice = breadPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", breadPlate, soulPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  bread switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of soul switch
		break;
		//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 22:
		printf("\nYou are in peruvian Cuisine: ");

		printf("\n1--------Entradus");
		printf("\n2--------Pollo");
		printf("\n3--------Tallarines");
		printf("\n4-------- Carnes");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &peruvian);
		switch (peruvian)
		{
		case 1:
			printf("\nYou selected entradus in peruvian");

			printf("\n1-------Sadchipupu");
			printf("\n2-------Mixto");
			printf("\n3-------Pescudo");

			printf("\n\nEnter the choice: ");
			scanf("%d", &entradus);
			switch (entradus)
			{
			case 1:
				printf("\nYou selected Sadchipupu in entradus");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &entradusPlate);
				peruvianPrice = entradusPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", entradusPlate, peruvianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Mixto in entradus");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &entradusPlate);
				peruvianPrice = entradusPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", entradusPlate, peruvianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Pescudo in entradus");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &entradusPlate);
				peruvianPrice = entradusPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", entradusPlate, peruvianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the entradus switch
			break;

		case 2:
			printf("\nYou selected pollo in peruvian");

			printf("\n1------- Brasu ");
			printf("\n2------- Cuarto");
			printf("\n3------- Saltado");

			printf("\n\nEnter the choice: ");
			scanf("%d", &pollo);
			switch (pollo)
			{
			case 1:
				printf("\nYou selected Brasu in pollo");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &polloPlate);
				peruvianPrice = polloPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", polloPlate, peruvianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Cuarto in pollo");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &polloPlate);
				peruvianPrice = polloPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", polloPlate, peruvianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Saltado in pollo");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &polloPlate);
				peruvianPrice = polloPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", polloPlate, peruvianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the pollo switch
			break;
		case 3:
			printf("\nYou selected Tallarines in peruvian");

			printf("\n1------- Beef");
			printf("\n2-------Shrimp");
			printf("\n3-------Pollo");

			printf("\n\nEnter the choice: ");
			scanf("%d", &Tallarines);
			switch (Tallarines)
			{
			case 1:
				printf("\nYou selected Beef in Tallarines");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &TallarinesPlate);
				peruvianPrice = TallarinesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", TallarinesPlate, peruvianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Shrimp in Tallarines");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &TallarinesPlate);
				peruvianPrice = TallarinesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", TallarinesPlate, peruvianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Pollo in Tallarines");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &TallarinesPlate);
				peruvianPrice = TallarinesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", TallarinesPlate, peruvianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the Tallarines switch
			break;
		case 4:
			printf("\nYou selected  carnes in peruvian");

			printf("\n1------- Lomo");
			printf("\n2------- Chaufa");
			printf("\n3------- Bistec");

			printf("\n\nEnter the choice: ");
			scanf("%d", &carnes);
			switch (carnes)
			{
			case 1:
				printf("\nYou selected Lomo in  carnes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &carnesPlate);
				peruvianPrice = carnesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", carnesPlate, peruvianPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Chaufa in  carnes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &carnesPlate);
				peruvianPrice = carnesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", carnesPlate, peruvianPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Bistec in  carnes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &carnesPlate);
				peruvianPrice = carnesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", carnesPlate, peruvianPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  carnes switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of peruvian switch
		break;
		//----------------------------------------------------------------------------------------------------------------------------------------------------------
	case 23:
		printf("\nYou are in pakistani Cuisine: ");

		printf("\n1--------Handi");
		printf("\n2--------Karahi");
		printf("\n3--------Kofta");
		printf("\n4--------Korma");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &pakistani);
		switch (pakistani)
		{
		case 1:
			printf("\nYou selected handi in pakistani");

			printf("\n1-------Chicken");
			printf("\n2-------Mutton");
			printf("\n3-------Bone");

			printf("\n\nEnter the choice: ");
			scanf("%d", &handi);
			switch (handi)
			{
			case 1:
				printf("\nYou selected Chicken in handi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &handiPlate);
				pakistaniPrice = handiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", handiPlate, pakistaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Mutton in handi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &handiPlate);
				pakistaniPrice = handiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", handiPlate, pakistaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Bone in handi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &handiPlate);
				pakistaniPrice = handiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", handiPlate, pakistaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the handi switch
			break;

		case 2:
			printf("\nYou selected karahi in pakistani");

			printf("\n1------- White  Karahi");
			printf("\n2------- Seekh");
			printf("\n3------- Kabab");

			printf("\n\nEnter the choice: ");
			scanf("%d", &karahi);
			switch (karahi)
			{
			case 1:
				printf("\nYou selected White karahi in karahi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &karahiPlate);
				pakistaniPrice = karahiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", karahiPlate, pakistaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Seekh in karahi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &karahiPlate);
				pakistaniPrice = karahiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", karahiPlate, pakistaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected kabab in karahi");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &karahiPlate);
				pakistaniPrice = karahiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", karahiPlate, pakistaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the karahi switch
			break;
		case 3:
			printf("\nYou selected kofta in pakistani");

			printf("\n1------- Nargisi");
			printf("\n2------- Paneer");
			printf("\n3------- Malai");

			printf("\n\nEnter the choice: ");
			scanf("%d", &kofta);
			switch (kofta)
			{
			case 1:
				printf("\nYou selected Nargisi in kofta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &koftaPlate);
				pakistaniPrice = koftaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", koftaPlate, pakistaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Paneer in kofta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &koftaPlate);
				pakistaniPrice = koftaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", koftaPlate, pakistaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Malai in kofta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &koftaPlate);
				pakistaniPrice = koftaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", koftaPlate, pakistaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the kofta switch
			break;
		case 4:
			printf("\nYou selected  korma in pakistani");

			printf("\n1------- Badami");
			printf("\n2------- Mughlai");
			printf("\n3------- Shahi");

			printf("\n\nEnter the choice: ");
			scanf("%d", &korma);
			switch (korma)
			{
			case 1:
				printf("\nYou selected Badami in  korma");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kormaPlate);
				pakistaniPrice = kormaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kormaPlate, pakistaniPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Mughlai in  korma");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kormaPlate);
				pakistaniPrice = kormaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kormaPlate, pakistaniPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Shai in  korma");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &kormaPlate);
				pakistaniPrice = kormaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", kormaPlate, pakistaniPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  korma switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of pakistani switch
		break;
		//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 24:
		printf("\nYou are in Bangladeshi Cuisine: ");

		printf("\n1--------Roti");
		printf("\n2--------Bharta");
		printf("\n3--------Rice");
		printf("\n4--------Bhajes");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &Bangladeshi);
		switch (Bangladeshi)
		{
		case 1:
			printf("\nYou selected roti in Bangladeshi");

			printf("\n1-------Chapati");
			printf("\n2-------Naaan");
			printf("\n3-------Plain");

			printf("\n\nEnter the choice: ");
			scanf("%d", &roti);
			switch (roti)
			{
			case 1:
				printf("\nYou selected Chapati in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				BangladeshiPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, BangladeshiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Naan in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				BangladeshiPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, BangladeshiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Plain in roti");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &rotiPlate);
				BangladeshiPrice = rotiPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", rotiPlate, BangladeshiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the roti switch
			break;

		case 2:
			printf("\nYou selected bharta in Bangladeshi");

			printf("\n1------- Chingri bharta ");
			printf("\n2------- Aloo bharta");
			printf("\n3-------Begun bharta");

			printf("\n\nEnter the choice: ");
			scanf("%d", &bharta);
			switch (bharta)
			{
			case 1:
				printf("\nYou selected  Chingri bharta in bharta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bhartaPlate);
				BangladeshiPrice = bhartaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bhartaPlate, BangladeshiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Aloo bharta in bharta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bhartaPlate);
				BangladeshiPrice = bhartaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bhartaPlate, BangladeshiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Begun bharta in bharta");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bhartaPlate);
				BangladeshiPrice = bhartaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bhartaPlate, BangladeshiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the bharta switch
			break;
		case 3:
			printf("\nYou selected rice in Bangladeshi");

			printf("\n1------- Plain");
			printf("\n2-------Pulav");
			printf("\n3-------Biryani");

			printf("\n\nEnter the choice: ");
			scanf("%d", &rice);
			switch (rice)
			{
			case 1:
				printf("\nYou selected Plain in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				BangladeshiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, BangladeshiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Pulav in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				BangladeshiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, BangladeshiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Biryani in rice");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &ricePlate);
				BangladeshiPrice = ricePlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", ricePlate, BangladeshiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the rice switch
			break;
		case 4:
			printf("\nYou selected  bhajes in Bangladeshi");

			printf("\n1------- Karolla");
			printf("\n2------- Prawn");
			printf("\n3------- Kalmee");

			printf("\n\nEnter the choice: ");
			scanf("%d", &bhajes);
			switch (bhajes)
			{
			case 1:
				printf("\nYou selected Karolla in  bhajes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bhajesPlate);
				BangladeshiPrice = bhajesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bhajesPlate, BangladeshiPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Prawn in  bhajes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bhajesPlate);
				BangladeshiPrice = bhajesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bhajesPlate, BangladeshiPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected kalmee in  bhajes");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &bhajesPlate);
				BangladeshiPrice = bhajesPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", bhajesPlate, BangladeshiPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  bhajes switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of Bangladeshi switch
		break;
		//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 25:
		printf("\nYou are in nepali Cuisine: ");

		printf("\n1--------chat");
		printf("\n2--------Momos");
		printf("\n3--------thukpa");
		printf("\n4-------- dal");
		printf("\n5--------Main Menu");

		printf("\n\nEnter your choice: ");
		scanf("%d", &nepali);
		switch (nepali)
		{
		case 1:
			printf("\nYou selected chat in nepali");

			printf("\n1-------Samosa");
			printf("\n2-------Aloo");
			printf("\n3-------Mixed");

			printf("\n\nEnter the choice: ");
			scanf("%d", &chat);
			switch (chat)
			{
			case 1:
				printf("\nYou selected Samosa in chat");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chatPlate);
				nepaliPrice = chatPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chatPlate, nepaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Aloo in chat");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chatPlate);
				nepaliPrice = chatPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chatPlate, nepaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Mixed in chat");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &chatPlate);
				nepaliPrice = chatPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", chatPlate, nepaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the chat switch
			break;

		case 2:
			printf("\nYou selected momos in nepali");

			printf("\n1------- Veg momos ");
			printf("\n2------- Steamed momos");
			printf("\n3-------Fried momos");

			printf("\n\nEnter the choice: ");
			scanf("%d", &momos);
			switch (momos)
			{
			case 1:
				printf("\nYou selected Veg momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				nepaliPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, nepaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Steamed momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				nepaliPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, nepaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Fried momos in momos");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &momosPlate);
				nepaliPrice = momosPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", momosPlate, nepaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the momos switch
			break;
		case 3:
			printf("\nYou selected thukpa in nepali");

			printf("\n1-------Gyonthuk");
			printf("\n2-------Prethug");
			printf("\n3-------Amdo");

			printf("\n\nEnter the choice: ");
			scanf("%d", &thukpa);
			switch (thukpa)
			{
			case 1:
				printf("\nYou selected Gyonthuk in thukpa");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &thukpaPlate);
				nepaliPrice = thukpaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", thukpaPlate, nepaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Prethug in thukpa");

				printf("\n\nEnter the number of plates: ");
				scanf("%d", &thukpaPlate);
				nepaliPrice = thukpaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", thukpaPlate, nepaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected  Ambo in thukpa");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &thukpaPlate);
				nepaliPrice = thukpaPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", thukpaPlate, nepaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the thukpa switch
			break;
		case 4:
			printf("\nYou selected  dal in nepali");

			printf("\n1-------Panjabi");
			printf("\n2-------Gujarati");
			printf("\n3-------Nepali");

			printf("\n\nEnter the choice: ");
			scanf("%d", &dal);
			switch (dal)
			{
			case 1:
				printf("\nYou selected Panjabi in  dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				nepaliPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, nepaliPrice);
				getch();
				break;
			case 2:
				printf("\nYou selected Gujarati in  dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				nepaliPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, nepaliPrice);
				getch();
				break;
			case 3:
				printf("\nYou selected Nepali in  dal");
				printf("\n\nEnter the number of plates: ");
				scanf("%d", &dalPlate);
				nepaliPrice = dalPlate * PRICE;

				printf("Your ordered %d plates and your total bill is %d", dalPlate, nepaliPrice);
				getch();
				break;
			default:
				printf("Enter valid  input");
				getch();
			} //end the  dal switch
			break;
		case 5:
			goto mainMenu;
		default:
			printf("Enter valid  input");
			getch();

		} //end of nepali switch
		break;
		//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	case 26:
		exit(0);

	default:
		printf("you have enter invalid choices");
		getch();
	} //end of choice switch
} //end of main
