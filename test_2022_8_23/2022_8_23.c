

#include<stdio.h>
//int main() {
//	
//	int arr[100] = { 0 };
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//
//		printf("%d ", arr[i]=i);
//	}
//	
//	for (i = 0; i < sz; i++) {
//
//		printf("%d ", arr[i] += 1);
//	}
//
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main(){
//
//	int arr[3][4] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++){
//		int j = 0;
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//		}
//	}
//
//	for (i = 0; i < 3; i++){
//
//		int j = 0;
//		for (j = 0; j < 4; j++){
//
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}


//int main(){
//
//	int arr[3][4];
//
//	int i = 0;
//
//	for (i = 0; i < 3; i++){
//
//		int j = 0;
//
//		for (j = 0; j < 4; j++){
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//void bubble_sort(int arr[]){
//
//    int sz = sizeof(arr) / sizeof(arr[0]);//err
//    
//    int i = 0;
//    
//    for (i = 0; i < sz - 1; i++){
//
//        int j = 0;
//
//        for (j = 0; j < sz - i - 1; j++){
//
//            if (arr[j] > arr[j + 1]){
//
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//int main(){
//
//    int i = 0;
//
//    int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//
//    bubble_sort(arr);
//
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
//
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



int main() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++) {

		printf("&arr[%d]= %p\n", i, &arr[i]);


	}





	return 0;
}