
void dijkstra()
{
    printf("\nEnter the starting node:");
	scanf("%d",&startnode);
	
	int cost[MAX][MAX],distance[MAX],pred[MAX];
	int visited[MAX],count,mindistance,nextnode,i,j;

	//pred[] stores the predecessor of each node
	//count gives the number of nodes seen so far
	//create the cost matrix
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(G[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=G[i][j];

	//initialize pred[],distance[] and visited[]
	for(i=0;i<n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}

	distance[startnode]=0;
	visited[startnode]=1;
	count=1;

	while(count<n-1)
	{
		mindistance=INFINITY;

		//nextnode gives the node at minimum distance
		for(i=0;i<n;i++)
			if(distance[i]<mindistance&&!visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}

			//check if a better path exists through nextnode
			visited[nextnode]=1;
			for(i=0;i<n;i++)
				if(!visited[i])
					if(mindistance+cost[nextnode][i]<distance[i])
					{
						distance[i]=mindistance+cost[nextnode][i];
						pred[i]=nextnode;
					}
		count++;
	}

    printf("\nEnter the destination location: ");
    scanf("%d",&destination);

	//storing the path and distance till destination node
	for(i=0;i<n;i++)
		if(i!=startnode && i==destination)
		{
			printf("\nDistance: %d\n",distance[i]);
			j=destination;
			push(destination);
			do
			{
				j=pred[j];
				push(j);
			}while(j!=startnode);

        }

    //printing the best path
    system("cls");
    system("color a");
    printf("Starting from: ");
    returnAddress(startnode);
    printf("Ending on: ");
    returnAddress(destination);
    for(i=0;i<n;i++)
        if(empty())
        {
            popDisplay();
            if(i!=n-1)
                printf("->");
        }

    printf("\n ----------------------------\n|    Destination Arrived    |\n ----------------------------\n");

}
