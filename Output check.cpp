using namespace std;

class p 
{
public:
    virtual void print()
	{
		cout<<" it is a base class \n";
	}	
};
class q: public p
{
public:
    void print()
	{ 
	    cout<<"it is a derived class \n";
	}	
};
int main(void)
{
	p *b = new q;
	b->print();
	return 0;
}
