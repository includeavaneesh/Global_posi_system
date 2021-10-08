
//Location Data Functions
void scanning()
{
    //mapping of the locations
    int i,j;
	printf("Enter no. of locations in the map:");
	scanf("%d",&n);
	int a = 10;
	
	locAddress();
	system("color 7");
	printf("\nEnter the Mapping (adjacency matrix):\n");

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
}

void locAddress()
{
    //Location Data
    int i,j;
    system("cls");
    Delay(3)
    printf("Enter the addresses of each location in the map:\n\n");
    for(i=0;i<n;i++)
    {
        system("color a");
        printf("Enter the address of location %d: ",i);
        fflush(stdin);
        gets(addr[i].name_loc);
        printf("\nEnter the location id: ");
        scanf("%d",&addr[i].LocId);
        fflush(stdin);
        duplicate(i+1);
        system("cls");
    }
    system("color a");
}

void duplicate(int n)
{
    //checking for duplicate inputs using pointers
    struct location *ptr;
    ptr=addr;
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmpi((ptr+i)->name_loc,(ptr+j)->name_loc)==0 && (ptr+i)->LocId==(ptr+j)->LocId)
            {
                system("color c");
                printf("\n----------------------------\n|Duplicate Address Detected|\n----------------------------\n");
                printf("\n\nEnter a new location\n\nEnter location address: ");
                gets(&(ptr+j)->name_loc);
                fflush(stdin);
                printf("\nEnter location id: ");
                scanf("%d",&(ptr+j)->LocId);
            }
}

void returnAddress(int id)
{
    fflush(stdin);
    puts(addr[id].name_loc);
}
