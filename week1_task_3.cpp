#include <iostream>
#include <string>
#include <vector>

class Student
{   
    public:  
    Student(int a,int b,int c,int d,int e,int f ,int g)
    {
      degrees = {a,b,c,d,e,f,g} ;
    }
    std::vector<int>degrees  ;
    int sum = 0 , scholarship = 0;
    void check()
        {
         for(int i = 0 ; i <= 6 ; i++)
            {
                if(degrees[i] == 6){ scholarship ++;}
                sum = sum + degrees[i];
            }
        }    
    int average_note(int a )
        {
           return a/7;
        };
    void student_grade(int a)
        {
            if( a == 1) std::cout << "student  grade = <50%" ; 
            else if( a == 2) std::cout << "student  grade = 50,1% - 60%" ;
            else if( a == 3) std::cout << "student  grade = 60,1% - 70%" ; 
            else if( a == 4) std::cout << "student  grade = 70,1% - 80%" ; 
            else if( a == 5) std::cout << "student  grade = 70,1% - 80%" ; 
            else if( a == 6) std::cout << "student  grade = > 90,1%" ;
        }
    std::string is_scholarship(int a)
    {
        if(a >=3)return " you have scholarship !!";
    }
    
}; 
int highest_note = 6;
int lowest_note = 1;
void klass_grade(int a)
        {
            
            if( a == 1) std::cout << "klass grade = <50%" << std::endl ; 
            else if( a == 2) std::cout << "klass grade = 50,1% - 60%" << std::endl;
            else if( a == 3) std::cout << "klass grade = 60,1% - 70%" << std::endl; 
            else if( a == 4) std::cout << "klass grade = 70,1% - 80%" << std::endl; 
            else if( a == 5) std::cout << "klass grade = 70,1% - 80%" << std::endl; 
            else if( a == 6) std::cout << "klass grade = > 90,1%" << std::endl ;
            else if( highest_note> a)highest_note =a ;
            else if( lowest_note < a)lowest_note = a ;
        }
 
int scolar(int a , int b , int c , int d , int e )
    {
        int s = 0 ;
        if(a >=3)s++ ;
        if(b >=3)s++ ;
        if(c >=3)s++ ;
        if(d >=3)s++ ;
        if(e >=3)s++ ;
        return s ;
    }

int main()
{
    
    int liczba ;
    Student Harper(1,6,4,6,2,3,3) ;
    Harper.check();
    Student Celement(5,6,4,6,6,5,5) ;
    Celement.check();
    Student Celement_Jacobs(1,4,4,4,2,3,3) ;
    Celement_Jacobs.check();
    Student Cedric (6,6,6,6,4,5,4);
    Cedric.check();
    Student Fiona(4,3,4,3,2,3,3);
    Fiona.check();
    
        std::cout << "(1) Harper Eland"   << std::endl ;
        std::cout << "(2) Celement Haye"  << std::endl ;
        std::cout << "(3) Celement Jacobs" << std::endl ;
        std::cout << "(4) Cedric Santos"  << std::endl ;
        std::cout << "(5) Fiona Wilche"   << std::endl ;
        std::cout << "(6) Stats"          << std::endl ;
        std::cin >>  liczba;
        switch( liczba )
        {
            case 1:
            Harper.student_grade(Harper.average_note(Harper.sum));
            std::cout <<  Harper.is_scholarship(Harper.scholarship);
            break;
            case 2: 
            Celement.student_grade(Celement.average_note(Celement.sum));
            std::cout << Celement.is_scholarship(Celement.scholarship);
            break;
            case 3: 
            Celement_Jacobs.student_grade(Celement_Jacobs.average_note(Celement_Jacobs.sum));
            std::cout << Celement_Jacobs.is_scholarship(Celement_Jacobs.scholarship);
            break;
            case 4:
            Cedric.student_grade(Cedric.average_note(Cedric.sum));
            std::cout << Cedric.is_scholarship(Cedric.scholarship);
            break;
            case 5: 
            Fiona.student_grade(Fiona.average_note(Fiona.sum));
            std::cout << Fiona.is_scholarship(Fiona.scholarship);
            break;
            
    case 6: 
    std::cout<<"subject 1 ";klass_grade( (((Harper.degrees[0])+(Celement.degrees[0])+(Celement_Jacobs.degrees[0])+(Cedric.degrees[0])+(Fiona.degrees[0]))/5));
    std::cout<<"subject 2 ";klass_grade( (((Harper.degrees[1])+(Celement.degrees[1])+(Celement_Jacobs.degrees[1])+(Cedric.degrees[1])+(Fiona.degrees[1]))/5));
    std::cout<<"subject 3 ";klass_grade( (((Harper.degrees[2])+(Celement.degrees[2])+(Celement_Jacobs.degrees[2])+(Cedric.degrees[2])+(Fiona.degrees[2]))/5));
    std::cout<<"subject 4 ";klass_grade( (((Harper.degrees[3])+(Celement.degrees[3])+(Celement_Jacobs.degrees[3])+(Cedric.degrees[3])+(Fiona.degrees[3]))/5));
    std::cout<<"subject 5 ";klass_grade( (((Harper.degrees[4])+(Celement.degrees[4])+(Celement_Jacobs.degrees[4])+(Cedric.degrees[4])+(Fiona.degrees[4]))/5));
    std::cout<<"subject 6 ";klass_grade( (((Harper.degrees[5])+(Celement.degrees[5])+(Celement_Jacobs.degrees[5])+(Cedric.degrees[5])+(Fiona.degrees[5]))/5));
    std::cout<<"subject 7 ";klass_grade( (((Harper.degrees[6])+(Celement.degrees[6])+(Celement_Jacobs.degrees[6])+(Cedric.degrees[6])+(Fiona.degrees[6]))/5));
   std::cout<<"highest note ";klass_grade(highest_note) ;  
    
   std::cout<<"lowest note " ;klass_grade(lowest_note) ;  
    std::cout<<"numere of in class scholarship "<< scolar(Harper.scholarship,Celement.scholarship,Celement_Jacobs.scholarship,Cedric.scholarship,Fiona.scholarship);
    break;       
            
        }
}


