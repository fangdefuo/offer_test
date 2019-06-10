#include <cstdio>
#include "stdlib.h"
#include <cmath>
#include <time.h>
#include <list>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <exception>
#include <BinaryTree.h>
#include "List.h"
#include <Tree.h>
#include <Queue.h>
#include <string>
#include <Eigen/Core>
#include <Eigen/Dense>
#include "assert.h"
#include <deque>
#include <queue>
//#include <Queue.h>


using namespace std;

//
//int K, N, D;
//float **data;
//int *int_cluster;
//float **cluster_center;
//
//float **array(int m, int n);
//void freearray(float **p);
//float getDistance(float avector[], float bvector[], int n);
//float **loadData(int *k, int *d, int *n);
//
//void cluster();
//float getDifference();
//void getCenter(int in_cluster[]);
//
//int main(){
//
//    int i, j;
//    float  temp1, temp2, count = 0;
//    data = loadData(&K, &D, &N);
//    printf(" Data set :\n");
//    for(i = 0; i < N ; i++)
//        for(j = 0; j < D; j++){
//            printf("%-8.2f",data[i][j]);
//            if((j+1)%D == 0)
//                putchar('\n');
//        }
//    printf("---------------------------");
//    srand((unsigned int) time(NULL));
//    for(i = 0; i < K; i++)
//        for(j = 0; j < D; j++)
//            cluster_center[i][j] = data[(int)((double)N * rand()/(RAND_MAX + 1.0))][j];
//    cluster();
//    temp1 = getDifference();
//    count++;
//    printf(" The difference between data and center is:%.2f\n\n", temp1);
//
//    getCenter(int_cluster);
//    cluster();
//    temp2 = getDifference();
//    count++;
//    printf("The difference between data and center is :%.2f\n\n", temp2);
//
//
//    while (fabs(temp2 -temp1) != 0){
//        temp1 = temp2;
//        getCenter(int_cluster);
//        cluster();
//        temp2 = getDifference();
//        count++;
//        printf("The %dth difference between data and center is :%.2f\n\n", count, temp2);
//    }
//    printf("\nThe total number of is :%d\n", count);
//    return 0;
//}
//
//float **array(int m, int n){
//
//    int i;
//    float **p;
//    p = (float **)malloc(m * sizeof(float *));
//    p[0] = (float *)malloc(m * n * sizeof(float));
//    for(i = 1; i < m; i++)
//        p[i - 1] +n;
//    return  p;
//}
//
//void freearray(float **p){
//    free(*p);
//    free(p);
//}
//
//float **loadData(int *k, int *d, int *n){
//    int i, j;
//    float **arraydata;
//    FILE *fp;
//    if((fp = fopen("data.txt","r")) == NULL)
//        fprintf(stderr,"cannot open data.txt!\n");
//    if(fscanf(fp,"K = %d, D = %d, N =%d", k, d, n)!=3)
//        fprintf(stderr,"load error!\n");
//    arraydata = array(*n, *d);
//    cluster_center = array(*k, *d);
//    int_cluster = (int *)malloc(*n * sizeof(int));
//    for(i = 0; i< *n; i++)
//        for(j = 0; j < *d; j++)
//            fscanf(fp, "%f", &arraydata[i][j]);
//    return arraydata;
//
//}
//
//
//float getDistance(float avector[], float bvector[],int n){
//    int i;
//    float sum = 0.0;
//    for(i = 0; i < n; i++)
//        sum += pow(avector[i] - bvector[i], 2);
//    return sqrt(sum);
//}
//
//void cluster(){
//    int i, j;
//    float min;
//    float **distance = array(N, K);
//
//    FILE *fp2;
//    if((fp2 = fopen("result.txt", "W")) == NULL){
//        printf("File cannot be opened/n");
//        exit(0);
//    }
//    for( i = 0; i < N; ++i){
//        min = 9999.0;
//        for(j = 0; j < K; ++j){
//            distance[i][j] = getDistance(data[i], cluster_center[j], D);
//            if(distance[i][j] < min){
//                min = distance[i][j];
//                int_cluster[i] = j;
//            }
//
//        }
//        printf("data[%d] 属于类- %d\n",i, int_cluster[i]);
//        fprintf(fp2,"%d \n",int_cluster[i]);
//    }
//    printf("-------------------------\n");
//    free(distance);
//}
//
//
//float getDifference(){
//    int i, j;
//    float sum =0.0;
//    for(i = 0; i < K; ++i){
//        for(j = 0; j < N; ++j){
//            if(i == int_cluster[j])
//                sum += getDistance(data[j], cluster_center[i], D);
//        }
//    }
//    return sum;
//}
//
//
//void getCenter(int int_cluster[]){
//
//    float **sum = array(K, D);
//    int i, j, q, count;
//    for(i = 0; i < K; i++)
//        for(j = 0; j < D; j++)
//            sum[i][j] = 0.0;
//    for( i = 0; i < K; i++){
//        count = 0;
//        for(j = 0; j < N; j++){
//            if( i == int_cluster[j]){
//                for(q = 0; q < D; q++)
//                    sum[i][q] += data[j][q];
//                count++;
//            }
//        }
//        for( q = 0; q < D; q++)
//            cluster_center[i][q] = sum[i][q]/count;
//    }
//    printf("The new center of cluster is :\n");
//    for(i = 0; i < K; i++)
//        for(q = 0; q < D; q++){
//            printf("%-8.2f",cluster_center[i][q]);
//            if((q + 1)%D == 0)
//                putchar('\n');
//        }
//    free(sum);
//}


////////////////////////////////////////////////////////////////****************************************//////////////////////////////////////////////////////////
//int StrToInt(char* string){
//    int number = 0;
//    while (*string != 0){
//        number = number * 10 + *string - '0';
//        ++string;
//    }
//    return  number;
//}
////////////////////////////////////////////////////////////////////**************************************8/////////////////////////////////////////////////////////

//struct ListNode {
//    int val;  //当前结点的值
//    ListNode *m_pNext;  //指向下一个结点的指针
//    ListNode(int x) : val(x), m_pNext(NULL) {}  //初始化当前结点值为x,指针为空
//};
//ListNode* FindKthToTail(ListNode* pListHead, unsigned int k){
//    if(pListHead == nullptr)
//        return nullptr;
//    if(k == 0)
//        return nullptr;
//    ListNode *pAhead = pListHead;
//    ListNode *pBehind = nullptr;
//    for(unsigned int i = 0; i < k -1; ++i){
//        if(pAhead->m_pNext == nullptr){
//            return nullptr;
//        }
//        pAhead = pAhead->m_pNext;
//    }
//    pBehind = pListHead;
//    while(pAhead->m_pNext != nullptr){
//        pAhead = pAhead->m_pNext;
//        pBehind = pBehind->m_pNext;
//    }
//    return pBehind;
//}
//////////////////////////////////////////****************************////////////////////////////


//class CMyString{
//    public:
//        CMyString(char* pData = nullptr);
//        CMyString(const CMyString& str);
//        ~CMyString(void);
//
//    private:
//        char* m_pData;
//
//};
//CMyString& CMyString::operator = (const CMyString &str){
//    if(this != &str){
//        CMyString strTemp(str);
//
//        char* pTemp = strTemp.m_pData;
//        strTemp.m_pData = m_pData;
//        m_pData = pTemp;
//    }
//
//
//    return *this;
//
//}
//////////////////////////////找出数组中重复的数字＊//////////*****************///////////////////////////////////


//bool duplicate(int numbers[], int length, int duplication[])
//{
//    if(numbers == nullptr || length <= 0)
//        return false;
//
//    for(int i = 0; i < length; ++i)
//    {
//        if(numbers[i] < 0 || numbers[i] > length - 1)
//            return false;
//    }
//    //std::set<int> t;
//    for(int i = 0; i < length; ++i)
//    {
//        while(numbers[i] != i)
//        {
//            if(numbers[i] == numbers[numbers[i]])
//            {
//                *duplication = numbers[i];
//                std::cout << *duplication <<std::endl;
//                break;
//            }
//            //std::cout << numbers[i];
//            // ½»»»numbers[i]ºÍnumbers[numbers[i]]
//            int temp = numbers[i];
//            numbers[i] = numbers[temp];
//            numbers[temp] = temp;
//        }
//    }
//
//    return false;
//}
//
//
//
//
//int main()
//{
//    int numbers[] = {  2, 4, 2, 1, 4};
//    int duplications[6] ;
//    duplicate( numbers, sizeof(numbers) / sizeof(int), duplications);
//}
///////////////////////////////////////找出数组中重复的数//////////////////////////////////////**********************************//////////////////////////////////////////////////

//int countRange(const int* numbers, int length, int start, int end){//这边的end是中间值
//    if(numbers == nullptr)
//        return 0;
//    int count = 0;
//    for(int i = 0; i < length; i++)
//        if(numbers[i] >= start && numbers[i] <= end)
//            ++count;
//    return count;
//}
//
//
//int getDuplication(const int* numbers,int length){
//    if(numbers == nullptr || length <= 0)//如何判断一个指针为空
//        return -1;
//    int start = 1;
//    int end = length -1;
//    while(end >= start){
//        int middle = ((end - start) >> 1) + start;//中间数值的指针
//        int count = countRange(numbers, length, start, middle);
//        if(end == start){//这个是最终要返回的值
//            if(count > 1)
//                return start;
//            else
//                break;
//        }
//        if (count > (middle - start + 1))
//            end = middle;
//        else
//            start = middle + 1;
//    }
//    return -1;
//}
//
//void test(const char* testName, int* numbers, int length, int* duplications, int dupLength)
//{
//    int result = getDuplication(numbers, length);
//    for(int i = 0; i < dupLength; ++i)
//    {
//        if(result == duplications[i])
//        {
//            std::cout << testName << " passed." << std::endl;
//            return;
//        }
//    }
//    std::cout << testName << " FAILED." << std::endl;
//}
//
//void test1()
//{
//    int numbers[] = { 2, 3, 5, 4, 3, 2, 6, 7 };
//    int duplications[] = { 2, 3 };
//    test("test1", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//int main()
//{
//    test1();
//}
///////////////////////////////////////////////在特定矩阵中查找某个数//////////////*******************************************************///////////////////////////////////////////////

//bool Find(int* matrix, int rows, int columns, int number){
//    bool found = false;
//    if(matrix != nullptr && rows > 0 && columns > 0){
//        int row = 0;
//        int column = columns - 1;
//        while (row < rows && column >= 0){
//            if(matrix[row * columns + column] == number){
//                found = true;
//                break;
//            }
//            else if(matrix[row * columns + column] > number)
//                --column;
//            else
//                ++row;
//
//        }
//    }
//    return found;
//}
//void Test(char* testName, int* matrix, int rows, int columns, int number, bool expected){
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//    bool result = Find(matrix, rows, columns, number);
//    if(result == expected)
//        printf("Passed.\n");
//    else
//        printf("Filed.\n");
//}
//void Test1(){
//    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12},{4, 7, 10, 13},{6, 8, 11, 15}};
//    Test("Test1", (int*)matrix, 4, 4, 7, true);
//}
//int main(){
//    Test1();
//}
///////////////////////////////////////////字符串替换////////////////////////////////*********************************//////////////////////////////////////////////////

//void ReplaceBlank(char str[], int length){
//    if(str == nullptr && length <= 0)
//        return;
//    int originalLength = 0;
//    int numberOfBlank = 0;
//    int i = 0;
//    while(str[i] != '\0'){
//        ++ originalLength;
//        if(str[i] == ' ')
//            ++ numberOfBlank;
//        ++ i;
//
//    }
//    int newLength = originalLength + 2 * numberOfBlank;
//    if(newLength > length)
//        return;
//    int indexOfOriginal = originalLength;
//    int indexOfNew = newLength;
//    while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal){
//        if(str[indexOfOriginal] == ' '){
//            str[indexOfNew --] = '0';
//            str[indexOfNew --] = '2';
//            str[indexOfNew --] = '%';
//        }
//        else{
//            str[indexOfNew --] = str[indexOfOriginal];
//        }
//        -- indexOfOriginal;
//    }
//}
//
//void Test(char* testName, char str[], int length, char expected[])
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    ReplaceBlank(str, length);
//
//    if(expected == nullptr && str == nullptr)
//        printf("passed.\n");
//    else if(expected == nullptr && str != nullptr)
//        printf("failed.\n");
//    else if(strcmp(str, expected) == 0)
//        printf("passed.\n");
//    else
//        printf("failed.\n");
//}
//
//
//void Test1(){
//    const int length = 100;
//    char str[length] = "hello world";
//    Test("Test1", str, length, "hello%20world");
//
//}
//int main(int argc, char* argv[]){
//    Test1();
//    return 0;
//}
////////////////////////////////////////////////打印链表中的数链表////////////////////链表///////////*********************************///////////////////////////////////////////////////////////

//struct ListNode{
//    int m_nValue;
//    ListNode* m_pNext;
//};

//void AddToTail(ListNode** pHead, int value){
//    ListNode* pNew = new ListNode();
//    pNew->value = value;
//    pNew->m_pNext = nullptr;
//
//    if(*pHead == nullptr)
//        *pHead = pNew;
//    else{
//        ListNode* pNode = *pHead;
//        while(pNode->value != nullptr)
//            pNode = pNode->m_pNext;
//        pNode->m_pNext = pNew;
//    }
//
//}
//////////////////////////////删除链表中的某一个数
//void RemoveNode(ListNode** pHead, int value){
//    if(pHead == nullptr && *pHead == nullptr)
//        return;
//    ListNode* pToBeDeleted = nullptr;
//    if((*pHead)->m_nValue == value){
//        pToBeDeleted = *pHead;
//        *pHead = (*pHead)->m_pNext;
//    }
//    else{
//        ListNode* pNode = *pHead;
//        while(pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue != value)
//            pNode = pNode->m_pNext;
//        if(pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue ==value){
//            pToBeDeleted = pNode->m_pNext;
//            pNode->m_pNext = pNode->m_pNext->m_pNext;
//        }
//    }
//    if(pToBeDeleted != nullptr){
//        delete pToBeDeleted;
//        pToBeDeleted = nullptr;
//    }
//}
//#include "Utilities\List.h"


//ListNode* CreateListNode(int value)
//{
//    ListNode* pNode = new ListNode();
//    pNode->m_nValue = value;
//    pNode->m_pNext = nullptr;
//
//    return pNode;
//}
///////////////////////////////////如何将两个节点连接成链表形式///////////////////////////////////
//void ConnectListNodes(ListNode* pCurrent, ListNode* pNext)
//{
//    if(pCurrent == nullptr)
//    {
//        printf("Error to connect two nodes.\n");
//        exit(1);
//    }
//
//    pCurrent->m_pNext = pNext;
//}
//
//void PrintListNode(ListNode* pNode)
//{
//    if(pNode == nullptr)
//    {
//        printf("The node is nullptr\n");
//    }
//    else
//    {
//        printf("The key in node is %d.\n", pNode->m_nValue);
//    }
//}
//
//void PrintList(ListNode* pHead)
//{
//    printf("PrintList starts.\n");
//
//    ListNode* pNode = pHead;
//    while(pNode != nullptr)
//    {
//        printf("%d\t", pNode->m_nValue);
//        pNode = pNode->m_pNext;
//    }
//
//    printf("\nPrintList ends.\n");
//}
//
//
//void DestroyList(ListNode* pHead)
//{
//    ListNode* pNode = pHead;
//    while(pNode != nullptr)
//    {
//        pHead = pHead->m_pNext;
//        delete pNode;
//        pNode = pHead;
//    }
//}
///////////////////////////////////////在链表尾部添加节点
//void AddToTail(ListNode** pHead, int value)
//{
//    ListNode* pNew = new ListNode();
//    pNew->m_nValue = value;//第一次定义节点
//    pNew->m_pNext = nullptr;
//
//    if(*pHead == nullptr)
//    {
//        *pHead = pNew;
//    }
//    else
//    {
//        ListNode* pNode = *pHead;
//        while(pNode->m_pNext != nullptr)
//            pNode = pNode->m_pNext;
//
//        pNode->m_pNext = pNew;
//    }
//}
///////////////////////////////删除链表中某个特定的节点
//void RemoveNode(ListNode** pHead, int value)
//{
//    if(pHead == nullptr || *pHead == nullptr)
//        return;
//
//    ListNode* pToBeDeleted = nullptr;
//    if((*pHead)->m_nValue == value)//第一个节点就相同
//    {
//        pToBeDeleted = *pHead;
//        *pHead = (*pHead)->m_pNext;
//    }
//    else
//    {
//        ListNode* pNode = *pHead;
//        while(pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue != value)
//            pNode = pNode->m_pNext;
//
//        if(pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue == value)
//        {
//            pToBeDeleted = pNode->m_pNext;
//            pNode->m_pNext = pNode->m_pNext->m_pNext;
//        }
//    }
//
//    if(pToBeDeleted != nullptr)
//    {
//        delete pToBeDeleted;
//        pToBeDeleted = nullptr;
//    }
//}

/////////////////////////////使用栈的方法逆向打印链表

//void PrintListReversingly_Iteratively(ListNode* pHead)
//{
//    std::stack<ListNode*> nodes;
//
//    ListNode* pNode = pHead;
//    while(pNode != nullptr)
//    {
//        nodes.push(pNode);
//        pNode = pNode->m_pNext;
//    }
//
//    while(!nodes.empty())
//    {
//        pNode = nodes.top();//栈中取出最顶端元素
//        printf("%d\t", pNode->m_nValue);
//        nodes.pop();
//    }
//}
/////////////////////////////使用递归的方法逆向打印链表中的元素
//void PrintListReversingly_Recursively(ListNode* pHead)
//{
//    if(pHead != nullptr)
//    {
//        if (pHead->m_pNext != nullptr)
//        {
//            PrintListReversingly_Recursively(pHead->m_pNext);
//        }
//
//        printf("%d\t", pHead->m_nValue);
//    }
//}
//
//void Test(ListNode* pHead)
//{
//    PrintList(pHead);
//    PrintListReversingly_Iteratively(pHead);
//    printf("\n");
//    PrintListReversingly_Recursively(pHead);
//}
//
//// 1->2->3->4->5
//void Test1()
//{
//    printf("\nTest1 begins.\n");
//
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    Test(pNode1);
//
//    DestroyList(pNode1);
//}
//
//// Ö»ÓÐÒ»¸ö½áµãµÄÁ´±í: 1
//void Test2()
//{
//    printf("\nTest2 begins.\n");
//
//    ListNode* pNode1 = CreateListNode(1);
//
//    Test(pNode1);
//
//    DestroyList(pNode1);
//}
//
//// ¿ÕÁ´±í
//void Test3()
//{
//    printf("\nTest3 begins.\n");
//
//    Test(nullptr);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    return 0;
//}
//////////////////////////////////////////////如何根据前序遍历和中序遍历还原此二叉树/////////////////二叉树//////////////////***************************************/////////////////////////////////////////
//struct BinaryTreeNode{
//    int m_nValue;
//    BinaryTreeNode* m_pLeft;
//    BinaryTreeNode* m_pRight;
//};

//BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder, int* startInorder, int* endInorder);
//
//BinaryTreeNode* Construct(int* preorder, int* inorder, int length){
//    if(preorder == nullptr || inorder == nullptr || length <= 0)
//        return nullptr;
//    return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
//}
//

//
//BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder, int* startInorder, int* endInorder){
//    int rootValue = startPreorder[0];
//    BinaryTreeNode* root = new BinaryTreeNode();
//    root->m_nValue = rootValue;
//    root->m_pLeft = root->m_pRight = nullptr;
//
//    if(startPreorder == endPreorder){
//        if(startPreorder == endPreorder && *startPreorder == *endPreorder)//代表只有一个数据
//            return root;
//        else
//            std::cout << "Invalid Input.\n" <<std::endl;
//    }
//    int* rootInorder = startInorder;
//    while(rootInorder <= endInorder && *rootInorder != rootValue)
//        ++rootInorder;
//    if(rootInorder == endInorder && *rootInorder != rootValue)
//        std::cout << "Invalid Input.\n" <<std::endl;
//    int leftLength = rootInorder - startInorder;
//    int* leftPreorderEnd = startPreorder + leftLength;
//    if(leftLength > 0){
//        root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnd, startInorder, rootInorder - 1);//这里的加１和减１是为了去掉根节点，只构建左子树
//    }
//    if(leftLength < endPreorder - startPreorder){
//        root->m_pRight = ConstructCore(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);//弄清构建左右子树之间的区别
//    }
//    return root;
//
//}
//
//void Test(char* testName, int* preorder, int* inorder, int length){
//    if(testName != nullptr)
//        std::cout << testName << std::endl;
//    std::cout << "The preorder sequence is:" << std::endl;
//    for(int i = 0; i < length; ++ i)
//        std::cout << preorder[i] ;
//    std::cout << std::endl;
//    std::cout << "the inorder sequence is: " << std::endl;
//    for(int i = 0; i < length; ++ i)
//        std::cout << inorder[i];
//    std::cout << std::endl;
//    try {
//        BinaryTreeNode* root = Construct(preorder, inorder, length);
//        PrintTree(root);
//        DestroyTree(root);
//    }
//    catch(std::exception& exception){
//        std::cout << "Invalid Input.\n" <<std::endl;
//    }
//
//}
//void Test1(){
//    const int length = 8;
//    int preorder[length] = {1, 2, 4, 7, 3, 5, 6, 8};
//    int inorder[length] = {4, 7, 2, 1, 5, 3, 8, 6};
//
//    Test("Test1", preorder, inorder, length);
//}
//int main(){
//    Test1();
//
//    return 0;
//}
////////////////////////////////////////已知二叉树和一个节点，找出终须遍历的下一个节点/////////////////////////////////***********************************************///////////////////////////////////

//BinaryTreeNode* GetNext(BinaryTreeNode* pNode){
//    if(pNode == nullptr)
//        return nullptr;
//    BinaryTreeNode* pNext = nullptr;//定义一个空的二叉树
//    if(pNode->m_pRight != nullptr){
//        BinaryTreeNode* pRight = pNode->m_pRight;
//        while(pRight->m_pLeft != nullptr)
//            pRight = pRight->m_pLeft;
//        pNext = pRight;
//    }
//    else if(pNode->m_pParent != nullptr){
//        BinaryTreeNode* pCurrent = pNode;
//        BinaryTreeNode* pParent = pNode->m_pParent;
//        while(pParent != nullptr && pCurrent == pParent->m_pRight){
//            pCurrent = pParent;
//            pParent = pParent->m_pParent;
//        }
//        pNext = pParent;
//    }
//    return pNext;
//}
//BinaryTreeNode* CreateBinaryTreeNode(int value){
//    BinaryTreeNode* pNode = new BinaryTreeNode();
//    pNode->m_nValue = value;
//    pNode->m_pParent = nullptr;
//    pNode->m_pRight = nullptr;
//    pNode->m_pLeft = nullptr;
//
//    return pNode;
//}
//void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight){
//    if(pParent != nullptr){
//        pParent->m_pRight = pLeft;
//        pParent->m_pLeft = pRight;
//        if(pLeft != nullptr)
//            pLeft->m_pParent = pParent;
//        if(pRight != nullptr)
//            pRight->m_pParent = pParent;
//    }
//}
//
//void PrintTreeNode(BinaryTreeNode* pNode){
//    if(pNode != nullptr){
//        std::cout << "value of node is :" << pNode->m_nValue << std::endl;
//        if(pNode->m_pLeft != nullptr)
//            std::cout << "value of its left child is :" << pNode->m_pLeft->m_nValue <<std::endl;
//        else
//            std::cout << "left child is nullptr" << std::endl;
//        if(pNode->m_pRight != nullptr)
//            std::cout << "value of its right child is :" << pNode->m_pRight->m_nValue<< std::endl;
//        else
//            std::cout << "right child is null" << std::endl;
//    }
//    else{
//        std::cout << "this nodes is null" << std::endl;
//    }
//    std::cout << std::endl;
//}
//void PrintTree(BinaryTreeNode* pRoot){
//    PrintTreeNode(pRoot);
//    if(pRoot != nullptr){
//        if(pRoot->m_pLeft != nullptr)
//            PrintTree(pRoot->m_pLeft);
//        if(pRoot->m_pRight != nullptr)
//            PrintTree(pRoot->m_pRight);
//    }
//}
//void DestroyTree(BinaryTreeNode* pRoot){
//    if(pRoot != nullptr){
//        BinaryTreeNode* pLeft = pRoot->m_pLeft;
//        BinaryTreeNode* pRight = pRoot->m_pRight;
//
//        delete pRoot;
//        pRoot = nullptr;
//
//        DestroyTree(pLeft);
//        DestroyTree(pRight);
//    }
//}
///////////////////////////////////////////////用两个栈组成一个队列////////////////////////////////////////////////////////////////////////////////
//template <typename T>class CQueue{
//public:
//    CQueue(void);
//    ~CQueue(void);
//
//    void appendTail(const T& node);
//    T deleteHead();
//
//private:
//    stack<T>stack1;
//    stack<T>stack2;
//};
//template <typename T>void CQueue<T>::appendTail(const T& element) {
//    stack1.push(element);
//}
//template <typename T>T CQueue<T>::deleteHead() {
//    if (stack2.size() <= 0) {
//        while (stack1.size() > 0) {
//            T &data = stack1.top();
//            stack1.pop();
//            stack2.push(data);
//
//        }
//    }
//    if(stack2.size() == 0)
//        std::cout << "queue is empty" <<std::endl;
//    T head = stack2.top();
//    stack.pop();
//    return head;
//
//}
////////////////////////////////////////////////////排序工人的年龄////////////////////////////////////////////////////////////////////////////////////

//int Partition(int data[], int length, int start, int end){
//    if(data ==0 || length <= 0 || start < 0 || end >= length)
//        std::cout << "Invalid Parameters" << std::endl;
//    int index = RandomInRange(start, end);
//    Swap(&data[index], &data[end]);
//
//    int small = start - 1;
//    for(index = start; index < end; ++ index){
//        if(data[index] < data[end]){
//            ++ small;
//            if(small != index)
//                Swap(&data[index], data[small]);
//        }
//    }
//    ++ small;
//    Swap(&data[small], &data[end]);
//    return small;
//}
//void QuickSort(int data[], int length, int start,int end){
//    if(start == end)
//        return;
//    int index = Partition(data, length, start, end);
//    if(index > start)
//        QuickSort(data, length, start, index - 1);
//    if(index < end)
//        QuickSort(data, length, index + 1, end);
//}
//
//void SortAges(int ages[], int length){
//    if(ages == nullptr || length <= 0)
//        return;
//    const int oldestAge = 99;
//    int timesOfAge[oldestAge + 1];
//    for(int i = 0; i < oldestAge; ++ i){
//        timesOfAge[i] = 0;
//
//    }
//    for(int i = 0; i < length; ++i){
//        int age = ages[i];
//        if(age < 0 || age > oldestAge)
//            std::cout << "age out of range" << std::endl;
//        ++ timesOfAge[age];
//    }
//    int index = 0;
//    for(int i = 0; i <= oldestAge; ++ i){
//        for(int j = 0; j < timesOfAge[i]; ++ j){
//            ages[index] = i;
//            ++ index;
//        }
//    }
//}
/////////////////////////////////////////////////////////////二分查找升级版///////////////////////////////

//int MinInOrder(int* numbers, int index1, int index2){
//    int result = numbers[index1];
//    for(int i = index1 + 1; i <= index2; ++ i){
//        if(result > numbers[i])
//            result = numbers[i];
//    }
//    return result;
//}
//
//
//int Min(int* numbers, int length){
//    if(numbers == nullptr || length <= 0)
//        std::cout << "Invalid Parameters" <<std::endl;
//    int index1 = 0;
//    int index2 = length - 1;
//    int indexMid = index1;
//    while(numbers[index1] >= numbers[index2]){
//        if(index2 -index1 == 1){
//            indexMid = index2;
//            break;
//
//        }
//        indexMid = (index1 + index2)/2;
//        if(numbers[index1] == numbers[index2] && numbers[indexMid] == numbers[index1])
//            return MinInOrder(numbers, index1, index2);
//        if(numbers[indexMid] >= numbers[index1])
//            index1 = indexMid;
//        else if(numbers[indexMid] <= numbers[index2])
//            index2 = indexMid;
//    }
//    return numbers[indexMid];
//}
//
//
//
//void Test(int* numbers, int length, int expected)
//{
//    int result = 0;
//    try
//    {
//        result = Min(numbers, length);
//
//        for(int i = 0; i < length; ++i)
//            printf("%d ", numbers[i]);
//
//        if(result == expected)
//            printf("\tpassed\n");
//        else
//            printf("\tfailed\n");
//    }
//    catch (...)
//    {
//        if(numbers == nullptr)
//            printf("Test passed.\n");
//        else
//            printf("Test failed.\n");
//    }
//}
//
//int main(int argc, char* argv[])
//{
//
//    int array1[] = { 3, 4, 5, 1, 2 };
//    Test(array1, sizeof(array1) / sizeof(int), 1);
//
//
//    int array2[] = { 3, 4, 5, 1, 1, 2 };
//    Test(array2, sizeof(array2) / sizeof(int), 1);
//
//
//    int array3[] = { 3, 4, 5, 1, 2, 2 };
//    Test(array3, sizeof(array3) / sizeof(int), 1);
//
//
//    int array4[] = { 1, 0, 1, 1, 1 };
//    Test(array4, sizeof(array4) / sizeof(int), 0);
//
//
//    int array5[] = { 1, 2, 3, 4, 5 };
//    Test(array5, sizeof(array5) / sizeof(int), 1);
//
//
//    int array6[] = { 2 };
//    Test(array6, sizeof(array6) / sizeof(int), 2);
//
//
//    Test(nullptr, 0, 0);
//
//    return 0;
//}
//////////////////////////////////////////////////////////回溯法//////////////////////////////////////////////////////////////
//bool hasPathCore(const char* matrix, int rows, int cols, int row, int col, const char* str, int& pathLength, bool* visited);
//
//
//bool hasPath(const char* matrix, int rows, int cols, const char* str){
//    if(matrix == nullptr || rows < 1 || cols < 1 || str == nullptr)
//        return false;
//    bool* visited = new bool[rows * cols];
//    memset(visited, 0, rows * cols);
//    int pathLength = 0;
//    for(int row = 0; row < rows; ++ row){
//        for(int col = 0; col < cols; ++ col){
//            if(hasPathCore(matrix, rows, cols, row, col, str, pathLength, visited)){
//                return true;
//            }
//        }
//    }
//    delete[] visited;
//    return false;
//}
//bool hasPathCore(const char* matrix, int rows, int cols, int row, int col, const char* str, int& pathLength, bool* visited){
//    if(str[pathLength] == '\0')
//        return true;
//    bool hasPath = false;
//    if(row >= 0 && row < rows && col > 0 && col < cols && matrix[row * cols + col] == str[pathLength] && !visited[row * cols + col]){
//        ++ pathLength;
//        visited[row * cols + col] = true;
//        hasPath = hasPathCore(matrix, rows, cols, row, col - 1, str, pathLength, visited)
//                  || hasPathCore(matrix, rows, cols, row - 1,col, str, pathLength, visited)
//                || hasPathCore(matrix, rows, cols, row, col + 1, str, pathLength, visited)
//                || hasPathCore(matrix, rows, cols, row + 1, col, str, pathLength, visited);
//        if(!hasPath){
//            -- pathLength;
//            visited[row * cols + col] = false;
//        }
//        return hasPath;
//    }
//}
//void Test(const char* testName, const char* matrix, int rows, int cols, const char* str, bool expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(hasPath(matrix, rows, cols, str) == expected)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//
//void Test1()
//{
//    const char* matrix = "ABTGCFCSJDEH";
//    const char* str = "BFCE";
//
//    Test("Test1", (const char*) matrix, 3, 4, str, true);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
//////////////////////////////////////////////棋盘格---------机器人移动//////////////////////////////////////////////////////////////////////////////
//int movingCountCore(int threshold, int rows, int cols,int row, int col, bool* visited);
//bool check(int threshold, int rows, int cols, int row, int col, bool* visited);
//int getDigitSum(int number);
//
//int movingCount(int threshold, int rows, int cols){
//    if(threshold < 0 || rows <= 0 || cols <= 0)
//        return 0;
//    bool *visited = new bool[rows * cols];
//    for(int i = 0; i < rows * cols; ++ i)
//        visited[i] = false;
//    int count = movingCountCore(threshold, rows, cols, 0, 0, visited);
//    delete[] visited;
//
//    return count;
//}
//
//int movingCountCore(int threshold, int rows, int cols, int row, int col, bool* visited){
//    int count = 0;
//    if(check(threshold, rows, cols, row,col, visited)){
//        visited[row * cols + col] = true;
//
//        count = 1 + movingCountCore(threshold, rows, cols, row - 1, col, visited) + movingCountCore(threshold, rows, cols, row, col - 1, visited) + movingCountCore(threshold, rows, cols, row + 1, col, visited) + movingCountCore(threshold,rows, cols, row, col + 1, visited);
//    }
//    return count;
//}
//
//bool check(int threshold, int rows, int cols, int row, int col, bool* visited){
//    if(row >= 0 && row < rows && col >= 0 && col < cols && getDigitSum(row) + getDigitSum(col) <= threshold && !visited[row * cols + col])
//        return true;
//    return false;
//
//}
//
//int getDigitSum(int number){
//    int sum = 0;
//    while(number > 0){
//        sum += number % 10;
//        number /= 10;
//    }
//    return sum;
//}
//void test(char* testName, int threshold, int rows, int cols, int expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(movingCount(threshold, rows, cols) == expected)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//
//void test1()
//{
//    test("Test1", 5, 10, 10, 21);
//}
//
//void test2()
//{
//    test("Test2", 15, 20, 20, 359);
//}
//

//void test3()
//{
//    test("Test3", 10, 1, 100, 29);
//}
//int main(int agrc, char* argv[])
//{
//    test1();
//    test2();
//    test3();
//
//
//    return 0;
//}
////////////////////////////////////////剪绳子///////////////////////////////////////////////////////////////////////////////////////////////////////
//int maxProductAfterCutting_solution1(int length){
//    if(length < 2)
//        return 0;
//    if(length == 2)
//        return 1;
//    if(length == 3)
//        return 2;
//    int* products = new int[length + 1];
//    products[0] = 0;
//    products[1] = 1;
//    products[2] = 2;
//    products[3] = 3;
//    int max = 0;
//    for(int i = 4; i <= length; ++ i){
//        max = 0;
//        for(int j = 1; j <= i / 2; ++ j){
//            int product = products[j] * products[i - j];
//            if(max < product)
//                max = product;
//            products[i] = max;
//        }
//    }
//    max = products[length];
//    delete[] products;
//    return max;
//}
//int maxProductAfterCutting_solution2(int length){
//    if(length < 2)
//        return 0;
//    if(length == 2)
//        return 1;
//    if(length == 3)
//        return 2;
//    int timesOf3 = length / 3;
//    if(length - timesOf3 * 3 == 1)
//        timesOf3 -= 1;
//    int timeOf2 = (length - timesOf3) / 2;
//    return (int)(pow(3, timesOf3)) * (int)(pow(2, timeOf2));
//}
//void test(const char* testName, int length, int expected)
//{
//    int result1 = maxProductAfterCutting_solution1(length);
//    if(result1 == expected)
//        std::cout << "Solution1 for " << testName << " passed." << std::endl;
//    else
//        std::cout << "Solution1 for " << testName << " FAILED." << std::endl;
//
//    int result2 = maxProductAfterCutting_solution2(length);
//    if(result2 == expected)
//        std::cout << "Solution2 for " << testName << " passed." << std::endl;
//    else
//        std::cout << "Solution2 for " << testName << " FAILED." << std::endl;
//}
//
//void test1()
//{
//    int length = 1;
//    int expected = 0;
//    test("test1", length, expected);
//}
//int main(int agrc, char* argv[])
//{
//    test1();
//
//    return 0;
//}
////////////////////////////////判断一个整数有多少个１////////////////////////////////////////////////////////////////////////////////////////
//int numberOf1(int n){
//    int  count = 0;
//    while(n){
//        ++ count;
//        n = (n - 1) & n;
//    }
//    return count;
//}
///////////////////////////////////////////////////////////////如何实现乘方pow////////////////////////////////////////////////////////////////////////////
//bool equal(double num1, double num2){
//    if((num1 - num2) > -0.0000001 && (num1 - num2) < 0.0000001)
//        return true;
//    else
//        return false;
//}
//double PowerWithUnsignedExponent(double base, unsigned int exponent){
//    //double result = 1.0;
//    if(exponent == 0)
//        return 1;
//    if(exponent == 1)
//        return base;
//    double result = PowerWithUnsignedExponent(base, exponent >> 1);
//    result *= result;
//    if((exponent & 0x01) == 1)
//        result *= base;
//    return result;
//
//}
//
//bool g_InvalidInput = false;
//double Power(double base, int exponent){
//    g_InvalidInput = false;
//
//    if(equal(base, 0.0) && exponent < 0){
//        g_InvalidInput = true;
//        return 0.0;
//    }
//    unsigned int absExponent = (unsigned int)(exponent);
//    if(exponent < 0)
//        absExponent = (unsigned int)(- exponent);
//    double result = PowerWithUnsignedExponent(base, absExponent);
//    if(exponent < 0)
//        result = 1.0 / result;
//
//    return result;
//
//}
//void Test(const char* testName, double base, int exponent, double expectedResult, bool exectedFlag){
//    double result = Power(base, exponent);
//    if(equal(result, expectedResult) && g_InvalidInput == exectedFlag)
//        std::cout << testName << "passed" <<std::endl;
//    else
//        std::cout << testName << "FALED" << std::endl;
//}
//int main(int argc, char* argv[]){
//
//    Test("Test1", 2, 3, 8, false);
//
//
//    Test("Test2", -2, 3, -8, false);
//
//
//    Test("Test3", 2, -3, 0.125, false);
//
//
//    Test("Test4", 2, 0, 1, false);
//
//
//    Test("Test5", 0, 0, 1, false);
//
//
//    Test("Test6", 0, 4, 0, false);
//
//
//    Test("Test7", 0, -4, 0, true);
//
//    return 0;
//
//}
/////////////////////////////////////////////////////////////打印从１到最大的n位整数/////////////////////////////////////////////////////////////////
//void PrintNumber(char* number){
//    bool isBeginning0 = true;
//    int nLength = strlen(number);
//
//    for(int i = 0; i < nLength; ++ i){
//        if(isBeginning0 && number[i] != '0')
//            isBeginning0 = false;
//        if(!isBeginning0){
//            printf("%c", number[i]);
//        }
//    }
//    printf("\t");
//}
//
//void PrintToMaxOfNDigitsRecursively(char* number, int length, int index){
//    if(index == length - 1){
//        PrintNumber(number);
//        return;
//    }
//    for(int i = 0; i < 10; ++ i){
//        number[index + 1] = i + '0';
//        PrintToMaxOfNDigitsRecursively(number, length, index + 1);
//    }
//}
//
//void PrintToMaxOfNDigits(int n){
//    if(n <= 0)
//        return;
//    char* number = new char[n + 1];
//    number[n] = '\0';
//
//    for(int i = 0; i < 10; ++ i){
//        number[0] = i + '0';
//        PrintToMaxOfNDigitsRecursively(number, n, 0);
//    }
//    delete[] number;
//}
//void Test(int n)
//{
//    printf("Test for %d begins:\n", n);
//
//    PrintToMaxOfNDigits(n);
//
//    printf("\nTest for %d ends.\n", n);
//}
//
//int main(int argc, char* argv[])
//{
//    Test(1);
//    Test(2);
//    Test(3);
//    Test(0);
//    Test(-1);
//
//    return 0;
//}
////////////////////////////////////////////////删除单向链表中的一个节点/////////////////////////////////////////////////////////////////////////////////
//struct ListNode{
//    int m_nValue;
//    ListNode* m_pNext;
//};
//void DeleteNode(ListNode** pListHead, ListNode* pToBeDeleted){
//    if(!pListHead || !pToBeDeleted)
//        return;
//    if(pToBeDeleted->m_pNext != nullptr){
//        ListNode* pNext = pToBeDeleted->m_pNext;
//        pToBeDeleted->m_nValue = pNext->m_nValue;
//        pToBeDeleted->m_pNext = pNext->m_pNext;
//
//        delete pNext;
//        pNext = nullptr;
//
//    }
//    else if(*pListHead == pToBeDeleted){
//        delete pToBeDeleted;
//        pToBeDeleted = nullptr;
//        *pListHead = nullptr;
//
//    }
//    else{
//        ListNode* pNode = *pListHead;
//        while(pNode->m_pNext != pToBeDeleted){
//            pNode = pNode->m_pNext;
//        }
//        pNode->m_pNext = nullptr;
//        delete pToBeDeleted;
//        pToBeDeleted = nullptr;
//    }
//}
//void Test(ListNode* pListHead, ListNode* pNode)
//{
//    printf("The original list is: \n");
//    PrintList(pListHead);
//
//    printf("The node to be deleted is: \n");
//    PrintListNode(pNode);
//
//    DeleteNode(&pListHead, pNode);
//
//    printf("The result list is: \n");
//    PrintList(pListHead);
//}
//
//void Test1()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    Test(pNode1, pNode3);
//
//    DestroyList(pNode1);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
//////////////////////////////////////////删除链表中值重复的结点//////////////////////////////////////////////////////
//void DeleteDuplication(ListNode** pHead){
//    if(*pHead == nullptr && pHead == nullptr)
//        return;
//    ListNode* pPreNode = nullptr;
//    ListNode* pNode = *pHead;
//    while(pNode != nullptr){
//        ListNode* pNext = pNode->m_pNext;
//        bool needDelete = false;
//        if(pNext != nullptr && pNext->m_nValue == pNode->m_nValue)
//            needDelete = true;
//        if(!needDelete){
//            pPreNode = pNode;
//            pNode = pNode->m_pNext;
//        }
//        else{
//            int value = pNode->m_nValue;
//            ListNode* pToBeDel = pNode;
//            while(pToBeDel != nullptr && pToBeDel->m_nValue == value) {
//                pNext = pToBeDel->m_pNext;
//
//                delete pToBeDel;
//                pToBeDel = nullptr;
//
//                pToBeDel = pNext;
//            }
//                if(pPreNode == nullptr)
//                    *pHead = pNext;
//                else
//                    pPreNode->m_pNext = pNext;
//                pNode = pNext;
//
//        }
//    }
//}
//void Test(char* testName, ListNode** pHead, int* expectedValues, int expectedLength)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    DeleteDuplication(pHead);
//
//    int index = 0;
//    ListNode* pNode = *pHead;
//    while(pNode != nullptr && index < expectedLength)
//    {
//        if(pNode->m_nValue != expectedValues[index])
//            break;
//
//        pNode = pNode->m_pNext;
//        index++;
//    }
//
//    if(pNode == nullptr && index == expectedLength)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//
//void Test1()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(3);
//    ListNode* pNode5 = CreateListNode(4);
//    ListNode* pNode6 = CreateListNode(4);
//    ListNode* pNode7 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//    ConnectListNodes(pNode5, pNode6);
//    ConnectListNodes(pNode6, pNode7);
//
//    ListNode* pHead = pNode1;
//
//    int expectedValues[] = { 1, 2, 5 };
//    Test("Test1", &pHead, expectedValues, sizeof(expectedValues) / sizeof(int));
//
//    DestroyList(pHead);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
///////////////////////////////////////////////////正则表达式匹配////////////////////////////////////////////////////////////////////////////////////////
//bool matchCore(const char* str, const char* pattern){
//    if(*str == '\0' && *pattern == '\0')
//        return true;
//    if(*str != '\0' && *pattern == '\0')//首个字符为空代表模式为空
//        return false;
//    if(*(pattern + 1) == '*'){
//        if(*pattern == *str || (*pattern == '.' && *str != '\0'))
//            return matchCore(str + 1, pattern + 2) || matchCore(str + 1, pattern) || matchCore(str, pattern + 2);
//        else
//            return matchCore(str, pattern + 2);
//    }
//    if(*str == *pattern || (*pattern == '.' && *str != '\0'))
//        return matchCore(str + 1, pattern + 1);
//    return false;
//}
//
//bool match(const char* str, const char* pattern){
//    if(str == nullptr && pattern == nullptr)
//        return false;
//    return matchCore(str, pattern);
//}
//void Test(const char* testName, const char* string, const char* pattern, bool expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(match(string, pattern) == expected)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//
//int main(int argc, char* argv[])
//{
//    Test("Test01", "", "", true);
//    Test("Test02", "", ".*", true);
//    Test("Test03", "", ".", false);
//    Test("Test04", "", "c*", true);
//    Test("Test05", "a", ".*", true);
//    Test("Test06", "a", "a.", false);
//    Test("Test07", "a", "", false);
//    Test("Test08", "a", ".", true);
//    Test("Test09", "a", "ab*", true);
//    Test("Test10", "a", "ab*a", false);
//    Test("Test11", "aa", "aa", true);
//    Test("Test12", "aa", "a*", true);
//    Test("Test13", "aa", ".*", true);
//    Test("Test14", "aa", ".", false);
//    Test("Test15", "ab", ".*", true);
//    Test("Test16", "ab", ".*", true);
//    Test("Test17", "aaa", "aa*", true);
//    Test("Test18", "aaa", "aa.a", false);
//    Test("Test19", "aaa", "a.a", true);
//    Test("Test20", "aaa", ".a", false);
//    Test("Test21", "aaa", "a*a", true);
//    Test("Test22", "aaa", "ab*a", false);
//    Test("Test23", "aaa", "ab*ac*a", true);
//    Test("Test24", "aaa", "ab*a*c*a", true);
//    Test("Test25", "aaa", ".*", true);
//    Test("Test26", "aab", "c*a*b", true);
//    Test("Test27", "aaca", "ab*a*c*a", true);
//    Test("Test28", "aaba", "ab*a*c*a", false);
//    Test("Test29", "bbbba", ".*a*a", true);
//    Test("Test30", "bcbbabab", ".*a*a", false);
//
//    return 0;
//}
//////////////////////////////////////////////////仿真/////////////////////////////////////////////////////////
//#define PI acos(-1)
//int main(){
//    double beta = PI / 3;
//    double l = 15.0;
//    double tg = tan(beta);
//    double cs = cos(beta);
//    double y;
//    for(float x = 0; x <= 20; x += 0.1){
//
//        double gamma = 1.0;
//        double sigma0 = 1.0;
//
//        y = x * tg - (gamma * x * l - gamma * x * x) / (2 * sigma0 * cs);
//        printf("%.6lf\n",y);
        //Eigen::Mat P0 = Mat::eye(3, 4);
//    }
//    return 0;
//}
////////////////////////////////////////////////判断可以表示数值的字符串//////////////////////////////////////////////////////////////b
//bool scanUnsignedInteger(const char** str){
//    const char* before = *str;
//    while(**str != '\0' && **str >= '0' && **str <= '9')
//        ++(*str);
//    return *str > before;
//}
//
//
//bool scanInteger(const char** str){
//    if(**str == '+' || **str == '-')
//        ++ (*str);
//    return scanUnsignedInteger(str);
//}
//
//bool isNumeric(const char* str){
//    if(str == nullptr)
//        return false;
//    bool numeric = scanInteger(&str);
//
//    if(*str == '.'){
//        ++ str;
//        numeric = scanUnsignedInteger(&str) || numeric;
//    }
//    if(*str == 'e' || *str == 'E'){
//        ++str;
//        numeric = numeric && scanInteger(&str);
//    }
//    return numeric && *str =='\0';
//}
//void Test(const char* testName, const char* str, bool expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(isNumeric(str) == expected)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//
//
//int main(int argc, char* argv[])
//{
//    Test("Test1", "100", true);
//    Test("Test2", "123.45e+6", true);
//    Test("Test3", "+500", true);
//    Test("Test4", "5e2", true);
//    Test("Test5", "3.1416", true);
//    Test("Test6", "600.", true);
//    Test("Test7", "-.123", true);
//    Test("Test8", "-1E-16", true);
//    Test("Test9", "1.79769313486232E+308", true);
//
//    printf("\n\n");
//
//    Test("Test10", "12e", false);
//    Test("Test11", "1a3.14", false);
//    Test("Test12", "1+23", false);
//    Test("Test13", "1.2.3", false);
//    Test("Test14", "+-5", false);
//    Test("Test15", "12e+5.4", false);
//    Test("Test16", ".", false);
//    Test("Test17", ".e1", false);
//    Test("Test18", "e1", false);
//    Test("Test19", "+.", false);
//    Test("Test20", "", false);
//    Test("Test21", nullptr, false);
//
//    return 0;
//}
/////////////////////////////////////把所有的奇数放到偶数的前面////////////////////////////////////////////////////////////////////////////////////
//void ReorderOddEven(int* pData, unsigned int length){
//    if(pData == nullptr || length == 0)
//        return;
//    int* pBegin = pData;
//    int* pEnd = pData + length -1;
//    while(pBegin < pEnd){
//        while(pBegin < pEnd && (*pBegin & 0x1) != 0)
//            pBegin ++;
//        while(pBegin < pEnd && (*pEnd & 0x1) == 0)
//            pEnd --;
//        if(pBegin < pEnd){
//            int temp = *pBegin;
//            *pBegin = *pEnd;
//            *pEnd = temp;
//        }
//    }
//}
/////////////////////////////////////////////////////找到链表中导数第k个节点/////////////////////////////////////////////////////////////////////////////////////////
//ListNode* FindKthToTail(ListNode* pListHead, unsigned int k){
//
//    if(pListHead == nullptr || k == 0)
//        return nullptr;
//
//    ListNode* pAhead = pListHead;
//    ListNode* pBehind = nullptr;
//
//    for(unsigned int i = 0; i < k - 1; i ++){
//        if(pAhead->m_pNext != nullptr){
//            pAhead = pAhead->m_pNext;
//        }
//        else
//            return nullptr;
//    }
//    pBehind = pListHead;
//
//    while(pAhead->m_pNext != nullptr){
//        pAhead = pAhead->m_pNext;
//        pBehind = pBehind->m_pNext;
//    }
//    return pBehind;
//}
//void Test1()
//{
//    printf("=====Test1 starts:=====\n");
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    printf("expected result: 4.\n");
//    ListNode* pNode = FindKthToTail(pNode1, 2);
//    PrintListNode(pNode);
//
//    DestroyList(pNode1);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
////////////////////////////////////////////判断链表是不是含有闭环，并判断闭环的入口和闭环含有的节点的个数///////////////////////////////////////////////////////////////////
//ListNode* MeetingNode(ListNode* pHead){
//    if(pHead == nullptr)
//        return nullptr;
//    ListNode* pSlow = pHead->m_pNext;
//    if(pSlow == nullptr)
//        return nullptr;
//    ListNode* pFast = pHead->m_pNext;
//    while(pFast != nullptr && pSlow != nullptr){
//        if(pFast == pSlow)
//            return pFast;
//        pSlow = pSlow->m_pNext;
//        pFast = pFast->m_pNext;
//        if(pFast != nullptr)
//            pFast = pFast->m_pNext;
//    }
//    return nullptr;
//}
//ListNode* EntryNodeOfLoop(ListNode* pHead){
//    ListNode* meetingNode = MeetingNode(pHead);
//    if(meetingNode == nullptr)
//        return nullptr;
//    int nodesInLoop = 1;
//    ListNode* pNode1 = meetingNode;
//    while(pNode1->m_pNext != meetingNode){
//        pNode1 = pNode1->m_pNext;
//        ++ nodesInLoop;
//    }
//    pNode1 = pHead;
//    for(int i = 0; i < nodesInLoop; ++ i){
//        pNode1 = pNode1->m_pNext;
//    }
//    ListNode* pNode2 = pHead;
//    while(pNode1 != pNode2){
//        pNode1 = pNode1->m_pNext;
//        pNode2 = pNode2->m_pNext;
//    }
//    return pNode1;
//}
//void Test(char* testName, ListNode* pHead, ListNode* entryNode)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(EntryNodeOfLoop(pHead) == entryNode)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//
//// A list has a node, without a loop
//void Test1()
//{
//    ListNode* pNode1 = CreateListNode(1);
//
//    Test("Test1", pNode1, nullptr);
//
//    DestroyList(pNode1);
//}
//
//// A list has a node, with a loop
//void Test2()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ConnectListNodes(pNode1, pNode1);
//
//    Test("Test2", pNode1, pNode1);
//
//    delete pNode1;
//    pNode1 = nullptr;
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//
//    return 0;
//}
//////////////////////////////////////////////////翻转链表//////////////////////////////////////////////////////////////////////
//ListNode* ReverseList(ListNode* pHead){
//    ListNode* pReversedHead = nullptr;
//    ListNode* pNode = pHead;
//    ListNode* pPrev = nullptr;
//    while(pNode != nullptr){
//        ListNode* pNext = pNode->m_pNext;
//        if(pNext == nullptr)
//            pReversedHead = pNode;
//        pNode->m_pNext = pPrev;
//
//        pPrev = pNode;
//        pNode = pNext;
//    }
//    return pReversedHead;
//}
//ListNode* Test(ListNode* pHead)
//{
//    printf("The original list is: \n");
//    PrintList(pHead);
//
//    ListNode* pReversedHead = ReverseList(pHead);
//
//    printf("The reversed list is: \n");
//    PrintList(pReversedHead);
//
//    return pReversedHead;
//}
//
//void Test1()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    ListNode* pReversedHead = Test(pNode1);
//
//    DestroyList(pReversedHead);
//}
//
//void Test2()
//{
//    ListNode* pNode1 = CreateListNode(1);
//
//    ListNode* pReversedHead = Test(pNode1);
//
//    DestroyList(pReversedHead);
//}
//
//void Test3()
//{
//    Test(nullptr);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//
//    return 0;
//}
////////////////////合并两个链表后，仍然是升续/////////////////////////////////////////////////////////////////////////////////////////////////////
//ListNode* Merge(ListNode* pHead1, ListNode* pHead2){
//    if(pHead1 == nullptr)
//        return pHead2;
//    if(pHead2 == nullptr)
//        return pHead1;
//    ListNode* pMergedHead = nullptr;
//    if(pHead1->m_nValue < pHead2->m_nValue){
//        pMergedHead = pHead1;
//        pMergedHead->m_pNext = Merge(pHead1->m_pNext, pHead2);
//    }
//    else{
//        pMergedHead = pHead2;
//        pMergedHead->m_pNext = Merge(pHead1, pHead2->m_pNext);
//    }
//    return pMergedHead;
//}
//ListNode* Test(char* testName, ListNode* pHead1, ListNode* pHead2)
//{
//    if(testName != nullptr)
//        printf("%s begins:\n", testName);
//
//    printf("The first list is:\n");
//    PrintList(pHead1);
//
//    printf("The second list is:\n");
//    PrintList(pHead2);
//
//    printf("The merged list is:\n");
//    ListNode* pMergedHead = Merge(pHead1, pHead2);
//    PrintList(pMergedHead);
//
//    printf("\n\n");
//
//    return pMergedHead;
//}
//
//// list1: 1->3->5
//// list2: 2->4->6
//void Test1()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode3);
//    ConnectListNodes(pNode3, pNode5);
//
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode6 = CreateListNode(6);
//
//    ConnectListNodes(pNode2, pNode4);
//    ConnectListNodes(pNode4, pNode6);
//
//    ListNode* pMergedHead = Test("Test1", pNode1, pNode2);
//
//    DestroyList(pMergedHead);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
/////////////////////////////////////判断一棵树是不是包含另一棵树///////////////////////////////////////////////////////////////////////////////////
//bool Equal(double num1, double num2){
//    if((num1 - num2 > -0.0000001) && (num1 - num2 < 0.0000001))
//        return true;
//    else
//        return false;
//}
//bool DoesTree1HaveTree2(BinaryTreeNode* pRoot1, BinaryTreeNode* pRoot2){
//    if(pRoot2 == nullptr)
//        return true;
//    if(pRoot1 == nullptr)
//        return false;
//    if(!Equal(pRoot1->m_nValue, pRoot2->m_nValue))
//        return false;
//    return DoesTree1HaveTree2(pRoot1->m_pLeft, pRoot2->m_pLeft) && DoesTree1HaveTree2(pRoot1->m_pRight, pRoot2->m_pRight);
//}
//bool HasSubtree(BinaryTreeNode* pRoot1, BinaryTreeNode* pRoot2){
//    bool result = false;
//    if(pRoot1 != nullptr && pRoot2 != nullptr){
//        if(Equal(pRoot1->m_nValue, pRoot2->m_nValue))
//            result = DoesTree1HaveTree2(pRoot1, pRoot2);
//        if(!result)
//            result = HasSubtree(pRoot1->m_pLeft, pRoot2);
//        if(!result)
//            result = HasSubtree(pRoot1->m_pRight, pRoot2);
//    }
//    return result;
//}
//BinaryTreeNode* CreateBinaryTreeNode(double dbValue)
//{
//    BinaryTreeNode* pNode = new BinaryTreeNode();
//    pNode->m_nValue = dbValue;
//    pNode->m_pLeft = nullptr;
//    pNode->m_pRight = nullptr;
//
//    return pNode;
//}
//
//void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight)
//{
//    if(pParent != nullptr)
//    {
//        pParent->m_pLeft = pLeft;
//        pParent->m_pRight = pRight;
//    }
//}
//
//void DestroyTree(BinaryTreeNode* pRoot)
//{
//    if(pRoot != nullptr)
//    {
//        BinaryTreeNode* pLeft = pRoot->m_pLeft;
//        BinaryTreeNode* pRight = pRoot->m_pRight;
//
//        delete pRoot;
//        pRoot = nullptr;
//
//        DestroyTree(pLeft);
//        DestroyTree(pRight);
//    }
//}
//void Test(char* testName, BinaryTreeNode* pRoot1, BinaryTreeNode* pRoot2, bool expected)
//{
//    if(HasSubtree(pRoot1, pRoot2) == expected)
//        printf("%s passed.\n", testName);
//    else
//        printf("%s failed.\n", testName);
//}
//
//// Ê÷ÖÐ½áµãº¬ÓÐ·Ö²æ£¬Ê÷BÊÇÊ÷AµÄ×Ó½á¹¹
////                  8                8
////              /       \           / \
////             8         7         9   2
////           /   \
////          9     2
////               / \
////              4   7
//void Test1()
//{
//    BinaryTreeNode* pNodeA1 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNodeA2 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNodeA3 = CreateBinaryTreeNode(7);
//    BinaryTreeNode* pNodeA4 = CreateBinaryTreeNode(9);
//    BinaryTreeNode* pNodeA5 = CreateBinaryTreeNode(2);
//    BinaryTreeNode* pNodeA6 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNodeA7 = CreateBinaryTreeNode(7);
//
//    ConnectTreeNodes(pNodeA1, pNodeA2, pNodeA3);
//    ConnectTreeNodes(pNodeA2, pNodeA4, pNodeA5);
//    ConnectTreeNodes(pNodeA5, pNodeA6, pNodeA7);
//
//    BinaryTreeNode* pNodeB1 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNodeB2 = CreateBinaryTreeNode(9);
//    BinaryTreeNode* pNodeB3 = CreateBinaryTreeNode(2);
//
//    ConnectTreeNodes(pNodeB1, pNodeB2, pNodeB3);
//
//    Test("Test1", pNodeA1, pNodeB1, true);
//
//    DestroyTree(pNodeA1);
//    DestroyTree(pNodeB1);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
///////////////////////////////////////////////二叉树的镜像///////使用递归////////////////////////////////////////////////////////////////////
//void MirrorRecursively(BinaryTreeNode* pNode){
//    if(pNode == nullptr)
//        return;
//    if(pNode->m_pLeft == nullptr && pNode->m_pRight == nullptr)
//        return;
//    BinaryTreeNode* pTemp = pNode->m_pLeft;
//    pNode->m_pLeft = pNode->m_pRight;
//    pNode->m_pRight = pTemp;
//
//    if(pNode->m_pLeft)
//        MirrorRecursively(pNode->m_pLeft);
//    if(pNode->m_pRight)
//        MirrorRecursively(pNode->m_pRight);
//}
//void MirrorIteratively(BinaryTreeNode* pRoot)
//{
//    if(pRoot == nullptr)
//        return;
//
//    std::stack<BinaryTreeNode*> stackTreeNode;
//    stackTreeNode.push(pRoot);
//
//    while(stackTreeNode.size() > 0)
//    {
//        BinaryTreeNode *pNode = stackTreeNode.top();
//        stackTreeNode.pop();
//
//        BinaryTreeNode *pTemp = pNode->m_pLeft;
//        pNode->m_pLeft = pNode->m_pRight;
//        pNode->m_pRight = pTemp;
//
//        if(pNode->m_pLeft)
//            stackTreeNode.push(pNode->m_pLeft);
//
//        if(pNode->m_pRight)
//            stackTreeNode.push(pNode->m_pRight);
//    }
//}
//void Test1()
//{
//    printf("=====Test1 starts:=====\n");
//    BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//    BinaryTreeNode* pNode9 = CreateBinaryTreeNode(9);
//    BinaryTreeNode* pNode11 = CreateBinaryTreeNode(11);
//
//    ConnectTreeNodes(pNode8, pNode6, pNode10);
//    ConnectTreeNodes(pNode6, pNode5, pNode7);
//    ConnectTreeNodes(pNode10, pNode9, pNode11);
//
//    PrintTree(pNode8);
//
//    printf("=====Test1: MirrorRecursively=====\n");
//    MirrorRecursively(pNode8);
//    PrintTree(pNode8);
//
//    printf("=====Test1: MirrorIteratively=====\n");
//    MirrorIteratively(pNode8);
//    PrintTree(pNode8);
//
//    DestroyTree(pNode8);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
//////////////////////////////////////////判断一颗二叉树是不是对称二叉树//////////////////////////////////////////////////////////////////////////////////
//bool isSymmetrical(BinaryTreeNode* pRoot1, BinaryTreeNode* pRoot2);
//bool isSymmetrical(BinaryTreeNode* pRoot){
//    isSymmetrical(pRoot, pRoot);
//}
//bool isSymmetrical(BinaryTreeNode* pRoot1, BinaryTreeNode* pRoot2){
//    if(pRoot1 == nullptr && pRoot2 == nullptr)
//        return true;
//    if(pRoot1 == nullptr || pRoot2 == nullptr)
//        return false;
//    if(pRoot1->m_nValue != pRoot2->m_nValue)
//        return false;
//    return isSymmetrical(pRoot1->m_pLeft, pRoot2->m_pRight) && isSymmetrical(pRoot1->m_pRight, pRoot2->m_pLeft);
//}
//void Test(char* testName, BinaryTreeNode* pRoot, bool expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(isSymmetrical(pRoot) == expected)
//        printf("Passed.\n");
//    else
//        printf("FAILED.\n");
//}
//void Test1()
//{
//    BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNode61 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode62 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode51 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode71 = CreateBinaryTreeNode(7);
//    BinaryTreeNode* pNode72 = CreateBinaryTreeNode(7);
//    BinaryTreeNode* pNode52 = CreateBinaryTreeNode(5);
//
//    ConnectTreeNodes(pNode8, pNode61, pNode62);
//    ConnectTreeNodes(pNode61, pNode51, pNode71);
//    ConnectTreeNodes(pNode62, pNode72, pNode52);
//
//    Test("Test1", pNode8, true);
//
//    DestroyTree(pNode8);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
//////////////////////////////////////////////顺时针从外向里打印矩阵///////////////////////////////////////////////////////////////////////////
//void PrintMatrixInCircle(int** numbers, int columns, int rows, int start);
//void printNumber(int number){
//    cout << number << endl;
//}
//void PrintMatrixClockwisely(int** numbers, int columns, int rows){
//    if(numbers == nullptr || columns <= 0 || rows <= 0 )
//        return;
//    int start = 0;
//    while(columns > start * 2 && rows > start * 2){
//        PrintMatrixInCircle(numbers, columns, rows, start);
//        ++ start;
//    }
//}
//void PrintMatrixInCircle(int** numbers, int columns, int rows, int start){
//    int endX = columns - 1 - start;
//    int endY = rows - 1 -start;
//
//    for(int i = start; i <= endX; ++ i){
//        int number = numbers[start][i];
//        printNumber(number);
//    }
//    if(start < endY){
//        for(int i = start + 1; i <= endY; ++ i){
//            int number = numbers[i][endX];
//            printNumber(number);
//        }
//    }
//    if(start < endX && start < endY){
//        for(int i = endX - 1; i >= start; -- i){
//            int number = numbers[endY][i];
//            printNumber(number);
//        }
//    }
//    if(start < endX && start < endY - 1){
//        for(int i = endY - 1; i >= start + 1; -- i){
//            int number = numbers[i][start];
//            printNumber(number);
//        }
//    }
//}
//void Test(int columns, int rows)
//{
//    printf("Test Begin: %d columns, %d rows.\n", columns, rows);
//
//    if(columns < 1 || rows < 1)
//        return;
//
//    int** numbers = new int*[rows];
//    for(int i = 0; i < rows; ++i)
//    {
//        numbers[i] = new int[columns];
//        for(int j = 0; j < columns; ++j)
//        {
//            numbers[i][j] = i * columns + j + 1;
//        }
//    }
//
//    PrintMatrixClockwisely(numbers, columns, rows);
//    printf("\n");
//
//    for(int i = 0; i < rows; ++i)
//        delete[] (int*)numbers[i];
//
//    delete[] numbers;
//}
//
//int main(int argc, char* argv[]) {
//    /*
//    1
//    */
//    Test(4, 4);
//
//    return 0;
//}
//////////////////////////////////////////////////在栈中找到最小元素的min函数///////////////////////////////////////////////////////////////////////////////
//template <typename T> class StackWithMin{
//public:
//    StackWithMin() {}
//    virtual ~StackWithMin() {}
//    T& top();
//    const T& top() const;
//
//    void push(const T& value);
//    void pop();
//
//    const T& min() const;
//
//    bool empty() const;
//    size_t size() const;
//
//private:
//    std::stack<T> m_data;
//    std::stack<T> m_min;
//};
//template <typename T> void StackWithMin<T>::push(const T& value){
//    m_data.push(value);
//    if(m_min.size() == 0 || value < m_min.top())
//        m_min.push(value);
//    else
//        m_min.push(m_min.top());
//}
//template <typename T> void StackWithMin<T>::pop() {
//    assert(m_data.size() > 0 && m_min.size() > 0);
//
//    m_data.pop();
//    m_min.pop();
//}
//template <typename T> const T& StackWithMin<T>::min() const {
//    assert(m_data.size() > 0 && m_min.size() > 0);
//    return m_min.top();
//}
//template <typename T> T& StackWithMin<T>::top()  {
//    return m_data.top();
//}
//template <typename T> const T& StackWithMin<T>::top() const {
//    return m_data.top();
//}
//template <typename T> bool StackWithMin<T>::empty() const {
//    return m_data.empty();
//}
//template <typename T> size_t StackWithMin<T>::size() const {
//    return m_data.size();
//}
//
//void Test(const char* testName, const StackWithMin<int>& stack, int expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(stack.min() == expected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
//int main(int argc, char* argv[])
//{
//    StackWithMin<int> stack;
//
//    stack.push(3);
//    Test("Test1", stack, 3);
//
//    stack.push(4);
//    Test("Test2", stack, 3);
//
//    stack.push(2);
//    Test("Test3", stack, 2);
//
//    stack.push(3);
//    Test("Test4", stack, 2);
//
//    stack.pop();
//    Test("Test5", stack, 2);
//
//    stack.pop();
//    Test("Test6", stack, 3);
//
//    stack.pop();
//    Test("Test7", stack, 3);
//
//    stack.push(0);
//    Test("Test8", stack, 0);
//
//    return 0;
//}
///////////////////////////////////////////////////栈的压入和弹出////////////////////////////////////////////////////////////////////
//bool IsPopOrder(const int* pPush, const int* pPop, int nLength){
//    bool bPossible = false;
//    if(pPush != nullptr && pPop != nullptr && nLength > 0){
//        const int* pNextPush = pPush;
//        const int* pNextPop = pPop;
//
//        std::stack<int>stackData;
//        while(pNextPop - pPop < nLength){
//            while(stackData.empty() || stackData.top() != *pNextPop){
//                if(pNextPush - pPush == nLength)
//                    break;
//                stackData.push(*pNextPush);
//                pNextPush ++;
//            }
//            if(stackData.top() != *pNextPop)
//                break;
//            stackData.pop();
//            pNextPop ++;
//        }
//        if(stackData.empty() && pNextPop - pPop == nLength)
//            bPossible = true;
//    }
//    return bPossible;
//}
//void Test(const char* testName, const int* pPush, const int* pPop, int nLength, bool expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(IsPopOrder(pPush, pPop, nLength) == expected)
//        printf("Passed.\n");
//    else
//        printf("failed.\n");
//}
//
//void Test1()
//{
//    const int nLength = 5;
//    int push[nLength] = {1, 2, 3, 4, 5};
//    int pop[nLength] = {4, 5, 3, 2, 1};
//
//    Test("Test1", push, pop, nLength, true);
//}
//
//void Test2()
//{
//    const int nLength = 5;
//    int push[nLength] = {1, 2, 3, 4, 5};
//    int pop[nLength] = {3, 5, 4, 2, 1};
//
//    Test("Test2", push, pop, nLength, true);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//
//    return 0;
//}
//////////////////////////////////////////////从上到下打印二叉树///////////////////////////////////////////////////////////////////////////
//void PrintFromTopToBottom(BinaryTreeNode* pTreeRoot){
//    if(!pTreeRoot)
//        return;
//    deque<BinaryTreeNode*>dequeTreeNode;
//    dequeTreeNode.push_back(pTreeRoot);
//    while(dequeTreeNode.size()){
//        BinaryTreeNode* pNode = dequeTreeNode.front();
//        dequeTreeNode.pop_front();
//
//        cout<< pNode->m_nValue << endl;
//
//        if(pNode->m_pLeft)
//            dequeTreeNode.push_back(pNode->m_pLeft);
//        if(pNode->m_pRight)
//            dequeTreeNode.push_back(pNode->m_pRight);
//    }
//}
//void Test(char* testName, BinaryTreeNode* pRoot)
//{
//    if(testName != nullptr)
//        printf("%s begins: \n", testName);
//
//    PrintTree(pRoot);
//
//    printf("The nodes from top to bottom, from left to right are: \n");
//    PrintFromTopToBottom(pRoot);
//
//    printf("\n\n");
//}
//
////            10
////         /      \
////        6        14
////       /\        /\
////      4  8     12  16
//void Test1()
//{
//    BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode14 = CreateBinaryTreeNode(14);
//    BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
//    BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNode12 = CreateBinaryTreeNode(12);
//    BinaryTreeNode* pNode16 = CreateBinaryTreeNode(16);
//
//    ConnectTreeNodes(pNode10, pNode6, pNode14);
//    ConnectTreeNodes(pNode6, pNode4, pNode8);
//    ConnectTreeNodes(pNode14, pNode12, pNode16);
//
//    Test("Test1", pNode10);
//
//    DestroyTree(pNode10);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void Print(BinaryTreeNode* pRoot){
//    if(pRoot == nullptr)
//        return;
//    std::queue<BinaryTreeNode*> nodes;
//    nodes.push(pRoot);
//    int nextLevel = 0;
//    int toBePrinted = 1;
//    while(!nodes.empty()){
//
//        BinaryTreeNode* pNode = nodes.front();
//        cout << pNode->m_nValue << " ";
//        if(pNode->m_pLeft != nullptr){
//            nodes.push(pNode->m_pLeft);
//            ++ nextLevel;
//        }
//        if(pNode->m_pRight != nullptr){
//            nodes.push(pNode->m_pRight);
//            ++ nextLevel;
//        }
//        nodes.pop();
//        -- toBePrinted;
//        if(toBePrinted == 0){
//            cout << endl;
//            toBePrinted = nextLevel;
//            nextLevel = 0;
//        }
//    }
//}
//
//void Test1()
//{
//    BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//    BinaryTreeNode* pNode9 = CreateBinaryTreeNode(9);
//    BinaryTreeNode* pNode11 = CreateBinaryTreeNode(11);
//
//    ConnectTreeNodes(pNode8, pNode6, pNode10);
//    ConnectTreeNodes(pNode6, pNode5, pNode7);
//    ConnectTreeNodes(pNode10, pNode9, pNode11);
//
//    printf("====Test1 Begins: ====\n");
//    printf("Expected Result is:\n");
//    printf("8 \n");
//    printf("6 10 \n");
//    printf("5 7 9 11 \n\n");
//
//    printf("Actual Result is: \n");
//    Print(pNode8);
//    printf("\n");
//
//    DestroyTree(pNode8);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void Print(BinaryTreeNode* pRoot){
//    if(pRoot == nullptr)
//        return;
//    std::stack<BinaryTreeNode*> levels[2];
//    int current = 0;
//    int next = 1;
//
//    levels[current].push(pRoot);
//    while(!levels[0].empty() || !levels[1].empty()){
//        BinaryTreeNode* pNode = levels[current].top();
//        levels[current].pop();
//        cout << pNode->m_nValue << " ";
//        if(current == 0){
//            if(pNode->m_pLeft != nullptr)
//                levels[next].push(pNode->m_pLeft);
//            if(pNode->m_pRight != nullptr)
//                levels[next].push(pNode->m_pRight);
//        }
//        else{
//            if(pNode->m_pRight != nullptr)
//                levels[next].push(pNode->m_pRight);
//            if(pNode->m_pLeft != nullptr)
//                levels[next].push(pNode->m_pLeft);
//        }
//        if(levels[current].empty()){
//            cout << endl;
//            current = 1 - current;
//            next = 1- next;
//        }
//    }
//}
//void Test1()
//{
//    BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
//    BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
//    BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
//    BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
//    BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
//    BinaryTreeNode* pNode9 = CreateBinaryTreeNode(9);
//    BinaryTreeNode* pNode11 = CreateBinaryTreeNode(11);
//
//    ConnectTreeNodes(pNode8, pNode6, pNode10);
//    ConnectTreeNodes(pNode6, pNode5, pNode7);
//    ConnectTreeNodes(pNode10, pNode9, pNode11);
//
//    printf("====Test1 Begins: ====\n");
//    printf("Expected Result is:\n");
//    printf("8 \n");
//    printf("10 6 \n");
//    printf("5 7 9 11 \n\n");
//
//    printf("Actual Result is: \n");
//    Print(pNode8);
//    printf("\n");
//
//    DestroyTree(pNode8);
//}
//int main(int argc, char* argv[])
//{
//    Test1();
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//bool VerifySqueueOfBST(int sequence[], int length){
//    if(sequence == nullptr || length <= 0)
//        return false;
//    int root = sequence[length - 1];
//    int i = 0;
//    for(; i < length - 1; ++ i){
//        if(sequence[i] > root)
//            break;
//    }
//    int j = i;
//    for(; j < length - 1; ++ j){
//        if(sequence[j] < root)
//            return false;
//    }
//    bool left = true;
//    if(i > 0)
//        left = VerifySqueueOfBST(sequence, i);
//    bool right = true;
//    if(i < length - 1)
//        right = VerifySqueueOfBST(sequence + 1, length - i - 1);
//    return(left && right);
//}
//void Test(const char* testName, int sequence[], int length, bool expected)
//{
//    if(testName != nullptr)
//        printf("%s begins: ", testName);
//
//    if(VerifySqueueOfBST(sequence, length) == expected)
//        printf("passed.\n");
//    else
//        printf("failed.\n");
//}
//
////            10
////         /      \
////        6        14
////       /\        /\
////      4  8     12  16
//void Test1()
//{
//    int data[] = {4, 8, 6, 12, 16, 14, 10};
//    Test("Test1", data, sizeof(data)/sizeof(int), true);
//}
//int main(int argc, char* argv[]) {
//    Test1();
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void FindPath(BinaryTreeNode* pRoot, int expectedSum, std::vector<int>& path, int currentSum);
void FindPath(BinaryTreeNode* pRoot, int expectedSum){
    if(pRoot == nullptr)
        return;
    std::vector<int> path;
    int currentSum = 0;
    FindPath(pRoot, expectedSum, path, currentSum);
}
void FindPath(BinaryTreeNode* pRoot,int expectedSum, std::vector<int>& path, int currentSum){
    currentSum += pRoot->m_nValue;
    path.push_back(pRoot->m_nValue);
    bool isLeaf = pRoot->m_pLeft == nullptr && pRoot->m_pRight == nullptr;
    if(currentSum == expectedSum && isLeaf){
        cout << "A Path is found" << endl;
        std::vector<int>::iterator iter = path.begin();
        for(; iter != path.end(); ++ iter)
            cout << *iter << " ";
        cout << endl;
    }
    if(pRoot->m_pLeft != nullptr)
        FindPath(pRoot->m_pLeft, expectedSum, path, currentSum);
    if(pRoot->m_pRight != nullptr)
        FindPath(pRoot->m_pRight, expectedSum, path, currentSum);
    path.pop_back();
}


































