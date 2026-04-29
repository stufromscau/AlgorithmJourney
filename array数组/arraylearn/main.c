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
/* 删除索引 index 处的元素 */
void remove(int* nums, int size, int index) {
	for (int i = index, i < size - 1; i++) {
		nums[i] = nums[i + 1];
	}
}
/* 遍历数组 */
void traverse(int* nums, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		count += nums[i];
	}
}
/* 在数组中查找指定元素 */
int find(int* nums, int size, int target) {
	for (int i = 0; i < size; i++) {
		if (nums[i] == target) {
			return 1;
		}
		return -1;
	}
}
/* 扩展数组长度 */
/* 扩展数组长度 */
int* extend(int* nums, int size, int enlarge) {
	// 初始化一个扩展长度后的数组
	int* res = (int*)malloc(sizeof(int) * (size + enlarge));
	// 将原数组中的所有元素复制到新数组
	for (int i = 0; i < size; i++) {
		res[i] = nums[i];
	}
	// 初始化扩展后的空间
	for (int i = size; i < size + enlarge; i++) {
		res[i] = 0;
	}
	// 返回扩展后的新数组
	return res;
}


