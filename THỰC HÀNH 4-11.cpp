//Biết cửa hàng có 1 số mẫu mặt hàng có các mã hàng và giá tương ứng như sau :
//H1 - 100k
//H2 - 150k
//H3 - 120k
//H4 - 90k
//H5 - 130k
//H6 - 140k
//Cửa hàng còn có các chương trình khuyến mại :
//(1) Nếu có tổng số lượng 4 món đồ trở lên, được giảm 20k
//(2) Nếu có mã hàng số 6 với số lượng 2 chiếc trở thì đc giảm 30k
//(3) Nếu đơn trên 500k, được giảm 10 %
//(4) Nếu thoả mãn cả(1) và(2) thì sẽ giảm 40k
//(5) Nếu thoả mãn cả(1) cà(3) hoặc(2) và(3) thì giảm 15 %
//(6) Nếu thoả mãn cả(1)(2)(3) thì giảm 20 %
//Viết chương trình nhập số lượng các mặt hàng từ bàn phím,
//và tính ra số tiền phải trả

#include <iostream>
using namespace std;

int main()
{
	int h1, h2, h3, h4, h5, h6;
	cout << "Nhap lan luot so luong 6 mat hang: ";
	cin >> h1 >> h2 >> h3 >> h4 >> h5 >> h6;

	int sum = (h1 + h2 + h3 + h4 + h5 + h6);
	int pay = (h1 * 100 + h2 * 150 + h3 * 120 + h4 * 90 + h5 * 130 + h6 * 140);

	bool Khuyenmai_1 = sum >= 4;
	bool khuyenmai_2 = h6 >= 2;
	bool khuyenmai_3 = pay > 500;

	cout << "So tien phai tra: ";
	if (Khuyenmai_1 && khuyenmai_2 && khuyenmai_3)
		cout << pay - pay * 0.2;
	else if (Khuyenmai_1 && khuyenmai_3 || khuyenmai_2 && khuyenmai_3)
		cout << pay - pay * 0.15;
	else if (Khuyenmai_1 && khuyenmai_2)
		cout << pay - 40;
	else if (khuyenmai_3)
		cout << pay - pay * 0.1;
	else if (khuyenmai_2)
		cout << pay - 30;
	else if (Khuyenmai_1)
		cout << pay - 20;
	else
		cout << pay;
}