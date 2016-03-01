struct my_numbers{
   int a;
   int b;
   int c;
   char msg[134];
};



program ADDITION{
   version ADD_2{
      int ADD(my_numbers) = 2;
     } = 2;
} = 0x23451111;


program PRODUCT{
   version PDCT_1{
      int PRDCT(my_numbers) = 1;
     } = 1;
} = 0x23452222;

program DISPLAY{
   version DSPL_3{
      char DSPLY(my_numbers) = 3;
     } = 3;
} = 0x23453333;

