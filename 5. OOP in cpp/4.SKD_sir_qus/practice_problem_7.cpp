#include <iostream>
using namespace std;
class ComplexNo
{
    int real, img;
    public: // add necessary methods including setters and getters,
    // AND/OR declare friends, so that the given main() works
    void setComplexNo()
    {
        cout << "Enter real value: ";
        cin >> real; //cin>> this->real;
        cout << "Enter imaginary value: ";
        cin >> img; //cin>>(*this).img;
    }
    void showComplexNo()
    {
        cout << real << (img < 0 ? "" : "+") << img << "i" <<" ";
        //cout<<real<<"+"<<img<<"i"<<endl;//represents complex number in the form of “real +/- img i” e.g: 2+3i
    }

};

class MatrixOfComplexNo
{
    public:
    int noOfRows;
    // int noOfColsForEachRow[noOfRows];
    int *noOfColsForEachRow;
    ComplexNo **complexRowPtr;
    //ComplexNo *complexRowptr[]
    //Array of pointers, simulating matrix of ComplexNo objects
    public: 
    void setMatrix(){
        cout<<"enter No of Rows: ";
        cin>>noOfRows;
        noOfColsForEachRow = new int[noOfRows];
        for(int i = 0; i < noOfRows; i++){
            cout<<"enter no of cols for "<<i<<" th row: ";
            cin>>noOfColsForEachRow[i];
        }

        complexRowPtr = new ComplexNo*[noOfRows];
        for(int i = 0; i < noOfRows; i++){
            complexRowPtr[i] = new ComplexNo[noOfColsForEachRow[i]];
            for(int j = 0; j < noOfColsForEachRow[i]; j++){
                cout<<"enter complex no for complexRowptr["<<i<<"]["<<j<<"]:"<<endl;
                complexRowPtr[i][j].setComplexNo();
            }
        }

    }
    void showMatrix(){
        for(int i = 0; i < noOfRows; i++){
            for(int j = 0; j < noOfColsForEachRow[i]; j++){
                complexRowPtr[i][j].showComplexNo();
            }
            cout<<endl;
        }
    }


};
void operator>>(istream& cin, MatrixOfComplexNo &Matrix){
    Matrix.setMatrix();
}

void showComplexMatrices(MatrixOfComplexNo *matrixArr, int size){
    for(int i = 0; i < size; i++){
        matrixArr[i].showMatrix();
        cout<<endl;
    }
}

int main()
{
    int n, row, i;
    MatrixOfComplexNo *matrixPtr;
    cout <<"How many matrices of complex nos ? ";
    cin >> n;
    matrixPtr = new MatrixOfComplexNo[n];

    for (int i = 0; i < n; i++)
    {
        cin >> matrixPtr[i];
        // ask no of rows for i-th matrix, and then ask no of
        // complexNo for each of the rows of i-th matrix & populate
        // those rows with ComplexNo objects with proper real & img
    }
    cout <<"The matrices of complex numbers is / are : "<< endl;
    showComplexMatrices(matrixPtr, n); //global function
    // ComplexNo *mergedRow;
    cout <<"Enter indices of 2 rows of first matrix(<”<< row”) to merge :";
    // cin >> rowIndex1 >> rowIndex2;
    // mergedRow = matrixPtr[0][rowIndex1].mergeWith(rowIndex2);
    // cout <<”The MERGED rows of complex numbers is : “;
    // showMergedRow(mergedRow, matrixPtr[0].getRowSize(rowIndex1) + matrixPtr[0].getRowSize(rowIndex1));
    // int lower, upper;
    //get values of lower & upper from user
    // Now display all the Complex numbers from mergedRow,
    // whose real<=lower & img>=upper
    return 0;
}