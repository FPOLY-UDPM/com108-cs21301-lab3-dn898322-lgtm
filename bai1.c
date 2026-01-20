/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [PS47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <string.h>
#include <stdio.h>

int main(){

    // Khai báo biến
    float diem;
    char hoc_luc[20];
    


    // Nhập dữ liệu
    printf("Nhap diem sinh vien: ");
    scanf("%f", &diem);
    // Xử lý, tính toán VÀ Hiển thị kết quả

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

    return 0;
}
