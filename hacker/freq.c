int main() {
    char st[100];
    int i,j,count;
    scanf("%[^/n]%*c",st);
    for(i=0;i<=9;i++)
   
    {
        count=0;
         for(j=0;j<strlen(st);j++)
        
        {
            if(i==st[j])
            {
            count=count+1;
            }
        }
        printf("%d ",count);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
