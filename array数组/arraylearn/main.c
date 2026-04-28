#include <stdio.h>
/*初始化数组*/
int arr[5] = { 0 };
int nums[5] = { 1,2,3,4,5 };
/*插入元素*/
void insert(int* nums, int size, int num, int index) {
	for (int i = size - 1; i > index; i--) {
		nums[i] = nums[i - 1];

	}
	nums[index] = num;
}
