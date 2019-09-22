const int MAXROWS=2;
const int MAXCOLS=3;

using namespace std;

template <typename T>
class Matrix
{
  private:
   T doubleArray[MAXROWS][MAXCOLS];
   int rows;
   int cols;

  public:
   //Constructor
   Matrix();  //Set rows to MAXROWS and cols to MAXCOLS
	      //Initialize all the values of doubleArray to zero
    
   //Getter Functions
   void printMatrix(); 

   //Setter Functions
   void setMatrix(T [][MAXCOLS]); //set the doubleArray to what is sent
   void addMatrix(T [][MAXCOLS]); //add an array to doubleArray
   void addMatrix(Matrix<T> otherMatrix);

   //No destructor needed
};



///------------------------Definitions--------------
template<typename T>
Matrix<T>::Matrix()
{
   rows = MAXROWS;
   cols = MAXCOLS;
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] = '\0';
      }
   }
}   

template<typename T>
void Matrix<T>::printMatrix()
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 cout << doubleArray[i][j] << "   ";
      }
      cout << endl;
   }
}

template<typename T>
void Matrix<T>::setMatrix(T otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] = otherArray[i][j];
      }
   }
}

template<typename T>
void Matrix<T>::addMatrix(T otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] += otherArray[i][j];
      }
   }
}

template<typename T>
void Matrix<T>::addMatrix(Matrix<T> otherMatrix)
{
   addMatrix(otherMatrix.doubleArray);
}

