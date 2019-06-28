#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<string.h>
#include<unistd.h>
#include<math.h>
int n=0;
struct attend
{
	int present;
	int total;
	float calcu;
};

struct attendance
{
struct attend Maths;
struct attend DMS;
struct attend DADC;
struct attend Unix;
struct attend DS;
};
struct mentor
{
	char m_username[20];
	char m_password[20];
	char m_name[20];
};
struct subject
{
	int MATHS;
	int Dadc;
	int Dms;
	int UNIX;
	int Ds;
	float avg;
};

struct student
{
	int USN;
	char name[50];
	char password[20];
	struct attendance stud_attend;
	struct subject marks;
};
struct teacher
{
	char name[20];
	char uname[20];
	char pwd[20];
	char sub[10];
};
float cal(int p,int t)
{
	float i;
	i=((((float)p)/((float)t))*100);
	return i;
}
void time_table()
{
	printf("\tTime\t8:45-9:40    9:40-9:55    9:55-10:50    10:50-11:45    11:45-12:20    12:20-1:15    1:15-2:10    2:10-3:05    3:05-4:00\nDAY\n");
	printf ("\tMon\t  MAT-3\t\tB\t     USP\t    DADC\t    L\t\t  DS\t\t\bDMS\t   MAT-3\tDADC\n");
	printf ("\tTue\t  DS\t\tR\t     DADC\t    DMS\t\t    U\t\tMAT-3\t\t R  O  B  O  T  I  C  S \n");
	printf ("\tWed\t  DADC\t\t\t     DMS\t    USP\t\t    N\t\t  DS\t\t R  O  B  O  T  I  C  S\n");
	printf ("\tThu\t  USP\t\tE\t     DMS\t    DADC\t    C\t\tMAT-3\t\t\bDS\t M I N I P R O J E C T\n");
	printf ("\tFri\t  DS\t\tA\t     MAT-3\t    USP\t\t    H\t\tMAT-3*\t\t\bDMS\t M I N I P R O J E C T\n");
	printf ("\tSat\t  DMS\t\tK\t     USP\t    DADC\n");
}
void view_attend(struct student a)
{
	printf("\t\t\t\t\t      Name:%s\n",a.name);
	printf("\t\t\t\t\t\tAttendance\n");
	printf("\n\t\tMaths\t\tDMS\t\tDADC\t\tUnix\t\tDS\n");
	printf("\t\t%.2f %%\t\t%.2f %%\t\t%.2f %%\t\t%.2f %%\t\t%.2f %%\n",
	a.stud_attend.Maths.calcu,a.stud_attend.DMS.calcu,a.stud_attend.DADC.calcu,a.stud_attend.Unix.calcu,a.stud_attend.DS.calcu);
}
void view_marks(struct student a)
{
	printf("\t\t\t\t\t      Name:%s\n",a.name);
	printf("\t\t\t\t\t\tMARKS\n");
	printf("\n\t\tMaths\t\tDMS\t\tDADC\t\tUnix\t\tDS\n");
	printf("\t\t%d",a.marks.MATHS);
	printf("\t\t%d",a.marks.Dms);
	printf("\t\t%d",a.marks.Dadc);
	printf("\t\t%d",a.marks.UNIX);
	printf("\t\t%d\n",a.marks.Ds);
	printf("\n\t\t\t\t\tAverage: %.2f\n",a.marks.avg);
}
void attend_calc(struct student c)
{
	int m,ch,a1,a2;
l :	printf("\n\t1.Maths\t\t2.DMS\t\t3.DADC\t\t4.Unix\t\t5.DS\n");
	printf("\tSelect the Subject whose attendance is to be checked: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1 : if(c.stud_attend.Maths.calcu<75.0)
				{
				printf("\n\tYou are not eligible for appearing in final examination. Please select the attendance maintainer option to know the no of classes required.\n");
				return;
				}
			 else if(c.stud_attend.Maths.calcu>=75.0&&c.stud_attend.Maths.calcu<85.0)
			 		{
					 a1=round(((4*c.stud_attend.Maths.present)-(3*c.stud_attend.Maths.total))/3);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Maths.calcu); 
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
			 		}
			 		else 
			 		{
		 				a1=round(((4*c.stud_attend.Maths.present)-(3*c.stud_attend.Maths.total))/3);
		 				a2=round(((20*c.stud_attend.Maths.present)-(17*c.stud_attend.Maths.total))/17);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Maths.calcu); 
			 		 printf("\tYou can miss %d classes and appear in examination without paying any fine.\n",a2);
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
		 			}
			 break;
	case 2 : if(c.stud_attend.DMS.calcu<75.0)
				{
				printf("\n\tYou are not eligible for appearing in final examination. Please select the attendance maintainer option to know the no of classes required.\n");
				return;
				}
			 else if(c.stud_attend.DMS.calcu>=75.0&&c.stud_attend.DMS.calcu<85.0)
			 		{
					 a1=round(((4*c.stud_attend.DMS.present)-(3*c.stud_attend.DMS.total))/3);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DMS.calcu); 
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
			 		}
			 		else 
			 		{
		 				a1=round(((4*c.stud_attend.DMS.present)-(3*c.stud_attend.DMS.total))/3);
		 				a2=round(((20*c.stud_attend.DMS.present)-(17*c.stud_attend.DMS.total))/17);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DMS.calcu); 
			 		 printf("\tYou can miss %d classes and appear in examination without paying any fine.\n",a2);
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
		 			}
			 break;
	case 3 : if(c.stud_attend.DADC.calcu<75.0)
				{
				printf("\n\tYou are not eligible for appearing in final examination. Please select the attendance maintainer option to know the no of classes required.\n");
				return;
				}
			 else if(c.stud_attend.DADC.calcu>=75.0&&c.stud_attend.DADC.calcu<85.0)
			 		{
					 a1=round(((4*c.stud_attend.DADC.present)-(3*c.stud_attend.DADC.total))/3);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DADC.calcu); 
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
			 		}
			 		else 
			 		{
		 				a1=round(((4*c.stud_attend.DADC.present)-(3*c.stud_attend.DADC.total))/3);
		 				a2=round(((20*c.stud_attend.DADC.present)-(17*c.stud_attend.DADC.total))/17);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DADC.calcu); 
			 		 printf("\tYou can miss %d classes and appear in examination without paying any fine.\n",a2);
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
		 			}
			 break;
 	case 4 : if(c.stud_attend.Unix.calcu<75.0)
				{
				printf("\n\tYou are not eligible for appearing in final examination. Please select the attendance maintainer option to know the no of classes required.\n");
				return;
				}
			 else if(c.stud_attend.Unix.calcu>=75.0&&c.stud_attend.Unix.calcu<85.0)
			 		{
					 a1=round(((4*c.stud_attend.Unix.present)-(3*c.stud_attend.Unix.total))/3);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Unix.calcu); 
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
			 		}
			 		else 
			 		{
		 				a1=round(((4*c.stud_attend.Unix.present)-(3*c.stud_attend.Unix.total))/3);
		 				a2=round(((20*c.stud_attend.Unix.present)-(17*c.stud_attend.Unix.total))/17);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Unix.calcu); 
			 		 printf("\tYou can miss %d classes and appear in examination without paying any fine.\n",a2);
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
		 			}
			 break;
 	case 5 : if(c.stud_attend.DS.calcu<75.0)
				{
				printf("\n\tYou are not eligible for appearing in final examination. Please select the attendance maintainer option to know the no of classes required.\n");
				return;
				}
			 else if(c.stud_attend.DS.calcu>=75.0&&c.stud_attend.DS.calcu<85.0)
			 		{
					 a1=round(((4*c.stud_attend.DS.present)-(3*c.stud_attend.DS.total))/3);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DS.calcu); 
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
			 		}
			 		else 
			 		{
		 				a1=round(((4*c.stud_attend.DS.present)-(3*c.stud_attend.DS.total))/3);
		 				a2=round(((20*c.stud_attend.DS.present)-(17*c.stud_attend.DS.total))/17);
			 		 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DS.calcu); 
			 		 printf("\tYou can miss %d classes and appear in examination without paying any fine.\n",a2);
			  		 printf("\tYou can miss %d classes and appear in examination with a fine of Rs.500\n",a1);
		 			}
			 break;
 	default : printf("\tWrong Input.\n");
			  goto l;
	}	
	
}
void attend_maintain(struct student c)
{
	int m,ch,a1,a2;
j :	printf("\n\t1.Maths\t\t2.DMS\t\t3.DADC\t\t4.Unix\t\t5.DS\n");
	printf("\tSelect the Subject whose attendance is to be checked: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1 : if(c.stud_attend.Maths.calcu>=85.0)
		 printf("\n\tYou are eligible for appearing in final examinations.\n");
		 else if(c.stud_attend.Maths.calcu>=75.0&&c.stud_attend.Maths.calcu<85.0)
			{ a1=round(((85*c.stud_attend.Maths.total)-(100*c.stud_attend.Maths.present))/15);
			printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Maths.calcu);
			printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			}
			else
			{
			 a1=round(((85*c.stud_attend.Maths.total)-(100*c.stud_attend.Maths.present))/15);
			 a2=round(((75*c.stud_attend.Maths.total)-(100*c.stud_attend.Maths.present))/25);
			 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Maths.calcu);
			 printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			 printf("\tYou require %d classes to appear in final examination with a fine of Rs 500.\n",a2);
			}
		 break;
	case 2 : if(c.stud_attend.DMS.calcu>=85.0)
		 printf("\n\tYou are eligible for appearing in final examinations.\n");
		 else if(c.stud_attend.DMS.calcu>=75.0&&c.stud_attend.DMS.calcu<85.0)
			{ a1=round(((85*c.stud_attend.DMS.total)-(100*c.stud_attend.DMS.present))/15);
			printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DMS.calcu);
			printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			}
			else
			{
			 a1=round(((85*c.stud_attend.DMS.total)-(100*c.stud_attend.DMS.present))/15);
			 a2=round(((75*c.stud_attend.DMS.total)-(100*c.stud_attend.DMS.present))/25);
			 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DMS.calcu);
			 printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			 printf("\tYou require %d classes to appear in final examination with a fine of Rs 500.\n",a2);
			}
		 break;
	case 3 : if(c.stud_attend.DADC.calcu>=85.0)
		 printf("\n\tYou are eligible for appearing in final examinations.\n");
		 else if(c.stud_attend.DADC.calcu>=75.0&&c.stud_attend.DADC.calcu<85.0)
			{ a1=round(((85*c.stud_attend.DADC.total)-(100*c.stud_attend.DADC.present))/15);
			printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DADC.calcu);
			printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			}
			else
			{
			 a1=round(((85*c.stud_attend.DADC.total)-(100*c.stud_attend.DADC.present))/15);
			 a2=round(((75*c.stud_attend.DADC.total)-(100*c.stud_attend.DADC.present))/25);
			 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DADC.calcu);
			 printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			 printf("\tYou require %d classes to appear in final examination with a fine of Rs 500.\n",a2);
			}
		 break;
 	case 4 : if(c.stud_attend.Unix.calcu>=85.0)
		 printf("\n\tYou are eligible for appearing in final examinations.\n");
		 else if(c.stud_attend.Unix.calcu>=75.0&&c.stud_attend.Unix.calcu<85.0)
			{ a1=round(((85*c.stud_attend.Unix.total)-(100*c.stud_attend.Unix.present))/15);
			printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Unix.calcu);
			printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			}
			else
			{
			 a1=round(((85*c.stud_attend.Unix.total)-(100*c.stud_attend.Unix.present))/15);
			 a2=round(((75*c.stud_attend.Unix.total)-(100*c.stud_attend.Unix.present))/25);
			 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.Unix.calcu);
			 printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			 printf("\tYou require %d classes to appear in final examination with a fine of Rs 500.\n",a2);
			}
		 break;
 	case 5 : if(c.stud_attend.DS.calcu>=85.0)
		 printf("\n\tYou are eligible for appearing in final examinations.\n");
		 else if(c.stud_attend.DS.calcu>=75.0&&c.stud_attend.DS.calcu<85.0)
			{ a1=round(((85*c.stud_attend.DS.total)-(100*c.stud_attend.DS.present))/15);
			printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DS.calcu);
			printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			}
			else
			{
			 a1=round(((85*c.stud_attend.DS.total)-(100*c.stud_attend.DS.present))/15);
			 a2=round(((75*c.stud_attend.DS.total)-(100*c.stud_attend.DS.present))/25);
			 printf("\n\tYour current attendance is %.2f %%\n",c.stud_attend.DS.calcu);
			 printf("\tYou require %d classes to appear in final examination without paying fine.\n",a1);
			 printf("\tYou require %d classes to appear in final examination with a fine of Rs 500.\n",a2);
			}
		 break;
 	default : printf("\tWrong Input.\n");
			  goto j;
	}
}
void Stud_login()
{
	struct student st[100];
	int i=0,i1,ch,f=0;
	FILE *fp;
	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("\tThe student list is empty\n");
		return;
	} 
	while((fscanf(fp,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,&st[i].stud_attend.Maths.present,
		&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
		&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
		&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
		&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
		&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	i1=i;	
	char c;
	int usn,len;
	char pass[20];
	printf("\n\n\t\t\t\t\t\t\t  ~~~STUDENT LOGIN~~~\n");
	printf("\t------------------------------------------------------------------------------------------------------------------\n");
	wrong : printf("\tUSN:\n");
	printf("\t");
	scanf("%d",&usn);
	strcpy(pass,getpass("\tPassword:  "));
	printf("\t");
	len=strlen(pass);
	while(len--!=0)
	printf("*");
	for(i=0;i<i1;i++)
	{
		if(usn==st[i].USN)
		{
			if(strcmp(pass,st[i].password)==0)
			{
				printf("\t\t\t\t\tWelcome %s\n",st[i].name);
				for(;;)
				{
					printf("\n\t1.View Attendance\t2.Attendance Calculator\t3.Attendance Maintainer\t4.Time Table\t5.View Marks\t6.Logout\n");
					printf("\tEnter your choice: ");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1 : view_attend(st[i]);
								 break;
						case 2 : attend_calc(st[i]);
								 break;
						case 3 : attend_maintain(st[i]);
								 break;
						case 4 : time_table();
		 							break;
						case 5 : view_marks(st[i]);
								 break;
						case 6 : printf("\n\tYou have been logged out of the session.\n");
				 			     printf("\t------------------------------------------------------------------------------------------------------------------\n");
								 return;
						default : printf("\tInvalid choice\n");
					}
				}
				f=1;
			}
			else
			{
				printf("\tIncorrect Password.\n");
				i=0;
				goto wrong;
			}
		}
	}
	if(f==0)
	{
		printf("\tIncorrect USN.\n");
		goto wrong;
	}
	again : printf("\nLogin Again(Y/N)\n");
	scanf("%c",&c);
	if(c=='Y'||c=='y')
	{
		goto wrong;
		f=0;
	}
	else if(c=='N'||c=='n')
	return;
	else
	{
  		printf("\tInvalid Option.\n");
  		goto again;
	}
	fclose(fp);
}
void update_attendance(int a)
{
	int c,i=0,i1,m;
	char ch[2];
	struct student st[100];
	FILE *fp;
	fp = fopen ("student.txt", "r");
	if(fp==NULL)
	{
		printf("\tThe student list is empty.\n");
		return;
	} 
	while((fscanf(fp,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,&st[i].stud_attend.Maths.present,
		&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
		&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
		&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
		&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
		&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	i1=i;
	fclose(fp);
	printf("\n\tUSN\t\t\tName\n");
	switch(a)
	{
		case 1 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n",st[i].USN,st[i].name);
				j : printf ("\tType 'P' to mark present or 'A' to mark absent: ");
				scanf ("%s",ch);
				if (strcmp(ch,"p")==0||strcmp(ch,"P")==0)
				{
				st[i].stud_attend.Maths.present++;
				st[i].stud_attend.Maths.total++;
				st[i].stud_attend.Maths.calcu=cal(st[i].stud_attend.Maths.present,st[i].stud_attend.Maths.total);
				}
				else if (strcmp(ch,"a")==0||strcmp(ch,"A")==0)
				{
				st[i].stud_attend.Maths.total++;
				st[i].stud_attend.Maths.calcu=cal(st[i].stud_attend.Maths.present,st[i].stud_attend.Maths.total);
				}
				else
				{
					printf("\tWrong Input.\n");
					goto j;
				}
				}
				break;
		case 2 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n",st[i].USN,st[i].name);
				k : printf ("\tType 'P' to mark present or 'A' to mark absent: ");
				scanf ("%s",ch);
				if (strcmp(ch,"p")==0||strcmp(ch,"P")==0)
				{
				st[i].stud_attend.DMS.present++;
				st[i].stud_attend.DMS.total++;
				st[i].stud_attend.DMS.calcu=cal(st[i].stud_attend.DMS.present,st[i].stud_attend.DMS.total);
				}
				else if (strcmp(ch,"a")==0||strcmp(ch,"A")==0)
				{
				st[i].stud_attend.DMS.total++;
				st[i].stud_attend.DMS.calcu=cal(st[i].stud_attend.DMS.present,st[i].stud_attend.DMS.total);
				}
				else
				{
					printf("\tWrong Input.\n");
					goto k;
				}
				}
				break;
		case 3 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				l : printf ("\tType 'P' to mark present or 'A' to mark absent: ");
				scanf ("%s",ch);
				if (strcmp(ch,"p")==0||strcmp(ch,"P")==0)
				{
				st[i].stud_attend.DADC.present++;
				st[i].stud_attend.DADC.total++;
				st[i].stud_attend.DADC.calcu=cal(st[i].stud_attend.DADC.present,st[i].stud_attend.DADC.total);
				}
				else if (strcmp(ch,"a")==0||strcmp(ch,"A")==0)
				{
				st[i].stud_attend.DADC.total++;
				st[i].stud_attend.DADC.calcu=cal(st[i].stud_attend.DADC.present,st[i].stud_attend.DADC.total);
				}
				else
				{
					printf("\tWrong Input.\n");
					goto l;
				}
				}
				break;
		case 4 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				m : printf ("\tType 'P' to mark present or 'A' to mark absent: ");
				scanf ("%s",ch);
				if (strcmp(ch,"p")==0||strcmp(ch,"P")==0)
				{
				st[i].stud_attend.Unix.present++;
				st[i].stud_attend.Unix.total++;
				st[i].stud_attend.Unix.calcu=cal(st[i].stud_attend.Unix.present,st[i].stud_attend.Unix.total);
				}
				else if (strcmp(ch,"a")==0||strcmp(ch,"A")==0)
				{
				st[i].stud_attend.Unix.total++;
				st[i].stud_attend.Unix.calcu=cal(st[i].stud_attend.Unix.present,st[i].stud_attend.Unix.total);
				}
				else
				{
					printf("\tWrong Input.\n");
					goto m;
				}
				}
				break;
		case 5 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				n : printf ("\tType 'P' to mark present or 'A' to mark absent: ");
				scanf ("%s",ch);
				if (strcmp(ch,"p")==0||strcmp(ch,"P")==0)
				{
				st[i].stud_attend.DS.present++;
				st[i].stud_attend.DS.total++;
				st[i].stud_attend.DS.calcu=cal(st[i].stud_attend.DS.present,st[i].stud_attend.DS.total);
				}
				else if (strcmp(ch,"a")==0||strcmp(ch,"A")==0)
				{
				st[i].stud_attend.DS.total++;
				st[i].stud_attend.DS.calcu=cal(st[i].stud_attend.DS.present,st[i].stud_attend.DS.total);
				}
				else
				{
					printf("\tWrong Input.\n");
					goto n;
				}
				}
				break;
	}
	fp = fopen ("student.txt", "w");
	for(i=0;i<i1;i++)
	fprintf(fp,"%d\t%s\t%s\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%d\t%d\t%d\t%f\t",st[i].USN,st[i].name,
	st[i].password,st[i].stud_attend.Maths.present,
	st[i].stud_attend.Maths.total,st[i].stud_attend.Maths.calcu,st[i].stud_attend.DMS.present,st[i].stud_attend.DMS.total,
	st[i].stud_attend.DMS.calcu,st[i].stud_attend.DADC.present,st[i].stud_attend.DADC.total,st[i].stud_attend.DADC.calcu,
	st[i].stud_attend.Unix.present,st[i].stud_attend.Unix.total,st[i].stud_attend.Unix.calcu,st[i].stud_attend.DS.present,
	st[i].stud_attend.DS.total,st[i].stud_attend.DS.calcu,st[i].marks.MATHS,st[i].marks.Dms,st[i].marks.Dadc,st[i].marks.UNIX,
	st[i].marks.Ds,st[i].marks.avg);
	fclose(fp);
}
void update_marks (int a)
{
	int c,i=0,i1,m;
	struct student st[100];
	FILE *fp;
	fp = fopen ("student.txt", "r");
	if(fp==NULL)
	{
		printf("\tThe student list is empty.\n");
		return;
	} 
	while((fscanf(fp,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,&st[i].stud_attend.Maths.present,
		&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
		&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
		&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
		&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
		&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	i1=i;
	fclose(fp);
	printf("\n\tUSN\t\t\tName\n");
	switch(a)
	{
		case 1 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				j : printf ("\tEnter the marks: ");
				scanf ("%d",&m);
				if(m>=0&&m<=100)
				{
				st[i].marks.MATHS=m;
				st[i].marks.avg=(st[i].marks.MATHS+st[i].marks.Dms+st[i].marks.Dadc+st[i].marks.UNIX+st[i].marks.Ds)/5;
				}
				else
				{
					printf("\tWrong Input.\n");
					goto j;
				}
				}
				break;
		case 2 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				k : printf ("\tEnter the marks: ");
				scanf ("%d",&m);
				if(m>=0&&m<=100)
				{
				st[i].marks.Dms=m;
				st[i].marks.avg=(st[i].marks.MATHS+st[i].marks.Dms+st[i].marks.Dadc+st[i].marks.UNIX+st[i].marks.Ds)/5;
				}
				else
				{
					printf("\tWrong Input.\n");
					goto k;
				}
				}
				break;
		case 3 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				l : printf ("\tEnter the marks: ");
				scanf ("%d",&m);
				if(m>=0&&m<=100)
				{
				st[i].marks.Dadc=m;
				st[i].marks.avg=(st[i].marks.MATHS+st[i].marks.Dms+st[i].marks.Dadc+st[i].marks.UNIX+st[i].marks.Ds)/5;
				}
				else
				{
					printf("\tWrong Input.\n");
					goto l;
				}
				}
				break;
		case 4 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				p : printf ("\tEnter the marks: ");
				scanf ("%d",&m);
				if(m>=0&&m<=100)
				{
				st[i].marks.UNIX=m;
				st[i].marks.avg=(st[i].marks.MATHS+st[i].marks.Dms+st[i].marks.Dadc+st[i].marks.UNIX+st[i].marks.Ds)/5;
				}
				else
				{
					printf("\tWrong Input.\n");
					goto p;
				}
				}
				break;
		case 5 : for (i=0; i<i1; i++)
				{
				printf ("\n\t%d\t\t\t%s\n", st[i].USN, st[i].name);
				o : printf ("\tEnter the marks: ");
				scanf ("%d",&m);
				if(m>=0&&m<=100)
				{
				st[i].marks.Ds=m;
				st[i].marks.avg=(st[i].marks.MATHS+st[i].marks.Dms+st[i].marks.Dadc+st[i].marks.UNIX+st[i].marks.Ds)/5;
				}
				else
				{
					printf("\tWrong Input.\n");
					goto o;
				}
				}
				break;
	}
	fp = fopen ("student.txt", "w");
	for(i=0;i<i1;i++)
	fprintf(fp,"%d\t%s\t%s\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%d\t%d\t%d\t%f\t",st[i].USN,st[i].name,
	st[i].password,st[i].stud_attend.Maths.present,
	st[i].stud_attend.Maths.total,st[i].stud_attend.Maths.calcu,st[i].stud_attend.DMS.present,st[i].stud_attend.DMS.total,
	st[i].stud_attend.DMS.calcu,st[i].stud_attend.DADC.present,st[i].stud_attend.DADC.total,st[i].stud_attend.DADC.calcu,
	st[i].stud_attend.Unix.present,st[i].stud_attend.Unix.total,st[i].stud_attend.Unix.calcu,st[i].stud_attend.DS.present,
	st[i].stud_attend.DS.total,st[i].stud_attend.DS.calcu,st[i].marks.MATHS,st[i].marks.Dms,st[i].marks.Dadc,st[i].marks.UNIX,
	st[i].marks.Ds,st[i].marks.avg);
	fclose(fp);
}
void view_sub_attendance(int d)
{
	int i=0,i1;
	struct student st[100];
	FILE *fp;
	fp = fopen ("student.txt", "r");
	if(fp==NULL)
	{
		printf("\tThe student list is empty.\n");
		return;
	} 
	while((fscanf(fp,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,&st[i].stud_attend.Maths.present,
		&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
		&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
		&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
		&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
		&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	i1=i;
		printf ("\n\t\tUSN\t\t\tNAME\t\t\tAttendance\n");
	switch (d)
	{
		case 1 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%.2f %%", st[i].USN, st[i].name, st[i].stud_attend.Maths.calcu);
				break;
		case 2 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%.2f %%", st[i].USN, st[i].name, st[i].stud_attend.DMS.calcu);
				break;
		case 3 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%.2f %%", st[i].USN, st[i].name, st[i].stud_attend.DADC.calcu);
				break;
		case 4 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%.2f %%", st[i].USN, st[i].name, st[i].stud_attend.Unix.calcu);
				break;
		case 5 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%.2f %%", st[i].USN, st[i].name, st[i].stud_attend.DS.calcu);
				break;
	}
	fclose (fp);
}
void view_sub_marks(int d)
{
	int i=0,i1;
	struct student st[100];
	FILE *fp;
	fp = fopen ("student.txt", "r");
	if(fp==NULL)
	{
		printf("\tThe student list is empty.\n");
		return;
	} 
	while((fscanf(fp,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,&st[i].stud_attend.Maths.present,
		&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
		&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
		&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
		&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
		&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	i1=i;
		printf ("\n\t\tUSN\t\t\tNAME\t\t\tMarks\n");
	switch (d)
	{
		case 1 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%d", st[i].USN, st[i].name, st[i].marks.MATHS);
				break;
		case 2 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%d", st[i].USN, st[i].name, st[i].marks.Dms);
				break;
		case 3 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%d", st[i].USN, st[i].name, st[i].marks.Dadc);
				break;
		case 4 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%d", st[i].USN, st[i].name, st[i].marks.UNIX);
				break;
		case 5 :for (i=0; i<i1; i++)
				printf ("\n\t\t%d\t\t\t%s\t\t\t%d", st[i].USN, st[i].name, st[i].marks.Ds);
				break;
	}
	fclose (fp);
}
void teacher_login()
{
	FILE *fp,*fp1;
	fp=fopen("teacher.txt","r");
	fp1=fopen ("student.txt","r");
	if (fp == NULL)
	{
		printf ("\tTeacher list empty\n");
		return;
	}
	if (fp1 == NULL)
	{
		printf ("\tStudent list empty\n");
		return;
	}
	int i=0,i1,m,j,ch,f=0,usn,len;
	char usrname[20], pass[20];
	struct teacher t[5];
	struct student st[100];
	while((fscanf(fp1,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,
	&st[i].stud_attend.Maths.present,
	&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
	&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
	&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
	&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
	&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	i1=i;
	fclose(fp1);
	for (i=0; i<5; i++)
	fscanf (fp,"%s%s%s%s",t[i].name,t[i].uname,t[i].pwd,t[i].sub);
	printf("\n\n\t\t\t\t\t\t\t  ~~~TEACHER LOGIN~~~\n");
	printf("\t------------------------------------------------------------------------------------------------------------------\n");
	x:	printf ("\tUsername: \n");
	printf("\t");
	scanf ("%s", usrname);
	strcpy(pass,getpass("\tPassword:  "));
	printf("\t");
	len=strlen(pass);
	while(len--!=0)
	printf("*");
	for (i=0; i<5; i++)
	{
	if (strcmp (usrname, t[i].uname) == 0)
	{
		if (strcmp (pass, t[i].pwd) == 0)
		{
			if(strcmp (t[i].sub,"maths")==0)
			m=1;
			else if(strcmp (t[i].sub,"dms")==0)
				m=2;
			else if(strcmp (t[i].sub,"dadc")==0)
				m=3;
			else if(strcmp (t[i].sub,"unix")==0)
				m=4;
			else
				m=5;		
			printf("\n\t\t\t\tWelcome Prof. %s\t\t\t\t\tSubject: %s\n",t[i].name,t[i].sub);
			for(;;)
			{
				printf ("\n\t1.View Attendance\t2.View Marks\t3.View student list\t4.Update attendance\t5.Update Marks\t6.Logout\n");
				printf ("\tEnter your choice: ");
				scanf ("%d", &ch);
				switch (ch)
				{
					case 1: view_sub_attendance (m);
							break;
					case 2: view_sub_marks(m);				
							break;
					case 3: printf ("\n\t\tUSN\t\t\t\tNAME\n");
							for (j=0; j<i1; j++)
							printf ("\t\t%d\t\t\t\t%s\n", st[j].USN, st[j].name);
							break;
					case 4:	update_attendance(m);
							break;
					case 5: update_marks(m);
							break;
					case 6: printf("\n\tYou have been logged out of the session.\n");
				 			printf("\t------------------------------------------------------------------------------------------------------------------\n");
							return;
					default: printf ("\nInvalid selection\n");
					}
				}
			}
			else
			{
				printf ("\tIncorrect Password.\n");
				goto x;
			}
			f=1;
		}
	}
	if(f==0)
	{
	printf("\tIncorrect Username.\n");
	goto x;
	}
	fclose (fp);
}
void stud_details(struct student c)
{
	printf("\n\t\tUSN : %d\t\t\t\t\tName : %s\n",c.USN,c.name);
	printf("\n\t\t\t\t\tAttendance\n");
	printf("\n\t\tMaths\t\tDMS\t\tDADC\t\tUnix\t\tDS\n");
	printf("\t\t%.2f %%\t\t%.2f %%\t\t%.2f %%\t\t%.2f %%\t\t%.2f %%\n",
	c.stud_attend.Maths.calcu,c.stud_attend.DMS.calcu,c.stud_attend.DADC.calcu,c.stud_attend.Unix.calcu,c.stud_attend.DS.calcu);
	printf("\n\t\t\t\t\tMARKS\n");
	printf("\n\t\tMaths\t\tDMS\t\tDADC\t\tUnix\t\tDS\n");
	printf("\t\t%d",c.marks.MATHS);
	printf("\t\t%d",c.marks.Dms);
	printf("\t\t%d",c.marks.Dadc);
	printf("\t\t%d",c.marks.UNIX);
	printf("\t\t%d\n",c.marks.Ds);
	printf("\t\t\t\tAverage: %.2f\n",c.marks.avg);
}
void add_Student()
{	
	struct student st[100];
	int i,k,usn;
	char Name[20],pas[20];
	FILE *fp;
	fp=fopen("student.txt","a");
	printf("\tEnter the number of students to be entered: ");
	scanf("%d",&k);
	printf("\n\tEnter the details of student.");
	for(i=0;i<k;i++)
	{
		printf("\n\tEnter Name: ");
		scanf("%s",Name);
		strcpy(st[i].name,Name);
		uu: printf("\n\tEnter usn: ");
		scanf("%d",&usn);
		if(usn>100)
		{
			printf("\n\tUSN can't exceed 100. Please enter a valid USN.\n");
			goto uu;
		}
		st[i].USN=usn;
		printf("\n\tEnter password: ");
		scanf("%s",pas);
		strcpy(st[i].password,pas);0;
		st[i].stud_attend.DMS.present=0;
		st[i].stud_attend.DADC.present=0;
		st[i].stud_attend.DS.present=0;
		st[i].stud_attend.Unix.present=0;
		st[i].stud_attend.Maths.total=0;
		st[i].stud_attend.DMS.total=0;
		st[i].stud_attend.DADC.total=0;
		st[i].stud_attend.DS.total=0;
		st[i].stud_attend.Unix.total=0;
		st[i].stud_attend.Maths.calcu=0;	
		st[i].stud_attend.DMS.calcu=0;	
		st[i].stud_attend.DADC.calcu=0;
		st[i].stud_attend.Unix.calcu=0;
		st[i].stud_attend.DS.calcu=0;
		st[i].marks.MATHS=st[i].marks.Dms=st[i].marks.Dadc=st[i].marks.UNIX=st[i].marks.Ds=0;
		st[i].marks.avg=0;
		printf("\n\tStudent added to the list.\n");
	fprintf(fp,"%d\t%s\t%s\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%f\t%d\t%d\t%d\t%d\t%d\t%f\t",st[i].USN,st[i].name,
	st[i].password,st[i].stud_attend.Maths.present,
	st[i].stud_attend.Maths.total,st[i].stud_attend.Maths.calcu,st[i].stud_attend.DMS.present,st[i].stud_attend.DMS.total,
	st[i].stud_attend.DMS.calcu,st[i].stud_attend.DADC.present,st[i].stud_attend.DADC.total,st[i].stud_attend.DADC.calcu,
	st[i].stud_attend.Unix.present,st[i].stud_attend.Unix.total,st[i].stud_attend.Unix.calcu,st[i].stud_attend.DS.present,
	st[i].stud_attend.DS.total,st[i].stud_attend.DS.calcu,st[i].marks.MATHS,st[i].marks.Dms,st[i].marks.Dadc,st[i].marks.UNIX,
	st[i].marks.Ds,st[i].marks.avg);

	}
	fclose(fp);
	n+=k;
}
void mentor_login()
{
	struct mentor me;
	struct student st[100];
	int i=0,i1,ch,usn,f1,f2,f3,j,len;
	FILE *fp1,*fp2;
	fp1=fopen("mentor.txt","r");
	fp2=fopen("student.txt","r");
	if(fp1==NULL)
	{
		printf("\tThe mentor list is empty\n");
		return;
	} 
	if(fp2==NULL)
	{
		printf("\tThe student list is empty\n");
	} 
	fscanf(fp1,"%s%s%s",me.m_username,me.m_password,me.m_name);	
	while((fscanf(fp2,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,
	&st[i].stud_attend.Maths.present,
	&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
	&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
	&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
	&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
	&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
	{
		i++;
	}
	fclose(fp2);
	i1=i;	
	char usr[20],pwd[20];
	printf("\n\n\t\t\t\t\t\t\t  ~~~MENTOR LOGIN~~~\n");
	printf("\t------------------------------------------------------------------------------------------------------------------\n");	
	l : printf("\tUsername: \n");
	printf("\t");
	scanf("%s",usr);
	strcpy(pwd,getpass("\tPassword:  "));
	printf("\t");
	len=strlen(pwd);
	while(len--!=0)
	printf("*");
	if(strcmp(usr,me.m_username)==0)
	{
		if(strcmp(pwd,me.m_password)==0)
		{
			printf("\n\t\t\t\t\t\t      Welcome Prof. %s\n",me.m_name);
			for(;;)
			{
				 printf("\n\t1.View Marks\t2.View Attendance\t3.Add Student\t4.View Student List\t5.View Student Details\t6.Logout\n");
				 printf("\tEnter your choice: ");
				 scanf("%d",&ch);
				 switch(ch)
				 {
				 	case 1: if(i1==0)
				 			{
	 							printf("\n\tStudent List is empty. Please add students first.\n");
	 							break;
	 						}
					 		g : f1=0;
					 		printf("\n\tEnter the usn of the student whose marks is to be viewed: ");
				 			scanf("%d",&usn);
				 			for(i=0;i<i1;i++)
				 			{
				 				if(usn==st[i].USN)
				 				{
								 view_marks(st[i]);
								 f1=1;
				 				}
				 				if(f1==1)
				 				break;
				 			}
				 			if(f1==0)
							 {
							 	printf("\tUSN not found.\n");
							 	goto g;
							 }
							 break;
				 	case 2: if(i1==0)
				 			{
	 							printf("\n\tStudent List is empty. Please add students first.\n");
	 							break;
	 						}
					 		h :  f2=0;
					 		printf("\tEnter the usn of the student whose attendace is to be viewed: ");
				 			scanf("%d",&usn);
				 			for(i=0;i<i1;i++)
				 			{
				 				if(usn==st[i].USN)
				 				{
								 view_attend(st[i]);
								 f2=1;
				 				}
				 				if(f2==1)
				 				break;
				 			}
				 			if(f2==0)
							 {
							 	printf("\tUSN not found.\n");
							 	goto h;
							 }
							 break;
				 	case 3: add_Student();
				 			fp2=fopen("student.txt","r");
				 			i=0;
				 			while((fscanf(fp2,"%d%s%s%d%d%f%d%d%f%d%d%f%d%d%f%d%d%f%d%d%d%d%d%f",&st[i].USN,st[i].name,st[i].password,&st[i].stud_attend.Maths.present,
									&st[i].stud_attend.Maths.total,&st[i].stud_attend.Maths.calcu,&st[i].stud_attend.DMS.present,&st[i].stud_attend.DMS.total,
									&st[i].stud_attend.DMS.calcu,&st[i].stud_attend.DADC.present,&st[i].stud_attend.DADC.total,&st[i].stud_attend.DADC.calcu,
									&st[i].stud_attend.Unix.present,&st[i].stud_attend.Unix.total,&st[i].stud_attend.Unix.calcu,&st[i].stud_attend.DS.present,
									&st[i].stud_attend.DS.total,&st[i].stud_attend.DS.calcu,&st[i].marks.MATHS,&st[i].marks.Dms,&st[i].marks.Dadc,&st[i].marks.UNIX,
									&st[i].marks.Ds,&st[i].marks.avg)!=EOF))
							{
							i++;
							}
							fclose(fp2);
							i1=i;	
				 			break;
				 	case 4: if(i1==0)
				 			{
	 							printf("\n\tStudent List is empty. Please add students first.\n");
	 							break;
	 						}
					 		printf ("\n\t\tUSN\t\t\t\tNAME\n");
							for (j=0; j<i1; j++)
							printf ("\t\t%d\t\t\t\t%s\n", st[j].USN, st[j].name);
							break;
					case 5: if(i1==0)
				 			{
	 							printf("\n\tStudent List is empty. Please add students first.\n");
	 							break;
	 						}
							hh :  f3=0;
					 		printf("\tEnter the usn of the student whose details is to be viewed: ");
				 			scanf("%d",&usn);
				 			for(i=0;i<i1;i++)
				 			{
				 				if(usn==st[i].USN)
				 				{
								 stud_details(st[i]);
								 f3=1;
				 				}
				 				if(f3==1)
				 				break;
				 			}
				 			if(f3==0)
							 {
							 	printf("\tUSN not found.\n");
							 	goto hh;
							 }
							 break; 		
				 	case 6: printf("\n\tYou have been logged out of the session.\n");
				 			printf("\t------------------------------------------------------------------------------------------------------------------\n");
				 			return;
				 	default: printf("\tInvalid option.\n");
				 }
			}
		}
		else
		{
			printf("\tIncorrect Password.\n");
			goto l;
		}
	}
	else 
	{
		printf("\tIncorrect Username.\n");
		goto l;
	}
	fclose(fp1);
	
}

int main()
{
	int ch;
	printf("\n");
	printf("\t\t\t****************************************************************************************\n");
	printf("\t\t\t*                                ~~~STUDENT PORTAL~~~                                  *\n");
	printf("\t\t\t****************************************************************************************\n");
	printf("\t\t\t========================================================================================\n");
	for(;;)
	{
		printf("\n\t\t\t\t1.Student Login\t\t2.Mentor Login\t\t3.Teacher Login\t\t4.Exit\n");
		printf("\n\tSelect login option: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : Stud_login();
					break;
			case 2 : mentor_login();
					break;
			case 3 : teacher_login();
					break;
			case 4 : return 0;
			default : printf("\tInvalid option.\n");
		}
	}
}
