1. Cách lấy chương trình và chạy chương trình:
  - Chuyển repo này vào tài khoản riêng của bạn 
  -  Sao chép repo đã chia nhỏ vào cục bộ của bạn thông qua lệnh: git clone https://github.com/[YOUR_USERNAME]/advprogram_Painter.git
  -  Máy đã cài đặt các chuong trình SDL2, SDL Image, SDL Mixer, SDL ttf
  -  Nhấp đúp Tetris.exe để chạy chương trình

2. Mô tả chung về trò chơi, ý tưởng chính:
   Đây là 1 tựa game cổ điển, sẽ có 7 loại hình khối sẽ rơi từ từ từ trên xuống. Chúng ta sẽ sử dụng các phím mũi tên trái phải để di chuyển, mũi tên lên để xoay khối, mũi tên xuống để khối rơi nhanh hơn. Chỗ nào có khối rồi thì không di chuyển được tới vị trí đó Khi 1 hàng được lấp đầy bởi những hình khối sẽ tự động xóa đi hàng đó. Trò chơi kết thúc khi khối gạch không rơi xuống được nữa. 
   Ta sẽ sử dụng mảng 2 chiều để tạo sân chơi, dùng mảng 1 chiều kết hợp struct để tạo các hình khối. Sử dụng 1 số hàm trong SDL để tạo các hình ảnh và tạo sự kiện cho bàn phím, chuột.
   
3. Các chức năng chính cài đặt:
  - Tạo menu có thể chọn level dễ đến khó 
  - Tạo các block với màu sắc ngẫu nhiên
  - Xử lý các block khi va chạm với nhau, va chạm với tường và với đáy
  - Di chuyển và xoay các block 90 độ, 180 độ, 270 độ
  - Xóa hàng khi các block lấp đầy hàng ngang
  - Tính điểm 
  - Out khi block không thể rơi xuông nữa
  - Âm thanh nền và âm thanh hiệu ứng 
  
4. Các kĩ thuật lập trình được sử dụng:
  - Mảng
  - Class, struct
  - Con trỏ
  - Đồ họa (Hình ảnh, âm thanh, text, sự kiện chuột và bàn phím)
  - Tách file
  - Cấu trúc rẽ nhánh
  - Vòng lặp
  
5. Kết luận:
  - Chương trình chỉ mới được hoàn thiện về phần logic và phần hình ảnh, âm thanh khi chơi game
  - Chưa có nhiều hiệu ứng bắt mắt -> nên có những hiệu ứng như khi xóa 1 hàng hay khi block rơi xuống và chạm xuống đáy
  - Kết thúc game chưa có phần Play Again hay hiện điểm của người chơi -> hường phát triển : Cần làm thêm nhiều sự lựa chọn như tạm dừng, quay về menu hoạc chơi lại từ đầu 
  - Phần sự kiện chuột vẫn chưa được đẹp
  - Nên tách thành nhiều file cho dễ quản lý và dễ fix hơn
