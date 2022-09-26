

# RANDOMIZED-QUICKSORT


Name : Srushti Dhakate <br>
Sec : 5-A<br>
Roll : 25<br>


<h1>Randomized algorithms:</h1>
<ul>
    <li>Algorithm uses random bits in addition to input.</li>
    <li>Analyze algorithms average performance over the given input
        where the average is over the random bits that the algorithm
        uses.</li>
    <li>On each input behaviour of algorithm is random. Analyze
        worst-case over all inputs of the (average) performance.</li>
</ul>

<h1>Algorithm of Randomized-Quicksort</h1>

<pre>
    int random_partition ( int A[ ] , int start , int end ) {
        //chooses position of pivot randomly by using rand() function .
         int random = start + rand( )%(end-start +1 ) ;
         //swap pivot with 1st element
          swap ( A[random] , A[start]) ; 
        //call the above partition function     
         return partition(A,start ,end) ;      
    }

</pre>
<h1>Code Explanation</h1>
<ul>
    <li>In Quicksort we are choosing one element as a pivot element and partitioning the array around it such that:Left side of pivot contains all the elements that are less than the pivot element Right side contains all elements greater than the pivot.</li>
    <li>So we are selecting a random pivot in an array,which results in an improved time complexity in most of the cases.</li>
    <li><pre>
      A[] = array whose elements are to be sorted

       starting: Leftmost position of the array
        
       ending: Rightmost position of the array
        
       i: Boundary between the elements that are less than pivot and those greater than pivot
        
       j: Boundary between the partitioned and unpartitioned part of array
        
       pivot1: Pivot element
      

    
  </li>
        <li>In the end we have used randompartitioning () instead of partitioning() function in Quicksorting()function to reduce time complexity.</li>


</ul>
<h1>EXAMPLE</h1>


![random_rq](https://user-images.githubusercontent.com/86475735/192175062-1da40498-7ac0-4d14-97c8-e551b54cdbce.jpg)

<h1>Explaination for above Example</h1>
<ol><li>
    WE have an array A=[9,7,8,3,2,1].
</li>
<li>The rand_partition()function chooses pivot randomly as 7. </li>
<li>It then swaps it with the first element of our array and then partition() function call will take place and it will divide the array into two halves.</li>
<li>First half has elements less than 7 and the other half has elements greater than 7.</li>
<li>Elements which are less than 7, in 5th call, rand_partition() function chooses 2 as pivot element randomly  and then swap it with first element and call to the partition() function takes place. </li>
<li>After the 7th and 8th call, no further calls can take place as only one element left in both the calls. </li>
<li>Similarly we will get order for elements greater than 7.</li>
</ol>
<h1>Test Cases</h1>
<ul>
    
    Test Case 3 
    
    ENTER SIZE OF ARRAY : 5
    INPUT ARRAY : 23 21 19 15 16
    OUTPUT ARRAY: 15 16 19 21 23
    NUMBER OF COMPARISIONS ARE : 4
    
    
    
    ENTER SIZE OF ARRAY : 4
    INPUT ARRAY : 90 78 65 21
    OUTPUT ARRAY: 21 65 78 90
    NUMBER OF COMPARISIONS ARE : 8
    
    
    
    ENTER SIZE OF ARRAY : 10
    INPUT ARRAY : 200 300 100 700 800 400 600 671 111 432
    OUTPUT ARRAY: 100 111 200 300 400 432 600 671 700 800
    NUMBER OF COMPARISIONS ARE : 35
    
    
</ul>


<h1> Screenshots of given Test Cases</h1>



![Screenshot (820)](https://user-images.githubusercontent.com/86475735/192270862-8218e736-3d87-4af9-868c-fbeb37916734.png)
![Screenshot (821)](https://user-images.githubusercontent.com/86475735/192270978-64272ab3-a37a-472f-ac9c-1628b1da0cd1.png)

<h1>Conclusion</h1>
<ul>
    <li>Complexity: The worst case time complexity of Quicksort algorithm is O(N^2) ,but for randomized algorithm, its time complexity fluctuates between O(N^2) and O (N log N) and mostly it comes out to be O (N log N).</li>
    <li>The probability of getting time complexity O(N^2) tends to zero.</li>
    <li>Randomized Quicksort is efficient as compared to Normal Quicksort especially during worst case.</li>
</ul>
