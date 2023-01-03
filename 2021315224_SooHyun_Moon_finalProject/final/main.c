#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

char login[10][MAX]; 
char password[10][MAX];
char store[10][MAX];
int choice, choice2, choice3;

void customerpage();
void startPage();
void showProduct_Eldor();
void showProduct_Firuz();
void showExpire_Eldor();
void showExpire_Firuz();
void showDiscount_Eldor();
void showDiscount_Firuz();
void addProduct_Eldor();
void addProduct_Firuz();
void removeProduct_Eldor();
void removeProduct_Firuz();
void editProduct_Eldor();
void editProduct_Firuz();
void logOut();
void show_Product_C();
void searchProduct();

struct date
{
  int day;
  int month;
  int year;
};



struct Product
{
  int id;
  char name[MAX];
  char endname[MAX];
  char stores[MAX];
  char shopkeeper[MAX];
  int price;
  int quantity;
  char discount[MAX];
  char expiry[MAX];
  struct date mfg;
};


struct Product a[MAX];
struct Product b[MAX];

//start of program 
int main(void) 
{ 
// start screen
  // SHOPKEEPER LOGIN. asks a user to enter login and password.
  printf("\n");
  startPage();
  printf("\n");
  printf("Start of customer page\n");
  customerpage();
  
}


  /*
  * Function: shop_product_Eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: products brought and its details for Eldor 
  *
  */

void showProduct_Eldor() // case 1. shows all products of shopkeeper 
{
  char name[50], discount[20], expiry[20], endname[20];
  int price, quantity;
  FILE *fp = fopen("Eldor_Product.txt", "r");
  char ch;
  
  if (fp == NULL)
  {
    printf("no such file.");
    exit(1);
  }
  printf("\n");
  printf("***Store 1***\n");
  printf("Shopkeeper: Eldor\n");
  printf("===========\n");
  printf("Product Name\tPrice\tQuantity\tDiscount\tExpire Date\n\n");
  while (fscanf(fp, "%s %s\t%d\t%d\t%s\t%s\n",name, endname, &price, &quantity, discount, expiry) != EOF)
  {
    printf("\n%s%s\t\t%d\t\t%d\t\t%s\t\t%s\n", name, endname, price, quantity, discount, expiry);
  }
  
  printf("Press any key to continue\n");
  getchar(); 
  fclose(fp);
}

  /*
  * Function: shop_product_Firuz
  * -----------
  * computes showing products for the Firuz File 
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: products brought and its details for Eldor 
  *
  */

void showProduct_Firuz() // case 1. shows all products of shopkeeper 
{
  char name[50], discount[20], expiry[20], endname[20];
  int price, quantity;
  FILE *fp;
  char ch;

  fp = fopen("Firuz_Product.txt", "r");

  if (fp == NULL) // when no file firus product found it return no such file 
  {
    printf("no such file.");
    exit(1);
  }
  
  printf("\n");
  printf("***Store 2***\n");
  printf("Shopkeeper: Firuz\n");
  printf("===========\n");
  printf("Product Name\tPrice\tQuantity\tDiscount\tExpire Date\n\n");
  while (fscanf(fp, "%s %s\t%d\t%d\t%s\t%s\n",name, endname, &price, &quantity, discount, expiry) != EOF) // while lopps for all products details until end of file 
  {
    printf("\n%s %s\t\t%d\t\t%d\t\t%s\t\t%s\n", name, endname, price, quantity, discount, expiry); // prints all products details until end of file
  }
  
  printf("Press any key to continue\n");
  scanf("%c", &ch);
  fclose(fp);
}


  /*
  * Function: show_expire_eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: products in order according to expiry date 
  *
  */


 //case 2 of shopkeeper
void showExpire_Eldor() {
  char name[50], discount[20], expiry[20], endname[20];
  int price, quantity;
  char ch;
  FILE *fp;
  
  fp = fopen("Eldor.txt", "r");
  printf("**Store 1 **\n");
  printf("Shopkeeper: Eldor\n");
  printf("============\n");
  printf("\tProducts List:\n");
  printf("Product Name\tPrice\tQuantity\tDiscount\tExpire Date\n");
  // loop that goes into all array and organizes expire dates in order
  
  printf("Press any key to continue\n");
  scanf("%c", &a);
  fclose(fp);
}

  /*
  * Function: show_expire_Firuz
  * -----------
  * computes showing products for the Firuz File 
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: products in order according to expiry date 
  *
  */

void showExpire_Firuz() //case 2 of shopkeeper
{
  FILE *fp;
  char ch;
  char name[50], discount[20], expiry[20], endname[20];
  int price, quantity;
  fp = fopen("Firuz.txt", "r");
  printf("**Store 2 **\n");
  printf("Shopkeeper: Firuz\n");
  printf("============\n");
  printf("\tProducts List:\n");
  printf("Product Name\tPrice\tQuantity\tDiscount\tExpire Date\n");
  // loop that goes into all array and organizes expire dates in order
  printf("Press any key to continue\n");

  fclose(fp);
  scanf("%c", &ch);
}



  /*
  * Function: show_discount_Eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: shows discount and product name in Eldor file 
  *
  */

void showDiscount_Eldor() //case 3. show products with discounts for shopkeeper. //case 2. for customer page 
{
  
  FILE *fp;
  char ch;
  char name[50], discount[20], expiry[20], endname[20];
  int price, quantity;
  fp = fopen("Eldor.txt", "r");
  printf("***Store 1***\n");
  printf("Shopkeeper: Eldor\n");
  printf("===========\n");
  printf("\tProducts List with Discounts:\n");
  printf("Product Name\tPrice\tQuantity\tDiscount\tExpire Date\n");
  
  printf("Press any key to continue\n");
  scanf("%c", &ch); //makes the press any key to continue work
  fclose(fp);
}

  /*
  * Function: show_discount_Firuz
  * -----------
  * computes showing products for the Firuz File 
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: shows discount and product name in Eldor file 
  *
  */

void showDiscount_Firuz() //case 3. show products with discounts for shopkeeper. //case 2. for customer page 
{
  FILE *fp;
  char ch;
  fp = fopen("Eldor.txt", "r");
  printf("***Store 1***\n");
  printf("Shopkeeper: Eldor\n");
  printf("===========\n");
  printf("\tProducts List with Discounts:\n");
  printf("Product Name\tPrice\tQuantity\tDiscount\tExpire Date\n");
  
  printf("Press any key to continue\n");
  fclose(fp);
  scanf("%c", &ch);
}

  /*
  * Function: add_product_Eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  *
  * year: product year expiry    
  * month: product month expiry    
  * day: product day expiry     
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: adds a new product form user to file of Eldor_Product.txt
  *
  */

// case 4 in which adds new product into the array
void addProduct_Eldor() 
{ // case 4 
  FILE *fp;
  struct Product item;
  int year, month, day;
  int price, quantity;
  char discount[20];
  fp = fopen("Eldor_Product.txt", "a"); /// enters to newest line available
  item.id=getIDE();
    if (fp == NULL){
    printf("Can't open the file\n");
    exit(1);
  }
  else
  {
    printf("Add New Product: \n");
    printf("\n");
    
    printf("Product name: (two strings)"); 
    scanf("%s%s", item.name, item.endname); // asks product name to file
    fprintf(fp,"\n%s%s", item.name, item.endname); //saves strings to file 

    printf("Price (per item):");
    scanf("%d", & item.price); //asks product price to file 
    fprintf(fp, "\t\t%d", item.price); // saves price to file

    printf("Quantity: ");
    scanf("%d", & item.quantity); //asks product quantity to file
    fprintf(fp, "\t\t%d", item.quantity);// saves quantity to file 
    
    printf("Discount: ");
    scanf("%s", item.discount); // asks product if it has discount
    fprintf(fp, "\t\t%s", item.discount); //saves product discount information to file 
    
    printf("Expire Date: ");
    scanf("%d-%d-%d", & item.mfg.year, & item.mfg.month, & item.mfg.day); // asks product expire date 
    fprintf(fp, "\t\t%d-%d-%d", item.mfg.year, item.mfg.month, item.mfg.day);//saves product expire information to file 

  }
  
  fclose(fp);
  
}

  /*
  * Function: add_product_Firuz
  * -----------
  * computes showing products for the Firuz File 
  * 
  *
  * year: product year expiry    
  * month: product month expiry    
  * day: product day expiry     
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: adds a new product form user to file of Firuz_Product.txt
  *
  */

void addProduct_Firuz() 
{ // case 4 
  FILE *fp;
  struct Product item;
  int year, month, day;
  int price, quantity;
  
  fp = fopen("Firuz_Product.txt", "ab");
  item.id=getIDF();
  printf("Add New Product: \n");
  printf("\n");
    
  printf("Product name: (two strings)"); 
  scanf("%s%s", item.name, item.endname); // asks product name to file
  fprintf(fp,"\n%s%s", item.name, item.endname); //saves strings to file 

  printf("Price (per item):");
  scanf("%d", & item.price); //asks product price to file 
  fprintf(fp, "\t\t%d", item.price); // saves price to file

  printf("Quantity: ");
  scanf("%d", & item.quantity); //asks product quantity to file
  fprintf(fp, "\t\t%d", item.quantity);// saves quantity to file 
    
  printf("Discount: ");
  scanf("%s", item.discount); // asks product if it has discount
  fprintf(fp, "\t\t%s", item.discount); //saves product discount information to file 
    
  printf("Expire Date: ");
  scanf("%d-%d-%d", & item.mfg.year, & item.mfg.month, & item.mfg.day); // asks product expire date 
  fprintf(fp, "\t\t%d-%d-%d", item.mfg.year, item.mfg.month, item.mfg.day);//saves product expire information to file 
    
  fclose(fp);
}


int getIDE() // searches for eldor file id products info
{
	FILE *fp;
	int v=0;
	fp=fopen("Eldor_Product.txt","r");
	if(fp==NULL) //checks if id is available for product 
	{
		fp=fopen("Eldor_Product.txt","w");
		fprintf(fp,"%d",0);
		fclose(fp);
		fp=fopen("Eldor_Product.txt","r");
	}
	fscanf(fp,"%d",&v);
	fclose(fp);
	fp=fopen("Eldor_Product.txt","w");
	fprintf(fp,"%d",v+1);  //return id for product 
	fclose(fp);
	return v+1;
}

int getIDF() // searches for firuz file id products info
{
	FILE *fp;
	int v=0;
	fp=fopen("Firuz_Product.txt","r");
	if(fp==NULL) //checks if id is available for product 
	{
		fp=fopen("Firuz_Product.txt","w");
		fprintf(fp,"%d",0);
		fclose(fp);
		fp=fopen("Firuz_Product.txt","r");
	}
	fscanf(fp,"%d",&v);
	fclose(fp);
	fp=fopen("Firuz_Product.txt","w");
	fprintf(fp,"%d",v+1); //return id for product 
	fclose(fp);
	return v+1;
}


  /*
  * Function: remove_product_Eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  *
  * temp: temporary file name variable 
  * ID: product number in file list order
  * filename: saves filename of product   
  * c: counter 
  * l: length
  * current_line: helps indicate which line in file 
  * buffer: helps go between data changes
  *
  * returns: removes product according to ID written by user from file 
  *
  */
//case 5 of shopkeeper page
void removeProduct_Eldor()
{
  char temp_filename[1000];
  char ID;
  FILE *fp, *temp;
  char filename[50], c;
  fp = fopen("Eldor_Product.txt", "r");
  
  struct Product item[50];
  printf("***Store 1***\n");
  printf("=============================\n");
  printf("Products List:\n");
  printf("Product ID\tProduct Name\n");
  //adds an ID into each number of item 

  int ch=0;
  int lines=0;

  if (fp == NULL);
  return 0;

  lines++;
  while ((ch = fgetc(fp)) != EOF) // 
    {
      if (ch == '\n')
    lines++;
    }

  for(int a = 1; a<lines; a++){
    printf("%d\t\t%s%s", a, item[a].name, item[a].endname);
  }

  printf("=============================\n");
  printf("Enter ID of removing product: ");
  scanf("%d", &ID);
  printf("I couldn't figure out how to prent item name \n");
  
  strcpy(temp_filename, "temp___");
  strcat(temp_filename, "Eldor_Product.txt");

  temp = fopen(temp_filename, "w");

  if (fp == NULL && temp == NULL)
  {
    printf("Error");
    return 1;
  }
  bool keep_reading = true;
  int current_line = 1;
  int buffer[1000];
  int delete_line;
  do
  {
    fgets(buffer, MAX, fp);
    if(feof(fp)){
      keep_reading = false;
    }
    else if (current_line != delete_line)
    {
      fputs(buffer, temp);
    }
    current_line++;
  } while (keep_reading);
  
  fclose(fp);
  fclose(temp);
  remove("Eldor_Product.txt");
  rename(temp_filename, "Eldor_Product.txt");
  
  for (int i=0; i<current_line; i++)
  {
    printf("\n%d\t\t\t%s\n", i+1, item[i].name);
  }
  printf("=============\n");
  printf("Enter ID of removing product: ");
  scanf("%d", &ID);
  

}
 
  /*
  * Function: remove_product_Firuz
  * -----------
  * computes showing products for the Firuz File 
  * 
  *
  * ID: product number in list of file 
  * filename: saves filename of product   
  * c: counter 
  * l: length
  * current_line: helps indicate which line in file 
  * buff: helps go between data changes
  *
  * returns: removes product according to ID written by user from file 
  *
  */

void removeProduct_Firuz() 
{
  char ID;
  FILE *fp;
  int delete_line = 0;
  char filename[50], c, cn, buff[1000];
  fp = fopen("Firuz_Product.txt", "r");
  struct Product item[50];
  printf("***Store 2***\n");
  printf("=============================\n");
  printf("Products List:\n");
  printf("Product ID\tProduct Name\n");
  
  // returns file couldn't be opened if file is not present
  if (NULL == fp){
    printf("Failed to open %s\n", "Firuz_Product.txt");
    return;
  }

  int index = 1;
  // prints number of each line based in number of lines used from file
  while(!feof(fp))
  {
    if(NULL == fgets(buff, sizeof(buff)/sizeof(buff[0]),fp))
    {
      break;
    }
    printf("%d\t\t\t%s%s",index++,buff); // prints ID number for each product found in file 
  
  }
  
  
  int l[20], f, em;
  printf("=============================\n");
  printf("Enter ID of removing product: ");
  scanf("%d", &ID);
  printf("I couldn't figure out how to remove product with ID\n");
  
  fclose(fp);
}

  /*
  * Function: edit_product_Eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  * ch: character of letteers indicator
  * ID: product number in file 
  * found: helps find product to be edited
  *
  * returns: edits product according to ID  written by user from file 
  *
  */
//case 6 editProduct 
void editProduct_Eldor()
{
  FILE *fp;
  fp = fopen("Eldor_Product.txt", "r");
  char ch, ID; 
  printf("***Store 1***\n");
  printf("Shopkeeper: Eldor\n");
  printf("=============\n");
  printf("Products List:\n");
  printf("Product ID\tProduct Name\tPrice\tQuantity\tDiscount\tExpire Date\n");
  // i don't know how to edit product
  //system("pause");
  printf("Enter ID of editing product:\n");
  scanf("%d", &ID);
  printf("I couldn't figure out how to edit product with ID");

	FILE *fp1;
	struct Product t;
	int found=0;

  fclose(fp);

}


  /*
  * Function: edit_product_Eldor
  * -----------
  * computes showing products for the Eldor File 
  * 
  * ch: character of letteers indicator
  * ID: product number in file 
  * found: helps find product to be edited
  *
  * returns: edits product according to ID  written by user from file 
  *
  */
void editProduct_Firuz()
{
  FILE *fp;
  int ID;
  fp = fopen("Firuz_Product.txt", "r");
  printf("***Store 2***\n");
  printf("Shopkeeper: Firuz\n");
  printf("=============\n");
  printf("Products List:\n");
  printf("Product ID\tProduct Name\tPrice\tQuantity\tDiscount\tExpire Date\n");  
  printf("Enter ID of editing product:\n");
  scanf("%d", &ID);
  printf("I couldn't figure out how to edit product with ID");
  fclose(fp);


}

 /*
  * Function: customer_page
  * -----------
  * logout and sign in  page of customer
  * computes showing products for the Eldor and Firuz File
  * 
  *
  *
  * returns: login page for customer
  *
  */

void customerpage()
{
  printf("***CUSTOMER PAGE***\n");
  printf("=============================\n");
  printf("\t1.Show all products\n");
  printf("\t2.Show products with discounts\n");
  printf("\t3.Search for specific product\n");
  printf("\t4.Go to start page\n");
  printf("=============================\n");
  printf("Enter Your Choice: ");
  scanf("%d", &choice3);
  switch(choice3) //Shopkeeper login
          {
            case 1:
              show_Product_C();
            case 2:
              printf("Show products with discount");
            case 3:
              printf("Search for specific product");
            case 4:
              startPage();
          }
}


  /*
  * Function: start_page
  * -----------
  * computes showing products for the Eldor and Firuz File
  * 
  * login: login information for user
  * password: passwords available for user
  * store: stores available for user
  *
  *
  * returns: login page for shopkeeper
  *
  */
//logout and sign in  page of shopkeeper
void startPage()
{
  char login[2][MAX] = {"Eldor", "Firuz"};
  char password[2][MAX] ={"p@assw0rd","pAsswOrd"};
  char store[2][MAX] = {"Store 1", "Store2"};
  printf("*** Welcome to SKKU Store Management***\n");
  printf("=======================\n");
  printf("\n");
  printf("1. Login as shopkeeper\n");
  printf("2. Search products\n");
  printf("3. Exit\n");
  printf("=======================\n");
  printf("Enter Your Choice: ");
  scanf("%d", &choice);

  
  //returns to shopkeeper page 
  if(choice == 1) 
  {
    
    printf("*** SHOPKEEPER PAGE ***\n");
    printf("==========================\n");
    
    char loginone[MAX];
    char passwordone[MAX];
    int trial = 1; 
      printf("\n");
      for(int i = 1; i<MAX; i++) // gets user to input login and password
      {
        printf("Login: ");
        scanf("%s", loginone);
        printf("Password: ");
        scanf("%s", passwordone);

        if(strcmp(loginone, login[0]) == 0 && strcmp(passwordone, password[0]) == 0) // prints options of the program 
        {
          printf("\n");
          printf("***Store 1***\n");
          printf("Shopkeeper: Eldor\n");
          printf("===========================\n");
          printf("\t1. Show my products\n");
          printf("\t2. Sort products by expire date\n");
          printf("\t3. Show products with discounts\n");
          printf("\t4. Add products\n");
          printf("\t5. Remove products\n");
          printf("\t6. Edit products\n");
          printf("\t7. Log out\n");
          printf("============\n");
          printf("Enter Your Choice: ");
          scanf("%d", &choice2);
          switch(choice2) //Shopkeeper login
          {
            case 1:  // indicates to show eldor file products
              showProduct_Eldor();
              continue;
            case 2: //indicates to show expire for eldor file produccts
              showExpire_Eldor(); 
              continue;
            case 3: 
              showDiscount_Eldor(); //indicates to show discount for products
              continue;
            case 4: 
              addProduct_Eldor(); //indicates to add product by user
              continue;
            case 5:
              removeProduct_Eldor(); //indicates to remove product eldor 
              continue;
            case 6: 
              editProduct_Eldor(); //indicates editing product of eldor
              continue;
            case 7:
              printf("Logging out\n");
              break; //logs out of the program 
              
              
          }
          break;
        }
        else if(strcmp(loginone, login[1]) == 0 && strcmp(passwordone, password[1]) == 0) //indicates to firuz menu 
        {          
          printf("***Store 2***\n");
          printf("Shopkeeper: Firuz\n");
          printf("=========================\n");
          printf("\t1.Show my products\n");
          printf("\t2.Sort products by expire date\n");
          printf("\t3.Show products with discounts\n");
          printf("\t4.Add products\n");
          printf("\t5.Remove products\n");
          printf("\t6.Edit products\n");
          printf("\t7. Log out\n");
          printf("============\n");
          printf("Enter Your Choice: ");
          scanf("%d", &choice2);

          switch(choice2) //Shopkeeper login
          {
            case 1: 
              showProduct_Firuz(); //shows products of firuz
              continue;
            case 2: 
              showExpire_Firuz(); //show expire product firuz 
              continue;
            case 3: 
              showDiscount_Firuz(); //show discount product firuz 
              continue;
            case 4: 
              addProduct_Firuz(); // adds product firuz 
              continue;
            case 5:
              removeProduct_Firuz(); //removes product firuz 
              continue;
            case 6: 
              editProduct_Firuz(); //edits product firuz 
              continue;
            case 7:
              printf("logging out"); 
              break;
        }
        break;
      }
      else
      {
        printf("You have entered wrong login or password(%d/3 trials)\n", trial);
        trial++; 
        if(trial == 4) //indiates trials of error and break program when 3 trials end 
        {
          break;
        }
      }
      printf("\n");
    }
  }
  else if (choice == 2) //searches products for both eldor and firuz
  {
    searchProduct();
  }
  
  if (choice == 3)
  {
    printf("Program exits");
    exit(0);
  }
  printf("Program exits");
  printf("\n");
}

  /*
  * Function: search_product
  * -----------
  * computes searhcing products for the Eldor and Firuz File 
  * 
  *
  * returns: edits product according to ID  written by user from file 
  *
  */

void searchProduct(int id)
{
  FILE *fp1,*fp2;
	struct Product t;
	fp1=fopen("Eldor_Product.txt","rb");
  fp2= fopen("Firuz_Product.txt","rb");
  
  printf("***CUSTOMER PAGE***\n");
  printf("===============================\n");
  printf("search product\n");
  printf("I coudn't figure out how to search product\n");
  printf("Press any key to continue\n");
  scanf("%c", &a);
	fclose(fp1);
  fclose(fp2);
	return t;
}

  /*
  * Function: show_product_c
  * -----------
  * computes showing products for the Eldor and Firuz product files
  * 
  *
  * name: product name   
  * end name: product second word detail of product added to cart 
  * price: product price added to cart
  * quantity: product quantity added to cart
  * discount: product discount added to cart
  * expiry: product expiry date added to cart
  *
  * returns: products brought and its details for Eldor and Firuz
  *
  *
  */


void show_Product_C() //case 1 for customer page
{
  char ch;
  char a;
  char name[50], discount[20], expiry[20], endname[20];
  int price, quantity;
  printf("***CUSTOMER PAGE***\n");
  printf("======================\n");
  printf("\tShow all products\n");
  FILE *fp, *fp1;
  fp = fopen("Firuz_Product.txt", "r");
  printf("Product Name\tStore\tShopkeeper\tPrice\tQuantity\tDiscount\tExpire Date\n");
  
  while (fscanf(fp, "%s %s\t\tt%d\t%d\t%s\t%s\n",name, endname, &price, &quantity, discount, expiry) != EOF) // while lopps for all products details until end of file 
  {
    printf("\n%s %s\tFiruz\t%d\t\t%d\t\t%s\t\t%s\n", name, endname, price, quantity, discount, expiry); // prints all products details until end of file
  }
  fp1 = fopen("Eldor_Product.txt", "r");
  while (fscanf(fp1, "%s %s\t\tt%d\t%d\t%s\t%s\n",name, endname, &price, &quantity, discount, expiry) != EOF)
  {
    printf("\n%s %s\tEldor\t%d\t\t%d\t\t%s\t\t%s\n", name, endname, price, quantity, discount, expiry); // prints all products details until end of file
  }
  printf("Press any key to continue\n");
  scanf("%c", &a);
}


void showSpecific() {
  char first, ch; 
  printf("CUSTOMER PAGE***\n");
  printf("============\n");
  printf("Search Product(Enter first letter): %c\n", first);
  printf("Results: ");
  printf("Product Name\tStore\tShopkeeper\tPrice\tQuantity\tDiscount\tExpire Date\n");
  printf("I coudn't figure out how to search product in file and print them in order to the project");
  printf("Press any key to continue\n");
  scanf("%c", &a);

}
