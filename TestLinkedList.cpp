        #include "LinkedList.h"
		#include "LinkedList.cpp"
		
		#include <iostream>
		using namespace std;

            // Simple print method
        template <class Object>
        void printList( const List<Object> & theList )
        {
            if( theList.isEmpty( ) )
                cout << "Empty list" << endl;
            else
            {
                ListItr<Object> itr = theList.first( );
                for( ; !itr.isPastEnd( ); itr.advance( ) )
                    cout << itr.retrieve( ) << " ";
            }

            cout << endl;
        }
        //410184
        //844110
        int main( )
        {
            cout<<"Nattawat Sanupan ID = 6706021410184 / 3 2 1 /4 1 0 1 8 4"<<endl;
			List<int> a;
			ListItr<int> b;
			b = a.zeroth();
            a.insert(1,b);
            a.insert(2,b);
            a.insert(3,b);
             
            cout<<"Before Insert Input" << endl;
            printList(a);
       
           b = a.zeroth();
           a.insert(4,b);
           b.advance();
           b.advance();
           b.advance();
           a.insert(1,b);
           b.advance();
           b.advance();
           a.insert(0,b);
           b = a.zeroth();
           b.advance();
           b.advance();
           b.advance();
           a.insert(1,b);
           b = a.zeroth();
           a.insert(8,b);
           b.advance();
           a.insert(4,b);
               
           cout<<"After Insert Input"<<endl;
           printList(a);
           return 0;


        
        }
