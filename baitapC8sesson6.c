#include <stdio.h>
#include <math.h>

int main() {
    double principal, interestRate, totalAmount, interest;
    int months;
    printf("Nhập tiền ban đầu: ");
    scanf("%lf", &principal);
    printf("Nhập lãi suất tháng (%%): ");
    scanf("%lf", &interestRate);
    printf("Nhập số tháng gửi: ");
    scanf("%d", &months);
    totalAmount = principal * pow((1 + interestRate / 100), months);
    interest = totalAmount - principal;
    printf("Tiền lãi: %.3f\n", interest);
    printf("Tiền nhận được: %.3f\n", totalAmount);

    return 0;
}
