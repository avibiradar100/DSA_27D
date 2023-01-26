//Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.


//App1:// Brute Force:
               // 1.Merge Both Array
              // 2.Sort them
             // 3.Find Median
            // TIME COMPLEXITY: O(n)+O(nlogn)+O(n)
            // SPACE COMPLEXITY: O(1)
 

//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        // Initialization some neccessary variables
//         vector<int>v;

//         // store the array in the new array
//         for(auto num:nums1)   // O(n1)
//             v.push_back(num);

//         for(auto num:nums2)  // O(n2)
//             v.push_back(num);

//         // Sort the array to find the median
//         sort(v.begin(),v.end());  // O(nlogn)

//         // Find the median and Return it
//         int n=v.size();  // O(n)

//         return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
//     }

// App2: just take another array and store the elements of arr1 and arr2 by sorting them for sorting use merge sort technique because array is already sorted

//Time: O(n1+n2)  Spcae: O(n1+n2)
 
//  double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
//     {
//         // Your code goes here
//         int n1=arr1.size(),n2=arr2.size();
//         vector<int> res;
//         int i=0,j=0;
//         while(i<n1 && j<n2){
            
//             if(arr1[i]<=arr2[j])
//                res.push_back(arr1[i++]);
//             else
//                res.push_back(arr2[j++]);
               
//         }
//         while(i<n1)
//           res.push_back(arr1[i++]);
          
//         while(j<n2)
//             res.push_back(arr2[j++]);
        
//         n1=res.size();
//         if(n1%2)
//           return res[n1/2];
//         return (res[n1/2]+res[n1/2-1])/2.0;
    
//     }


//App3: instead of taking array just take one cnt varaible and update it and track the median position. (*merge sort techniqe)

//Time: O(n1+n2)
//Space: O(1)



//App4 : binary Search
 
// Time:O(log n)
// Space: O(1)

//Best Explaination: https://www.youtube.com/watch?v=NTop3VTjmxk

// double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
//     {
//         // Your code goes here
//         int n1=arr1.size(),n2=arr2.size();
//         if(n1>n2)
//           return MedianOfArrays(arr2,arr1);
        
//         int low=0,high=n1;
        
//         while(low<=high){
            
//             int cut1=low+(high-low)/2;
//             int cut2=(n1+n2+1)/2-cut1; // works for both odd size and even size
            
//             int l1= cut1==0?INT_MIN:arr1[cut1-1];
//             int l2= cut2==0?INT_MIN:arr2[cut2-1];
            
//             int r1= cut1==n1?INT_MAX:arr1[cut1];
//             int r2= cut2==n2?INT_MAX:arr2[cut2];
            
//             if(l1<=r2 && l2<=r1){
                
//                 if((n1+n2)%2)
//                   return max(l1,l2);
//                 else
//                   return (max(l1,l2)+min(r1,r2))/2.0;
//             }
            
//             else if(l1 > r2)
//                high=cut1-1;
//             else
//                low=cut1+1;
//         }
//         return 0.0;
    
//     }
// };
