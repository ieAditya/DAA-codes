#include <iostream>
using namespace std;

struct nod{
    nod *lft, *rite;
    int d;
} *rite = NULL, *ptr = NULL, *np = NULL, *q;

void create(){
    int value, c = 0,i;
    cout<<"Enter number of values to insert: ";
    cin>>i;
    while (c < i){
        if (rite == NULL){
            rite = new nod;
            cout << "enter value of root node\n";
            cin >> rite->d;
            rite->rite = NULL;
            rite->lft = NULL;
        }
        else{
            ptr = rite;
            cout << "enter value of node\n";
            cin >> value;
            while (true){
                if (value < ptr->d){
                    if (ptr->lft == NULL){
                        ptr->lft = new nod;
                        ptr = ptr->lft;
                        ptr->d = value;
                        ptr->lft = NULL;
                        ptr->rite = NULL;
                        cout << "value entered in left\n";
                        break;
                    }
                    else if (ptr->lft != NULL){
                        ptr = ptr->lft;
                    }
                }
                else if (value > ptr->d){
                    if (ptr->rite == NULL){
                        ptr->rite = new nod;
                        ptr = ptr->rite;
                        ptr->d = value;
                        ptr->lft = NULL;
                        ptr->rite = NULL;
                        cout << "value entered in right\n";
                        break;
                    }
                    else if (ptr->rite != NULL){
                        ptr = ptr->rite;
                    }
                }
            }
        }
        c++;
    }
}

int main(){
    create();
    return 0;
}