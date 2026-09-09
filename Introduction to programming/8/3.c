#include <stdio.h>

int main()
{
    int otp;
    int correctOTP = 1234;
    int attempts = 0;

    do
    {
        printf("Enter 4-digit OTP: ");
        scanf("%d", &otp);

        attempts++;

        if(otp == correctOTP)
        {
            printf("OTP Verified");
            return 0;
        }

    } while(attempts < 3);

    printf("Maximum attempts reached");

    return 0;
}