#include<stdio.h>
#include<stdlib.h>

void print_2d_array(float **arr, int sizeN);
void print_2d_gaus_array(float **arr, int sizeN);

void gauss_demension_extend_func(float **matrix_arr, int sizeN);
void gauss_func(float **matrix_arr, int sizeN);


int main(){
    FILE *fe;
    fe = fopen("matrix.txt", "r");
    
    const int nxn;
    int i, j, k;

    if(fe != NULL){
        printf("===== File OK =====\n");
        fscanf(fe, "%d", &nxn);
        printf("matrix demension N x N = %d \n", nxn);
    }// end file ok
    else{
        printf("File fault\n");
        return 0;
    }
    
    float **file_matrix = (float**) malloc(sizeof(float*)*nxn);
    for(i=0; i<nxn; i++){
        file_matrix[i] = (float*) malloc(sizeof(float)*nxn);
    }

    for (i = 0; i < nxn; i++) {
        for (j = 0; j < nxn; j++) {
            fscanf(fe, "%f", &file_matrix[i][j]);
        }
    }
    fclose(fe);
    // ================== end file Reading && DATA mapping ======================

    print_2d_array(file_matrix, nxn);

    gauss_demension_extend_func(file_matrix, nxn);

    printf("Inverse matrix is: \n");
    print_2d_gaus_array(file_matrix, nxn);


    // memory free
    for (i=0; i<nxn; i++)
        free(file_matrix[i]);
    free(file_matrix);

    return 0;
}

void print_2d_array(float **arr, int sizeN){
    printf("===== 2d arr is : =====\n");
    for(int i=0; i<sizeN; i++){
        for(int j=0; j<sizeN; j++){
            printf("%.3f", arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

void print_2d_gaus_array(float **arr, int sizeN){
    
    for(int i=0; i<sizeN; i++){
        for(int j=sizeN; j<2*sizeN; j++){
            printf("%.3f", arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

void gauss_demension_extend_func(float **matrix_arr, int sizeN){ //단위행렬 추가
    int i, j;

    for(i = 0; i < sizeN; i++){
        for(j = sizeN; j < 2*sizeN; j++){
            if(i==(j-sizeN)) // 확장배열 대각따리에 1을 매핑해줌
                matrix_arr[i][j] = 1.0;
            else // 확장배열의 대각따리가 아니면 0을 매핑
                matrix_arr[i][j] = 0.0;
        }
    }
    //print_2d_gaus_array(matrix_arr, sizeN); // 확장 배열 보고싶을때
    gauss_func(matrix_arr, sizeN);

}

void gauss_func(float **matrix_arr, int sizeN){// 이 코드와 설명이 똑같은 사이트 링크  : https://ddmanager.tistory.com/90
    int i, j, k;
    float ratio, a;
    
    for(i = 0; i < sizeN; i++){
        for(j = 0; j < sizeN; j++){
            if(i!=j){  // 대각행이 아닐경우
                ratio = matrix_arr[j][i]/matrix_arr[i][i]; // 행렬 (1, 1)위치를 1로 만들어줄 상수값
                for(k = 0; k < 2*sizeN; k++){ // 소거연산
                    matrix_arr[j][k] = matrix_arr[j][k] - ratio * matrix_arr[i][k];
                    /*
                    [i][k]성분에 적절한 상수를 곱해서 [j][k] 성분을 만들어준다
                    [j][0]성분부터 [j][2*sizeN]까지 k*(i행의 열의값)을 뺴줌
                    k가 N이 될떄까지 반복해준다
                    */
                }
            }
        }// end ratio
    }

    for(i = 0; i < sizeN; i++){
        a = matrix_arr[i][i]; // 대각요소의 값을 저장
        for(j = 0; j < 2*sizeN; j++){
            matrix_arr[i][j] = matrix_arr[i][j] / a; // 각 행의 요소를 대각요소의 값으로 나눈다
        }
    }// end for  이 과정을 거치면 좌측행렬을 항등행렬로 만들어버리고 우측행렬을 역행렬로 만들어버림
}



    /*
    print_2d_array(matrix_arr, sizeN);      print_2d_gaus_array(matrix_arr, sizeN);
    ===== 2d arr is : =====               
    1.000   0.000   0.000                     3.000   2.500   0.500
    0.000   -1.000  0.000                     3.000   4.000   1.000
    0.000   0.000   2.000                     2.000   3.000   1.000

    print_2d_array(matrix_arr, sizeN);    print_2d_gaus_array(matrix_arr, sizeN);
    ===== 2d arr is : =====
    1.000   0.000   0.000                     3.000   2.500   0.500
    -0.000  1.000   -0.000                   -3.000  -4.000  -1.000
    0.000   0.000   1.000                     1.000   1.500   0.500
    */