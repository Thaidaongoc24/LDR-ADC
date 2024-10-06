# Project ESP32 LDR ADC

Project sử dụng cảm biến LDR (Quang trở) với vi điều khiển ESP32 để đo cường độ ánh sáng. Các giá trị đo được sẽ được đọc qua chân ADC (Bộ chuyển đổi tương tự sang số) và vẽ đồ thị theo thời gian thực bằng công cụ Teleplot.

## Tính năng
- Đọc cường độ ánh sáng từ cảm biến LDR.
- Hiển thị giá trị ADC (0-4095) qua cổng UART.
- Vẽ đồ thị cường độ ánh sáng theo thời gian thực bằng Teleplot:
  ![image](https://github.com/user-attachments/assets/efea815f-f42c-4a85-991f-615c8ed826b1)


## Phần cứng
- **ESP32**
- **LDR (Quang trở)**
- **Điện trở 1kΩ**
- **Kết nối dây:**
  - LDR được kết nối giữa 3.3V và chân ADC (GPIO 15).
  - Điện trở 1kΩ nối giữa chân ADC (GPIO 15) và GND.
