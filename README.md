###REPOSITORY NÀY ĐỂ LÀM BÀI TẬP NHÓM KỸ THUẬT LẬP TRÌNH

##NHÓM 2 - KTLT

##Cài đặt GIT 

- GIT là 1 công cụ để đẩy code từ laptop (Window...) của bạn lên github : [**TẢI TẠI ĐÂY**](https://git-scm.com/downloads/win)
                                  laptop (MacOS...) của bạn lên github : [**TẢI TẠI ĐÂY**](https://git-scm.com/downloads/mac)

##GIT

- Sau khi tải GIT xong thì mở `GIT BASH` lên và ghi
``` bash
git config --global user.name "Tên đăng nhập của bạn"
```
  + Ví dụ : git config --global user.name suplongv

---


``` bash
git config --global user.email "email@domain.com"
```
  + Ví dụ : git config --global user.email email@domain.com

---

##Đẩy code từ REPOSITORY này về máy

- Tạo 1 thư mục folder để chứa những code này (**LƯU Ý : PHẢI SỬ DỤNG VSCODE ĐỂ DỄ PUSH CODE LÊN GITHUB**

- Vào __Terminal__ của [__VISUAL STUDIO CODE__](https://code.visualstudio.com/) và gõ lệnh (__LƯU Ý : PHẢI TRONG CÁI THƯ MỤC FOLDER ĐÃ TẠO TRƯỚC ĐÓ MỚI MỞ TERMINAL__)

- THEO THỨ TỰ TÔI ĐÃ ĐỀ RA NHÉ !  
```bash
  git clone https://github.com/suplongv/group-2-ktlt.git

  git init

  git remote add origin https://github.com/suplongv/group-2-ktlt.git

  git branch -M main
```

- Sau khi xong tất cả bước trên thì __CHỈ LÀ BƯỚC ĐƯA CODE VỀ MÁY__

##__TRƯỚC KHI CODE THÌ PHẢI LƯU Ý PULL CODE VỀ MÁY TRƯỚC RỒI MỚI CODE__

```bash
  git pull
```

---

##CODE

- Sau khi code xong phần của mình thì cứ ghi lệnh như sau

``` bash
  git add .

  git commit -m "ĐÂY LÀ NỘI DUNG GHI CHÚ MÌNH ĐÃ VIẾT GÌ TRONG CODE"

  git push
```

- Khi `git push` xong mà nó kêu mình `git push` theo lệnh của nó đề ra thì cứ làm theo nó!

---

HẾT

__CẢM ƠN VÌ ĐÃ ĐỌC ĐẾN ĐÂY ! CHÚC BẠN 1 NGÀY TỐT LÀNH__





