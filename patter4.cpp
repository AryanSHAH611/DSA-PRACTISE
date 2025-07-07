    #include<iostream>
    using namespace std;
    int main()
    /*{
    int n;
    cin>>n;
    
    int row = 1;
    while(row<= n){
        //spaces
        int spaces = n-row;
        while(spaces){
        cout<<" ";
        spaces = spaces - 1;
        }
        //stars 
        int col = 1;
        while(col<=row){
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    }
 
{
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
    int star = n-row+1;
    while(star){
        cout<<"*";
        star = star - 1;
    }
    cout<<endl;
    row = row + 1;
   }
}
   
{
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
    //space
    int space = row - 1;
    while(space){
        cout<<" ";
        space = space - 1;
    }
    //stars
    int star = n - row +1;
    while(star){
        cout<<"*";
        star = star - 1;
    }
    cout<<endl;
    row = row + 1;
    }
}

{
    int n;
    cin>>n;

    int row = 1;
    int count = 1;
    while(row<=n){
    //space
    int space = row - 1;
    while(space){
        cout<<" ";
        space = space - 1;
    }
    //number
    int count = n - row +1;
    while(count){
        cout<<count;
        count = count - 1;
    }
    cout<<endl;
    row = row + 1;
    }
}
*/
{
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        //space
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        // secound  triangle
        int col = 1;
        while(col<=row){
            cout<<col;
            col = col + 1;
        }

        // third triangle
        int start = row - 1; 
        while(start){
            cout<<start ;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}