 #include<stdio.h>

void triangle(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    return;
}

void triangle1(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            if(i>j)                  //  matrix ke hidab se socho
              printf(" ");
            else
                printf(" *");
        }
        printf("\n");
    }
    return;
}

 

void ultatriangle(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++)
        printf("* ");
        printf("\n");
        a--;
    }
    return;
}

void numtriangle(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        printf("%d ",j);
        printf("\n");
    }
     return;
}

void oddnum(){
 
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            printf("%3d ",a);
         a +=2;
        }
        printf("\n");
        a++;
    }
        return;
}

void alphabate(){
    int n,i,j;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=65;j<i+65;j++){      // agar triangular nahi chahiye to i ki jagah n kar do
    char c= (char)j;    
    printf("%c ",c);
    } 
    printf("\n");
    }
    return;
}

void numAndAlpha(){
    int n,i,j;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
    for(j=1;j<=i;j++){           
    char c= (char)(a+64);
    if(i%2==0)    
    printf("%c ",c);
    else
    printf("%d ",j);
    a++;
    } 
    printf("\n");
    }
    return;
}


void plus(){
    int n,i,j;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m=n/2+1;
    
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){      
    if(i==m)
    printf("*");
    else if(j==m)
    printf("*");
    else
    printf(" ");
    } 
    printf("\n");
    }
    return;
}

void hollowract()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if ((i==1||i==n) || (j==1||j==n))
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
    }
}

void cross()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (i==j || (i+j)==(n+1))     // matrix ke hisab se socho a11 a22 ..... when i=j print ho raha hai  aur jab i+j=n+1 ho raha hai tab
                printf("*");
            else
                printf(" ");    
        }
        
        printf("\n");
    }
}

void flodytrngle()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
              printf("%d ",a); 
              a++;
        }
        printf("\n");
    }
}

void trianglebyme(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            if(j<=a)                  //  matrix ke hidab se socho
                printf(" ");
            else
              printf("*");              //  agar ham yaha space de de to pyramid ban jayega
        }
        a--;
        printf("\n");
    }
    return;
}

void trianglemast(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)      // for space let # is space  ###      na samajh me aaye to 2 ghante ke baad ki video dekho college wallah
        {                                                 //  ##          
        printf(" ");                                      //  #  
        }
        for(j=1;j<=i;j++)               //                   *
        {                                           //       **          dono ko add karne par ban raha h          
        printf("*");                                //       ***        
        }
        
        printf("\n");
    }
    return;
}
 
 void rhombas(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)      // for space let # is space  ###
        {                                                 //  ##          
        printf(" ");                                      //  #  
        }
        for(j=1;j<=n;j++)               //                   ***
        {                                           //       ***         dono ko add karne par ban raha h          
        printf("*");                                //       ***        
        }
        
        printf("\n");
    }
    return;
}

void pyramid(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)      // for space let # is space  ###                     ham n-1 ki jagah (int nsp=n-1) nsp le sakte h aur loop me nsp-- karde
        {                                                 //  ##          
        printf(" ");                                      //  #  
        }
        for(j=1;j<=2*i-1;j++)               //               *                          ham 2i-1 ki jagah  (int nst=1) nst le sakte h aur nst=nst+2 loop me laga de
        {                                           //       ***          dono ko add karne par ban raha h          
        printf("*");                                //       *****        
        }                                           //       *******     
        
        printf("\n");
    }
    return;
}

void numpyramid(){
    int i,n,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++){
        int a=i-1;                  //  decrease karne ke liye
        for(j=1;j<=n-i;j++)      // for space let # is space  ###
        {                                                 //  ##          
        printf(" ");                                      //  #  
        }
        for(j=1;j<=i;j++)               //                   1
        {                                           //       12          dono ko add karne par ban raha h          
        printf("%d",j);                                //    123        
        }
        for(j=1;j<=i-1;j++){                            //    
             printf("%d",a);                            //    1
            a--;                                        //    21
        }                                               //    321
        
        printf("\n");
    }
    return;
}

int main(){
    // triangle();
    // ultatriangle();
    // numtriangle();
    // oddnum();
    // alphabate();
    // numAndAlpha();
    // plus();
    // hollowract();
    // cross();
    // flodytrngle();
    // trianglebyme();
    // trianglemast();
    // rhombas();
    // pyramid();
    numpyramid();
    return 0;
}