#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray(vector<int> nums){

    for(vector<int>::iterator it = nums.begin();it != nums.end();it++){
        cout << *it << ' ';
    }
    cout << endl;
}
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersection;
    vector<int>::iterator v1 = nums1.begin(), v2 = nums2.begin();

    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    while(v1 != nums1.end() && v2 != nums2.end()){
        if(*v1 == *v2){
            intersection.push_back(*v1);
            v1 = nums1.erase(v1);
            v2 = nums2.erase(v2);
        }else if(*v1 > *v2){
            v2 = nums2.erase(v2);
        }else{
            v1 = nums1.erase(v1);
        }
    }

    return intersection;
}

int main()
{

    int array1[] = {5,4,3,5,2,1,4};
    int array2[] = {4,8,6,5,4,4};

    vector<int> vec1(array1, array1 + sizeof(array1)/sizeof(int));
    vector<int> vec2(array2, array2 + sizeof(array2)/sizeof(int));
    vector<int> intersection;

    printArray(vec1);
    printArray(vec2);

    intersection = intersect(vec1, vec2);

    cout << "Intersection array: ";
    printArray(intersection);
    return 0;
}

