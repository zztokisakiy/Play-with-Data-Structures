#include <iostream>
#include "ListNode.h"
#include "Solution.h"
#include "Solution2.h"
#include "Solution3.h"
#include "Sum.h"

int main() {
    int nums[] = {1,2,6,4,5,6};
    ListNode<int> *head = new ListNode<int>(nums,6);
    head->print();
    ListNode<int> *res = Solution<int>().removeElements(head,6);
    res->print();
    ListNode<int> *head2 = new ListNode<int>(nums,6);
    head2->print();
    ListNode<int> *res2 = Solution2<int>().removeElements(head,6);
    res2->print();
    ListNode<int> *head3 = new ListNode<int>(nums,6);
    head3->print();
    ListNode<int> *res3 = Solution3<int>().removeElements(head,6);
    res3->print();
    int num[9] = {1,2,3,4,5,6,7,8,9};
    std::cout << "sum: " << Sum<int>().sum(num,9) << std::endl;
    float num1[9] = {1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.1};
    std::cout << "sum: " << Sum<float>().sum(num1,9) << std::endl;
    return 0;
}
