#include<stdio.h>
#include<string.h>
int main()
{
	int i,number[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},temp[50],price[50]={699,799,599,659,859,30599,5899,2988,2499,679,559,1099,3599,799,559,899,799,399,455,519,349},p,bill,card,count;
	double cardbill;
	char dress,men,women,kid,shirt,pant,accessories,watch,footwear,saree,kurtas,dressmaterial,boy,girl,name[20],item[50][50]={"ALLEN SOLLY","DENIM SHIRT","LINEN SHIRT","MEN'S PANT (small)","MEN'S PANT (large)","ROLEX WATCH","FASTRACK WATCH","TITAN WATCH","SPORTS SHOES","CASUAL SHOES","FORMAL SHOES","COTTON SAREE","SILK SAREE","PRINTED KURTAS","PLAIN KURTAS","STITCHED COTTON DRESS MATERIAL","UNSTITCHED COTTON DRESS MATERIAL","BOY'S SHIRT (KIDS)","BOY'S PANT (KIDS)","GIRL'S DRESS (KIDS)","GIRL'S SKIRT (KIDS)"};
		printf("\t||_-_-_-_-_ WELCOME TO SS STYLES _-_-_-_-_||");
		printf("\n\nPlease enter your name : ");
		gets(name);
do
{
	abc :
printf(" \n\n\t\t|| What do you want ||\n\n   m--> Men's wear...w--> Women's wear...k--> Kid's wear\n ");
scanf(" %c", &dress);
switch (dress)
{     
    m :        
	case 'm' : printf(" \n\t   || What are you looking for...||\n\n      s-->Shirts...p--> Pants...a-->Accessories\n ");
	scanf(" %c", &men);
	switch (men)
	{
		ms :
		case 's' : printf(" \n\t\t|| Select the brand ||\n\n      a-->Allen Solly...d-->Denim...l-->Linen\n ");
		scanf(" %c", &shirt);
		switch(shirt)
		{
		case 'a':printf(" \nPrice of the Allen Solly shirt is Rs.699\n\nHow many shirts are you willing to buy : ");
		scanf("%d", &number[0]);
		printf(" \nTotal bill amount of the shirt(s) is Rs.%d ", number[0]*699);
		temp[0] = number[0]*699;
		break;
		case 'd' : printf(" \nPrice of the Denim shirt is Rs.799\n\nHow many shirts are you willing to buy : ");
		scanf("%d", &number[1]);
		printf(" \nTotal bill amount of the shirt(s) is Rs.%d ", number[1]*799);
		temp[1] = number[1]*799;
		break;
		case 'l' : printf(" \nPrice of the Linen shirt is Rs.599\n\nHow many shirts are you willing to buy : ");
		scanf("%d", &number[2]);
		printf(" \nTotal bill amount of the shirt(s) is Rs.%d ", number[2]*599);
		temp[2] = number[2]*599;
		break;
		default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto ms ;
	break;
		}
		break;
        mp :
		case 'p' : printf(" \n\t\t|| Which size do you want ||\n\n\t\t  s-->small...l-->large\n ");
		scanf(" %c", &pant);
		switch (pant)
		{
			case 's' : printf(" \nPrice of the pant is Rs.659\n\nHow many pants are you willing to buy : ");
			scanf("%d", &number[3]);
			printf(" \nTotal bill of the pant(s) is Rs.%d ", number[3]*659);
			temp[3] = number[3]*659;
			break;
			case 'l' : printf(" \nPrice of the pant is Rs.859\n\nHow many pants are you willing to buy : ");
			scanf("%d", &number[4]);
			printf(" \nTotal bill of the pant(s) is Rs.%d ", number[4]*859);
			temp[4] = number[4]*859;
			break;
			default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto mp ;
	break;
		}
		break;
		ma :
		case 'a' : printf(" \n\t|| What accessories are you looking for...||\n\n\t\tw-->watches...f-->footware\n ");
		scanf(" %c", &accessories);
		switch (accessories)
		{
			mw :
			case 'w' : printf(" \n\t|| Select the brand of the watch that you want ||\n\n\t     r-->Rolex...f-->Fastrack...t-->Titan\n ");
			scanf(" %c", &watch);
			switch (watch)
			{
				case 'r' : printf(" \nPrice of the Rolex watch is Rs.30,599\n\nHow many watches are you willing to buy : ");
				scanf("%d", &number[5]);
				printf(" \nTotal bill amount of the watch(es) is Rs.%d ", number[5]*30599);
				temp[5] = number[5]*30599;
				break;
				case 'f' : printf(" \nPrice of the Fastrack watch is Rs.5899\n\nHow many watches are you willing to buy : ");
				scanf(" %d", &number[6]);
				printf(" \nTotal bill amount of the watch(es) is Rs.%d ", number[6]*5899);
			temp[6] = number[6]*5899;
				       break;
				  case 't' : printf(" \nPrice of the Titan watch is Rs.2988\n\nHow many watches are you willing to buy : ");
				scanf("%d", &number[7]);
				printf(" \nTotal bill amount of the watch(es) is Rs.%d ", number[7]*2988);
					temp[7] = number[7]*2988;
				       break;
				       default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto mw ;
	break;
			}
			break;
			mf :
			case 'f' : printf(" \n\t|| What are you looking for...||\n\ns-->Sports footwear...c-->Casual footwear...f-->Formal footwear\n ");
			scanf(" %c", &footwear);
			switch (footwear)
			{
				case 's' : printf(" \nPrice of the Sports shoe is Rs.2499\n\nHow many shoes are you willing to buy : ");
				scanf("%d", &number[8]);
				printf(" \nTotal bill amount of the shoe(s) is Rs.%d ",number[8]*2499);
				temp[8] = number[8]*2499;
				       break;
				 case 'c' : printf(" \nPrice of the Casual shoe is Rs.679\n\nHow many shoes are you willing to buy : ");
				 scanf("%d", &number[9]);
				 printf(" \nTotal bill amount of the shoe(s) is Rs.%d ", number[9]*679);
				temp[9] = number[9]*679;
				        break;
				case 'f':printf(" \nPrice of the Formal shoe is Rs.559\n\nHow many shoes are you willing to buy : ");
				 scanf("%d", &number[10]);
				 printf(" \nTotal bill amount of the shoe(s) is Rs.%d ", number[10]*559);
				temp[10] = number[10]*559;
			   break;
			   default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto mf ;
	break;
			}
			break;
			default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto ma ;
	break;
		}
		break;		
		default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto m ;
	break;
	}
	break;
	w :
        case 'w' : printf(" \n\t|| What are you looking for...|| \n\n\ts-->sarees...k-->kurtas...d-->dress material\n ");
	scanf(" %c", &women);
	switch(women)
	{
		ws :
		case 's' : printf("\n\t|| Select the type of saree...||\n\n\tc-->cotton saree...s-->silk saree\n ");
		scanf(" %c", &saree);
		switch(saree)
		{
			case 'c' : printf(" \nPrice of the cotton saree is Rs.1099\n\nHow many sarees are you willing to buy : ");
			scanf("%d", &number[11]);
			printf(" \nTotal bill of sarees is Rs.%d ", number[11]*1099);
		temp[11] = number[11]*1099;
			break;
			case 's' : printf(" \nPrice of the silk saree is Rs.3599\n\nHow many sarees are you willing to buy : ");
			scanf("%d", &number[12]);
			printf(" \nTotal bill of the sarees is Rs.%d ", number[12]*3599);
			temp[12] = number[12]*3599;
			break;
			default : printf("\n\t* Invalid selection...Please select among the available options *");
	goto ws ;
	break;
		}
		break;
		wk :
		case 'k' : printf(" \n\t|| Select the type of kurtas ||\n\n\ta-->printed kurtas...b-->plain kurtas\n ");
		scanf(" %c", &kurtas);
		switch (kurtas)
		{
			case 'a' : printf(" \nPrice of the printed kurtas is Rs.799\n\nHow many kurtas are you willing to buy : ");
			scanf("%d", &number[13]);
			printf("\nTotal bill of the kurtas is Rs.%d", number[13]*799);
				temp[13] = number[13]*799;
			break;
			case 'b' : printf("\nPrice of the plain kurtas is Rs.559\n\nHow many kurtas are you willing to buy : ");
			scanf("%d", &number[14]);
			printf("\nTotal bill of the kurtas is Rs.%d", number[14]*559);
			temp[14] = number[14]*559;
			break;
		}
		break;
		case 'd' : printf(" \n\t|| Select the type of dress material ||\n\ns-->stitched cotton dress material...u-->unstitched cotton dress material\n ");
		scanf(" %c", &dressmaterial);
		switch (dressmaterial)
		{
			case 's':printf(" \nPrice of the stitched cotton dress material is Rs.899\n\nHow many dress materials are you willing to buy : ");
			scanf("%d", &number[15]);
			      printf(" \nTotal bill of the dress materials is Rs.%d ", number[15]*899);
			   temp[15] = number[15]*899;
			      break;
			 case 'u' : printf(" \nPrice of the unstitched cotton dress material is Rs.799\n\nHow many dress materials are you willing to buy : ");
			scanf("%d", &number[16]);
			      printf(" \nTotal bill of the dress materials is Rs.%d ",number[16]*799);
				temp[16] = number[16]*799;
			 break;
			 default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto wk ;
	break;
		}
		break;
		default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto w ;
	break;
	}
	break;
	k :
	case 'k' : printf(" \n\t\t|| What do you want! ||\n\n\t\tb-->Boy's...g-->Girl's\n ");
	scanf(" %c", &kid);
	switch (kid)
	{
		kb :
		case 'b':printf(" \n\t|| What are you looking for...||\n\n\t\ts-->Shirts...p-->pants\n ");
		scanf(" %c", &boy);
		switch (boy)
		{
			case 's' : printf(" \nPrice of the shirt is Rs.399\n\nHow many shirts are you willing to buy : ");
			scanf("%d", &number[17]);
			printf(" \nTotal bill amount of the shirt(s) is Rs.%d ", number[17]*399);
			temp[17] = number[17]*399;
			break;
			case 'p' : printf(" \nPrice of the pant is Rs.455\n\nHow many shirts are you willing to buy : ");
			scanf("%d", &number[18]);
			printf(" \nTotal bill amount of the shirt(s) is Rs.%d ", number[18]*455);
			temp[18] = number[18]*455;
			break;
			default : printf("\n\t* Invalid selection...Please select among the available options *\n");
			goto kb ;
	   	 break;
		}
		break;
	   kg :
		case 'g' : printf(" \n\t\t|| What are you looking for...||\n\n\t\td-->Dresses...s-->Skirts\n ");
		scanf(" %c", &girl);
		switch (girl)
		{
			case 'd' : printf(" \nPrice of the dress is Rs.519\n\nHow many dresses are you willing to buy : ");
			scanf("%d", &number[19]);
			printf(" \nTotal bill amount of the dress(es) is Rs.%d ", number[19]*519);
			temp[19] = number[19]*519;
			break;
			case 's' : printf(" \nPrice of the skirt is Rs.349\n\nHow many dresses are you willing to buy : ");
			scanf("%d", &number[20]);
			printf(" \nTotal bill amount of the dress(es) is Rs.%d ", number[20]*349);
		temp[20] = number[20]*349;
			break;
			default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto kg ;
	break;
		}
		break;
		default : printf("\n\t* Invalid selection...Please select among the available options *\n");
		goto k;
		break;
	}
	break;
	default : printf("\n\t* Invalid selection...Please select among the available options *\n");
	goto abc ;
	break;
	}
printf(" \n\n   _-_-_-_Do you want to buy something more !!!_-_-_-_\n\n\t   Press 1 to continue the shopping...\n ");
scanf("%d", &p);
}while(p==1);
sleep(1);
printf(" \n\t_-_-_-_-_-_-_-_ # SS STYLES # _-_-_-_-_-_-_-_\n\n\t*** Shopping bill of the customer : %s ***\n",name); 
printf("\n  ITEM\t\tNO. OF ITEMS\t\tPRICE\n______________________________________________________\n");
for (i=0;i<20;i++)
{
	if (number[i]==0)
	continue;
	printf("\n%d. %s\t\t%d\t\tRs.%d",(count++)+1,item[i],number[i],number[i]*price[i]);
}
printf("\n\n______________________________________________________\n\nActual amount of your bill :\t\tRs. ");
for (i=0;i<20;i++)
{
	 bill+=temp[i];
}
printf("%d",bill);
if (bill >= 10000)
{
printf(" \n\n\t// GST rate on your bill is 12 %% //\n\nAmount of GST added :\t\t\tRs. %lf ", bill*0.12);
printf(" \n\t\t\t\t\t_________________\n\nTotal amount of the bill : \t\tRs. %f \n\t (including GST)\t\t_________________ ", bill*1.12);
cardbill = bill*1.12;
}
else
{
printf(" \n\n\t// GST rate on your bill is 5 %% //\n\nAmount of GST added :\t\t\tRs. %lf ", bill*0.05);
printf(" \n\t\t\t\t\t_________________\n\nTotal amount of the bill : \t\tRs. %lf \n\t (including GST)\t\t_________________ ", bill*1.05);
cardbill = bill*1.05;
}
printf(" \n\n\t_____ Select the mode of bill payment _____\n\nEnter 1 Credit card Payment\nEnter 2 Debit card Payment\nEnter 3 Net Cash Payment\n ");
scanf("%d", &card);
sleep(1);
if (card==1)
{
printf(" \n|| You will get 10%% cash back on your bill...||\n\t\t\t\t\t_________________\n\nTotal amount of the bill : \t\tRs. %lf \n\t\t\t\t\t_________________ ", cardbill-cardbill*0.1);
}
else if (card==2)
{
printf(" \n|| You will get 15%% cash back on your bill...||\n\t\t\t\t\t_________________\n\nTotal amount of the bill : \t\tRs. %lf \n\t\t\t\t\t_________________ ", cardbill-cardbill*0.15);
}
else if (card==3)
{
printf(" \n|| You will get no cash back on this payment...||\n\t\t\t\t\t_________________\n\nTotal amount of the bill : \t\tRs. %lf \n\t\t\t\t\t_________________ ", cardbill);
}
printf(" \n\n\n\t_-_-_-_-_||||| THANKS FOR VISITING |||||_-_-_-_-_\n\n\t___We are grateful for the pleasure of serving you___\n\n\t\t-*-*-*-PLEASE VISIT AGAIN-*-*-*-\n\n\t   ',',',',',',|| SS STYLES ||,',',',',',',' ");
return 0;
}

