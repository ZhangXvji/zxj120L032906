/**
 * @file main.cpp
 * @brief
 * @author Zhang Xvji (2378539553@qq.com)
 * @date 2022-07-24
 *
 * @copyright Copyright (C) 2022, HITCRT_VISION, all rights reserved.
 *
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Author  <th>Description
 * <tr><td>2022-07-24 <td>Zhang Xvji  <td>
 * </table>
 */
#include <iostream>
/**
 * @brief 输入三个数，输出最大的数
 * @param  int oneNumber, twoNumber, threeNumber
 * @author Zhang Xvji
 * @return double maxNumber
 * @mail 2378539553@qq.com
 */
int main() {
    int oneNumber, twoNumber, threeNumber, maxNumber = 0;
    scanf("%d,%d,%d", &oneNumber, &twoNumber, &threeNumber);  //输入格式: 800,1200,1000
    if (oneNumber > maxNumber) {
        maxNumber = oneNumber;
    }
    if (twoNumber > maxNumber) {
        maxNumber = twoNumber;
    }
    if (threeNumber > maxNumber) {
        maxNumber = threeNumber;
    }
    printf("%d\n", maxNumber);
    return 0;
}
// TODO 检测输入非整数，非逗号分隔标准输入
