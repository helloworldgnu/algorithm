#include <iostream>

#include "../util/util.h"
#include "../util/random_generator.h"
#include "../util/timer.h"

#include "./insertion/InsertionSort.h"
#include "./shell/ShellSort.h"
#include "./merge/MergeSort.h"
#include "./quick/QuickSort.h"

int main(int argc, char *argv[]) 
{
    std::vector<int> vec1 = generateRandomIntVector(0, 1000000, 1000000);
    std::vector<int> vec2 = makeVectorCopy(vec1);
    std::vector<int> vec3 = makeVectorCopy(vec1);
    std::vector<int> vec4 = makeVectorCopy(vec1);
    std::vector<int> vec5 = makeVectorCopy(vec1);

    Timer timer;

    // printVec(vec1);

    // 插入排序
    // timer.start();

    // insertionSort(vec1, 0, vec1.size() - 1);
    
    // timer.stop();
    // timer.printMicroseconds();

    // printVec(vec1);

    // printVec(vec2);

    // 希尔排序
    timer.start();

    shellSort(vec2);
    
    timer.stop();
    timer.printMicroseconds();

    // printVec(vec2);

    // printVec(vec3);

    // 归并排序
    timer.start();

    mergeSort(vec3);
    
    timer.stop();
    timer.printMicroseconds();
    
    // printVec(vec3);

    // 归并排序, 自底向上
    timer.start();

    mergeSortBU(vec4);
    
    timer.stop();
    timer.printMicroseconds();

    // printVec(vec5);

    // 快排, 两路
    timer.start();

    quickSort2(vec5);
    
    timer.stop();
    timer.printMicroseconds();

    // printVec(vec5);

    return EXIT_SUCCESS;
}