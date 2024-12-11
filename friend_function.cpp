/*Class Product has properties product_name and product_price. Class GST has property gst_rate. Both the classes have properties to to set their respective methods. Function finalPrice, outside both the classes and friend of both the classes, calculate the total price of a product and displays it along with the product name.*/
#include<iostream>
#include<string.h>
using namespace std;
class GST;
class Product
{
    private:
            string product_name;
            double product_price;
    public:
            void set()
            {
                cout<<"Enter the product_name:"<<endl;
                getline(cin,product_name);
                cout<<"Enter the product_price:"<<endl;
                cin>>product_price;
            }
            void get()
            {
                cout<<"The product_name:"<<product_name<<endl;
                cout<<"The product_price:"<<product_price<<endl;
            }
            friend void finalPrice(Product &p,GST &g);
};
class GST
{
    private:
            double gst_rate;
    public:
            void set()
            {
                cout<<"Enter the gst_rate:"<<endl;
                cin>>gst_rate;
            }
            void get()
            {
                cout<<"The gst_rate:"<<gst_rate<<endl;
            }
            friend void finalPrice(Product &p,GST &g);
};
void finalPrice(Product &p,GST &g)
{
    p.product_price=p.product_price+(p.product_price*g.gst_rate/100);
    cout<<"The product_price after gst_rate:"<<p.product_price<<endl;
}
int main()
{
    Product p;
    GST g;
    p.set();
    p.get();
    g.set();
    g.get();
    finalPrice(p,g);
    p.get();
    return 0;
}
