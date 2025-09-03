# Vehicle.cpp – OOP Practice Exercise

## 📌 Bài tập
- `Vehicle.cpp` – quản lý thông tin và hành vi của phương tiện giao thông.

---

## ⚙️ Hướng dẫn build và chạy

### Trên Linux / macOS / WSL:
```bash
g++ Vehicle.cpp -o Vehicle
./Vehicle
```

### Trên Windows (MinGW g++):
```bash
g++ Vehicle.cpp -o Vehicle.exe
Vehicle.exe
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

Bài tập này giúp em củng cố khả năng **thiết kế lớp, thực hành đóng gói dữ liệu**, và xử lý tình huống thực tế khi làm việc với dữ liệu nhập từ người dùng.  

👉 Nếu có thêm thời gian, em muốn cải tiến chương trình bằng cách:  
- Định dạng lại phần hiển thị chi phí cho dễ đọc hơn.  
- Mở rộng hệ thống phân loại phương tiện theo loại nhiên liệu.  
- Bổ sung tính kế thừa để mô phỏng các loại phương tiện chuyên biệt hơn.  
