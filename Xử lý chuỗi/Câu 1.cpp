#include <iostream>
#include <string>
#include <conio.h>

void tachHoTen(const std::string& hoTen, std::string& hoLot, std::string& ten) {
	// Tìm vị trí của khoảng trắng cuối cùng trong chuỗi họ tên
	size_t viTriCuoi = hoTen.find_last_of(' ');

	// Nếu tìm thấy khoảng trắng cuối cùng
	if (viTriCuoi != std::string::npos) {
		// Họ lót là phần từ đầu đến vị trí khoảng trắng cuối cùng (không bao gồm khoảng trắng)
		hoLot = hoTen.substr(0, viTriCuoi);

		// Tên là phần từ vị trí khoảng trắng cuối cùng + 1 đến hết chuỗi
		ten = hoTen.substr(viTriCuoi + 1);
	}
	else {
		// Nếu không tìm thấy khoảng trắng, có nghĩa là chỉ có một từ, tức là chỉ có tên
		hoLot = "";
		ten = hoTen;
	}
}

int main() {
	std::string hoTen = "Duong Gia Hieu";
	std::string hoLot, ten;

	tachHoTen(hoTen, hoLot, ten);

	std::cout << "Ho lot: " << hoLot << std::endl;
	std::cout << "Ten: " << ten << std::endl;

	_getch();
	return 0;
}
