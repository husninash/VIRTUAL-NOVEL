#include <iostream>

using namespace std;

struct Buku
{
    // komponen /member
    string judul, penulis;
    int tahun;
    int posisi;

    Buku *next;

    // deklarasi single link list
};

Buku *head,*tail,*cur, *newNode, *del;

void createSingleLinkList(string judul, string penulis, int tB){
     head= new Buku();
     head->judul=judul;
     head-> penulis=penulis;
     head-> tahun= tB;
     tail= head;
     }

void printSingleLinkList(){
    cur=head;
    while(cur!=NULL) {
        cout<< "Judul Buku:"<< cur->judul<<endl;
        cout<< "Penulis Buku:"<< cur-> penulis<<endl;
        cout<< "Tahun terbit:"<< cur->tahun<<endl;

        cur= cur->next;

    }}
//ADD FIRST
void addFirst(string judul, string penulis, int tB){
     newNode= new Buku();
     newNode->judul=judul;
     newNode-> penulis=penulis;
     newNode-> tahun= tB;
     newNode->next= head;
     head=newNode;}
// ADD LAST
void addLast(string judul, string penulis, int tB){
     newNode= new Buku();
     newNode->judul=judul;
     newNode-> penulis=penulis;
     newNode-> tahun= tB;
     newNode->next= NULL;
     tail->next= newNode;
     tail=newNode;}
//Tambah Tengah

// DELETE FIRST
void deleteFirst(){
    del=head;
    head= head->next;
    delete del;
}
void addMiddle(string judul, string penulis, int tB, int posisi){
     newNode= new Buku();
     newNode->judul=judul;
     newNode-> penulis=penulis;
     newNode-> tahun= tB;
     newNode-> posisi= posisi;

     //tranversing
     head=cur;
     int nomor=1;
     while(nomor>posisi-1) {
         cur= cur-> next;
         nomor++;
     }
     newNode->next=cur->next;
     cur->next=newNode;}

//ini adalah contoh link yang hanya punya satu node
int main(){
    createSingleLinkList("Kata", "Rintik Sedu",2018);

    printSingleLinkList();
    cout<< "\n"<<endl;

    addFirst("Laskar Pelangi", "Andrea Hirata", 2009);
    cout<< "\n"<<endl;

    printSingleLinkList();
    cout<< "\n"<<endl;

    addLast("Topi Hamdan", "Auni FA", 2017);
    cout<< "\n"<<endl;

    printSingleLinkList();
    cout<< "\n"<<endl;

    deleteFirst();

    printSingleLinkList();
    cout<< "\n"<<endl;

    addMiddle("Hans", "Risa Saraswati", 2009);
    cout<< "\n"<<endl;

    printSingleLinkList();
    cout<< "\n"<<endl;

    }
