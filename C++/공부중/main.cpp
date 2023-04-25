//프로젝트 생성

int main(){
	//정수 : char(1), short(2), int(4), long(4), long long(8)
	//실수형 : float(4), double(8)
	//단위는 byte

	int i = 0; // +-

	unsigned char c1 = 0; // 0 혹은 양수 (MSB로 음수, 양수 가리를 안함)
	c1 = 255; // 11111111 => 255
	c1 = -1;  // 2의 보수법, 00000001 에서 부호를 반전시킨 후 1을 더한다. => 11111111

	char c2 = 0;
	c2 = 255; // 11111111 => MSB 가 1인, 1111111 => -1

	return 0;
}