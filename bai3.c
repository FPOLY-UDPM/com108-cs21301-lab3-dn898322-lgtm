/******************************************************************************
 * Họ và tên: [nguyễn Tấn Dương]
 * MSSV:      [PS47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    int so_dien;
    float tien_dien;


    // Nhập dữ liệu
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &so_dien);
    // Xử lý, tính toán VÀ Hiển thị kết quả

    if (so_dien <= 50) {
        tien_dien = so_dien * 1000;
    } else if (so_dien <= 100) {
        tien_dien = 50 * 1000 + (so_dien - 50) * 1200;
    } else if (so_dien <= 200) {
        tien_dien = 50 * 1000 + 50 * 1200 + (so_dien - 100) * 1500;
    } else {
        tien_dien = 50 * 1000 + 50 * 1200 + 100 * 1500 + (so_dien - 200) * 250;
    }

    printf("So tien dien phai tra la: %.2f\n", tien_dien);
    return 0;
}
