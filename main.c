#include <stdio.h>
#include <stdlib.h>

/*
int sudoko[9][9]={
                 {7,3,5,    6,1,4,    8,9,2},
                 {8,4,2,    9,7,3,    5,6,1},
                 {9,6,1,    2,8,5,    3,7,4},

                 {2,8,6,    3,4,9,    1,5,7},
                 {4,1,3,    8,5,7,    9,2,6},
                 {5,7,9,    1,2,6,    4,3,8},

                 {1,5,7,    4,9,2,    6,8,3},
                 {6,9,4,    7,3,8,    2,1,5},
                 {3,2,8,    5,6,1,    7,4,9}
                 };
*/
/*
int sudoko[9][9]={
                 {0,3,5,    6,1,4,    8,9,2},
                 {8,0,2,    9,7,3,    5,6,1},
                 {0,6,1,    2,8,5,    3,7,4},

                 {2,8,6,    3,4,9,    1,5,7},
                 {4,1,3,    8,5,7,    9,2,6},
                 {5,7,9,    1,2,6,    4,3,8},

                 {1,5,7,    0,9,2,    6,8,3},
                 {6,9,4,    7,0,8,    2,1,5},
                 {3,2,8,    5,0,1,    7,4,9}
                 };

*/
/*
int sudoko[9][9]={///////////51 - 42////////
                 {5,3,0,   0,7,0,   0,0,0},
                 {6,0,0,   1,9,5,   0,0,0},
                 {0,9,8,   0,0,0,   0,6,0},

                 {8,0,0,   0,6,0,   0,0,3},
                 {4,0,0,   8,0,3,   0,0,1},
                 {7,0,0,   0,2,0,   0,0,6},

                 {0,6,0,   0,0,0,   2,8,0},
                 {0,0,0,   4,1,9,   0,0,5},
                 {0,0,0,   0,8,0,   0,7,9}
};

*/
/*
int sudoko[9][9]={   /////////////////////level 2//////////////////////////completely solved//
                 {0,1,3,   0,4,0,   0,7,0},
                 {7,6,0,   9,0,1,   5,0,8},
                 {4,0,8,   0,5,2,   6,0,3},
                 {1,5,4,   6,9,0,   2,0,7},
                 {9,0,6,   0,2,7,   8,0,1},
                 {2,8,0,   5,1,0,   0,6,0},
                 {0,7,9,   0,6,5,   0,8,4},
                 {8,0,5,   1,0,4,   3,9,0},
                 {0,0,1,   0,8,9,   0,2,5}
};*/
/*
int sudoko[9][9]={///////////40 - 35///////////
                 {0,6,9,   5,0,1,   2,0,7},
                 {2,3,1,   6,0,8,   0,5,0},
                 {4,0,7,   2,0,0,   0,1,0},

                 {0,0,4,   8,0,2,   0,0,0},
                 {0,9,0,   4,1,6,   8,0,0},
                 {3,0,0,   9,5,7,   1,0,0},

                 {1,0,2,   0,0,0,   3,9,4},
                 {5,4,0,   0,2,0,   0,0,0},
                 {9,0,0,   1,0,0,   5,6,0}
};
*/
/*
int sudoko[9][9]={
                 {0,2,0,   0,0,0,   0,0,0},
                 {0,0,0,   6,0,0,   0,0,3},
                 {0,7,4,   0,8,0,   0,0,0},

                 {0,0,0,   0,0,3,   0,0,2},
                 {0,8,0,   0,4,0,   0,1,0},
                 {6,0,0,   5,0,0,   0,0,0},

                 {0,0,0,   0,1,0,   7,8,0},
                 {5,0,0,   0,0,9,   0,0,0},
                 {0,0,0,   0,0,0,   0,4,0}
};
*/
/*
int sudoko[9][9]={
                 {0,0,0,   6,0,0,   4,0,0},
                 {7,0,0,   0,0,3,   6,0,0},
                 {0,0,0,   0,9,1,   0,8,0},

                 {0,0,0,   0,0,0,   0,0,0},
                 {0,5,0,   1,8,0,   0,0,3},
                 {0,0,0,   3,0,6,   0,4,5},

                 {0,4,0,   2,0,0,   0,6,0},
                 {9,0,3,   0,0,0,   0,0,0},
                 {0,2,0,   0,0,0,   1,0,0}
};
*/

/*
int sudoko[9][9]={
                 {2,0,0,   3,0,0,   4,0,0},
                 {8,0,4,   0,6,2,   6,0,0},
                 {0,1,3,   0,9,1,   0,8,0},
                 {,,,   ,,,   ,,},
                 {,,,   ,,,   ,,},
                 {,,,   ,,,   ,,},
                 {,,,   ,,,   ,,},
                 {,,,   ,,,   ,,},
                 {,,,   ,,,   ,,}
};
*/
int sudoko1[9][9];
int num1[2][9];
int sudochange=0;
int arr[9][9];
int sudo[7][5];
int suk[5][9];
int ind[9][5];
int rcb[9][9][9];
sudokoprint()
{
    int i,j;
    for(i=0;i<3;i++)
        printf("%d  %d  %d     %d  %d  %d     %d  %d  %d\n",sudoko[i][0],sudoko[i][1],sudoko[i][2],sudoko[i][3],sudoko[i][4],sudoko[i][5],sudoko[i][6],sudoko[i][7],sudoko[i][8],sudoko[i][9]);
    printf("\n");printf("\n");
    for(i=3;i<6;i++)
        printf("%d  %d  %d     %d  %d  %d     %d  %d  %d\n",sudoko[i][0],sudoko[i][1],sudoko[i][2],sudoko[i][3],sudoko[i][4],sudoko[i][5],sudoko[i][6],sudoko[i][7],sudoko[i][8],sudoko[i][9]);
    printf("\n");printf("\n");
    for(i=6;i<9;i++)
        printf("%d  %d  %d     %d  %d  %d     %d  %d  %d\n",sudoko[i][0],sudoko[i][1],sudoko[i][2],sudoko[i][3],sudoko[i][4],sudoko[i][5],sudoko[i][6],sudoko[i][7],sudoko[i][8],sudoko[i][9]);
    printf("\n");printf("\n");
}

sudokocheck1()
{
    int i,j,k;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0 || sudoko[i][j]==1 || sudoko[i][j]==2 || sudoko[i][j]==3 || sudoko[i][j]==4 || sudoko[i][j]==5 || sudoko[i][j]==6 || sudoko[i][j]==7 || sudoko[i][j]==8 || sudoko[i][j]==9);
            else
            {
                printf("%d\n",sudoko[i][j]);
                printf("number is not in range 1 to 9\n");
                return 1;
            }
        }
    }
}

sudokocheck2()
{
    int i,j,k;

    for(j=0;j<9;j++)
    {
        for(i=0;i<9;i++)
        {
            num1[1][i]=0;
        }

        for(i=0;i<9;i++)
        {
            for(k=0;k<9;k++)
            {
                if(sudoko[j][i]==num1[0][k])
                {
                    num1[1][k]++;
                }
            }
        }

        for(i=0;i<9;i++)
        {
            //printf("%d\t",num1[1][i]);
            if(num1[1][i]==2)
            {
                printf("repeated number in row\n");
                return 1;
            }
        }
        //printf("\n");
    }

    for(i=0;i<9;i++)
    {
        num1[1][i]=0;
    }


    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                if(sudoko[j][i]==num1[0][k])
                {
                    num1[1][k]++;
                }
            }
        }

        for(j=0;j<9;j++)
        {
            if(num1[1][j]==2)
            {
                //printf("repeated number in column\n");
                return 1;
            }
        }
        //printf("\n");

        for(j=0;j<9;j++)
        {
            num1[1][j]=0;
        }
    }
}

sudokocheck3()
{
    int i,j,k,index1,index2,index3,index4,a,b;
    for(j=0;j<9;j++)
    {
        num1[1][j]=0;
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            index1=0;index2=3;index3=0;index4=3;
            index1+=a*3;
            index2+=a*3;
            index3+=b*3;
            index4+=b*3;
            for(i=index1;i<index2;i++)
            {
                for(j=index3;j<index4;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if(sudoko[i][j]==num1[0][k])
                        {
                            num1[1][k]++;
                        }
                    }
                }
            }
            for(k=0;k<9;k++)
            {
                //printf("%d\t",num1[1][k]);
                if(num1[1][k]==2)
                {
                    printf("repeated number in box\n");
                    return 1;
                }
                num1[1][k]=0;
            }
            //printf("\n");
        }
    }
}

sudokosolve1()
{
    int i,j,k,l,count=0;

    for(i=0;i<9;i++)
    {
        num1[1][i]=0;
        //printf("%d\n",num1[0][i]);
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0)
            {
                for(k=0;k<9;k++)
                {
                    for(l=0;l<9;l++)
                    {
                        if(sudoko[i][k]==num1[0][l])
                        {
                            num1[1][l]++;
                            //printf("%d %d %d\n",sudoko[i][k],num1[0][l],num1[1][l]);
                        }
                    }
                }

                for(k=0;k<9;k++)
                {
                    if(num1[1][k]==0)
                    {
                        count++;
                    }
                }

                if(count==1)
                {
                    for(k=0;k<9;k++)
                    {
                        if(num1[1][k]==0)
                        {
                            sudoko[i][j]=num1[0][k];
                            sudochange=1;
                        }
                    }
                }
                count =0;

            }
            for(k=0;k<9;k++)
            {
                num1[1][k]=0;
            }
        }
    }

}

sudokosolve2()
{
    int i,j,k,l,count=0;

    for(i=0;i<9;i++)
    {
        num1[1][i]=0;
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0)
            {
                for(k=0;k<9;k++)
                {
                    for(l=0;l<9;l++)
                    {
                        //printf("%d %d\n",sudoko[i][k],num1[0][k]);

                        if(sudoko[k][j]==num1[0][l])
                        {
                            num1[1][l]++;
                        }
                    }
                }

                for(k=0;k<9;k++)
                {
                    if(num1[1][k]==0)
                    {
                        count++;
                    }
                }

                if(count==1)
                {
                    for(k=0;k<9;k++)
                    {
                        if(num1[1][k]==0)
                        {
                            sudoko[i][j]=num1[0][k];
                            sudochange=1;
                        }
                    }
                }
                count =0;

            }
            for(k=0;k<9;k++)
            {
                num1[1][k]=0;
            }
        }
    }

}

sudokosolve3()
{
    int i,j,k,index1,index2,index3,index4,a,b,count=0,c,d;
    for(j=0;j<9;j++)
    {
        num1[1][j]=0;
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            index1=0;index2=3;index3=0;index4=3;
            index1+=a*3;
            index2+=a*3;
            index3+=b*3;
            index4+=b*3;
            for(i=index1;i<index2;i++)
            {
                for(j=index3;j<index4;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if(sudoko[i][j]==num1[0][k])
                        {
                            num1[1][k]++;
                        }
                    }
                    if(sudoko[i][j]==0)
                    {
                        c=i;
                        d=j;
                    }

                }
            }

            for(k=0;k<9;k++)
            {
                if(num1[1][k]==0)
                {
                    count++;
                }
            }

            if(count==1)
            {
                for(k=0;k<9;k++)
                {
                    if(num1[1][k]==0)
                    {
                        sudoko[c][d]=num1[0][k];
                        sudochange=1;
                    }
                }
            }

            count = 0;
            for(k=0;k<9;k++)
            {
                num1[1][k]=0;
            }
        }
    }
}

sudokosolve4()
{
    int i,j,k,l,m,index1,index2,index3,index4,a,b,count=0,sudo=0,sc=0;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            arr[i][j]=0;
        }
    }

    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            index1=0;index2=3;index3=0;index4=3;
            index1+=a*3;
            index2+=a*3;
            index3+=b*3;
            index4+=b*3;
            for(i=index1;i<index2;i++)
            {
                for(j=index3;j<index4;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if(sudoko[i][j]==num1[0][k])
                        {
                            arr[sudo][k]++;
                        }
                    }
                }
            }
            sudo++;
        }
    }
    sudo=0;
    for(j=0;j<9;j++)
    {
        num1[1][j]=0;
    }


    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {


            if(sudoko[i][j]==0)
            {
                for(k=0;k<9;k++)
                {
                    for(l=0;l<9;l++)
                    {
                        if(sudoko[i][k]==num1[0][l])
                        {
                            num1[1][l]++;
                        }

                        if(sudoko[k][j]==num1[0][l])
                        {
                            num1[1][l]++;
                        }
                    }
                }


                for(a=0;a<3;a++)
                {
                    for(b=0;b<3;b++)
                    {
                        index1=0;index2=3;index3=0;index4=3;
                        index1+=a*3;
                        index2+=a*3;
                        index3+=b*3;
                        index4+=b*3;
                        if(i>=index1 && i<index2)
                        {
                            if(j>=index3 && j<index4)
                            {
                                for(k=0;k<9;k++)
                                {
                                    num1[1][k]+=arr[sc][k];
                                }
                            }
                        }

                        sc++;
                    }
                }
                sc=0;

                for(k=0;k<9;k++)
                {
                    if(num1[1][k]==0)
                        count++;
                }

                if(count==1)
                {
                    for(k=0;k<9;k++)
                    {
                        if(num1[1][k]==0)
                        {
                            sudoko[i][j]=num1[0][k];
                            sudochange=1;
                        }
                    }
                }
                count=0;

                for(k=0;k<9;k++)
                {
                    num1[1][k]=0;
                }
            }


        }
    }

}

sudokosolve5()
{
    int i,j,k,l,m,index=0,count=0,index1=2,mm=0,ccount=0;

    for(i=0;i<9;i++)
    {
        for(k=0;k<7;k++)
        {
            for(j=0;j<5;j++)
            {
                sudo[k][j]=-1;
            }
        }

        for(k=0;k<9;k++)
        {
            num1[1][k]=0;
        }

        for(k=0;k<9;k++)
        {
            for(j=0;j<9;j++)
            {
                arr[k][j]=0;

            }
        }
        for(k=0;k<9;k++)
        {
            for(j=0;j<5;j++)
            {
                ind[k][j]=-1;
            }
        }

        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0)
            {
                sudo[0][index]=i;
                sudo[1][index]=j;
                index++;
            }
        }

        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                if(sudoko[i][j]==num1[0][k])
                {
                    num1[1][k]++;

                }
            }
        }

        for(j=0;j<9;j++)
        {
            if(num1[1][j]==0)
            {
                count++;
            }
        }

        if(count<=5 && count>1)
        {
            for(k=0;k<count;k++)
            {
                for(j=0;j<9;j++)
                {
                    for(l=0;l<9;l++)
                    {
                        if(sudoko[j][sudo[1][k]]==num1[0][l] && num1[1][l]==0)
                        {
                            sudo[index1][k]=sudoko[j][sudo[1][k]];
                            index1++;
                        }
                    }

                }
                index1=2;
            }
        }

        if(count<=5 && count>1)
        {
            for(j=0;j<count;j++)
            {
                for(k=2;k<count+1;k++)
                {
                    for(m=0;m<5;m++)
                    {
                        for(l=0;l<9;l++)
                        {
                            if(sudo[k][j]==l+1)
                            {
                                ind[l][mm]=1;
                            }
                        }
                    }
                }
                mm++;
            }


        for(j=0;j<9;j++)
        {
            for(k=0;k<count;k++)
            {
                if(ind[j][k]==1)
                {
                    ccount++;
                }
            }
            if(ccount==count-1)
            {
                for(k=0;k<count;k++)
                {
                    if(ind[j][k]==-1)
                    {
                        sudoko[sudo[0][k]][sudo[1][k]]=j+1;
                        sudochange=1;
                    }
                }
            }
            ccount=0;
        }

        mm=0;
        index1=2;
        index=0;
        count=0;
        }
    }

}

sudokosolve6()
{
    int i,j,k,l,index1,index2,index3,index4,a,b,count=0;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                rcb[i][j][k]=0;
            }
        }
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0)
            {
                for(k=0;k<9;k++)
                {
                    for(l=0;l<9;l++)
                    {
                        if(sudoko[i][k]==l+1)
                        {
                            rcb[i][j][l]++;
                            //printf("%d %d %d\n",i,j,)
                        }
                    }
                }

                for(k=0;k<9;k++)
                {
                    for(l=0;l<9;l++)
                    {
                        if(sudoko[k][j]==l+1)
                        {
                            rcb[i][j][l]++;
                        }
                    }
                }
            }
        }
    }


    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            //////////////////////
            for(i=0;i<9;i++)
            {
                num1[0][i]=i+1;
                num1[1][i]=0;
            }

//            for(i=0;i<9;i++)
//            {
//                printf("%d\t",num1[0][i]);
//            }
//            printf("\n");


            index1=0;index2=3;index3=0;index4=3;
            index1+=a*3;
            index2+=a*3;
            index3+=b*3;
            index4+=b*3;
            for(i=index1;i<index2;i++)
            {
                for(j=index3;j<index4;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if(sudoko[i][j]==num1[0][k])
                        {
                            num1[1][k]=1;
                        }
                    }
                }
            }

            for(i=index1;i<index2;i++)
            {
                for(j=index3;j<index4;j++)
                {
                    if(sudoko[i][j]==0)
                    {
                        for(k=0;k<9;k++)
                        {
                            rcb[i][j][k]+=num1[1][k];
                        }
                    }
                }
            }

            for(i=0;i<9;i++)
            {
                num1[0][i]=i+1;
                num1[1][i]=0;
            }

            //////////////////////////////
        }
    }


//    for(a=0;a<3;a++)
//    {
//        for(b=0;b<3;b++)
//        {
//            index1=0;index2=3;index3=0;index4=3;
//            index1+=a*3;
//            index2+=a*3;
//            index3+=b*3;
//            index4+=b*3;
//            for(i=index1;i<index2;i++)
//            {
//                for(j=index3;j<index4;j++)
//                {
//                    for(k=0;k<9;k++)
//                    {
//                        printf("%d\t",rcb[i][j][k]);
//                    }printf("\n");
//                }
//            }printf("\n");
//        }
//    }

    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            index1=0;index2=3;index3=0;index4=3;
            index1+=a*3;
            index2+=a*3;
            index3+=b*3;
            index4+=b*3;
            for(i=index1;i<index2;i++)
            {
                for(j=index3;j<index4;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if(sudoko[i][j]==num1[0][k])
                        {
                            num1[1][k]=1;
                        }
                    }
                }
            }

            for(k=0;k<9;k++)
                    {

                            //printf("%d(%d)\t",num1[1][k],num1[0][k]);

                    }
                    //printf("\n");


            for(k=0;k<9;k++)
            {
                if(num1[1][k]==0)
                {
                    for(i=index1;i<index2;i++)
                    {
                        for(j=index3;j<index4;j++)
                        {
                            //printf("%d\n",num1[0][k]);
                            if(sudoko[i][j]==0)
                            {
                                //printf("%d %d %d %d\n",rcb[i][j][num1[0][k]-1],i,j,num1[0][k]);
                                if(rcb[i][j][num1[0][k]-1]==0)
                                {
                                    //printf("%d %d %d %d\n",rcb[i][j][num1[0][k]],i,j,k);
                                    count++;
                                }
                            }

                        }

                    }
                    if(count==1)
                    {
                        for(i=index1;i<index2;i++)
                        {
                            for(j=index3;j<index4;j++)
                            {
                                //printf("%d\n",num1[0][k]);
                                if(sudoko[i][j]==0)
                                {
                                    //printf("%d %d %d %d\n",rcb[i][j][num1[0][k]-1],i,j,num1[0][k]);
                                    if(rcb[i][j][num1[0][k]-1]==0)
                                    {
                                        sudoko[i][j]=num1[0][k];
                                        sudochange=1;
                                    }
                                }

                            }

                        }
                    }
                }

                count=0;
            }

            for(i=0;i<9;i++)
            {
                num1[1][i]=0;
            }



        }
    }




}

sudokorev()
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            sudoko1[i][j]=sudoko[i][j];
        }
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            sudoko[i][j]=sudoko1[j][i];
        }
    }
}
int main()
{
    int i,j,k,zeroct=0;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0)
            {
                zeroct++;
            }
        }
    }
    printf("initial no of blanks are %d\n",zeroct);
    sudokoprint();
    for(i=0;i<9;i++)
    {
        num1[0][i]=i+1;
        num1[1][i]=0;
    }

    sudokocheck1();
    sudokocheck2();
    sudokocheck3();



    do
    {
        sudochange=0;
        sudokosolve4();
        //printf("%d\n",sudochange);
        sudokosolve5();
        sudokorev();
        //printf("%d\n",sudochange);
        sudokosolve5();
        sudokorev();
        //printf("%d\n",sudochange);
        sudokosolve6();
        //printf("%d\n",sudochange);

    }while(sudochange>=1);



    zeroct=0;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(sudoko[i][j]==0)
            {
                zeroct++;
            }
        }
    }
    printf("final no of blanks are %d\n",zeroct);
    sudokoprint();

    sudokocheck1();
    sudokocheck2();
    sudokocheck3();



}
