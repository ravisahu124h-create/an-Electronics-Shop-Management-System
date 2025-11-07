#include <iostream>
using namespace std;

static int totalIncome = 0;
class Customer;
class Mobile;
class Charger;
class headphone;
class phonecase;
class datacable;
class laptop; 
class television;
class CPU;
class Graphics;
class Monitor;
class Mouse;
class keyboad;
class harddisk;
class FAN;
class COLLER;
class LED;
class IRON;

class Mobile
{
public:
    string company;
    string model;
    int price;
    int quantity;

    void addMobile(string comp, string mod, int p, int q) 
    {
        company = comp;
        model = mod;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Model: " << model 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class Charger 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addCharger(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() 
    {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class headphone 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addheadphone(string comp, string typ, int p, int q)
     {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class phonecase 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addphonecase(string comp, string typ, int p, int q) 
    {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

    class datacable 
    {
public:
    string company;
    string type;
    int price;
    int quantity;

    void adddatacable(string comp, string typ, int p, int q) 
    {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class laptop 
{
public:
    string company;
    string processor;
    int price;
    int quantity;

    void addlaptop(string comp, string pro, int p, int q) 
    {
        company = comp;
        processor = pro;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | processor: " << processor 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class television
{
public:
    string company;
    string model;
    int price;
    int quantity;

    void addtelevision(string comp, string mod, int p, int q) 
    {
        company = comp;
        model = mod;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Model: " << model 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class CPU
{
public:
    string company;
    string processor;
    int price;
    int quantity;

    void addCPU(string comp, string pro, int p, int q) 
    {
        company = comp;
        processor = pro;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | processor: " << processor 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class Graphics
{
public:
    string company;
    string graphics;
    int price;
    int quantity;

    void addGraphics(string comp, string gra, int p, int q) 
    {
        company = comp;
        graphics = gra;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | graphics: " << graphics 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class Monitor
{
public:
    string company;
    string model;
    int price;
    int quantity;

    void addMonitor(string comp, string mod, int p, int q) 
    {
        company = comp;
        model = mod;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Model: " << model 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class Mouse 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addMouse(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() 
    {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class keyboad 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addkeyboad(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() 
    {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class harddisk 
{
public:
    string company;
    string processor;
    int price;
    int quantity;

    void addharddisk(string comp, string pro, int p, int q) 
    {
        company = comp;
        processor = pro;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | processor: " << processor 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class FAN 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addFAN(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() 
    {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class COOLER 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addCOOLER(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() 
    {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class LED 
{
public:
    string company;
    string type;
    int price;
    int quantity;

    void addLED(string comp, string typ, int p, int q) {
        company = comp;
        type = typ;
        price = p;
        quantity = q;
    }

    void show() 
    {
        cout << "Company: " << company 
             << " | Type: " << type 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};

class IRON
{
public:
    string company;
    string model;
    int price;
    int quantity;

    void addIRON(string comp, string mod, int p, int q) 
    {
        company = comp;
        model = mod;
        price = p;
        quantity = q;
    }

    void show() {
        cout << "Company: " << company 
             << " | Model: " << model 
             << " | Price: " << price 
             << " | Quantity: " << quantity <<endl;
    }
};



class Customer {
public:
    void buy(Mobile &mob, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (mob.quantity >= qty) 
		{
            mob.quantity -= qty;
            totalIncome += mob.price - ((mob.price*d)/100) * qty;
            cout << " You purchased " << qty << " phone(s) in discount "<< ((mob.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        mob.show();
     
    }
    
    void buyc(Charger &charg, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (charg.quantity >= qty) 
		{
            charg.quantity -= qty;
            totalIncome += charg.price - ((charg.price*d)/100) * qty;
            cout << " You purchased " << qty << " Charger (s) in discount "<< ((charg.price*d)/100)   
			;
        } 
		else 
		{
            cout << "charger Not enough stock available." << endl;   
			cout<<endl;
        }
        charg.show();
     
    } 

    void buyh(headphone &head, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (head.quantity >= qty) 
		{
            head.quantity -= qty;
            totalIncome += head.price - ((head.price*d)/100) * qty;
            cout << " You purchased " << qty << " head(s) in discount "<< ((head.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        head.show();
     
    }

     void buyca(phonecase &cas, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (cas.quantity >= qty) 
		{
            cas.quantity -= qty;
            totalIncome += cas.price - ((cas.price*d)/100) * qty;
            cout << " You purchased " << qty << " case(s) in discount "<< ((cas.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        cas.show();
     
    }

    void buycab(datacable &cable, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (cable.quantity >= qty) 
		{
            cable.quantity -= qty;
            totalIncome += cable.price - ((cable.price*d)/100) * qty;
            cout << " You purchased " << qty << " case(s) in discount "<< ((cable.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        cable.show();
     
    }

    void buyla(laptop &lap, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (lap.quantity >= qty) 
		{
            lap.quantity -= qty;
            totalIncome += lap.price - ((lap.price*d)/100) * qty;
            cout << " You purchased " << qty << " laptop(s) in discount "<< ((lap.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        lap.show();
     
    }

    void buyt(television &tv, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (tv.quantity >= qty) 
		{
            tv.quantity -= qty;
            totalIncome += tv.price - ((tv.price*d)/100) * qty;
            cout << " You purchased " << qty << " tv(s) in discount "<< ((tv.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        tv.show();
     
    }

    void buyCP(CPU &cpu, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (cpu.quantity >= qty) 
		{
            cpu.quantity -= qty;
            totalIncome += cpu.price - ((cpu.price*d)/100) * qty;
            cout << " You purchased " << qty << " cpu(s) in discount "<< ((cpu.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        cpu.show();
     
    }

    void buyG(Graphics &gra, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (gra.quantity >= qty) 
		{
            gra.quantity -= qty;
            totalIncome += gra.price - ((gra.price*d)/100) * qty;
            cout << " You purchased " << qty << " gra(s) in discount "<< ((gra.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        gra.show();
     
    }

    void buyM(Monitor &Moni, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (Moni.quantity >= qty) 
		{
            Moni.quantity -= qty;
            totalIncome += Moni.price - ((Moni.price*d)/100) * qty;
            cout << " You purchased " << qty << " Moni(s) in discount "<< ((Moni.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        Moni.show();
     
    }

    void buyMO(Mouse &Mou, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (Mou.quantity >= qty) 
		{
            Mou.quantity -= qty;
            totalIncome += Mou.price - ((Mou.price*d)/100) * qty;
            cout << " You purchased " << qty << " Mouse (s) in discount "<< ((Mou.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Mouse Not enough stock available." << endl;   
			cout<<endl;
        }
        Mou.show();
     
    }

    void buyK(keyboad &key, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (key.quantity >= qty) 
		{
            key.quantity -= qty;
            totalIncome += key.price - ((key.price*d)/100) * qty;
            cout << " You purchased " << qty << " keyboad (s) in discount "<< ((key.price*d)/100)   
			;
        } 
		else 
		{
            cout << "keyboad Not enough stock available." << endl;   
			cout<<endl;
        }
        key.show();
     
    }

    void buyha(harddisk &hard, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (hard.quantity >= qty) 
		{
            hard.quantity -= qty;
            totalIncome += hard.price - ((hard.price*d)/100) * qty;
            cout << " You purchased " << qty << " harddisk(s) in discount "<< ((hard.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        hard.show();
     
    }

    void buyF(FAN &fan, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (fan.quantity >= qty) 
		{
            fan.quantity -= qty;
            totalIncome += fan.price - ((fan.price*d)/100) * qty;
            cout << " You purchased " << qty << " FAN (s) in discount "<< ((fan.price*d)/100)   
			;
        } 
		else 
		{
            cout << "FAN Not enough stock available." << endl;   
			cout<<endl;
        }
        fan.show();
     
    } 

    void buyL(LED &led, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (led.quantity >= qty) 
		{
            led.quantity -= qty;
            totalIncome += led.price - ((led.price*d)/100) * qty;
            cout << " You purchased " << qty << " led (s) in discount "<< ((led.price*d)/100)   
			;
        } 
		else 
		{
            cout << "led Not enough stock available." << endl;   
			cout<<endl;
        }
        led.show();
     
    } 

    void buyCO(COOLER &cooler, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (cooler.quantity >= qty) 
		{
            cooler.quantity -= qty;
            totalIncome += cooler.price - ((cooler.price*d)/100) * qty;
            cout << " You purchased " << qty << " COOLER (s) in discount "<< ((cooler.price*d)/100)   
			;
        } 
		else 
		{
            cout << "COOlER Not enough stock available." << endl;   
			cout<<endl;
        }
        cooler.show();
     
    }

    void buyI(IRON &iron, int qty, double d) 
	{
        if (qty <= 0) 
		{
            cout << "Invalid quantity requested." << endl;   
			cout<<endl;
            return;
        }
        if (iron.quantity >= qty) 
		{
            iron.quantity -= qty;
            totalIncome += iron.price - ((iron.price*d)/100) * qty;
            cout << " You purchased " << qty << " IRON(s) in discount "<< ((iron.price*d)/100)   
			;
        } 
		else 
		{
            cout << "Not enough stock available." << endl;   
			cout<<endl;
        }
        iron.show();
     
    } 
    
};

int main() {
    Mobile m1,m2,m3;
    m1.addMobile("Oppo", "Cute PRO Max", 20000, 10);
    m2.addMobile("APPLE", "Sweet PRO Max", 40000, 10);
    m3.addMobile("Samsung", "Taddy PRO Max", 15000, 10);
    
    Charger ch1,ch2;
    ch1.addCharger("Samsung","C-Type", 1100, 15);
    ch2.addCharger("Apple","Lightning-Type", 2000, 15);
    
    headphone h1,h2;
    h1.addheadphone("boat","wireless", 7999, 9);
    h2.addheadphone("Apple","wireless", 20000, 5);
    
    phonecase ca1,ca2;
    ca1.addphonecase("sonix","plastic", 999, 9);
    ca2.addphonecase("marvel","marbal", 200,15);
    datacable cb1,cb2;
    cb1.adddatacable("realme","b-type", 1499, 5);
    cb2.adddatacable("vivo","c-type", 1699,7);

    laptop lp1,lp2;
    lp1.addlaptop("apple","m2 air", 99999, 5);
    lp2.addlaptop("hp","envy", 89999,5);

    television tv1,tv2;
    tv1.addtelevision("sony","lcd", 39999, 5);
    tv2.addtelevision("realme","lcd", 29999,5);

    CPU C1,C2;
    C1.addCPU("dell","intel", 19999, 5);
    C2.addCPU("hp","AMD", 18999,5);

    Graphics g1,g2;
    g1.addGraphics("intel","intel ARC", 49999, 5);
    g2.addGraphics("Nvidia","geforce RTX", 39999,5);

    Monitor mo1,mo2;
    mo1.addMonitor("lenovo"," oled", 29999, 7);
    mo2.addMonitor("apple"," oled", 49999,3);

    Mouse mou1,mou2,mou3;
    mou1.addMouse("hp"," bluetooth", 2999, 7);
    mou2.addMouse("apple"," wireless", 4999,3);
    mou3.addMouse("dell"," wireless", 1999,3);

    keyboad k1,k2,k3;
    k1.addkeyboad("hp"," wired", 1999, 7);
    k2.addkeyboad("apple"," wireless", 10999,5);
    k3.addkeyboad("apple"," wireless", 2999,7);

    harddisk har1,har2,har3,har4;
    har1.addharddisk("samsung","1tb ", 9999, 5);
    har2.addharddisk("realme","2tb", 8999,5);
    har3.addharddisk("readmi","1tb", 4999,8);
    har4.addharddisk("apple","1tb", 14999,4);

    FAN f1,f2,f3,f4;
    f1.addFAN("usha","selling ", 1999, 20);
    f2.addFAN("havells","selling", 2999,20);
    f3.addFAN("lg","table fan", 2499,20);
    f4.addFAN("bajaj","table fan", 3999,20);

    COOLER Co1,Co2,Co3,Co4;
    Co1.addCOOLER("vansal","larger ", 15999, 10);
    Co2.addCOOLER("simpheny","larger", 9999,10);
    Co3.addCOOLER("bajaj"," smallest", 12499,20);
    Co4.addCOOLER("gion"," smallest", 13999,20);

    LED le1,le2,le3,le4;
    le1.addLED("bajaj","bulb ", 499, 10);
    le2.addLED("simpheny","tourch", 299,10);
    le3.addLED("bajaj"," lamp", 399,20);
    le4.addLED("gion"," tubelite", 259,20);

    IRON io1,io2,io3,io4;
    io1.addIRON("bajaj","200w ", 1599, 10);
    io2.addIRON("havells","250w", 1499,10);
    io3.addIRON("bajaj"," 250w", 1199,20);
    io4.addIRON("samsung"," 300w", 1999,20);



    Customer c1[50];
    c1[0].buy(m1, 1, 10);
    c1[1].buy(m2, 5,5);
    c1[2].buy(m3, 2,1);
    c1[3].buy(m2, 1,12);
    c1[4].buy(m3, 0,2); 
    c1[5].buy(m1, 2,45); 
    c1[6].buy(m1, 3,12);
    c1[7].buyc(ch1,1,10) ; 
	c1[8].buyc(ch2,1,5) ;
    c1[9].buyh(h1,2,6);  
    c1[10].buyh(h2,4,8);
    c1[11].buyca(ca1,4,8);  
    c1[12].buyca(ca2,4,8);
    c1[13].buycab(cb1,3,3);  
    c1[14].buycab(cb2,7,2);
    c1[15].buyla(lp1,6,4);  
    c1[16].buyla(lp2,4,6);  
    c1[17].buyt(tv1,4,6);  
    c1[18].buyt(tv2,4,6);  
    c1[19].buyCP(C1,4,6);  
    c1[20].buyCP(C2,4,6);  
    c1[21].buyG(g1,5,6);  
    c1[22].buyG(g2,1,6); 
    c1[23].buyM(mo1,6,16);  
    c1[24].buyM(mo2,4,10);  
    c1[25].buyMO(mou1,7,16);  
    c1[26].buyMO(mou2,2,10);
    c1[27].buyK(k1,7,16);  
    c1[28].buyK(k2,4,10);
    c1[29].buyK(k3,6,15);
    c1[30].buyMO(mou3,2,10);  
    c1[31].buyha(har1,6,15);
    c1[32].buyha(har2,5,10);
    c1[33].buyha(har3,5,15);
    c1[34].buyha(har4,4,8);
    c1[35].buyF(f1,17,15);
    c1[36].buyF(f2,19,10);
    c1[37].buyF(f3,15,15);
    c1[38].buyF(f4,12,8);
    c1[39].buyCO(Co1,17,15);
    c1[40].buyCO(Co2,19,10);
    c1[41].buyCO(Co3,15,15);
    c1[42].buyCO(Co4,12,8);
    c1[43].buyL(le1,17,15);
    c1[44].buyL(le2,19,10);
    c1[45].buyL(le3,15,15);
    c1[46].buyL(le4,12,8);
    c1[47].buyI(io1,17,15);
    c1[48].buyI(io2,19,10);
    c1[49].buyI(io3,15,15);
    c1[50].buyI(io4,12,8);

	cout<<endl;
    cout << "Total Income: " << totalIncome << endl;

    return 0;
}