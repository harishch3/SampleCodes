#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm> 

using namespace std;

 //4 % 5 
/*
// 5 4 
// 1 2 3 4 5 

5 1 2 3 4
0  - Iter             1 - Iter   3 
 
1  = (0 +4 ) % 5; = 1     ( 1 +5 )% 5 = 2
2  =                   
3 
4 
5
# Initial assignments:
  # array = [1, 2, 3, 4]
  # length_of_array = array.length = 4
  # no_of_left_rotation = k = 2
  # new_arr = Arra.new(length_of_array)
	# new_arr: [nil, nil, nil, nil]

# NOTE:
  # length_of_array.times do |i|
    # is equivalent to 
  # for(i = 0; i < length_of_array; i++)

# Algorithm to calculate new index and update new array for each index (i):
  # new_index = (i + no_of_left_rotation) % length_of_array
  # new_arr[i] = array[new_index]

# LOOP1:
  # i = 0
  # new_index = (0 + 2) % 4 = 2
  # new_arr[i = 0] = array[new_index = 2] = 3
  # new_arr: [3, nil, nil, nil]

# LOOP2:
  # i = 1
  # new_index = (1 + 2) % 4 = 3
  # new_arr[i = 1] = array[new_index = 3] = 4
  # new_arr: [3, 4, nil, nil]

# LOOP3:
  # i = 2
  # new_index = (2 + 2) % 4 = 0
  # new_arr[i = 2] = array[new_index = 0] = 1
  # new_arr: [3, 4, 1, nil]

# LOOP4:
  # i = 3
  # new_index = (3 + 2) % 4 = 1
  # new_arr[i = 3] = array[new_index = 1] = 2
  # new_arr: [3, 4, 1, 2]

# After final loop our new roated array is [3, 4, 1, 2]
# You can return the output: 
  # new_arr.join(' ') => 3 4 1 2


*/
 

vector<int> array_left_rotation(vector<int> a, int n, int k) 
{
  vector<int> b(n);
  for(int i = 0; i < n; i++) 
  { 
    b[i] = a[(i+k) % n];    
  } 
  return b;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}