#include<bits/stdc++.h>
using namespace std;

void mergeSortKArrays(int** tempArr,int* finalArr,int noOfArrays,int noOfElements){
    
    //Copying 1st array to finalArr - 
    int lenFinalArr=0;
    for(int i=0;i<noOfElements;i++){
        finalArr[i]=tempArr[0][i];
        lenFinalArr++;
    }


    //Merge Sorting all other arrays - 
    for(int i=1;i<noOfArrays;i++){
        int start1=0;
        int start2=0;
        int end1=noOfElements;
        int end2=lenFinalArr;
        int k=0;
        int tempFinalArr[noOfElements+lenFinalArr];
        while(start1<end1 and start2<end2){
            if(finalArr[start2]<tempArr[i][start1]){
                tempFinalArr[k]=finalArr[start2];
                start2++;
                k++;
            }else{
                tempFinalArr[k]=tempArr[i][start1];
                start1++;
                k++;
            }
        }

        
        while(start1<end1){
            tempFinalArr[k]=tempArr[i][start1];
            start1++;
            k++;
        }


        while(start2<end2){
            tempFinalArr[k]=finalArr[start2];
            start2++;
            k++;
        }

        //Copying elements - 
        for(int j=0;j<(noOfElements+lenFinalArr);j++){
            finalArr[j]=tempFinalArr[j];
        }
        lenFinalArr=lenFinalArr+noOfElements;
    }
    return ;
}

int main(){
    int noOfArrays,noOfElements;
    cin>>noOfArrays>>noOfElements;
    int** tempArr=new int*[noOfArrays];
    for(int i=0;i<noOfArrays;i++){
        tempArr[i]=new int[noOfElements];
    }
    int i=0;
    while(i<noOfArrays){
        for(int j=0;j<noOfElements;j++){
            cin>>tempArr[i][j];
        }
        i++;
    }

    if(noOfArrays==1){
        for(int j=0;j<noOfElements;j++){
            cout<<tempArr[i][j]<<" ";
        }
    }else{
        int finalArr[noOfArrays*noOfElements];
        mergeSortKArrays(tempArr,finalArr,noOfArrays,noOfElements);
        for(int l=0;l<noOfArrays*noOfElements;l++){
            cout<<finalArr[l]<<" ";
        }
    }
    
    return 0;
}