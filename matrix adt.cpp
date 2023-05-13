#include<iostream>
#include<string.h>

using namespace std;

struct matrixType{
    int matDimension;
    int matValues[10][10];
};

class MatrixADT{

    private:
        matrixType resultMatrix;

    public: 
        void intializeResultMatrix(int);
        matrixType add(matrixType, matrixType);
        matrixType subtract(matrixType,matrixType);
        matrixType multiply(matrixType,matrixType);
        void printResult();
};

matrixType MatrixADT::add(matrixType M1, matrixType M2)
{
	cout<<"addition of matrix is: "<<"\n";
            int i,j;
             for(i=0;i<M1.matDimension;i++)
                 for(j=0;j<M2.matDimension;j++)
                  {
                   resultMatrix.matValues[i][j]=M1.matValues[i][j]+M2.matValues[i][j];
                  }
  return (M1);
}

matrixType MatrixADT::subtract(matrixType M1, matrixType M2)
{
	cout<<"subtraction of matrix is: "<<"\n";
            int i,j;
             for(i=0;i<M1.matDimension;i++)
                for(j=0;j<M2.matDimension;j++)
                {
                   resultMatrix.matValues[i][j]=M1.matValues[i][j]-M2.matValues[i][j];
                }
              
            return (M1);
}


matrixType MatrixADT::multiply(matrixType M1, matrixType M2)
{
	cout<<"multiplication of matrix is: "<<"\n";
            int i,j,k;
             for(i=0;i<M1.matDimension;i++)
               for(j=0;j<M2.matDimension;j++)
                 for(k=0;k<M1.matDimension;k++)
                {
                   resultMatrix.matValues[i][j]+=M1.matValues[i][k]*M2.matValues[k][j];
                }
             
             return (M1);
}

void MatrixADT::intializeResultMatrix(int dim)
{
		int i,j;
		resultMatrix.matDimension=dim;
             for(i=0;i<dim;i++)
                 for(j=0;j<dim;j++)
                {
                   resultMatrix.matValues[i][j]=0;
                }
             
}
[]
int main(){

    MatrixADT maX;
    matrixType M1, M2;
    char op;
    int dim;
    cout<<"enter the dimension of matrix: ";
    cin>>dim;
    M1.matDimension=M2.matDimension=dim;
    int i,j;
   cout<<"enter matrix1: "<<"\n";
    for(i=0;i<dim;i++)
     for(j=0;j<dim;j++)
       cin>>M1.matValues[i][j];
   cout<<"enter matrix2: "<<"\n";
    for(i=0;i<dim;i++)
     for(j=0;j<dim;j++)
       cin>>M2.matValues[i][j];
 
      maX.intializeResultMatrix(dim);
      cout<<"enter your option +,-,* ";
      cin>>op;
    switch(op)
    {
                 case '+' :  M1=maX.add(M1,M2);
                             break;
                 case '-' :  M1=maX.subtract(M1,M2);
                            break;
                 case '*' :   M1=maX.multiply(M1,M2);
                            break;
    } 
maX.printResult();
  
            return (0);
}
void MatrixADT::printResult()
{
    int i,j;
    for (i=0;i<resultMatrix.matDimension;i++){
        for (j=0; j<resultMatrix.matDimension-1;j++){
            cout<<resultMatrix.matValues[i][j]<<" ";
        }
       cout <<resultMatrix.matValues[i][j]<<"\n";
    }
}

