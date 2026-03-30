# Khai báo trình biên dịch
CC = gcc
# Các cờ báo lỗi để code chuẩn chỉ hơn (có thể thêm -lm nếu dùng thư viện math.h)
CFLAGS = -Wall -Wextra -g

# Luật biên dịch tự động cho mọi file .c
%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.out