 #include <iostream>
   //calculate the weighted average of elements in a given array
   double weighted_average(int array[], int n) {
        //output 0 if size perameter is less than 1
        if(n<1) {
            return 0;
        }

        double weighted_array[n]; //initialise new array with weighted elements (xi*wi)
        double sum = 0; //initialise sum of weighted elements
        double average; //initialise variable for final average calculation

        //nested loop to count frequency of each element
        for(int i=0; i<n; i++){ 
            double count = 1;
            for(int j = 0; j<n; j++){
                if (array[i] == array[j]){
                    count++;
                }
            }
            count = count - 1; //subtract one from frequency to discount repetition of current position
            weighted_array[i]=array[i]*count; //multiply element by frequency in corresponding position in new array
        }
        for (int i = 0; i < n; i++) {
                sum += weighted_array[i]; //add to the sum with each incrementation of the array elements
            }
        average = sum / n; //calculate average
        return average;
   }
