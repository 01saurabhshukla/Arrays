               
//  Binary search in 2-D matrix

//  Steps :  1. initialize z with M-1 last element of row
//           2. Every time checking mat[i][j]>x warna j--
//           3. rest is elf explanatory


    int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   int j=M-1;
	   int i=0;
	   while(i<N && j>=0){
	       if(mat[i][j]==X){
	           return 1;
	       }
	       else if(mat[i][j]>X){
	        j--;
	       }
	       else{
	           i++;
	       }
	   }
	   return 0;
	}
