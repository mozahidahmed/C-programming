//01.
  int array[5]={1,2,3,4,5};
  printf("%d",array[4]);

//02.
  int array[5];
  printf("Enter 5 value");
  scanf("%d", &array[0]);
  scanf("%d", &array[1]);
  scanf("%d", &array[2]);
  scanf("%d", &array[3]);
  scanf("%d", &array[4]);

  printf("%d", array[0]);
  printf("%d", array[1]);
  printf("%d", array[2]);
  printf("%d", array[3]);
  printf("%d", array[4]);


//loop
  int array[5];
  for (int i = 0; i < 5; i++)
  {
      scanf("%d", &array[i]);
  }

  for (int i = 0; i < 5; i++)
  {
      printf("%d", array[i]);
  } 
  
  
  
  
  
  // 03 change value
  int array[5] = {1, 2, 3, 4, 5};
  array[3] = 33;
  printf("%d", array[3]);
