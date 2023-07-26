while(row_start<=row_end && col_start<=col_end){
    //for row_start
    for(int c=col_start; c<=col_end; c++){
        cout<<a[row_start][c]<<" ";
    }

    row_start++;

    //for col_end
    for(int row = row_start ; row<=row_end; row++){
        cout<<a[row][col_end]<<" ";
    }
    col_end--;
   

   //for row_end
   for(int c=col_end ; c>=col_start;c--){
    cout<<a[row_end][c]<<" ";
   }
   row_end--;

   //for col_start
   //if(col_start<=col_end){
   for(int row=row_end; row>=row_end; row--){
    cout<<a[row][col_start]<<" ";
   }
   //}
   col_start++;
}
    return 0;
}