#include <iostream>
#include <stdlib.h>

using namespace std;
class Product{
    public:
    void addProduct( int PrdctID, string PrdctName ,int price, int ExpDate);
    void displayproduct();
    double addProduct(void);
    char answer;
    Product();
    private:
    string PrdctName;
    string manufacturer;
    int price;
    string ExpDate;
    int PrdctID;
};

 Product::Product(void){
     string answer;

    cout << "Hello SHOPPER!"<< endl;
do {
    cout << "Product ID : ";
    cin >> PrdctID;
    cout << "Enter Product Name :";
    cin >> PrdctName;
    cout << "Enter the Price :" ;
    cin >> price;
    cout << "Manufacturer of the Product : ";
    cin >> manufacturer;
    cout << " Expiration date of the Produuct : ";
    cin >>ExpDate;
    cout << "Do you want enter more product? Y/N?"<< endl;
    cin >> answer;
}
 while (answer == "Y" || answer == "y");
 }

void Product :: displayproduct(){
       system ("CLS");
    cout << "\tProduct ID is : "<< PrdctID<< endl;
    cout << "\tProduct Name is :"<< PrdctName << endl;
    cout << "\tProduct Price :"<< price << endl;
    cout << "\tProduct Manufacturer is :"<< manufacturer << endl;
    cout << "\tProduct Expiration Date is  :"<< ExpDate << endl;


}


int main()
{
    Product product;
    product.displayproduct();

    return 0;

}


