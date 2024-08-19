#include <iostream>

using namespace std;

class Book{
    string title;
    string author;
    int ISBN;
    char status;

public:
    Book(string Title,string Author,int isbn){
        title=Title;
        author=Author;
        ISBN=isbn;
    }
    void setTitle(string Title){
        title=Title;
    }

    string getTitle(){
        return title;
    }

    void setAuthor(string Author){
        author=Author;
    }

    string getAuthor(){
        return author;
    }

    void setISBN(int isbn){
        ISBN=isbn;
    }

    int getISBN(){
        return ISBN;
    }

    void checkOut(){
        status='n';
        cout<<"Checkout successfully done"<<endl;
    }

    void Return(){
        status='y';
        cout<<"Book has been returned successfully"<<endl;
    }

    void display(){
        cout<<"Title of the book: "<<title<<endl;
        cout<<"Author of the book: "<<author<<endl;
        cout<<"ISBN of the book: "<<ISBN<<endl;
        cout<<"Status of the book: "<<status<<endl;
    }
};

int main()
{
    Book book1=Book("Madolduwa","Sir Martin Wikramasinghe",001);
    int ch;
    cout<<"Enter your choice :\n 1.Checkout the book\n 2.Return the book\n 3.Display the information\n 4.Exit "<<endl;
    cin>>ch;
    while(ch!=4){
        if(ch==1){
            book1.checkOut();
        }
        else if(ch==2){
            book1.Return();
        }
        else if(ch==3){
            book1.display();
        }
        cout<<"\nEnter your choice :\n 1.Checkout the book\n 2.Return the book\n 3.Display the information\n 4.Exit "<<endl;
        cin>>ch;
    }

    return 0;
}
