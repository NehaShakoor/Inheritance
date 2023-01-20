#include <iostream>

class Triangle{   
  private:
   int length, width, height;
      
	   Triangle(){ 
	      Length=3; width=4;  height=5;} 
		 
		 Triangle(int l, int w, int h){Length=l; width=w;  height=h;}
		 int area(){ 
		   return length*width*height;
		   }
		   int perimeter(){ 
		     return length+width+height;
			}
	
			Void setlength(int l){ 
			  length=l; 
			   }
			   Void setwidth(int w){ 
			     width=w; 
				 }
				 Void setheight(int h){  
				  height=h;  }
				  
				  int getlength(){
				   return length; 
				    }
				    int getwidth(){
				     return width; 
					 }
					 int getheight(){
					  return height; 
					   }
					   
					   }
					   Public class labexercise{
					   Public Static void main( String ags…)
					   {
					   Triangle t=new Triangle();
					   Triangle t1=new Triangle(5,6,7);
					   System.out.println(“ Area of Triangle= “ +t.area());
					   /// 60
					   System.out.println(“ Perimeter of Triangle= “ +t.perimeter());
					   System.out.println(“ Area of Triangle= “ +t1.area());
					   System.out.println(“ Perimeter of Triangle= “ +t1.perimeter());
					   t.setlength(12);System.out.println(“ Area of Triangle= “ +t.area());
					   System.out.println(“ Area of Triangle= “ +t.area()+ “ And its width is “+t.getwidth());
					   }
					   };


int main() {
	return 0;
}
