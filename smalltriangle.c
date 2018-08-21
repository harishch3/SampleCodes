#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

struct areaoftriangle
{
    double area;
};

typedef struct areaoftriangle areaoftriangle;

void find_areas_of_triangle(triangle* tr,areaoftriangle* tr1,int n)
{
	int i;
	double split1,split2;	
	for(i=0;i<n;i++)
	{
	    split1 = (tr[i].a+tr[i].b+tr[i].c)/2;
	    split2 = (split1)*(split1-tr[i].a)*(split1-tr[i].b)*(split1-tr[i].c);
	    tr1[i].area = sqrt(split2);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
	    printf("\n %f",tr1[i]);
	}
	printf("\n");
}

void swap(triangle* source,int firstIndex,int secondIndex)
{
    int temp;
    temp = source[firstIndex].a;
    source[firstIndex].a= source[secondIndex].a;
    source[secondIndex].a =temp;

    temp = source[firstIndex].b;
    source[firstIndex].b= source[secondIndex].b;
    source[secondIndex].b =temp;

    temp = source[firstIndex].c;
    source[firstIndex].c= source[secondIndex].c;
    source[secondIndex].c =temp;
}
int indexOfMinimum(areaoftriangle* ar,int startIndex,int n)
{
    double minValue = ar[startIndex].area;
    int minIndex = startIndex;
    int i;
    
    for(i=startIndex+1;i<n;i++)
    {
	if(ar[i].area < minValue)
	{
	  minIndex = i;
	  minValue = ar[i].area;
	}	  
    }
    return minIndex;
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/  
	int temp;
	areaoftriangle *tr1 = (struct areaoftriangle*)malloc(n * sizeof(areaoftriangle));
	//find_areas_of_triangle(tr,tr1,n);
	for(int i = 0; i < n; i++) 
	{
	    find_areas_of_triangle(tr,tr1,n);
	    int index = indexOfMinimum(tr1,i,n);	  
	    swap(tr, i, index);
	
	}
}
int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = (struct triangle*)malloc(n * sizeof(triangle));
	for ( i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
/*
 * INPUT
 20
23 37 47
22 18 5
58 31 31
28 36 40
54 62 11
31 41 14
53 18 54
41 38 55
55 44 44
44 48 18
26 41 65
20 23 21
58 61 50
28 56 56
20 39 32
33 45 49
26 41 62
31 46 39
48 49 67
57 33 45
171.709056
 172.997110
 194.976922
 256.904652
 296.226265
 317.679083
 334.472719
 390.691694
 395.847193
 443.188448
 489.505873
 597.534936
 690.130422
 707.926550
 759.104736
 778.598741
 910.024176
 1174.759550
 1306.861890

 OUTPUT
22 18 5
31 41 14
20 23 21
54 62 11
26 41 65
58 31 31
20 39 32
26 41 62
44 48 18
23 37 47
53 18 54
28 36 40
31 46 39
33 45 49
57 33 45
28 56 56
41 38 55
55 44 44
48 49 67
58 61 50

OUR OUTPUT
22 18 5
54 62 11
31 41 14
20 23 21
26 41 65
20 39 32
58 31 31
26 41 62
23 37 47
44 48 18
53 18 54
28 36 40
31 46 39
33 45 49
57 33 45
28 56 56
41 38 55
55 44 44
48 49 67
58 61 50
 */