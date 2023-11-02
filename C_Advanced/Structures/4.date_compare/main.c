#include "header.h"

float percentage(int arr[6])
{
        int sum=0;
        for(int i=0;i<6;i++)
                sum=sum+arr[i];
        return (float)sum/6;
}

int older(int d1,int d2,int m1,int m2,int y1,int y2)
{
        if(y1<y2)
                return 1;
        else if(y1>y2) 
                return 0;
        else if(y1==y2)
        {
                if(m2>m1)
                        return 1;
                else if(m2<m1) 
                        return 0;
                else if(m2==m1)
                {
                        if(d1<d2)
                                return 1;
                        else if(d1>d2) 
                                return 0;
                }
        }
return -1;
}
struct student oldest(struct student arr[], int n) {
    int d = 31, m = 12, y = 9999, temp = 0;
    for (int i = 0; i < n; i++) {
        if (older(arr[i].d, d, arr[i].m, m, arr[i].y, y) == 1) {
            temp = i;
            d = arr[i].d;
            m = arr[i].m;
            y = arr[i].y;
        }
    }   
    return arr[temp];
}

int main()
{
int n;
        float p;
        printf("Enter number of student: ");
        scanf("%d",&n);
        struct student s[n];
        for(int i=0;i<n;i++)
        {
                printf("Enter student ID: ");
                scanf("%d",&s[i].ID);
                printf("Enter student name: ");
                scanf("%s",s[i].name);
                printf("Enter student 6 subjects marks:\n");
                for(int j=0;j<6;j++)
                        scanf("%d",&s[i].marks[j]);
                printf("Enter student DOB: ");
                scanf("%d%*c%d%*c%d",&s[i].d,&s[i].m,&s[i].y);
                p=percentage(s[i].marks);
                s[i].per=p;
                getchar();
                printf("Enter student Gender: ");
                scanf("%c",&s[i].gender);
                printf("\n");
        }
	struct student mem=oldest(s,n);
      printf("DETAILS OF OLDER STUDENT:\n");
      printf("ID : %d\nName : %s\nMarks : %d %d %d %d %d %d\nDOB : %d-%d-%d\nPercentage : %.2f%%\nGender : %c\n",mem.ID,mem.name,mem.marks[0],mem.marks[1],mem.marks[2],mem.marks[3],mem.marks[4],mem.marks[5],mem.d,mem.m,mem.y,mem.per,mem.gender);


}

