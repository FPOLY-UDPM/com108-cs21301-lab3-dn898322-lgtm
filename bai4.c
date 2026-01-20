/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <string.h>
int main(){
    
    // Khai báo biến
    int choice;
    float a, b, c, delta, x1, x2;
    int so_dien;
    float tien_dien;
    float diem;
    char hoc_luc[20];


    // Nhập dữ liệu
    printf("Chon chuc nang:\n");
    printf("1. Tinh hoc luc\n");
    printf("2. Giai phuong trinh bac 1\n");
    printf("3. Tinh tien dien\n");
    scanf("%d", &choice);

    // Xử lý, tính toán VÀ Hiển thị kết quả

    switch (choice) {
        case 1:
            printf("Nhap diem sinh vien: ");
            scanf("%f", &diem);
            if (diem >= 9) {
                strcpy(hoc_luc, "Xuat sac");
            } else if (diem >= 8) {
                strcpy(hoc_luc, "Gioi");
            } else if (diem >= 6.5) {
                strcpy(hoc_luc, "Kha");
            } else if (diem >= 5) {
                strcpy(hoc_luc, "Trung binh");
            } else if (diem >= 3.5) {
                strcpy(hoc_luc, "Yeu");
            } else {
                strcpy(hoc_luc, "Kem");
            }
            printf("Hoc luc cua sinh vien la: %s\n", hoc_luc);
            break;
        case 2:
            printf("Nhap he so a: ");
            scanf("%f", &a);
            printf("Nhap he so b: ");
            scanf("%f", &b);
            if (a == 0) {
                if (b == 0) {
                    printf("Phuong trinh co vo so nghiem\n");
                } else {
                    printf("Phuong trinh vo nghiem\n");
                }
            } else {
                float x = -b / a;
                printf("Phuong trinh co nghiem x = %.2f\n", x);
            }
            break;
        case 3:
            printf("Nhap so dien tieu thu: ");
            scanf("%d", &so_dien);
            if (so_dien <= 50) {
                tien_dien = so_dien * 1000;
            } else if (so_dien <= 100) {
                tien_dien = 50 * 1000 + (so_dien - 50) * 1200;
            } else if (so_dien <= 200) {
                tien_dien = 50 * 1000 + 50 * 1200 + (so_dien - 100) * 1500;
            } else {
                tien_dien = 50 * 1000 + 50 * 1200 + 100 * 1500 + (so_dien - 200) * 25;
            }
            printf("So tien dien phai tra la: %.2f\n", tien_dien);
        default:
    }
    return 0;   
}
