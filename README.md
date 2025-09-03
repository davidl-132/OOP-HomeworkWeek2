# Vehicle.cpp – OOP Practice Exercise

## 📌 Bài tập
- `vehicle.cpp` – quản lý thông tin và hành vi cơ bản của phương tiện giao thông.  
- `vehicle_premium.cpp` – **phiên bản mở rộng**, bổ sung giao diện menu để quản lý phương tiện trực quan hơn (thêm, hiển thị, tăng tốc, nạp nhiên liệu, bấm còi, so sánh giá, kiểm tra eco-friendly).  

---

## ⚙️ Hướng dẫn build và chạy

### Trên Linux / macOS / WSL:
Ví dụ build file cơ bản:
```bash
g++ vehicle.cpp -o vehicle
./vehicle
```

Ví dụ build file mở rộng:
```bash
g++ vehicle_premium.cpp -o vehicle_premium
./vehicle_premium
```

### Trên Windows (MinGW g++):
```bash
g++ vehicle.cpp -o vehicle.exe
vehicle.exe

g++ vehicle_premium.cpp -o vehicle_premium.exe
vehicle_premium.exe
```

---

## 🤖 Disclosure về AI
- Bài tập được viết bởi **Ly Tran Gia Khang – 24110098**.  
- Có sử dụng **ChatGPT** để tham khảo và chỉnh sửa code.  
- Toàn bộ code đã được hiểu rõ, kiểm thử và cá nhân hóa trước khi nộp.  

---

## 📝 Reflection (Những gì đã học được)

Trong quá trình thực hiện bài tập này, em đã áp dụng kiến thức về **lập trình hướng đối tượng trong C++** để xây dựng lớp `Vehicle` với đầy đủ **thuộc tính, constructor, getter/setter** và các **phương thức mô tả hành vi của phương tiện**.  

Ngoài việc khởi tạo các đối tượng tĩnh, em cũng đã sử dụng **con trỏ** và toán tử **`new`/`delete`** để tạo và giải phóng đối tượng động, qua đó hiểu rõ hơn sự khác biệt giữa **quản lý bộ nhớ tĩnh và động**.  

Một điểm quan trọng em rút ra là việc **xử lý nhập liệu từ người dùng**: nếu không kiểm tra kỹ, chương trình rất dễ bị **crash khi nhập sai kiểu dữ liệu** (ví dụ: nhập chữ cho `maxSpeed`). Nhờ thêm cơ chế kiểm tra và bắt nhập lại, em đã học được cách sử dụng **`cin.clear()` và `cin.ignore()`** để làm sạch bộ nhớ đệm và khôi phục trạng thái của luồng nhập.  

### 🚀 Về phiên bản mở rộng `vehicle_premium.cpp`
- Em đã thiết kế thêm **menu quản lý** để người dùng tương tác trực tiếp với chương trình.  
- Các chức năng bổ sung: thêm phương tiện, hiển thị toàn bộ danh sách, chọn phương tiện để tăng tốc, nạp nhiên liệu, bấm còi, kiểm tra eco-friendly, và so sánh giá giữa hai phương tiện bất kỳ.  
- Nhờ đó, em hiểu rõ hơn cách kết hợp **OOP với cấu trúc dữ liệu (`vector`)** và xử lý menu điều khiển trong chương trình C++.  

### 🌱 Bài học & Hướng phát triển
- Bài tập này giúp em củng cố khả năng **thiết kế lớp, đóng gói dữ liệu**, và làm quen với **tương tác người dùng qua menu**.  
- Nếu có thêm thời gian, em muốn:  
  - Định dạng lại phần hiển thị chi phí cho dễ đọc hơn.  
  - Mở rộng hệ thống phân loại phương tiện theo loại nhiên liệu.  
  - Bổ sung tính kế thừa để mô phỏng các loại phương tiện chuyên biệt hơn.  
  - Tích hợp lưu trữ và đọc dữ liệu từ file để quản lý phương tiện lâu dài.  
