# ĐỀ BÀI: THUẬT TOÁN NÂNG CAO - 2024

## DUYỆT ĐỒ THỊ

### 1179 - DFS TRÊN ĐỒ THỊ VÔ HƯỚNG

Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào ba số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị, và u là đỉnh xuất phát; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.

 **Ví dụ:**

| Input: | Output: |
|---|---|
| 1  6 9 5  1 2  1 3  2 3  2 4  3 4  3 5  4 5  4 6  5 6 | 5 3 1 2 4 6 |

### 1181 - BFS TRÊN ĐỒ THỊ VÔ HƯỚNG

Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra danh sách các đỉnh được duyệt theo thuật toán BFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 1  6 9 1  1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6 | 1 2 3 5 4 6 |

### 1184 - TÌM ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ CÓ HƯỚNG

Cho đồ thị có hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán DFS.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh, đỉnh u, đỉnh v; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán DFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 1  6 9 1 6  1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4 | 1 2 5 6 |

### 1187 - KIỂM TRA ĐƯỜNG ĐI

Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm 2 số nguyên N, M (1 ≤ N, M ≤ 1000).
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
- Dòng tiếp là số lượng truy vấn Q (1 ≤ Q ≤ 1000).
- Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và y.

**Output:** Với mỗi truy vấn, in ra “YES” nếu có đường đi từ x tới y, in ra “NO” nếu ngược lại.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 1  5 5  1 2  2 3  3 4  1 4  5 6  2  1 5  2 4 | NO  YES |

### 1192 - LIỆT KÊ ĐỈNH TRỤ

Cho đồ thị vô hướng liên thông G= được biểu diễn dưới dạng danh sách cạnh. Sử dụng thuật toán DFS hoặc BFS, hãy đưa ra tất cả các đỉnh trụ của đồ thị?

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra danh sách các đỉnh trụ của mỗi test theo từng dòng.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 1  5 5  1 2 1 3 2 3 2 5 3 4 | 2 3 |

### 1194 - LIỆT KÊ CẠNH CẦU

Cho đồ thị vô hướng liên thông G= được biểu diễn dưới dạng danh sách cạnh. Sử dụng thuật toán DFS hoặc BFS, hãy đưa ra tất cả các cạnh cầu của đồ thị?

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra danh sách các cạch cầu của mỗi test theo từng dòng. In ra đáp án theo thứ tự từ điển, theo dạng “a b …” với a &lt; b.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 1  5 5  1 2 1 3 2 3 2 5 3 4 | 2 5 3 4 |

### 1196 - KIỂM TRA CHU TRÌNH

Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Sử dụng thuật toán DFS hoặc BFS, hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh, số cạnh của đồ thị; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng với đồ thị tồn tại hoặc không tồn tại chu trình.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 1  6 9  1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6 | YES |

## CHƯA PHÂN LOẠI

### 1186 - TÌM ĐƯỜNG ĐI THEO BFS TRÊN ĐỒ THỊ CÓ HƯỚNG

Cho đồ thị có hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh uÎV đến đỉnh vÎV trên đồ thị bằng thuật toán BFS.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh, đỉnh u, đỉnh v; |E| Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
 
**Output:**

- Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán BFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
 
 **Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 1  6 9 1 6  1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4 | 1 2 5 6 |

### S27 - SỐ LỚN NHẤT BẬC K

Cho hai số nguyên N và K, trong đó N không quá 107, K không quá 10.

Số lớn nhất bậc K của N được định nghĩa là giá trị lớn nhất có thể sau khi thực hiện nhiều nhất K lần các chữ số của N. Ví dụ K =3 và N = “1234567” ta số lớn nhất bậc K của N là “7654321”.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số K; dòng tiếp theo là xâu ký tự S.
- T, K, S thỏa mãn ràng buộc: 1≤T≤100; 0≤K≤10; 1≤lengh(S)≤7.
 
**Output:**

- Đưa ra số lớn nhất bậc K của N trên một dòng.
 
 **Ví dụ:**

 | Input | Output |
|---|---|
| 3    4    1234567    3    3435335    2    1034 | 7654321    5543333    4301 |

## ĐỒ THỊ CƠ BẢN VÀ NÂNG CAO

### 1205 - TÔ MÀU ĐỒ THỊ

Một trong những bài toán kinh điển của lý thuyết đồ thị là bài toán Tô màu đồ thị. Bài toán được phát biểu như sau: Cho đồ thị vô hướng G = được biểu diễn dưới dạng danh sách cạnh và số M. Nhiệm vụ của bạn là kiểm tra xem đồ thị có thể tô màu các đỉnh bằng nhiều nhất M màu sao cho hai đỉnh kề nhau đều có màu khác nhau hay không?

![https://media.geeksforgeeks.org/wp-content/uploads/mcolor.png](https://media.geeksforgeeks.org/wp-content/uploads/mcolor.png)

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào ba số V, E, M tương ứng với số đỉnh, số cạnh và số màu; phần thứ hai đưa vào các cạnh của đồ thị.
- T, V, E, M thỏa mãn ràng buộc: 1≤T ≤100; 1≤V≤10; 1≤ E ≤N(N-1), 1≤V≤N.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    4 5 3    1 2  2 3  3 4  4 1  1 3    3 3 2    1 2  2 3  1 3 | YES    NO |

### 1206 - ĐƯỜNG ĐI HAMILTON

Đường đi đơn trên đồ thị có hướng hoặc vô hướng đi qua tất cả các đỉnh của đồ thị mỗi đỉnh đúng một lần được gọi là đường đi Hamilton. Cho đồ thị vô hướng G = , hãy kiểm tra xem đồ thị có đường đi Hamilton hay không?

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số V, E tương ứng với số đỉnh, số cạnh của đồ thị; phần thứ hai đưa vào các cạnh của đồ thị.
- T, V, E thỏa mãn ràng buộc: 1≤T ≤100; 1≤V≤10; 1≤ E ≤15.

**Output:**

- Đưa ra 1 hoặc 0 tương ứng với test có hoặc không có đường đi Hamilton theo từng dòng.

 **Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    4 4    1 2 2 3 3 4 2 4    4 3    1 2 2 3 2 4 | 1  0 |

### 1207 - ĐỒ THỊ HAI PHÍA

Đồ thị hai phía là một đồ thị đặc biệt, trong đó tập các đỉnh có thể được chia thành hai tập không giao nhau thỏa mãn điều kiện không có cạnh nối hai đỉnh bất kỳ thuộc cùng một tập. Cho đồ thị N đỉnh và M cạnh, bạn hãy kiểm tra đồ thị đã cho có phải là một đồ thị hai phía hay không?

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi số nguyên N và M (1 ≤ N, M ≤ 1000).
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.

**Output:**

- Với mỗi test, in ra “YES” nếu đồ thị đã cho là một đồ thị hai phía, in ra “NO” trong trường hợp ngược lại.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 2  5 4  1 5  1 3  2 3  4 5  3 3  1 2  1 3  2 3 | YES  NO |

### 1209 - CHÚ CỪU XA CÁCH

Trên cánh đồng kích thước N x N có K chú cừu. Người nông dân sợ các chú cừu đi lạc nên đã làm một số rào chắn giữa các khu vực. Các chú cừu chỉ có thể di chuyển lên trên, xuống dưới, sang trái, sang phải khu vực bên cạnh, và không thể vượt qua được hàng rào.

Hai chú cừu A và B được gọi là ‘xa cách’ nếu như chúng không thể di chuyển tới vị trí của nhau. Các bạn hãy xác định xem số cặp chú cừu xa cách bằng nhau nhiêu?

**Input:** Dòng đầu tiên gồm 3 số nguyên dương N, K và M (1 ≤ N ≤ 100, K ≤ 100, M ≤ N^2). M dòng tiếp theo, mỗi dòng gồm 4 số nguyên u, v, x, y cho biết có rào chắn ở giữa hai khu vực (u, v) và (x, y) (2 ô này cạnh nhau). K dòng cuối, mỗi dòng chứa 2 số nguyên là tọa độ của mỗi chú cừu.

**Output**: In ra số cặp chú cừu bị xa cách tìm được.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 3 3 3  2 2 2 3  3 3 3 2  3 3 2 3  3 3  2 2  2 3 | 2 |

*Giải thích test: Cặp (3, 1) và (2, 1).*

### 1211 - MẠNG XÃ HỘI

Tý đang xây dựng một mạng xã hội và mời các bạn của mình dùng thử. Bạn của bạn cũng là bạn. Vì vậy, Tý muốn mạng xã hội của mình là hoàn hảo, tức với mọi bộ ba X, Y, Z, nếu X kết bạn với Y, Y kết bạn với Z thì X và Z cũng phải là bạn bè của nhau trên mạng xã hội.

Các bạn hãy xác định xem mạng xã hội hiện tại của Tý có là hoàn hảo hay không? Nếu có hãy in ra “YES”, “NO” trong trường hợp ngược lại.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết u và v là kết bạn với nhau trên mạng xã hội của Tý.

**Output:**

- Với mỗi test, in ra đáp án tìm được trên một dòng.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 3  4 3  1 3  3 4  1 4  4 4  3 1  2 3  3 4  1 2  10 4  4 3  5 10  8 9  1 2 | YES  NO  YES |

### 1534 - KHÁM PHÁ HÀNH TRÌNH

Tốt nghiệp PTIT đúng hạn, Quân quyết định đi khám phá tất cả các thành phố ở đất nước mình. Có N thành phố và M tuyến đường bộ kết nối chúng với nhau. Quân cho rằng một hành trình thật “đẹp” là hành trình đi qua M-2 tuyến đường đúng hai lần, và đi qua 2 tuyến đường còn lại duy nhất một lần.

Quân có thể chọn thành phố xuất phát và kết thúc hành trình là tùy ý. Các bạn hãy tính giúp Quân xem có bao nhiêu cách để lựa chọn một hành trình đẹp? 2 hành trình A và B được coi là khác nhau, nếu như 2 tuyến đường đi qua duy nhất một lần của A và B là khác nhau.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 20).

Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M &lt;= 100 000).

M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa u và v. Dữ liệu đảm bảo các cạnh không trùng nhau. Có thể có cạnh nối u với chính nó, với mỗi đỉnh u có không quá 1 cạnh như vậy.

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

| Input: | Output |
|---|---|
| 3  5 4  1 2  1 3  1 4  1 5  5 3  1 2  2 3  4 5  2 2  1 1  1 2 | 6  0  1 |

Giải thích test 1: Các hành trình thỏa mãn:

2 → 1 → 3 → 1 → 4 → 1 → 5, 2 → 1 → 3 → 1 → 5 → 1 → 4,

2 → 1 → 4 → 1 → 5 → 1 → 3, 3 → 1 → 2 → 1 → 4 → 1 → 5,

3 → 1 → 2 → 1 → 5 → 1 → 4, 4 → 1 → 2 → 1 → 3 → 1 → 5.

### 1535 - ĐẾM SỐ MIỀN CỦA MA TRẬN

Cho ma trận A\[N\]\[M\] bao gồm các số 0 và 1. Ta gọi mỗi miền của ma trận A\[\]\[\] là nhóm các số 1 được bao quanh bởi các số 0. Hãy tìm số miền của ma trận. Ví dụ số miền của ma trận A\[\]\[\] là 4.

Input:

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M là cấp của ma trận A\[\]\[\]; dòng tiếp theo đưa vào N×M số A\[i\]\[j\] ; các số được viết cách nhau một vài khoảng trống.
- T, M, N, A\[i\]\[j\] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N ≤100; 0≤ A\[i\]\[j\] ≤1.

Output:

- Đưa ra kết quả mỗi test theo từng dòng.

| Input: | Output: |
|---|---|
| 2    3 3    1 1 0 0 0 1 1 0 1    4 4    1 1 0 0 0 0 1 0 0 0 0 1 0 1 0 0 | 2  2 |

### 1536 - THAY THẾ O-X

Cho ma trận A\[N\]\[M\] có các phần tử hoặc là ký tự ‘’O’’ hoặc là ký tự ‘’X’’. Hãy thay thế các miền bao quanh ‘O’ bằng ‘X’. Một miền các ký tự ‘O’ bị bao quang bởi ký tự ‘X’ nếu các ký tự ‘X’ xuất hiện ở phía dưới, phía trên, bên trái, bên phải các ký tự ‘O’. Ví dụ với ma trận dưới đây ta sẽ có kết quả như sau:

X X X X X X X X

X O X X X X X X

X O O X X X X X

X O X X X X X X

X X O O X X O O

Input:

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M ; dòng tiếp là N×M các phần tử của ma trận A\[\]\[\]; các phần tử được viết cách nhau một vài khoảng trống.
- T, N, M thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤20.

Output:

- Đưa ra kết quả mỗi test theo từng dòng.

| Input: | Output: |
|---|---|
| 2    1 5    X O X O X     3 3    X X X  X O X  X X X | X O X O X    X X X  X X X  X X X |

### S305 - QUAY LẠI ĐỈNH 1

Cho đồ thị **có hướng** với N đỉnh và M cạnh. Người ta muốn thực hiện hành trình với hai bước di chuyển sau:

\- Bước 1: tìm đường đi từ đỉnh 1 qua các cạnh đến đỉnh 2.

\- Bước 2: từ đỉnh 2 lại đi qua các cạnh nào đó để quay lại đỉnh 1.

Không có cạnh nào được đi qua 2 lần. Hãy tính xem số đỉnh ít nhất cần phải đi qua trong hành trình đó là bao nhiêu.

**Input**

Dòng đầu ghi số bộ test.

Mỗi test bắt đầu với một dòng ghi hai số N, M (1 &lt; N&lt;=20).

Tiếp theo là M dòng ghi các cạnh có hướng. Không có cạnh nào trùng nhau.

**Output**

Với mỗi bộ test, ghi ra số đỉnh tối thiểu cần phải đi qua thỏa mãn yêu cầu đề bài.

**Ví dụ**

 | **Input** | **Ouput** |
|---|---|
| 2  6 7  1 3  3 4  4 5  5 1  4 2  2 6  6 3  9 11  1 3  3 4  4 2  2 5  5 3  3 6  6 1  2 7  7 8  8 9  9 1 | 6  6 |

### S306 - KHÔNG LIÊN THÔNG VỚI ĐỈNH 1

Cho đồ thị vô hướng G có N đỉnh, M cạnh.

Hãy liệt kê các đỉnh không cùng thành phần liên thông với đỉnh 1.

**Input**

Dòng đầu ghi 2 số N và M (0 &lt; N &lt; 300; 1 &lt;= M &lt;= N\*(N-1)/2)).

Tiếp theo là M dòng, mỗi dòng ghi một cạnh của đồ thị. Các cạnh được liệt kê với thứ tự bất kỳ.

**Output**

Ghi ra các đỉnh không liên thông với đỉnh 1 theo thứ tự tăng dần, mỗi dòng ghi một đỉnh. Nếu không có đỉnh nào thì ghi ra số 0.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 6 4  1 3  2 3  1 2  4 5 | 4  5  6 |

## ĐỒ THỊ CÓ TRỌNG SỐ

### 1214 - KRUSKAL

Cho đồ thị vô hướng có trọng số G=. Nhiệm vụ của bạn là hãy xây dựng một cây khung nhỏ nhất của đồ thị bằng thuật toán Kruskal.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số V, E tương ứng với số đỉnh và số cạnh của đồ thị; phần thứ 2 đưa vào E cạnh của đồ thị, mỗi cạnh là một bộ 3: đỉnh đầu, đỉnh cuối và trọng số của cạnh.
- T, S, D thỏa mãn ràng buộc: 1≤T≤100; 1≤V≤100; 1≤E, W≤1000.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    3 3    1 2 5  2 3 3  1 3 1    2 1    1 2 5 | 4    5 |

### 1215 - PRIM

Cho đồ thị vô hướng có trọng số G=. Nhiệm vụ của bạn là hãy xây dựng một cây khung nhỏ nhất của đồ thị bằng thuật toán PRIM.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số V, E tương ứng với số đỉnh và số cạnh của đồ thị; phần thứ 2 đưa vào E cạnh của đồ thị, mỗi cạnh là một bộ 3: đỉnh đầu, đỉnh cuối và trọng số của cạnh.
- T, S, D thỏa mãn ràng buộc: 1≤T≤100; 1≤V≤100; 1≤E, W≤1000.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

 **Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    3 3    1 2 5  2 3 3  1 3 1    2 1    1 2 5 | 4    5 |

### 1216 - CHU TRÌNH ÂM

Cho đồ thị có trọng số G= được biểu diễn dưới dạng danh sách cạnh trọng số âm hoặc dương. Hãy viết chương trình xác định xem đồ thị có chu trình âm hay không.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra 1 hoặc 0 theo từng dòng của mỗi test tương ứng với đồ thị có hoặc không có chu trình âm.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 2  3 3  1 2 -1  2 3 4  3 1 -2  3 3  1 2 -1  2 3 2  3 1 -2 | 0  1 |

### 1217 - DIJKSTRA.

Cho đồ thị có trọng số không âm G= được biểu diễn dưới dạng danh sách cạnh trọng số. Hãy viết chương trình tìm đường đi ngắn nhất từ đỉnh uÎV đến tất cả các đỉnh còn lại trên đồ thị.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai ba số |V|, |E| tương ứng với số đỉnh và uÎV là đỉnh bắt đầu; |E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra kết quả của mỗi test theo từng dòng. Kết quả mỗi test là trọng số đường đi ngắn nhất từ đỉnh u đến các đỉnh còn lại của đồ thị theo thứ tự tăng dần các đỉnh.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 1  9 12 1  1 2 4  1 8 8  2 3 8  2 8 11  3 4 7  3 6 4  3 9 2  4 5 9  4 6 14  5 6 10  6 7 2  6 9 6 | 0 4 12 19 21 11 9 8 14 |

### 1218 - BELLMAN-FORD.

Cho đồ thị có hướng, có trọng số có thể âm hoặc không âm G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết chương trình tìm đường đi ngắn nhất từ đỉnh uÎV đến tất cả các đỉnh còn lại trên đồ thị.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai ba số |V|, |E| tương ứng với số đỉnh và uÎV là đỉnh bắt đầu; |E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

**Output:**

- Đưa ra kết quả của mỗi test theo từng dòng. Kết quả mỗi test là trọng số đường đi ngắn nhất từ đỉnh u đến các đỉnh còn lại của đồ thị theo thứ tự tăng dần các đỉnh. Nếu tồn tại chu trình âm, in ra -1. Nếu không có đường đi ngắn nhất tới đỉnh u, in ra INFI.

 **Ví dụ:**

| **Input:** | **Output:** |
|---|---|
| 2  5 8 1  1 2 -1  1 3 4  2 3 3  2 4 2  2 5 2  4 2 1  4 3 5  5 4 -3  3 3 1  1 2 -1  2 3 2  3 1 -2 | 0 -1 2 -2 1  -1 |

### 1219 - NỐI ĐIỂM

Cho N điểm trên mặt phẳng Oxy. Để vẽ được đoạn thẳng nối A và B sẽ tốn chi phí tương đương với khoảng cách từ A tới B.

Nhiệm vụ của bạn là nối các điểm với nhau, sao cho N điểm đã cho tạo thành 1 thành phần liên thông duy nhất và chi phí để thực hiện là nhỏ nhất có thể.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100).
- N dòng tiếp theo, mỗi dòng gồm 2 số thực x\[i\], y\[i\] là tọa độ của điểm thứ i (|x\[i\]|, |y\[i\]| ≤ 100).

**Output:**

- Với mỗi test, in ra chi phí nhỏ nhất tìm được với độ chính xác 6 chữ số thập phân sau dấu phẩy.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 1  3  1.0 1.0  2.0 2.0  2.0 4.0 | 3.414214 |

### 1220 - ĐƯỜNG ĐI NGẮN NHẤT

Cho đơn đồ thị vô hướng liên thông G = (V, E) gồm N đỉnh và M cạnh, các đỉnh được đánh số từ 1 tới N và các cạnh được đánh số từ 1 tới M.

Có Q truy vấn, mỗi truy vấn yêu cầu bạn tìm đường đi ngắn nhất giữa đỉnh X\[i\] tới Y\[i\].

**Input:**

- Dòng đầu tiên hai số nguyên N và M (1 ≤ N ≤ 100, 1 ≤ M ≤ N\*(N-1)/2).
- M dòng tiếp theo, mỗi dòng gồm 3 số nguyên u, v, c cho biết có cạnh nối giữa đỉnh u và v có độ dài bằng c (1 ≤ c ≤ 1000).
- Tiếp theo là số lượng truy vấn Q (1 ≤ Q ≤ 100 000).
- Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên X\[i\], Y\[i\].

**Output:**

- Với mỗi truy vấn, in ra đáp án là độ dài đường đi ngắn nhất tìm được.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 5 6  1 2 6  1 3 7  2 4 8  3 4 9  3 5 1  4 5 2  3  1 5  2 5  4 3 | 8  10  3 |

### 1221 - ĐẾM ĐƯỜNG ĐI NGẮN NHẤT

Cho đồ thị vô hướng liên thông G = (V, E) gồm N đỉnh và M cạnh, các đỉnh được đánh số từ 1 tới N và các cạnh được đánh số từ 1 tới M.

Nhiệm vụ của bạn là hãy tìm đường đi ngắn nhất từ 1 tới N và đếm xem có bao nhiêu tuyến đường có độ dài ngắn nhất như vậy?

**Input:**

- Dòng đầu ghi số bộ test, không quá 10. Mỗi bộ test gồm: 
    - Dòng đầu tiên hai số nguyên N và M (1 ≤ N ≤ 105, 1 ≤ M ≤ max(N\*(N-1)/2, 106).
    - M dòng tiếp theo, mỗi dòng gồm 3 số nguyên u, v, c cho biết có cạnh nối giữa đỉnh u và v có độ dài bằng c (1 ≤ c ≤ 106).

**Output:**

Với mỗi test, in ra 2 số nguyên là độ dài đường đi ngắn nhất và số lượng đường đi ngắn nhất. Input đảm bảo số lượng đường đi ngắn nhất không vượt quá 1018.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 5 6  1 2 6  1 3 7  2 4 2  3 4 9  3 5 3  4 5 2 | 10 2 |

Có 2 tuyến đường ngắn nhất: 1à 3 à 5 và 1 à 2 à 4 à 5.

### 1222 - DI CHUYỂN TRÊN BẢNG SỐ

Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng A\[i\]\[j\]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất. Tại mỗi ô, bạn được phép đi sang trái, sang phải, đi lên trên và xuống dưới.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A\[i\]\[j\] (0 ≤ A\[i\]\[j\] ≤ 9).

**Output:**

- Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 3  4  5  0 3 1 2 9  7 3 4 9 9  1 7 5 5 3  2 3 4 2 5  1  6  0 1 2 3 4 5  5 5  1 1 1 9 9  9 9 1 9 9  1 1 1 9 9  1 9 9 9 9  1 1 1 1 1 | 24  15  13 |

### 1223 - ĐƯỜNG ĐI TRUNG BÌNH

Cho một đồ thị có hướng gồm N đỉnh và M cạnh. Nhiệm vụ của bạn là hãy tính khoảng cách trung bình ngắn nhất giữa hai nút bất kì nếu như chúng liên thông với nhau. Input đảm bảo rằng trong một nhóm liên thông, nếu như u đi tới được v thì v cũng đi tới được v với mọi cặp u, v.

**Input:**Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N ≤ 100, M ≤ N\*(N-1)/2). M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối đơn hướng từ u tới v.

**Output:** Với mỗi test, in ra đáp án tìm được với độ chính xác 2 chữ số sau dấu phảy.

**Ví dụ:**

| **Input:** | **Output** |
|---|---|
| 2  4 5  1 2  2 4  1 3  3 1  4 3  7 5  1 2  1 4  4 2  2 7  7 1 | 1.83  1.75 |

Giải thích test 1: Ta có

d(1, 2) = 1, d(1, 3) = 1, d(1, 4) = 2; d (2, 1) = 3, d(2, 3) = 2, d(2, 4) = 1;

d(3, 1) = 1, d(3, 2) = 2, d(3, 4) = 3; d(4, 1) = 2, d(4, 2) = 3, d(4, 3) = 1.

Trung bình bằng 22/12 = 1.83

### 1537 - TÌM ĐƯỜNG

Cho một bảng S\[\]\[\] kích thước N x M, bao gồm các ô trống, các vật cản. Ban đầu bạn ở vị trí S. Nhiệm vụ của bạn là hãy di chuyển tới vị trí T, sao cho số lần đổi hướng không quá hai lần.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 20).

Mỗi test bắt đầu bởi hai số nguyên N và M (1 &lt;= N, M &lt;= 500).

N dòng tiếp theo, mỗi dòng gồm M kí tự mô tả bảng S. Trong đó: ‘.’ là một ô trống, ‘\*’ là vật cản, ‘S’ là vị trí xuất phát và ‘T’ là vị trí đích. (Chỉ có một vị trí S và T duy nhất).

**Output:**

Với mỗi test, in ra “YES” nếu tìm được đường đi, ra in “NO” trong trường hợp ngược lại.

**Test ví dụ:**

| Input: | Output |
|---|---|
| 2  5 5  ..S..  \*\*\*\*.  T....  \*\*\*\*.  .....  5 5  S....  \*\*\*\*.  .....  .\*\*\*\*  ..T.. | YES  NO |

### 1538 - HỆ THỐNG GIAO THÔNG

Mạng lưới giao thông ở 1 nước bao gồm N thành phố (đánh số từ 1 đến N) và N-1 đường nối các thành phố với nhau. Có một đường đi duy nhất giữa mỗi cặp thành phố và mỗi con đường có một độ dài xác định.

Nhiệm vụ của bạn là với mỗi K cặp thành phố cho trước, tìm độ dài của con đường ngắn nhất và dài nhất trên đường đi giữa 2 thành phố này.

**Input:**

Dòng đầu tiên chứa số nguyên N (2 ≤ N ≤ 100 000). N-1 dòng tiếp theo chứa 3 số nguyên A, B, C cho biết có một con đường độ dài C giữa thành phố A và thành phố B (1 &lt;= C &lt;= 1000000).

Dòng tiếp theo chứa số nguyên K là số lượng truy vấn (1 ≤ K ≤ 100 000).

K dòng tiếp theo, mỗi dòng gồm 2 số nguyên U và V.

**Output:**

Với mỗi truy vấn, in ra hai số nguyên là độ dài đường đi ngắn nhất và dài nhất tìm được.

**Test ví dụ:**

| Test 1 | Test 2 |
|---|---|
| Input:  5  2 3 100  4 3 200  1 5 150  1 3 50  3  2 4  3 5  1 2  Output:  100 200  50 150  50 100 | Input:  7  3 6 4  1 7 1  1 3 2  1 2 6  2 5 4  2 4 4  5  6 4  7 6  1 2  1 3  3 5  Output:  2 6  1 4  6 6  2 2  2 6 |

### 1539 - HÀNH TRÌNH DU LỊCH

Một đất nước nọ có N thành phố, được đánh dấu từ 1 tới N. Giữa thành phố thứ i và i+1 có một tuyến đường trực tiếp với độ dài bằng W\[i\]. Đi quãng đường có độ dài bằng 1, chiếc xe của bạn tiêu tốn mất 1 lít xăng. Giả sử rằng bình xăng của bạn có thể chứa được nhiều xăng vô kể.

Khi đến thành phố i, bạn sẽ nhận được thêm một lượng xăng bằng G\[i\], như một món quà mà người dân địa phương ở đây dành cho bạn. Nếu bạn muốn thêm xăng, giá bán cho mỗi lít xăng là P\[i\] đồng / 1 lít.

Có Q truy vấn, mỗi truy vấn sẽ là một hành trình đi từ thành phố X\[i\] tới Y\[i\]. Bạn hãy tính lượng tiền ít nhất cần bỏ ra để có thể hoàn thành hành trình này?

Lưu ý: Khi vừa đến 1 thành phố, nếu bạn hết xăng thì vẫn được. Tuy nhiên, khi đang đi mà hết xăng thì không thể đi được nữa.

**Input:**

Dòng đầu tiên gồm 2 số nguyên N và Q (2 ≤ N, Q ≤ 200 000).

Dòng tiếp theo gồm N-1 số nguyên W\[i\] (1 &lt;= W\[i\] &lt;= 10^6).

N dòng tiếp, mỗi dòng gồm 2 số nguyên G\[i\] và P\[i\] (1 &lt;= G\[i\], P\[i\] &lt;= 10^6).

Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên X\[i\], Y\[i\].

**Output:**

Với mỗi truy vấn, in ra một số nguyên là đáp án tìm được.

**Test ví dụ:**

| Input: | Output: |
|---|---|
| 6 4  2 6 1 5 3  3 1  4 2  3 1  1 4  4 6  9 3  2 5  1 6  3 5  4 6 | 6  3  2  16 |

Giải thích test 1: Đi từ thành phố 2 tới thành phố 5.

Tại thành phố 2, bạn được tặng 4 lít xăng, cần phải mua thêm 2 lít xăng nữa (mất 4 đồng) để có đủ 6 lít xăng đi tới thành phố 3.

Tại thành phố 3, bạn được thưởng 3 lít xăng. Giải pháp tối ưu là mua thêm 2 lít xăng tại đây (mất 2 đồng) để có được 5 lít xăng.

Tới thành phố 4, bạn có 4 lít xăng, được thưởng thêm 1 lít xăng nữa, vừa đủ để hoàn thành chuyến đi tới thành phố 5.

Tổng chi phí cho chuyến đi bằng 4 + 2 = 6.

### 1540 - LUỒNG CỰC ĐẠI TRÊN MẠNG

Cho mạng G = (E, V) có N đỉnh và M cạnh, đỉnh phát S và đỉnh thu T. Mỗi cạnh e = (u, v) có khả năng thông qua bằng c(e). Nhiệm vụ của bạn là hãy tìm khả năng thông qua lớn nhất từ đỉnh S tới đỉnh T.

 **Input:**

Dòng đầu tiên chứa số nguyên N và M (2 ≤ N &lt;= 100, 2 &lt;= M ≤ 1000).

M dòng tiếp theo, mỗi dòng gồm 3 số nguyên dương u, v, c cho biết cạnh từ u tới v có khả năng thông qua bằng c (1 &lt;= c &lt;= 100).

**Output:**

In ra một số nguyên là luồng cực đại trên mạng.

**Test ví dụ:**

| Test 1 | Test 2 |
|---|---|
| Input:  6 10 1 6  1 2 16  1 4 13  2 4 10  4 2 4  2 3 12  3 4 9  3 6 20  4 5 14  5 3 7  5 6 4  Output:  23 | Input:  4 5 1 4  1 2 10  1 3 5  2 3 15  2 4 5  3 4 10  Output:  15 |

### 1541 - CHUYẾN TÀU

Ngày khai trương tuyến đường sắt Cát Linh – Hà Đông, đã có rất nhiều người tới mua vé để trải nghiệm. Mỗi chuyến tàu gồm có N ghế, đánh số từ 1 tới N. Có M chiếc vé đã được bán ra. Một số người muốn được trải nghiệm nhiều lần, nên họ đã rất mua nhiều vé.

Do sơ xuất không ghi mốc thời gian trên vé, nên ban quản lý đã phải rất mệt nhọc trong việc sắp xếp ghế ngồi cho các vị khách. Chuyến tàu sẽ chạy tất cả X lượt, để phục vụ tất cả số lượng vé đã bán ra. Một người có 1 vé sẽ được lên một chuyến tàu, và phải đảm bảo rằng không có chuyện hai người phải ngồi chung một ghế.

Nhận thấy rằng có nhiều vị trí ghế còn trống, trong khi có hành khách không được lên chuyến tàu vì vị trí ghế mà họ đặt trùng với cả người khác, ban quản lý đã thuyết phục những người này đổi vé, lấy một vé khác mà vị trí ghế còn trống. Các vị khách rất khó tính, họ chỉ đồng ý đổi vé nếu như vị trí ghế ngồi của vé mới nhỏ hơn chiếc vé hiện tại mà họ đang có.

Ban quản lý muốn sắp xếp một cách tối ưu, sao cho số lượt chuyến tàu chạy là ít nhất. Bạn hãy xác định xem số lượt tàu chạy ít nhất bằng bao nhiêu? Và trong trường hợp sắp xếp tối ưu như vậy, số lượng đổi vé ít nhất bằng bao nhiêu?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 100).

Mỗi test bắt đầu bằng ba số nguyên N, M và C. N là số ghế, M là số vé bán ra, và C là chỉ số hành khách lớn nhất. (1 &lt;= N &lt;= 1000, 2 &lt;= M, C &lt;= 1000).

M dòng tiếp theo, mỗi dòng gồm 2 P\[i\] và B\[i\] (1 &lt;= P\[i\] &lt;= N, 1 &lt;= B\[i\] &lt;= C) cho biết hành khách B\[i\] đã mua vé có vị trí ghế ngồi là P\[i\].

**Output:**

Với mỗi test, in ra 2 số nguyên X, Y, trong đó X là số lượt tàu chạy nhỏ nhất và Y là số lượng đổi vé ít nhất.

**Test ví dụ:**

| Input: | Output |
|---|---|
| 5  2 2 2  2 1  2 2  2 2 2  1 1  1 2  2 2 2  1 1  2 1  1000 1000 4  3 2  2 1  3 3  3 1  3 3 5  3 1  2 2  3 3  2 2  3 1 | 1 1  2 0  2 0  2 1  2 1 |

Giải thích test 1: Cả 2 vị khách cùng mua vé có vị trí ghế ngồi là 2, vì vậy cần bảo một người đổi vé lấy vị trí 1. Chỉ cần 1 chuyến tàu là 2 người có thể đi được.

Giải thích test 2: Cả 2 vị khách cùng mua vé có ghế ngồi là 1, nên không thể bảo ai đổi vé được nữa. Do đó, cần 2 chuyến tàu.

Giải thích test 3: Có 1 vị khách và người này mua 2 vé. Do đó, cần có 2 chuyến tàu.

Giải thích test 4: Ghế 3 có ba người mua (1, 2, 3), ghế 2 có một người mua (1). Một cách tối ưu là bảo người số 2 đổi vé lấy ghế 2. Khi đó, ghế 2 có (1, 2), ghế 3 có (1, 3) và chỉ cần 2 chuyến tàu là đủ.

Giải thích test 5: Phương án tối ưu là người 1 có vị trí ghế 3 yêu cầu đổi xuống ghế 1 (đổi 1 lần).

### 1542 - ĐƯỜNG ĐI TRUNG BÌNH NGẮN NHẤT

Tại đất nước Highland có N thành phố, mỗi cặp thành phố được kết nối với nhau bởi một tuyến đường một chiều duy nhất. Chi phí di chuyển giữa thành phố thứ u tới thành phố v là C\[u\]\[v\].

Bạn cần tìm một hành trình thỏa mãn các yêu cầu:

- Có thể xuất phát ở bất cứ đâu, nhưng kết thúc hành trình phải quay lại điểm xuất phát.
- Phải đi qua ít nhất 2 tuyến đường.
- Chi phí trung bình trên mỗi tuyến đường là nhỏ nhất (Lấy tổng chi phí / số tuyến đường đi qua).

**Input:**

Dòng đầu tiên là số lượng thành phố N (2 &lt;= N &lt;= 500).

N dòng tiếp theo, mỗi dòng gồm N số nguyên cho biết chi phí di chuyển từ thành phố u tới v. C\[u\]\[u\] = 0 và 1 &lt;= C\[u\]\[v\] &lt;= 200.

**Output:**

In ra chi phí trung bình trên mỗi tuyến đường nhỏ nhất tìm được, dưới dạng phân số A/B, trong đó ước chung lớn nhất của A và B bằng 1.

**Test ví dụ:**

| Test 1 | Test 2 |
|---|---|
| Input:  2  0 1  2 0  Output:  3/2 | Input:  3  0 2 6  4 0 2  1 9 0  Output:  5/3 |

### 1543 - XÂY DỰNG THÀNH PHỐ

Đất nước Middleland đang phải kiến thiết lại đất nước sau trận động đất kinh hoàng. Kế hoạch được chính phủ đề ra là phải hoàn thành tất cả các con đường kết nối N thành phố trong M ngày.

Đội ngũ kỹ sư đã lên kế hoạch như sau: ngày thứ i sẽ xây dựng các tuyến đường kết nối các cặp thành phố a và b thỏa mãn gcd(a, b) = M-i+1.

Cho Q truy vấn, mỗi truy vấn có dạng u, v, yêu cầu bạn xác định ngày mà 2 thành phố u và v có thể kết nối được với nhau.

**Input:**

Dòng đầu tiên gồm 3 số nguyên N, M, Q (1 &lt;= N, Q &lt;= 100 000, 1 &lt;= M &lt;= N).

Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên mô tả một truy vấn.

**Output:**

Với mỗi truy vấn, in ra ngày mà hai thành phố được liên thông với nhau.

**Test ví dụ:**

| Test 1 | Test 2 |
|---|---|
| Input:  8 3 3  2 5  3 6  4 8  Output:  3    1    2 | Input:  25 6 1  20 9  Output:  4 |

Giải thích test 1:

Ngày đầu tiên, con đường giữa hai thành phố (3, 6) được xây dựng.

Ngày thứ hai, con đường giữa (2, 4), (2, 6), (2, 8), (4, 6) và (6, 8) được hoàn thiện. Do đó có thể di chuyển giữa thành phố 4 và 8 (qua trung gian là 6).

Ngày cuối cùng, tất cả các con đường lại lại được hoàn thành.

### 1544 - ĐIỂM HẸN

Sau nhiều ngày ở nước ngoài, ngày trở về quê hương Tí rất muốn gặp mặt các bạn cũ của mình. Tại quê nhà, Tí có N người bạn, mỗi bạn lại sống ở một thị trấn khác nhau trong thành phố. Có M tuyến đường kết nối các thị trấn này với nhau. Tí muốn chọn một địa điểm gặp mặt tối ưu (điểm P) trên tuyến đường thứ K, sao cho giá trị lớn nhất độ dài quãng đường cần phải di chuyển của N bạn tới điểm P là nhỏ nhất.

Các bạn hãy giúp Tí tìm điểm P tối ưu nhất.

**Input**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 10).

Mỗi test bắt đầu bởi 3 số nguyên N, M và K (2 &lt;= N, M &lt;= 100 000).

M dòng tiếp theo, mỗi dòng gồm 3 số nguyên u, v, c (c &lt;= 10^9) cho biết có một tuyến đường 2 chiều kết nối thành phố u và v.

Input đảm bảo đơn đồ thị và không có tuyến đường nào tự kết nối thị trấn nào đó.

**Output**

Với mỗi test, in ra hai số thực X và Y với 5 chữ số sau dấu phảy, với X là khoảng cách giữa P và A, còn Y là giá trị lớn nhất của các đường đi ngắn nhất từ P tới các thị trấn 1, 2, …, N.

Thứ tự u, v của mỗi tuyến đường được giữ nguyên. Giả sử điểm P cần tìm kết nối thị trấn A và B. Khoảng cách giữa P và A bằng 8, P và B bằng 2, bạn phải in ra 8.

Nếu có nhiều đáp án, hãy tìm điểm P gần A nhất.

**Test ví dụ:**

| Input | Output |
|---|---|
| 2  2 1 1  1 2 10  4 4 1  1 2 10  2 3 10  3 4 1  4 1 5 | 5.00000 5.00000  2.00000 8.00000 |

Giải thích test 2: Điểm hẹn P nằm giữa thị trấn của hai bạn 1 và 2, cách thị trấn 1 khoảng cách bằng 2.

Khoảng cách bạn 1 phải di chuyển là 2.

Khoảng cách bạn 2 phải di chuyển là 8.

Khoảng cách bạn 3 phải di chuyển là 8.

Khoảng cách bạn 4 phải di chuyển là 7.

## ÔN TẬP CÁC THUẬT TOÁN CƠ BẢN

### 1309 - XÂU NHỊ PHÂN KẾ TIẾP

Cho xâu nhị phân X\[\], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X\[\]. Ví dụ X\[\] =”010101” thì xâu nhị phân tiếp theo của X\[\] là “010110”.

Input:

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
- T, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤103.
 
Output:

- Đưa ra kết quả mỗi test theo từng dòng.
 
 | **Input** | **Output** |
|---|---|
| 2  010101  111111 | 010110  000000 |

### 1310 - TẬP CON KẾ TIẾP

Cho hai số N, K và một tập con K phần tử X\[\] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X\[\]. Ví dụ N=5, K=3, X\[\] ={2, 3, 4} thì tập con tiếp theo của X\[\] là {2, 3, 5}.

Input:

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X\[\] là một tập con K phần tử của 1, 2, .., N.
- T, K, N, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤103.
 
Output:

- Đưa ra kết quả mỗi test theo từng dòng.
 
 | Input | Output |
|---|---|
| 2  5 3  1 4 5  5 3  3 4 5 | 2 3 4  1 2 3 |

### 1311 - HOÁN VỊ KẾ TIẾP

Cho số tự nhiên N và một hoán vị X\[\] của 1, 2, .., N. Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X\[\]. Ví dụ N=5, X\[\] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X\[\] là {1, 2, 3, 5, 4}.

Input:

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X\[\] của 1, 2, .., N.
- T, N, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤103.
 
Output:

- Đưa ra kết quả mỗi test theo từng dòng.
 
 | Input | Output |
|---|---|
| 2  5  1 2 3 4 5  5  5 4 3 2 1 | 1 2 3 5 4  1 2 3 4 5 |

### 1312 - XÂU NHỊ PHÂN TRƯỚC

Cho xâu nhị phân X\[\], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân trước của X\[\]. Ví dụ X\[\] =”111111” thì xâu nhị phân trước của X\[\] là “111110”. Với xâu X\[\] =“000001” thì xâu nhị trước của X\[\] là “000000”. Chú ý: nếu xâu dữ liệu trong input là xâu đầu tiên thì trước nó sẽ là xâu cuối cùng.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
- T, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤103.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  010101  111111 | 010100  111110 |

### 1313 - TẬP CON LIỀN KỀ PHÍA TRƯỚC

Cho hai số N, K và một tập con K phần tử X\[\] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử trước đó của X\[\]. Ví dụ N=5, K=3, X\[\] ={2, 3, 5} thì tập con trước đó của X\[\] là {2, 3, 4}. Chú ý nếu tập con trong input là đầu tiên thì trước đó là tập con cuối cùng.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X\[\] là một tập con K phần tử của 1, 2, .., N.
- T, K, N, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤103.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  5 3  2 3 5  5 3  1 2 3 | 2 3 4  3 4 5 |

### 1314 - PHÂN TÍCH SỐ

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các cách phân tích số tự nhiên N thành tổng các số tự nhiên nhỏ hơn hoặc bằng N. Phép hoán vị của một cách được xem là giống nhau. Ví dụ với N = 5 ta có kết quả là: (5), (4, 1), (3, 2), (3, 1, 1), (2, 2, 1), (2, 1, 1, 1), (1, 1, 1, 1, 1) .

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, n thỏa mãn ràng buộc: 1≤T, N≤10.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  4  5 | (4) (3 1) (2 2) (2 1 1) (1 1 1 1)  (5) (4 1) (3 2) (3 1 1) (2 2 1) (2 1 1 1) (1 1 1 1 1) |

### 1315 - HOÁN VỊ NGƯỢC

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N theo thứ tự ngược. Ví dụ với N = 3 ta có kết quả: 321, 312, 231, 213, 132, 123.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, n thỏa mãn ràng buộc: 1≤T, N≤10.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2  3 | 21 12  321 312 231 213 132 123 |

### 1316 - LIỆT KÊ TẬP CON

Cho một xâu ký tự S không có ký tự lặp lại. Hãy đưa ra tất cả các tập con của xâu ký tự S theo thứ tự tăng dần của các xâu ký tự.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự.
- T, S thỏa mãn ràng buộc: 1≤T≤100; 1≤length(S)≤16.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1    3    abc | a ab abc ac b bc c |

### 1317 - DI CHUYỂN TRONG MÊ CUNG 1

Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A\[N\]\[N\]. Một con chuột đi từ ô đầu tiên góc trái (A\[0\]\[0\]) đến ô cuối cùng góc phải (A\[N-1\]\[N-1\]) theo nguyên tắc:

- Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
- Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
 
Hãy đưa ra một hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A\[N\]\[N\].
- T, N, A\[i\]\[j\] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤10; 0≤A\[i\]\[j\] ≤1.
 
**Output:**

- Đưa ra tất cả đường đi của con chuột trong mê cung theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.
 
 | Input | Output |
|---|---|
| 2  4  1 0 0 0  1 1 0 1  0 1 0 0  1 1 1 1  5  1 0 0 0 0  1 1 1 1 1  1 1 0 0 1  0 1 1 1 1  0 0 0 1 1 | DRDDRR  DDRDRRDR DDRDRRRD DRDDRRDR DRDDRRRD DRRRRDDD |

### 1318 - DI CHUYỂN TRONG MÊ CUNG 2

Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A\[N\]\[N\]. Một con chuột đi từ ô đầu tiên góc trái (A\[0\]\[0\]) đến ô cuối cùng góc phải (A\[N-1\]\[N-1\]) theo nguyên tắc:

- Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
- Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
- Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
- Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
 
Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A\[N\]\[N\].
- T, N, A\[i\]\[j\] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A\[i\]\[j\] ≤1.
 
**Output:**

- Đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.
 
 | Input | Output |
|---|---|
| 3    4    1 0 0 0  1 1 0 1  0 1 0 0  0 1 1 1    4    1 0 0 0  1 1 0 1  1 1 0 0  0 1 1 1  5  1 0 0 0 0  1 1 1 1 1  1 1 1 0 1  0 0 0 0 1  0 0 0 0 1 | DRDDRR  DDRDRR DRDDRR  DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD |

### 1319 - ĐỔI CHỖ CÁC CHỮ SỐ

Cho số tự nhiên K và xâu ký tự các chữ số S. Nhiệm vụ của bạn là đưa ra số lớn nhất bằng cách thực hiện nhiều nhất K lần đổi chỗ các ký tự trong S. Ví dụ K =3 và S = “1234567” ta được “7654321”.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số K; dòng tiếp theo là xâu ký tự S.
- T, K, S thỏa mãn ràng buộc: 1≤T ≤100; 1≤K≤10; 1≤.lenght(S)≤7.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 | Input | Output |
|---|---|
| 3    4    1234567    3    3435335    2    1034 | 7654321    5543333    4301 |

### 1320 - TỔ HỢP SỐ CÓ TỔNG BẰNG X

Cho mảng A\[\] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong mảng A\[\] có tổng bằng X. Các số trong mảng A\[\] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng A\[\] được in ra theo thứ tự không giảm các số. Ví dụ với A\[\] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau:

\[2, 2, 2, 2\], \[2, 2, 4\], \[2, 6\], \[4, 4\], \[8\].

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N và X; dòng tiếp theo đưa vào N số của mmảng A\[\]; các số được viết cách nhau một vài khoảng trống.
- T, N, X, A\[i\] thỏa mãn ràng buộc: 1≤T ≤10; 1≤X, A\[i\]≤100. N ≤ 20.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng. Mỗi đường tổ hợp được bao bởi cặp ký tự \[, \]. Đưa ra -1 nếu không có tổ hợp nào thỏa mãn yêu cầu bài toán.
 
 | Input | Output |
|---|---|
| 1    4 8  2 4 6 8 | \[2 2 2 2\] \[2 2 4\] \[2 6\] \[4 4\] \[8\] |

### 1321 - SẮP XẾP CÔNG VIỆC

Cho hệ gồm N hành động. Mỗi hành động được biểu diễn như một bộ đôi &lt;Si, Fi&gt; tương ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. Hãy tìm phương án thực hiện nhiều nhất các hành động được thực hiện bởi một máy hoặc một người sao cho hệ không xảy ra mâu thuẫn.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số lượng hành động N; dòng tiếp theo đưa vào N số Si tương ứng với thời gian bắt đầu mỗi hành động; dòng cuối cùng đưa vào N số Fi tương ứng với thời gian kết thúc mỗi hành động; các số được viết cách nhau một vài khoảng trống.
- T, N, Si, Fi thỏa mãn ràng buộc: 1≤T≤100; 1≤N, Fi, Si≤1000.
 
**Output:**

- Đưa số lượng lớn nhất các hành động có thể được thực thi bởi một máy hoặc một người.
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 1  6  1 3 0 5 8 5  2 4 6 7 9 9 | 4 |

### 1322 - NỐI DÂY

Cho N sợi dây với độ dài khác nhau được lưu trong mảng A\[\]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A\[i\] và A\[j\].

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào số lượng sợi dây N; dòng tiếp theo đưa vào N số A\[i\] là độ dài của các sợi dây; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤106; 0≤A\[i\]≤106.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 2    4    4 3 2 6    5    4 2 7 6 9 | 29    62 |

### 1323 - SỐ KHỐI LẬP PHƯƠNG

Một số X được gọi là số khối lập phương nếu X là lũy thừa bậc 3 của số Y (X= Y3). Cho số nguyên dương N, nhiệm vụ của bạn là tìm số khối lập phương lớn nhất bằng cách loại bỏ đi các chữ số của N. Ví dụ số 4125 ta có kết quả là 125 = 53.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤1018.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng. Nếu không tìm được đáp án in ra -1.
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 2    4125    976 | 125    -1 |

### 1324 - PHÂN SỐ ĐƠN VỊ

Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2 + 1/6. Cho phân số nguyên dương P/Q bất kỳ (P &lt; Q), hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi tử số P và mẫu số Q của phân số nguyên dương được viết trên một dòng.
- T, P, Q thỏa mãn ràng buộc: 1≤T≤100; 1≤P, Q≤100.
 
**Output:**

- Đưa ra đáp án tìm được trên 1 dòng, theo dạng “1/a + 1/b + …”
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 2  2 3  1 3 | 1/2 + 1/6  1/3 |

### 1325 - GẤP ĐÔI DÃY SỐ

Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:

Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.

Ví dụ với 2 bước biến đổi, ta có \[1\] à \[1 2 1\] à \[1 2 1 3 1 2 1\].

Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).

**Output:**

Với mỗi test, in ra đáp án trên một dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  3 2  4 8 | 2  4 |

Giải thích test 1: Dãy số thu được là \[1, 2, 1, 3, 1, 2, 1\].

Giải thích test 2: Dãy số thu được là \[1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1\].

### 1326 - DÃY XÂU FIBONACI

Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất: *G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1).* Với phép cộng (+) là phép nối hai xâu với nhau. Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.

**Dữ liệu vào:** Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên N và i (1&lt;N&lt;93). Số i đảm bảo trong phạm vi của xâu G(N) và không quá 18 chữ số. **Kết quả:** Ghi ra màn hình kết quả tương ứng với từng bộ test.

 | **Input** | **Output** |
|---|---|
| 2  6 4  8 19 | A  B |

### 1327 - SỐ FIBONACCI THỨ N

Dãy số Fibonacci được xác định bằng công thức như sau:

F\[0\] = 0, F\[1\] = 1;

F\[n\] = F\[n-1\] + F\[n-2\] với mọi n &gt;= 2.

Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...

Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 109+7.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).

Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 109).

**Output:**

Với mỗi test, in ra đáp án trên một dòng.

**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 3  2  6  20 | 1  8  6765 |

### 1328 - LŨY THỪA MA TRẬN

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = AK với K là số nguyên cho trước. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 109+7.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 109) là kích thước của ma trận và số mũ.

**Output:**

Với mỗi test, in ra kết quả của ma trận X.

**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 2  2 5  1 1  1 0  3 1000000000  1 2 3  4 5 6  7 8 9 | 8 5  5 3  597240088 35500972 473761863  781257150 154135232 527013321  965274212 272769492 580264779 |

### CP01002 - TỔNG GIAI THỪA

Cho số nguyên dương N

Viết chương trình tính tổng S = 1 + 1.2 + 1.2.3 + ...+1.2.3...n.

**Dữ liệu vào:**

Chỉ có một dòng ghi số n không quá 20.

**Kết quả:**

Được ghi trên một dòng duy nhất.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3 | 9 |

### CP01006 - DÃY CON LIÊN TIẾP

Cho dãy số A\[\] gồm có N phần tử. Nhiệm vụ của bạn là hãy một dãy con liên tiếp sao cho tổng các phần tử của chúng là lớn nhất.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu.

Dòng tiếp theo gồm N số nguyên A\[i\] (-10^9 ≤ A\[i\] ≤ 10^9).

**Output:**

Với mỗi test, in ra một số nguyên là đáp án của bài toán trên một dòng.

**Ví dụ:**

 | Input: | Output |
|---|---|
| 2  8  -2 -3 4 -1 -2 1 5 -3  5  1 2 3 4 5 | 7  15 |

**Giải thích test 1:**

4 + (-1) + (-2) + 1 + 5 = 7

### CP01007 - SỐ ĐỨNG ĐẦU

Cho dãy số A\[\] gồm có N phần tử. Một phần tử được gọi là số đứng đầu nếu như nó lớn hơn tất cả các phần tử nằm bên phải của nó.

Nhiệm vụ của bạn là hãy tìm các số đứng đầu trong dãy số A\[\] đã cho.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 1000), số lượng phần tử trong dãy số ban đầu.

Dòng tiếp theo gồm N số nguyên A\[i\] (0 ≤ A\[i\] ≤ 10^6).

**Output:**

Với mỗi test, in ra trên một dòng các số tìm được, in ra theo thứ tự giảm dần.

**Ví dụ:**

 | Input: | Output |
|---|---|
| 1  6  16 17 4 3 5 2 | 17 5 2 |

### CP01008 - QUAY VÒNG DÃY SỐ

Cho dãy số A\[\] gồm có N phần tử. Nhiệm vụ của bạn là hãy chuyển D phần tử đầu tiên của dãy A\[\] xuống cuối dãy.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N và D (1≤ N ≤ 1000, 0 ≤ D ≤ N).

Dòng tiếp theo gồm N số nguyên A\[i\] (0 ≤ A\[i\] ≤ 10^6).

**Output:**

Với mỗi test, in ra trên một dòng là dãy số thu được sau khi thực hiện phép quay vòng.

**Ví dụ:**

 | Input: | Output |
|---|---|
| 1  7 2  1 2 3 4 5 6 7 | 3 4 5 6 7 1 2 |

### CP01015 - TÌM SỐ DƯ

Hãy tính giá trị biểu thức:

![Biểu thức](./img/CP01015.png)

**Input:**

Dòng đầu là số lượng bộ test T (T ≤ 100).

Mỗi test gồm một xâu biểu diễn số nguyên n, n có không quá 100 000 kí tự.

**Output:**

Với mỗi test in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 2  4  123456789 | 4  0 |

### CP01016 - ƯỚC SỐ CHUNG LỚN NHẤT (GCD)

Cho dãy số A\[\] nguyên dương có N phần tử. Bạn cần xây dựng dãy số B có N+1 phần tử sao cho gcd(B\[i\], B\[i+1\]) = A\[i\] với mọi i thỏa mãn 1 &lt;= i &lt;= n. Vì có rất nhiều dãy số B\[\] thỏa mãn, nên bạn cần tìm được dãy số có tổng các phần tử là nhỏ nhất.

**Input**

- Dòng đầu tiên là số lượng bộ test T (1 &lt;= T &lt;= 10).
- Mỗi test bắt đầu bằng số nguyên N (2 &lt;= N &lt;= 1000).
- Dòng tiếp theo gồm N số nguyên A\[i\] (1 &lt;= A\[i\] &lt;= 10 000).
 
**Output**

- Với mỗi test in ra dãy số B\[\] trên một dòng.
 
**Test ví dụ:**

 | Input | Output |
|---|---|
| 2  3  1 2 3  3  5 10 5 | 1 2 3 6  5 10 10 5 |

### CP01018 - TRỘN DÃY SỐ

Cho dãy số A có N phần tử và dãy số B có M phần tử, các phần tử của hai dãy số là riêng biệt. Một cách trộn 2 dãy số A và B thành dãy số C mới có M+N phần tử được chấp nhận nếu như dãy A là một dãy con của C và B cũng là một dãy con của C. Nói cách khác, phép trộn chỉ cho phép đan xen các phần tử của 2 dãy số vào với nhau, chứ không được làm thay đổi thứ tự như trong dãy số ban đầu của chúng.

Ví dụ 2 dãy A = \[1, 2, 3\], B = \[4, 5, 6\]. Phép trộn \[1, 4, 2, 3, 5, 6\] là thỏa mãn, trong khi đó \[1, 4, 3, 2, 5, 6\] là không thỏa mãn, do đã đổi vị trí của số 2 và 3.

Cho biết N và M. Các bạn hãy xác định xem có bao nhiêu cách trộn dãy số thỏa mãn? In ra đáp án theo modulo 10^9+7.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm 2 số nguyên N và M (1 ≤ N, M ≤ 100).
 
**Output:**

- Với mỗi test, in ra một số nguyên là đáp án tìm được trên một dòng.
 
**Test ví dụ:**

 | Input | Output |
|---|---|
| 2  2 2  3 2 | 6  10 |

**Giải thích test 1:**

Giả sử dãy số là \[1, 2\] và \[3, 4\]. Có 6 cách trộn 2 dãy đó là:

\[1, 2, 3, 4\], \[1, 3, 2, 4\], \[3, 4, 1, 2\], \[3, 1, 4, 2\], \[1, 3, 4, 2\], \[3, 1, 2, 4\].

### CP01019 - CHỌN BÀI

Có N quân bài trên bàn, mỗi quân bài có gán nhãn A\[i\], có nghĩa là nếu như bạn muốn bốc quân bài này, bạn phải bốc ít nhất A\[i\] quân bài khác trước đó. Giả sử một quân bài có nhãn bằng 3, trong khi trên tay bạn chỉ có 2 quân bài từ 2 lượt bốc trước, bạn không thể bốc quân bài này được.

Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu cách để bốc được N quân bài? 2 cách bốc được coi là khác nhau nếu như tồn tại một lượt mà 2 quân bốc được là khác nhau.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test bắt đầu bằng số nguyên N (1 ≤ N ≤ 50000).
- Dòng tiếp theo gồm N số nguyên A\[i\] (0 ≤ A\[i\] ≤ N).
 
**Output:**

- Với mỗi test, in ra đáp án theo modulo 10^9+7.
 
**Test ví dụ:**

 | Input | Output |
|---|---|
| 3  3  0 0 0  3  0 0 1  3  0 3 3 | 6  4  0 |

Giải thích test 1: 6 hoán vị đều thỏa mãn.

Giải thích test 2: Có 4 cách thỏa mãn là (1, 2, 3), (2, 1, 3), (1, 3, 2), (2, 3, 1).

### CP01020 - LẤY BỚT QUÂN CƠ

Trên bàn có C quân cờ. Có hai đối thủ chơi lần lượt. Mỗi lượt, người chơi sẽ lấy khỏi bàn từ 1 đến M quân cờ. Người thắng cuộc là người lấy được quân cờ cuối cùng.

Biết rằng hai người chơi đều chơi tối ưu. Hãy xác định xem ai là người thắng cuộc?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 1000).

Mỗi test gồm 2 số nguyên C và M (0 &lt;= C &lt;= 1000, 1 &lt;= M &lt;= 1000).

**Output:**

In ra “First” nếu người đi trước là người chiến thắng, in ra “Second” nếu người chơi sau là người chiến thắng.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 4  20 9  1 5  7 5  0 3 | Second  First  First  Second |

### CP01021 - TRỪ DẦN

Cho dãy số A\[\] và dãy số B\[\] có N phần tử. Có hai đối thủ chơi lần lượt. Mỗi lượt chơi, người chơi sẽ chọn số thứ i (A\[i\]) và một số nguyên x thỏa mãn 1 &lt;= x &lt;= B\[i\], sau đó trừ A\[i\] đi x đơn vị.

Khi giá trị A\[i\] = 0 thì không được chọn i nữa.

Người thắng cuộc là có nước đi cuối cùng.

Biết rằng hai người chơi đều chơi tối ưu. Hãy xác định xem ai là người thắng cuộc?

Input:

Dòng đầu tiên là số lượng bộ test T (T &lt;= 1000).

Mỗi test bắt đầu bởi số nguyên N(1 &lt;= N &lt;= 1000).

Dòng tiếp theo gồm N số nguyên A\[i\] (0 &lt;= A\[i\] &lt;= 10^6).

Dòng cuối gồm N số nguyên B\[i\] (1 &lt;= B\[i\] &lt;= 10^6).

Output:

In ra “First” nếu người đi trước là người chiến thắng, in ra “Second” nếu người chơi sau là người chiến thắng.

Test ví dụ:

 | Input: | Output |
|---|---|
| 2  1  20  6  2  8 18  3 5 | First  Second |

### CP01022 - TRÒ CHƠI VỚI CÁC QUÂN BÀI

Có 3 cọc lần lượt chứa a, b, c quân bài. Hai người chơi lần lượt theo quy tắc như sau: mỗi bước, chọn một cọc tùy ý và được phép lấy bớt quân từ cọc này (lấy bao nhiêu cũng được, từ một cho đến toàn bộ quân). Người chiến thắng là người lấy được quân cuối cùng.

Biết rằng hai người chơi đều chơi tối ưu. Hãy xác định xem ai là người thắng cuộc?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 1000).

Mỗi test gồm 3 số nguyên a, b, c (0 &lt;= a, b, c &lt;= 1000).

**Output:**

In ra “First” nếu người đi trước là người chiến thắng, in ra “Second” nếu người chơi sau là người chiến thắng.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 2  5 7 9  4 12 8 | First  Second |

### CP01024 - TUNG XÚC XẮC

Cho một quân xúc xắc có 6 mặt. Giả sử xác suất tung được mặt có điểm số 1 đến 6 đều bằng nhau. Với cặp số nguyên dương n và s, bạn hãy tính xem có bao nhiêu cách tung quân xúc sắc n lần để có số điểm bằng s.

**Input**

- Dòng đầu tiên ghi số bộ test (không quá 100)
- Mỗi bộ test ghi 2 số n và s trên một dòng (1 ≤ n ≤ 20; 1 ≤ s ≤ 120)
- Dữ liệu vào đảm bảo luôn có ít nhất một cách tung xúc xắc thỏa mãn.
 
**Output**

Với mỗi bộ test, ghi ra số cách tính được trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 1  2 5 | 4 |

**Giải thích test:**

Ta có 4 cách là :

\+ Lần 1 được 1, lần 2 được 4

\+ Lần 1 được 2, lần 2 được 3

\+ Lần 1 được 3, lần 2 được 2

\+ Lần 1 được 4, lần 2 được 1

### CP01025 - DI CHUYỂN ROBOT

Một robot xuất phát từ vị trí (0,0) mặt quay về hướng Bắc. Mỗi lần chỉ có một trong 4 lệnh chuyển động là G, L, R, B tương ứng là tiến về phía trước, tiến sang trái, tiến sang phải, lùi lại phía sau một đơn vị.

Cho dãy lệnh chuyển động. Hãy tính xem vị trí cuối cùng của robot là vị trí nào?

**Input**

- Dòng đầu tiên ghi n (n≤100) là số lệnh robot cần thực hiện.
- Dòng thứ hai là dãy n ký tự mô tả dãy lệnh robot thực hiện
 
**Output**

Ghi ra hai số nguyên là tọa độ (x,y) của vị trí cuối cùng robot

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  GLLRB | -1 0 |
| **Input** | **Output** |
| 2  RG | -2 0 |

### CP01026 - DI CHUYỂN TRÊN ĐƯỜNG THẲNG

Xét việc di chuyển từ điểm nguyên này tới điểm nguyên khác trên đường thẳng theo quy tắc sau:

- Bắt đầu từ một điểm có toạ độ nguyên,
- Từ điểm hiện tại tới điểm mới với bước đi không âm, độ dài bằng bước đi trước hoặc khác 1 đơn vị.
 
**Yêu cầu:** Cho 2 số nguyên x và y (0 ≤ x ≤ y ≤ 231). Hãy xác định số bước tối thiểu đi từ x tới y với với bước đi ban đầu và bước đi cuối cùng đều có độ dài 1.

 Ví dụ, với x = 45, y = 40, số bước di chuyển tối thiểu là 4:

45 -&gt; 46 -&gt; 48 -&gt; 49 -&gt; 50

![Ảnh](./img/CP01026.png)

**Input**

Gồm nhiều dòng, mỗi dòng ghi hai số x, y

**Output**

Mỗi dòng ghi kết quả của bộ test tương ứng

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 0 6  14 19  2 5 | 4  4  3 |

### CP01028 - TÍCH NHỎ NHẤT

Bạn được cung cấp 4 số nguyên dương a,b,x,y. Ban đầu a ≥ x và b ≥ y. Bạn có thể thực hiện thao tác dưới đây không quá n lần:

*Chọn a hoặc b và giảm giá trị cúa nó đi 1, tuy nhiên kết quả của thao tác này phải thỏa mãn a ≥ x và b ≥ y.*

Nhiệm vụ của bạn là tìm ra tích nhỏ nhất có thể có của a và b (a.b) bằng cách sử dụng các thao tác trên một cách tối ưu và không quá n lần.

**Input:**

- Đầu vào là chứa một số nguyên T (1≤ T ≤ 2.104) – số trường hợp thử nhiệm.
- T dòng tiếp theo chứa năm số nguyên dương a,b,x,y,n (1 ≤ a,b,x,y,n ≤ 109) .
 
**Output:**

- Với mỗi thử nhiệm hãy in ra một số nguyên: tích nhỏ nhất có thể có của a và b.
 
**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  10 10 8 5 3  12 8 8 7 2  12343 43 4543 39 123212  10 11 2 1 5  10 11 9 1 10 | 70  77  177177  55  10 |

**Giải thích:**

- Test 1: bạn cần giảm b 3 lần và được 10.7 = 70.
- Test 2: bạn cần giảm a và b 1 lần và được 11.7 = 77.
- Test 4: bạn cần giảm a 5 lần và được 5.11 = 55.
- Test 5: bạn cần giảm b đi 10 lần và được 10.1 = 10.

### CP01029 - BỐC BI

Unnie có một hộp bi trong đó có a viên bi màu đỏ, b viên bi màu xanh và c viên bi màu vàng. Unnie đố Oppa có thể nhắm mắt mà lấy ra được k viên bi có cùng màu.

Oppa vừa đi dép lê vừa suy nghĩ nhưng mà không biết phải làm như thế nào. Nhờ các bạn tính giúp xem Oppa cần lấy ít nhất bao nhiêu viên để đảm bảo yêu cầu của Unnie nha.

**Input**

Chứa 4 số nguyên a, b, c, k. (1 ≤ a, b, c ≤ 1000, 1 ≤ k ≤ max(a, b, c))

**Output**

In ra 1 số nguyên là đáp án của bài toán.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2 4 6 3 | 7 |

**Giải thích:** nếu chỉ lấy 6 viên thì sẽ có khả năng là 2 bi xanh + 2 bi đỏ + 2 bi vàng.

### CP02013 - DÃY SỐ ĐỘC ĐẮC

Cho dãy số A\[\] có N phần tử. Một dãy con X chứa các phần tử liên tiếp của A\[\] được gọi là “độc nhất”, nếu như tồn tại một phần tử xuất hiện duy nhất đúng một lần trong X.

Dãy số A\[\] được gọi là “độc đắc” nếu như mọi dãy con liên tiếp có độ dài nhỏ hơn N đều là dãy số độc nhất. Nhiệm vụ của bạn là xác định xem dãy số đã cho có phải là độc đắc hay không?

**Dữ liệu vào:**

Dòng đầu tiên là số lượng bộ test T (không quá 20).

Mỗi test gồm số đầu tiên là số lượng phần tử N (2&lt;=N&lt;=100000)

Dòng tiếp theo gồm N số nguyên không âm A\[i\], có giá trị không vượt quá 109.

**Kết quả:**

Với mỗi test, hãy in ra đáp án tìm được trên một dòng. Nếu dãy số là độc đắc, in ra “YES”. In ra “NO” trong trường hợp ngược lại.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 5  5  1 2 3 4 5  7  1 2 3 4 3 4 1  5  1 1 1 1 1  5  1 2 5 2 1  5  5 5 2 5 5 | YES  NO  NO  YES    NO |

### CP02014 - BIỂU THỨC

Cho dãy số a\[\] gồm có N phần tử. Nhiệm vụ của bạn là xác định nhóm chỉ số 1&lt;=i1&lt;i2&lt;...&lt;i5K&lt;=N sao cho biểu thức dưới đây đạt giá trị lớn nhất.

![Ảnh](./img/CP02014.png)

**Dữ liệu vào:**

Dòng đầu tiên là số lượng bộ test T (không quá 10).

Mỗi test bắt đầu bởi hai số nguyên N và K. (0&lt;=5K&lt;=N&lt;=1000).

Dòng tiếp theo mô tả dãy số (các phần tử không quá 10^9).

**Kết quả:**

Với mỗi test, in ra giá trị lớn nhất của biểu thức S.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  5 1  1 2 3 4 5  6 1  1 2 3 -3 -2 -1 | 15  13 |

### CP02015 - CHIA HẾT

Cho dãy số {a\_1, a\_2, …, a\_n} và m dãy số {b\_1, b\_2, …, b\_n}.

Với mỗi truy vấn, bạn cần trả lời xem tích a\_1\*a\_2\*…\*a\_n có chia hết cho b\_1\*b\_2\*…\*b\_n hay không?

**Input:**

Dòng đầu tiên là hai số nguyên n và m (n, m ≤ 100).

Dòng tiếp theo gồm n số nguyên a\[i\].

M dòng tiếp, mỗi dòng là một truy vấn gồm n số nguyên b\[i\]. Các số có giá trị không vượt quá 10^15.

**Output:**

Dòng đầu tiên in ra số bộ dãy số b\[\] thỏa mãn. Dòng thứ 2 in ra lần lượt bộ dãy số thứ i thỏa mãn yêu cầu.

**Ví dụ:**

 | Input | Output |
|---|---|
| 3 4  7 10 2011  1 3 5  2 2 7  7 2 5  14 1 2011 | 2  3 4 |

### CP02017 - NGÂN HÀNG

Một ngân hàng muốn dành ra N đồng để cho sinh viên vay vốn ưu đãi và có m sinh viên đăng ký, sinh viên thứ i đăng ký vay ti đồng. Ngân hàng muốn đáp ứng được nhiều sinh viên nhất nhưng phải đảm bảo nếu sinh viên thứ i được cho vay thì phải vay đúng ti đồng.

Trong các cách thỏa mãn, ngân hàng muốn chọn cách mà số sinh viên vay ít nhất là lớn nhất.

**Yêu cầu:** Cho t1,t2,…,tm và lần lượt Q giá trị N giả định.

Với mỗi giá trị N, hãy đưa ra cách cho vay thỏa mãn yêu cầu đề bài.

**Input**

Dòng đầu ghi 2 số m và Q (m,Q ≤ 9000).

Dòng thứ 2 ghi m số nguyên dương t1 … tm (0 &lt; ti ≤ 109)

Dòng thứ 3 ghi Q giá trị N giả định (0 &lt; Ni ≤ 1018)

**Output**

Gồm Q dòng, mỗi dòng ghi 2 số s,v lần lượt là số sinh viên được vay vốn và số tiền sinh viên được vay ít nhất ứng với giá trị N giả định.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5 2  1 3 2 3 5  6 8 | 3 1  3 2 |

### CP02023 - ĐẢO DẤU

Cho một mảng a gồm n phần tử và 1 số k, bạn phải thực hiện đúng k phép biến đổi, với mỗi phép biến đổi, bạn phải chọn 1 số a\[i\] và thay thế nó bằng số -a\[i\].

Hãy tìm cách thực hiện k phép biến đổi sao cho tổng các phần tử của mảng a sau khi biến đổi là lớn nhất.

**Input**

Dòng đầu tiên là số n (1 ≤ n ≤ 105) và k (0 ≤ k ≤ 105)

Dòng tiếp theo gồm n số a\[1\], a\[2\], ... a\[n\] ( -105 ≤ a\[i\] ≤ 105)

**Output:**

1 dòng duy nhất là tổng lớn nhất của các phần tử của mảng a sau khi thực hiện phép biến đổi.

**Ví dụ :**

 | **Input** | **Output** |
|---|---|
| 3 1  4 6 2 | 8 |

Giải thích :

Ta sử dụng phép biến đổi với phần tử a\[3\] = 2.

Khi đó mảng trở thành \[4, 6, -2\] , tổng = 8

### CP02024 - GIÁ TRỊ LỚN NHẤT

Cho dãy số A có N phần tử, đánh số từ 1 đến N. Mỗi lần loại một vị trí i ra khỏi dãy (1 &lt; i &lt; N) thì ta sẽ có thêm một giá trị được tính bằng tích của A\[i-1\] \* A\[i+1\]. Sau đó các số còn lại trong dãy lại được đánh số lại từ đầu.

Dễ dàng nhận thấy ta sẽ không thể lấy ra được hai số đầu và cuối dãy nên khi chỉ còn hai số này thì sẽ kết thúc.

Hãy tính tổng giá trị lớn nhất có thể thu được.

**Input**

Dòng đầu tiên ghi số N (3 ≤ N ≤ 100)

Dòng tiếp theo ghi N số của dãy A (1 ≤ A\[i\] ≤ 1000)

**Output**

Ghi ra tổng giá trị lớn nhất có thể đạt được.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 4  1 2 3 4 | 12 |

### CP03001 - MA TRẬN XOẮN ỐC

Ma trận xoắn ốc cấp N là một ma trận vuông cấp N\*N trong đó ghi các số nguyên dương tăng dần từ 1 đến N\*N được điền theo thứ tự xoắn ốc từ ngoài vào trong.

Hãy viết chương trình in ra ma trận xoắn ốc cấp N.

**Input:**

Chỉ có một dòng ghi số N (1 ≤ N ≤ 100)

**Ouput:**

Ghi ra ma trận kết quả có N dòng, mỗi giá trị số cách nhau một khoảng trống.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 5 | 1 2 3 4 5  16 17 18 19 6  15 24 25 20 7  14 23 22 21 8  13 12 11 10 9 |

### CP03005 - MA TRẬN ĐƠN VỊ

Cho ma trận đơn vị A\[\]\[\] (chỉ có các giá trị 0,1) có kích thước *N*x*M*. Nhiệm vụ của bạn là hãy đếm số lượng ma trận đơn vị con của A\[\]\[\] có tổng các phần tử bằng *K* cho trước.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên *N*, *M* và *K (3 ≤ N, M ≤ 1000; 1 ≤ K ≤ 4)* .

*N* dòng tiếp theo, mỗi dòng gồm một xâu có độ dài bằng M, mô tả một hàng của ma trận.

**Output:**

Với mỗi test, in ra số lượng hình chữ nhật có tổng bằng *K* tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  5 5 4  01010  10101  01010  10101  01010  4 4 4  1111  1111  1111  1111 | 21  17 |

### CP03018 - CHIA HẾT

Cho 2 dãy số nguyên dương A\[\]và B\[\] cùng có N phần tử. Hãy kiểm tra xem tích các phần tử của dãy A\[\] có chia hết cho tích các phần tử của dãy B\[\] hay không.

**Input:**

Dòng đầu tiên là hai số nguyên N và M.

Dòng tiếp theo gồm n số nguyên A\[i\].

M dòng tiếp, mỗi dòng là một truy vấn gồm N số nguyên B\[i\].

**Output:**

Dòng đầu tiên in ra số bộ dãy số B\[\] thỏa mãn. Dòng thứ 2 ghi lần lượt thứ tự các dãy số B\[\] thỏa mãn yêu cầu (tính từ 1 đến M).

***Giới hạn:***

(1) Có 50% số test ứng với N, M ≤ 10. Các số A\[i\], B\[i\] có giá trị không vượt quá 106.

(2) Có 50% số test ứng với N, M ≤ 100. Các số A\[i\], B\[i\] có giá trị không vượt quá 1015.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3 4  7 10 2011  1 3 5  2 2 7  7 2 5  14 1 2011 | 2  3 4 |

### CP03019 - TÔ MÀU KHỐI LẬP PHƯƠNG

Bạn có 1 khối lập phương và N loại màu sơn. Cho trước số lượng mỗi loại màu sơn, hãy đếm số cách tô màu lên hình lập phương sao cho mỗi mặt chung một cạnh có màu khác nhau.

Hai cách tô màu được coi là giống hệt nhau nếu một khối có thể xoay ra khối còn lại.

**Input:**

Dòng đầu tiên chứa một số nguyên N (1 ≤ N ≤ 1000), số lượng các loại sơn.

Dòng thứ hai chứa N các giá trị nguyên dương không quá 106, đại diện cho số lượng của mỗi loại màu.

**Output:**

Một dòng duy nhất in ra kết quả của bài.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 8  1 1 1 1 1 1 1 2 | 945 |

### CP03020 - ĐẾM ƯỚC SỐ CỦA C(K,N)

Cho hai số nguyên dương n và k. Hãy đếm số ước số khác nhau của tổ hợp chập k của n phần tử.

**Input:**

Dữ liệu vào gồm nhiều dòng, mỗi dòng ghi hai số nguyên dương n và k (0 ≤ k ≤ n ≤ 431). (chú ý: không có dòng ghi số bộ test, cần tự đọc đến hết các dòng của luồng vào).

**Output:**

Ghi ra kết quả trên một dòng. Dữ liệu vào đảm bảo kết quả không vượt quá 263 – 1.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 5 1  6 3  10 4 | 2  6  16 |

### CP03021 - CHỮ SỐ 0

Cho số nguyên dương N, hãy tìm số nguyên M nhỏ nhất sao cho M! có đúng N chữ số 0 ở cuối.

**Input**

Dòng đầu ghi số bộ test, không quá 105

Mỗi bộ test ghi một số N (1 ≤ N ≤ 1016)

**Output**

Với mỗi bộ test đưa ra trên một dòng giá trị M tính được.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  1  3 | 5  15 |

### CP03022 - SỐ PHẢN NGUYÊN TỐ

Số nguyên dương N được gọi là phản nguyên tố nếu như số lượng ước số của N lớn hơn số lượng ước số của tất cả các số nguyên dương nhỏ hơn N.

Ví dụ các số phản nguyên tố đầu tiên: 1, 2, 4, 6, 12, 24, …

Cho số nguyên dương X, hãy tìm số phản nguyên tố bé nhất không nhỏ hơn X.

**Input:**

Dòng đầu ghi số bộ test T (không quá 106)

Mỗi test ghi số nguyên dương X (1 ≤ X ≤ 107)

**Output:**

Với mỗi test, ghi ra kết quả tính được trên một dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  5 | 6 |

### CP03023 - DÃY SỐ HAMMING

Dãy số nguyên dương tăng dần trong đó ước số nguyên tố lớn nhất của các số trong dãy đều không vượt quá 5 được gọi là dãy số Hamming. Ví dụ 10 = 2x5 thuộc dãy Hamming còn 26 = 2x13 không thuộc dãy Hamming.

Số 1 được coi là số đầu tiên của dãy Hamming.

Cho số nguyên dương N. Hãy xác định xem N có thuộc dãy Hamming hay không và nếu có thì thứ tự của N trong dãy Hamming là bao nhiêu.

**Input:**

Dòng đầu tiên ghi số bộ test (không quá 105).

Mỗi test ghi một số N (1 ≤ N ≤ 1018).

**Output:**

Nếu giá trị N thuộc dãy Hamming thì ghi ra thứ tự của N (tính từ 1).

Nếu không thì ghi ra “Not in sequence”

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 11  1  2  6  7  8  9  10  11  12  13  14 | 1  2  6  Not in sequence  7  8  9  Not in sequence  10  Not in sequence  Not in sequence |

### CP03024 - CHIA HẾT CHO 7

Cho một số nguyên dương N. Mỗi bước bạn thực hiện tính tổng của N với giá trị số đảo ngược của N. Bạn sẽ dừng lại khi gặp giá trị chia hết cho 7 hoặc khi đã thực hiện quá 1000 bước lặp.

Hãy tính giá trị chia hết cho 7 tìm được theo thủ tục trên hoặc ghi ra -1 nếu không thể tìm ra đáp án.

**Input:**

Dòng đầu ghi số bộ test (không quá 1000).

Mỗi test ghi số N (1 ≤ N ≤ 1018)

**Output:**

Ghi ra giá trị chia hết cho 7 đầu tiên tìm được. Hoặc số -1 nếu không thể tìm được đáp án.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 5  1  2  3  4  999999 | 77  77  9447438  77  999999 |

Giải thích test 1: 1 à 2 à 4 à 8 à 16 à 77

### CP03027 - ĐẾM ƯỚC SỐ CỦA BỘI SỐ CHUNG NHỎ NHẤT

Gọi số X là **bội chung nguyên dương nhỏ nhất** của các số nguyên liên tiếp từ 1 đến N. Viết chương trình nhập N và đếm số lượng ước nguyên dương của X.

**Input**

Dòng đầu tiên ghi số bộ test (không quá 50).

Mỗi test ghi số N (1 ≤ N ≤ 105).  
 **Output**

Với mỗi test, ghi ra kết quả trên một dòng, chia dư cho 109 + 7

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  4  6 | 6  12 |

### CP03031 - GHÉP HÌNH CHỮ NHẬT

Cho ba hình chữ nhật. Các bạn được phép xoay hình nhưng không được phép xếp chồng lấn lên nhau, hỏi 3 hình chữ nhật đó có thể ghép thành một hình vuông được hay không

**Input:** Có ba dòng, mỗi dòng ghi hai số nguyên dương là chiều rộng và chiều cao của hình chữ nhật (các số đều không quá 100).

**Output:** Ghi ra YES nếu có thể tạo thành hình vuông, NO nếu không thể.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 8 2  1 6  7 6 | YES |

### CP03032 - DIỆN TÍCH TAM GIÁC - 1

Cho 3 điểm A, B, C trong không gian 2 chiều Oxy, hãy tính diện tích tam giác được tạo bởi 3 điểm đó.

*Công thức Heron tính diện tích tam giác khi biết độ dài 3 cạnh là a,b,c:*

![Ảnh](./img/CP03032.png)

**Input**

- Dòng đầu ghi số bộ test, không quá 10
- Mỗi bộ test ghi trên 1 dòng 6 số thực có giá trị tuyệt đối không quá 1000 lần lượt là tọa độ của 3 điểm A, B, C.
 
**Ouput**

- Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID
- Nếu 3 điểm tạo thành 1 tam giác thì in ra diện tích của tam giác đó, làm tròn đến 2 chữ số phần thập phân.
 
**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  0 0 0 5 0 199  1 1 1 1 1 1  0 0 0 5 5 0 | INVALID  INVALID  12.50 |

### CP03033 - DIỆN TÍCH TAM GIÁC - 2

Cho tam giác ABC và điểm D nằm trên cạnh AB (khác 2 đầu mút). Bạn hãy tìm điểm E nằm trên cạnh AC sao cho diện tích tam giác ABC gấp K lần diện tích tam giác ADE.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm bắt đầu bởi số nguyên K.

Dòng tiếp theo gồm 8 số nguyên mô tả tọa độ các điểm A, B, C, D. Các tọa độ có giá trị tuyệt đối không vượt quá 1000.

**Output:**

Với mỗi test in ra tọa độ điểm E tìm được, với độ chính xác 2 chữ số sau dấu phảy. Nếu không tìm được đáp án, in ra “No solution”.

**Ví dụ:**

 | **Input** | **Output:** |
|---|---|
| 2  4  2 2 0 0 4 0 1 1  2  0 5 0 0 5 0 0 4 | 3.00 1.00  No solution |

### CP03035 - BỐN ĐIỂM TRÊN MẶT PHẲNG

Cho 4 điểm trong không gian 3 chiều. Nhiệm vụ của bạn là kiểm tra xem chúng có cùng nằm trên một mặt phẳng hay không? Nếu có in ra “YES”, in ra “NO” trong trường hợp ngược lại.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10000).

Mỗi test gồm 4 dòng, lần lượt là tọa độ nguyên x\[i\], y\[i\], z\[i\] của các điểm.

(-1000 ≤ x\[i\], y\[i\], z\[i\] ≤ 1000).

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

 | Input: | Output |
|---|---|
| 3  1 2 0  2 3 0  4 0 0  0 0 0  1 1 1  2 2 2  3 3 3  4 4 4  5 6 7  -8 -9 -10  12 19 0  3 1 5 | YES  YES  NO |

### CP03036 - DIỆN TÍCH ĐA GIÁC

Cho một đa giác lồi có N đỉnh trên mặt phẳng Oxy. Nhiệm vụ của bạn là hãy tính diện tích đa giác này.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt đầu bởi số nguyên N (N ≤ 1000).

N dòng tiếp theo, mỗi dòng gồm 2 số nguyên x\[i\], y\[i\] (-1000 ≤ x\[i\], y\[i\] ≤ 1000) là tọa độ của điểm thứ i. Các điểm được liệt kê theo thứ tự ngược chiều quay kim đồng hồ.

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

 | Input: | Output |
|---|---|
| 2  3  0 0  1 0  0 1  4  0 0  2 0  2 2  0 2 | 0.500  4.000 |

### CP04001 - ĐỔI TIỀN

Có n tờ tiền có giá trị t\[1\], t\[2\], …, t\[n\]. Hãy tìm cách trả ít tờ tiền nhất với số tiền đúng bằng S (các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần).

**Input**

Mỗi bộ test gồm 2 số nguyên n và S (n ≤ 30; S ≤ 109).

Dòng thứ hai chứa n số nguyên t\[1\], t\[2\], …, t\[n\] (t\[i\] ≤ 109)

**Output:**

Ghi ra trên một dòng số tờ tiền ít nhất phải trả.

Nếu không thể tìm được kết quả, in ra -1.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3 5  1 4 5 | 1 |

### CP04002 - KÝ TỰ LẶP

Cho một dãy các xâu ký tự chỉ bao gồm các chữ cái in hoa từ A đến Z, trong đó các ký tự trong mỗi xâu đều đã được sắp xếp theo thứ tự từ điển và mỗi chữ cái chỉ xuất hiện nhiều nhất một lần (tức là độ dài xâu tối đa là 26). Nếu một ký tự xuất hiện trong hai xâu liên tiếp thì được coi là một lần lặp. Hãy tìm cách sắp xếp lại thứ tự các xâu sao cho số lần lặp là nhỏ nhất có thể. Ví dụ dưới đây là cùng một dãy xâu nhưng với cách sắp xếp lại thì số lần lặp chỉ còn 2.

ABC  
 ABEF  
 DEF  
 ABCDE  
 FGH

=&gt; Số lần lặp là 6

ABEF  
 DEF  
 ABC  
 FGH  
 ABCDE

=&gt; Số lần lặp là 2.

**Input**

Dòng đầu tiên ghi số N (2 ≤ N ≤ 10) là số xâu ký tự. N dòng tiếp theo, mỗi dòng ghi một xâu.

**Output**

In ra trên một dòng số lần lặp nhỏ nhất có thể.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5    ABC    ABEF    DEF    ABCDE    FGH | 2 |
| 6    BDE    FGH    DEF    ABC    BDE    ABEF | 3 |
| 4    XYZ    XYZ    ABYZ    Z | 4 |

### CP04005 - CHIA ĐỀU

Cho dãy số A có N phần tử và số K. Hãy đếm số cách chia dãy A thành **K nhóm các phần tử liên tiếp** sao cho tổng giá trị của mỗi nhóm đều bằng nhau.

**Input**

Dòng đầu ghi hai số N và K (0 &lt; N ≤ 12; 0 &lt; K &lt; N ).

Dòng thứ 2 ghi N số của dãy A (-10000 ≤ A\[i\] ≤ 10000)

**Output**

In ra số cách thỏa mãn

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3 2  -2 0 -2 | 2 |
| 3 2  1 2 3 | 1 |

### CP04007 - BÀN CỜ

Một bàn cờ có dạng bảng vuông kích thước 4 \* 4, trên đó có một số quân cờ. Một quân cờ chỉ có thể di chuyển sang 1 ô kề cạnh còn trống, mỗi di chuyển như vậy được gọi là 1 bước di chuyển.

Cho hai trạng thái của bàn cờ, hãy chỉ ra một dãy các bước di chuyển để đưa bảng từ trạng thái xuất phát đến trạng thái đích với số phép di chuyển là ít nhất. Mỗi trạng thái được mô tả là một ma trận 4 \* 4 trong đó số ô ở hàng i, cột j là 1 nếu tại vị trí (i,j) tương ứng có quân cờ đang đứng hoặc bằng 0 nếu không có.

**Input**

- Gồm 2 \* 4 dòng thể hiện ma trận mô tả trạng thái xuất phát và trạng thái đích. 4 dòng đầu tiên thể hiện ma trận xuất phát, 4 dòng tiếp theo là ma trận đích.
- Input luôn đảm bảo là có nghiệm.
 
**Output**

- Dòng đầu tiên ghi k là số ít nhất các phép biến đổi tìm được.
- K dòng tiếp, mỗi dòng mô tả 1 phép biến đổi, theo đúng trình tự biến đổi, gồm 4 số nguyên dương u, v, x, y thể hiện di chuyển quân cờ ở vị trí (u, v) sang vị trí (x, y).
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1111  1111  0000  0000  0000  0000  1111  1111 | 16  2 1 3 1  1 1 2 1  2 2 3 2  1 2 2 2  2 3 3 3  1 3 2 3  2 4 3 4  1 4 2 4  3 1 4 1  2 1 3 1  3 2 4 2  2 2 3 2  3 3 4 3  2 3 3 3  3 4 4 4  2 4 3 4 |

### CP04011 - SỐ NHỎ NHẤT

Cho hai số nguyên dương S và D. Hãy tìm số nguyên dương N nhỏ nhất thỏa mãn S là tổng các chữ số của N và D là số các chữ số của N?

Ví dụ với S = 9, D = 2 ta có số nhỏ nhất thỏa mãn S và D là N = 18.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ 2 số S và D được viết trên một dòng.
- T, S, D thỏa mãn ràng buộc: 1≤T≤100; 1≤ S,D≤1000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng. Nếu không có đáp án, in ra -1.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    9 2    20 3 | 18    299 |

### CP04012 - GIÁ TRỊ NHỎ NHẤT CỦA XÂU

Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là số K; phần thứ hai là một xâu ký tự S được viết trên một dòng.
- T, S, K thỏa mãn ràng buộc: 1≤T≤100; 1≤length(S)≤10000; 1≤K≤1000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    2  ABCCBC    2  AAAB | 6    2 |

### CP04013 - TÍCH LỚN NHẤT

Cho dãy số A gồm N phần tử là các số nguyên. Hãy tính tích lớn nhất của **2 hoặc 3** phần tử trong dãy.

**Input**

Dòng đầu tiên ghi số N (3 ≤ N ≤ 10000)

Dòng thứ 2 ghi N số của dãy A (|Ai| ≤ 1000)

**Outpput**

Ghi ra kết quả trên một dòng

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 6  5 10 -2 3 5 2 | 250 |

### CP04015 - DÃY SỐ

Cho dãy số nguyên A\[\] gồm có N phần tử. Nhiệm vụ của bạn là tìm dãy số B\[\] có tổng phần tử nhỏ nhất thỏa mãn tính chất A\[i\] **/** B\[i\] = A\[i+1\] **/** B\[i+1\] với mọi chỉ số i (0 ≤ i ≤ N-2).

Phép chia trong bài toán này là phép chia nguyên (tức là chỉ lấy phần nguyên của kết quả: ví dụ 5/3 = 1).

**Input:**

Dòng đầu tiên là số lượng phần tử N (1 ≤ N ≤ 1000).

Dòng tiếp theo gồm N số nguyên A\[i\] (1 ≤ A\[i\] ≤ 2000).

**Output:**

In ra một số nguyên là tổng các phần tử của dãy số B\[\] tìm được.

**Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 5  18 27 16 22 6 | 25 |

*Giải thích test: Dãy B\[\] tìm được là 5, 7, 5, 6, 2.*

### CP04018 - XẾP NHÓM

Có N quốc gia, mỗi quốc gia có dân số xác định. Hãy xác định có thể xếp được tối đa bao nhiêu nhóm có đúng k thành viên mà các thành viên từ các nước khác nhau.

**Input:**

Gồm nhiều test (không quá 20), mỗi test có định dạng như sau:

Dòng đầu tiên chứa số nguyên N và k(1 ≤ k ≤ N ≤ 105):

Dòng tiếp theo chứa N số nguyên không âm là dân số từng nước, các giá trị này không vượt quá 1012

**Ouput**

Với mỗi test, in ra 1 số nguyên là đáp án của bài toán.

**Ví dụ:**

 | **INPUT** | **OUTPUT** |
|---|---|
| 5  5 4  4 4 4 4 4  6 5  1 2 3 4 5 6  2 2  1000000000000 1000000000000  17 7  96 17 32 138 112 50 7 19 412 23 14 50 47 343 427 22 39  50 10  638074479 717901019 910893151 924124222 991874870 919392444 729973192 607898881 838529741 907090878 632877562 678638852 749258866 949661738 784641190 815740520 689809286 711327114 658017649 636727234 871088534 964608547 867960437 964911023 642411618 868318236 793328473 849540177 960039699 998262224 775720601 634685437 743766982 826321850 846671921 712570181 676890302 814283264 958273130 899003369 909973864 921987721 978601888 633027021 896400011 725078407 662183572 629843174 617774786 695823011 | 5  3  1000000000000  166  3983180234 |

### CP04024 - ĐẦU TƯ BITCOIN

Xu hướng đầu tư bitcoin kiếm lời đang lan rộng. Thay vì hướng dẫn cách chơi, Học viện Hoàng Gia lại ra đề bài để thử thách khả năng tính toán tối ưu của sinh viên.

Biết trước giá bitcoin trong N ngày, và giả sử đang có 1 coin. Hãy tính toán lợi nhuận lớn nhất có thể thu được nếu bán đồng coin đó vào một ngày nào đó, sau đó mua lại chính đồng coin đó trong một ngày nào đó sau đó.

Chú ý: không được vừa mua vừa bán trong 1 ngày. Và chỉ mua bán một lần duy nhất.

**Input**

Dòng 1 ghi số N.

Dòng tiếp theo ghi N số nguyên dương lần lượt là giá của đồng bitcoin trong N ngày (các giá trị không quá 100).

**Output**

Ghi ra giá trị lợi nhuận lớn nhất.

Hoặc nếu không thể có lợi nhuận thì ghi ra **“Lo nang roi!”**

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  1 3 2 | 1 |

**Ràng buộc:**

*40% test tương ứng với 1 ≤ N ≤ 1000*

*60% test tương ứng với 1 ≤ N ≤ 100000*

### CP04027 - TRÒ CHƠI

Tí đang chơi một trò chơi với N quân bài, mỗi quân bài được đánh dấu bằng một số nguyên a\[i\]. Mỗi lượt chơi, Tí chọn ngẫu nhiên 2 quân bài X và Y kề nhau, loại bỏ chúng rồi thay bằng một quân bài mới có giá trị bằng tổng của 2 quân bài đã chọn. Số điểm mà Tí nhận được thêm là X+Y.

Trò chơi sẽ kết thúc sau N-1 lượt. Các bạn hãy xác định xem số điểm trung bình mà Tí nhận được bằng bao nhiêu?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi số nguyên dương N (2 ≤ N ≤ 2000).

Dòng tiếp theo gồm N số nguyên a\[i\] (1 ≤ a\[i\] ≤ 10^9).

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng với độ chính xác 6 chữ số sau dấu phảy.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 2  3  2 1 8  5  10 3 70 2 21 | 17.000000  288.750000 |

Giải thích test 1:

Nếu Tí chọn (2, 1) sẽ thu được (3, 8) và có 3 điểm đầu tiên. Bước 2 sẽ có được 11 điểm. Tổng cộng Tí có 14 điểm.

Nếu Tí chọn (1, 8) sẽ thu được (2, 9) và có 9 điểm. Sau bước 2 cũng sẽ thu được thêm 11 điểm. Tổng cộng Tí có 20 điểm.

Vậy trung bình Tí sẽ nhận được (14+20)/2 = 17 điểm.

### CP04030 - TÔ MÀU

Cho một bảng hình vuông kích thước N x N. Có tất cả N^2 màu bạn có thể dùng để vẽ.

Do bút tô màu rất đặc biệt, mỗi lượt tô, bạn sẽ tô màu cả một vùng theo hình chữ nhật. Khi tô một màu mới lên một ô đã được tô màu, màu cũ sẽ bị che phủ hoàn toàn. Ví dụ bạn có thể tô màu bảng với 3 màu như sau. Đầu tiên tô một hình vuông với màu 2.

2 2 2 0

2 2 2 0

2 2 2 0

0 0 0 0

Sau đó tô một hình chữ nhật màu 5:

2 2 2 0

2 5 5 5

2 5 5 5

0 0 0 0

Cuối cùng tô một hình chữ nhật nhỏ màu 3:

2 2 3 0

2 5 3 5

2 5 5 5

0 0 0 0

Ở phòng tập vẽ, có rất nhiều bức tranh đã được các bạn khác hoàn thiện. Nhiệm vụ của bạn là hãy xác định xem với một bức tranh, có bao nhiêu màu mà tác giả có thể đã sử dụng nó để vẽ đầu tiên?

**Input**

Dòng đầu tiên chứa số nguyên dương N (1 ≤ N ≤ 1000).

N dòng tiếp theo, mỗi dòng gồm N số, mô tả trạng thái cuối cùng của bảng màu.

**Output**

In ra số lượng màu có thể được sử dụng đầu tiên.

 | **Input:** | **Output** |
|---|---|
| 4  2 2 3 0  2 5 3 5  2 5 5 5  0 0 0 0 | 14 |

Trong ví dụ trên, ta có thể tô màu X nào đó vào trong các ô đã tô màu (X khác 2, 3, 5). Sau đó tô màu 2, tiếp tục màu 5 và cuối cùng màu 3. Tổng cộng có tất cả 14 màu có thể tô đầu tiên.

### CP04036 - ĐƯỜNG ĐI TRUNG BÌNH NGẮN NHẤT TRÊN CÂY

Cho một cây có N đỉnh, mỗi đỉnh có trọng số lần lượt bằng T\[i\]. Một đường đi từ nút gốc tới nút lá có giá trị bằng tổng trọng số các đỉnh mà nó đi qua.

Xuất phát từ nút gốc, xác suất để đi tới một nút kề cạnh nó mà chưa được thăm là bằng nhau. Ví dụ nút gốc có 5 nút con, thì xác suất đi theo mỗi con đường bằng 0.2. Như vậy, xác suất để chọn làm đích đối với mỗi nút lá là khác nhau.

Gọi EX là kì vọng của giá trị đường đi từ nút gốc tới một nút lá. Bạn hãy chọn một đỉnh làm nút gốc, sao cho giá trị EX là nhỏ nhất?

**Input:**

Dòng đầu tiên là số nguyên N (1 ≤ N ≤ 100 000).

Dòng tiếp theo gồm N số nguyên T\[i\] (1 ≤ T\[i\] ≤ 1 000 000).

N-1 dòng tiếp, mỗi dòng gồm 2 số u, v cho biết có cạnh nối giữa u và v.

**Output:**

In ra một số nguyên là đáp án của bài toán. Input đảm bảo có một đáp án duy nhất.

**Ví dụ:**

 | **Test 1** | **Test 2** |
|---|---|
| Input:  5  2 2 1 2 2  1 2  2 3  3 4  4 5  Output:  3 | Input:  5  5 7 14 14 19  2 3  4 5  4 1  1 3  Output:  1 |

Cây có dạng: 1 à 2 à 3 à 4 à 5.

Root = 1, 1à 5 giá trị bằng 9, trung bình bằng 9.

Root = 2, 2à 1 giá trị bằng 4, 2 à 5 giá trị bằng 7, trung bình bằng 5.5.

Root = 3, 3à 1 giá trị bằng 5, 3 à 5 giá trị bằng 5, trung bình bằng 5, là nhỏ nhất.

### CP04037 - THÀNH PHỐ TRỌNG ĐIỂM

Đất nước X gồm có N thành phố được kết nối với nhau bởi N-1 tuyến đường. Hệ thống giao thông đảm bảo rằng giữa 2 thành phố bất kì luôn có đường đi tới nhau. Gọi d(u,v) là khoảng cách tuyến đường giữa 2 thành phố u và v. Mỗi đợt, đất nước X nâng cấp một tuyến đường, và khoảng cách giữa 2 thành phố sẽ được thu hẹp lại.

Đất nước X muốn chọn ra 3 thành phố để làm trung tâm và phát triển trọng điểm. Chi phí cần để nâng cấp 3 thành phố c1, c2, c3 nên làm trọng điểm bằng d(c1, c2) + d(c2, c3) + d(c3, c1). Dù vẫn chỉ là kế hoạch, chưa có 3 thành phố chính thức nào được chọn, nhưng mỗi năm chính phủ đất nước X vẫn tính toán xem chi phí trung bình để xây dựng 3 thành phố trọng điểm là bao nhiêu bằng cách chọn ngẫu nhiên các thành phố. Các bạn hãy tính thử xem giá trị này bằng bao nhiêu?

**Input:**

Dòng đầu tiên là số nguyên N (3 ≤ N ≤ 100 000).

N-1 dòng tiếp, mỗi dòng gồm 3 số u\[i\], v\[i\], c\[i\] cho biết đường đi giữa thành phố u\[i\] và v\[i\] ban đầu có độ dài bằng c\[i\] (1 ≤ c\[i\] ≤ 1000).

Dòng tiếp theo là số nguyên Q (1 ≤ Q ≤ 100 000), là số đợt nâng cấp đường.

Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và w cho biết tuyến đường thứ x được nâng cấp, và độ dài quãng đường giảm xuống còn w (1 ≤ w ≤ 1000).

**Output:**

Sau mỗi đợt nâng cấp đường, hãy in ra chi phí trung bình để xây dựng 3 thành phố trọng điểm, với độ chính xác 6 chữ số sau dấu phảy.

**Ví dụ:**

 | **Test 1** | **Test 2** |
|---|---|
| Input:  3  2 3 5  1 3 3  5  1 4  2 2  1 2  2 1  1 1  **Output:**  14.000000  12.000000  8.000000  6.000000  4.000000 | Input:  6  1 5 3  5 3 2  6 1 7  1 4 4  5 2 3  5  1 2  2 1  3 5  4 1  5 2  **Output:**  19.600000  18.600000  16.600000  13.600000  12.600000 |

Giải thích test 1:

Có 3 thành phố, vậy chi phí sẽ bằng d(1, 2) + d(2, 3) + d(3, 1). Sau khi nâng cấp, d(2, 3) = 4, vậy chi phí sau đợt nâng cấp đầu tiên là 7+4+3 = 14.

### CP04038 - CÂY NHỊ PHÂN TÌM KIẾM

Cây nhị phân tìm kiếm là một cấu trúc dữ liệu dạng cây, trong đó mỗi nút được gán một giá trị và có nhiều nhất hai nút con. Giá trị của mỗi nút luôn lớn hơn giá trị của nút con trái và nhỏ hơn giá trị của nút con phải. Nút không có nút con được gọi là nút lá. Độ cao của cây được định nghĩa là số nút trên đường đi đơn từ nút gốc tới nút lá xa nhất.

Hãy đếm số lượng các cây nhị phân tìm kiếm khác nhau thoả mãn các điều kiện sau:

- Cây gồm N nút.
- Giá trị các nút là các số nguyên dương không vượt quá M (N ≤ M).
- Giá trị các nút là phân biệt.
- Độ cao của cây không nhỏ hơn H (H ≤ N).
 
### Input

Dòng đầu tiên gồm 1 số nguyên T là số lượng bộ test.

T dòng tiếp theo, mỗi dòng gồm 3 số nguyên N, M, H (1 ≤ H ≤ N ≤ 80, N ≤ M ≤ 160).

### Output

Với mỗi bộ test, in ra kết quả là số cây nhị phân tìm kiếm thoả mãn điều kiện, tinh theo modulo 1012 + 9.

### Ví dụ

 | **Input** | **Output** |
|---|---|
| 2  2 3 2  3 3 2 | 6  5 |

**Giải thích**

Các trường hợp thoả mãn của test thứ 2:

![Ảnh](./img/CP04038.jpg)

### CP04041 - SỐ T

Cho một dãy số T gồm N phần tử T1, T2, … , TN phân biệt. Một số nguyên dương được gọi là số T nếu tổng các chữ số của nó chia hết cho một trong N số Ti. Hãy đếm số lượng các số T phân biệt trong đoạn \[L, R\].

**Input**

Dòng đầu tiên gồm một số nguyên dương Q (1 ≤ Q ≤ 20) là số lượng truy vấn.

Mỗi truy vấn có dạng như sau:

Dòng đầu tiên gồm 2 số nguyên L, R (1 ≤ L ≤ R ≤ 1018).

Dòng thứ hai gồm 1 số nguyên N (1 ≤ N ≤ 10).

Dòng thứ 3 gồm N số nguyên T1, T2, … , TN (1 ≤ Ti ≤ 50). Các giá trị của Ti phân biệt.

**Output**

Với mỗi truy vấn, in ra kết quả trên một dòng là số lượng các số T phân biệt trong đoạn \[L, R\].

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  1 20  1  2  1 21  2  2 3  15 | 10  15 |

**Giải thích:** Ở truy vấn đầu tiên, các số thoả mãn là 2, 4, 6, 8, 11, 13, 15, 17, 19, 20.

### CP04043 - XẾP HÌNH

Có N loại hình hộp chữ nhật và M loại hình trụ tròn, loại hình hộp chữ nhật thứ *i* có kích thước x\[i\], y\[i\], z\[i\], loại hình trụ tròn thứ *j* có bán kính đáy là r\[j\] và chiều cao là h\[j\]. Tiến hành xếp chồng các hình hộp chữ nhật và hình trụ theo nguyên tắc:

\- Các hình hộp chữ nhật được đặt sao cho các cạnh song song với hệ trục tọa độ.

\- Mỗi hình đặt lên tạo thành một lớp. Mỗi lớp chỉ có đúng một hình;

\- Hình nằm trên đặt trọn vẹn trong mặt trên hình nằm dưới.

**Nhiệm vụ của bạn là hãy tìm** cách xếp để nhận được chồng các hình cao nhất.

**Input**

- Số đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test bắt đầu bằng 2 số nguyên N và M.
- N dòng tiếp theo, mỗi dòng gồm 3 số nguyên x\[i\], y\[i\], z\[i\] mô tả một hình chữ nhật.
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên r\[j\], h\[j\] mô tả một hình trụ.
- 0 &lt; x\[i\], y\[i\], z\[i\], r\[j\], h\[j\] ≤ 10^9.
 
**Output**

- Với mỗi test, hãy in độ cao của vật thể cao nhất có thể thu được.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  1 0  10 20 30 | 40 |

**Giải thích test 1:** Chọn hình chữ nhật có đáy 20x30, chiều cao 10 và hình chữ nhật đáy 10x20, chiều cao 30. Tổng chiều cao của hình tháp được tạo ra bằng 40.

Sử dụng hình chữ nhật có đáy 20x30 và 10x30 không hợp lệ, vì mép của khối hợp trên trùng với mép của khối hợp dưới.

**Subtask 1:** 50% số test đầu tiên: N = 0, M ≤ 100.

**Subtask 2:** 50% số test còn lại: N, M ≤ 100.

### CP04046 - DFS

used\[1 ... n\] = 0, ..., 0;

procedure dfs(v):

print v;

used\[v\] = 1;

for i = 1, 2, ..., n:

if (a\[v\]\[i\] == 1 and used\[i\] == 0):

dfs(i);

dfs(1);

Đoạn giả mã Pascal trên rất quen thuộc với những ai đã từng học về kỹ thuật duyệt DFS.

Bài toán đặt ra cho bạn hôm nay như sau: Cho trước kết quả duyệt DFS trên một cây T có N đỉnh (đánh số các node từ 1 đến N). Hãy đếm xem có thể co bao nhiêu cây khác nhau cho kết quả duyệt DFS như vậy.

**Input**

Dòng đầu ghi số N

Dòng thứ 2 có N số nguyên, là một hoán vị của các số từ 1 đến N. Số 1 luôn ở vị trí đầu tiên.

**Ouput**

Ghi số số cây T có N đỉnh cho kết quả duyệt DFS như vậy. Kết quả tính theo modulo 109 + 7

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  1 2 3 | 2 |

Giải thích ví dụ: Có hai cây thỏa mãn là (1,2); (1,3) và (1,2); (2,3)

**Ràng buộc:**

- Có 40% test ứng với 1 ≤ N ≤ 13
- Có 60% test ứng với 13&lt;N≤100

### LATXU - LATXU

lật xu

### OLP018 - LÁT CẮT

Cho một dãy bit nhị phân gồm có N bit: b\[0\] b\[1\] … b\[N-1\]. Bạn được phép thực hiện K lát cắt.

Có tổng cộng N+1 vị trí có thể cắt: | b\[0\] | b\[1\] | … | b\[N-1\] |.

Xét các dãy bit con kẹp giữa hai lát cắt, hai phần thừa bên ngoài bỏ không tính, như vậy với K lát cắt sẽ tạo ra được K-1 dãy con. Một cách cắt được gọi là đẹp nếu như tập hợp các số này biểu diễn dưới cơ số 10 tạo thành một tập hợp đầy đủ từ 1 à M với M nào đó.

Ví dụ với dãy bit 101101001110 và cách cắt 10 | 11 | 010 | 01 | 1 | 10 là đẹp, vì dãy con thu được là 11, 010, 01, 1 tương ứng với 3, 2, 1, 1 trong cơ số 10.

Kí hiệu f(K) là số cách cắt đẹp với K lát cắt. Bạn hãy tính giá trị biểu thức S sau theo modulo 1000000007:

![Ảnh](./img/OLP018.png)

**Input:**

Dòng đầu tiên là số nguyên N (1 &lt;= N &lt;= 75).

Dòng tiếp theo gồm dãy bit b có N kí tự.

**Output:**

In ra một số nguyên là đáp án của bài toán.

**Test ví dụ:**

 | Test 1 | Test 2 |
|---|---|
| Input:  4  1011  Output:  10 | Input:  2  10  Output:  1 |

Giải thích test 1:

K = 2: | 1 | 011 , 1 | 01 | 1, 10 | 1 | 1, 101 | 1 |.

K = 3: | 1 | 01 | 1, | 10 | 1 | 1, 10 | 1 | 1 |, 1 | 01 | 1 |.

K = 4: | 10 | 1 | 1 |, | 1 | 01 | 1 |.

### OLP041 - TAM GIÁC VUÔNG CÂN

Cho vùng tọa độ Oxy bị giới hạn bởi gốc tọa độ (0, 0) và điểm trên cùng bên phải (X, Y). Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu tam giác vuông cân.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 100).

Mỗi test gồm hai số nguyên X và Y.

**Giới hạn:**

Subtask 1 (25%) 0 &lt;= X, Y &lt;= 20.

Subtask 2 (25%) 0 &lt;= X, Y &lt;= 100.

Subtask 3 (50%) 0 &lt;= X, Y &lt;= 1000.

**Output:**

Với mỗi test, in ra số tam giác vuông tìm được trên một dòng.

**Example:**

 | Input | Output |
|---|---|
| 3  0 5  1 2  1 1 | 0  10  4 |

### OLP057 - PHÂN NHÓM BÀI TẬP LỚN

Thầy X tại trường P có K bài tập lớn. Lớp có N sinh viên. Mỗi sinh viên chỉ tham gia một nhóm duy nhất và K bài tập lớn cần phải giao đủ cho K nhóm sinh viên.

Tuy nhiên, trong lớp không phải sinh viên nào cũng hợp tác được với nhau. Giữa họ tồn tại một số mâu thuẫn nhất định, được đánh giá bằng chỉ số A\[i\]\[j\] (đại diện cho sinh viên i và sinh viên j). Chỉ số mâu thuẫn của một nhóm bằng tổng chỉ số mâu thuẫn giữa từng cặp thành viên.

Các bạn hãy giúp thầy X phân nhóm bài tập lớn sao cho tổng chỉ số mâu thuẫn của K nhóm là nhỏ nhất. Khi đó, cả thầy giáo và các bạn sinh viên đều cảm thấy hài lòng.

**Input**

- Dòng đầu chứa số nguyên dương N và K.
- N dòng tiếp theo, mỗi dòng gồm N số nguyên A\[\]\[\] (0 ≤ A\[i\]\[j\] ≤ 9).
- Input đảm bảo A\[i\]\[j\] = A\[j\]\[i\] và A\[i\]\[i\] = 0.
 
**Giới hạn:**

Subtask 1 (40%): N ≤ 500, K ≤ 100;

Subtask 2 (60%): N ≤ 2000, K ≤ min(N, 1000).

**Output**

- Hãy in ra đáp án là tổng chỉ số mâu thuẫn nhỏ nhất của K nhóm.
 
 

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 5 2  0 0 1 1 1  0 0 1 1 1  1 1 0 0 0  1 1 0 0 0  1 1 0 0 0 | 0 |
| 3 2  0 2 0  2 0 1  0 1 0 | 1 |
| 6 2  0 1 1 1 1 1  1 0 1 1 1 1  1 1 0 1 1 1  1 1 1 0 1 1  1 1 1 1 0 1  1 1 1 1 1 0 | 6 |

Giải thích test 2: Nhóm (1) và (2, 3)

### OLP075 - THI ĐẤU

Team A có N thí sinh, mỗi thí sinh có sức mạnh bằng a\[i\], team B có M thí sinh, mỗi thí sinh có sức mạnh bằng b\[i\].

Luật thi đấu đối kháng như sau: Mỗi team chọn ra K thí sinh, thí sinh mạnh nhất được chọn của nhóm A sẽ thi đấu với thí sinh mạnh nhất của nhóm B, thí sinh mạnh thứ 2 của nhóm A sẽ thi đấu với thí sinh mạnh thứ 2 trong nhóm B... Trong một cuộc đấu đối kháng, thí sinh nào có sức mạnh lớn hơn sẽ chiến thắng.

Ban tổ chức là người nhà của team A, vì vậy đã cố ý lựa chọn K thí sinh nhóm A và K thí sinh nhóm B sao cho trong K cuộc đấu, thành viên đến từ team A luôn chiến thắng.

Nhiệm vụ của bạn là hãy tính xem BTC có bao nhiêu cách chọn các thí sinh để đạt được mục tiêu của mình?

**Input:**

Dòng đầu tiên chứa 3 số nguyên N, M, K (1 &lt;= K &lt;= 10).

Dòng tiếp theo gồm N số nguyên a\[i\].

Dòng cuối gồm M số nguyên b\[i\] (1 &lt;= a\[i\], b\[i\] &lt;= 10^9).

**Giới hạn:**

Subtask 1 (50%): 1 &lt;= N, M &lt;= 200

Subtask 2 (50%): 1 &lt;= N, M &lt;= 1000.

**Output:**

In ra đáp án tìm được theo modulo 10^9+9.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 5 10 3  1 2 2 6 7  1 3 6 8 8 9 14 17 18 19 | 2 |

Giải thích test: (2, 6, 7) vs (1, 3, 6). Hai tổ hợp (2, 6, 7) tương ứng với 2 cách.

### OLP095 - BẢNG SỐ TƯƠNG ĐỒNG

Hai bảng số A và B được gọi là tương đồng bậc k nếu như:

1. Hai bảng có cùng kích thước
2. Hai phần tử tương ứng chênh lệch không quá k đơn vị |A\[i,j\] – B\[i,j\]| &lt;= k).
 
Cho số nguyên k và 2 bảng số X, Y có cùng kích thước m x n. Hãy tìm bảng số C và D tương ứng là bảng số con của X và Y sao cho C và D tương đồng và có kích thước lớn nhất (r, c là số hàng, cột của C, D, cần tìm r x c lớn nhất có thể).

**Input:**

Dòng đầu tiên chứa 3 số nguyên m, n, k.

m dòng tiếp theo, mỗi dòng gồm n số nguyên không âm mô tả bảng số X.

m dòng tiếp theo, mỗi dòng gồm n số nguyên không âm mô tả bảng số Y.

Các phần tử có giá trị không vượt quá 10^9.

**Output:**

In ra giá trị tích r x c lớn nhất tìm được.

**Giới hạn:**

Subtask 1: m, n &lt;= 16, k &lt;= 10^9

Subtask 2: m, n &lt;= 64, k = 0

Subtask 3: m, n &lt;= 64, k &lt;= 10^9

 

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 3 3 0  **1 1** 1  **1 1** 1  1 1 2  2 2 2  2 **1 1**  2 **1 1** | 4 |
| 3 3 1  1 1 1  1 1 1  1 1 1  2 2 2  2 1 1  2 1 1 | 9 |

### OLP096 - MÃ HÓA

Cho phép mã hóa X = X + X mod 100. Với hai số nguyên N và K, hãy thực hiện phép mã hóa K lần với số X ban đầu được khởi tạo bằng N.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 500).

Mỗi test gồm hai số nguyên N và K (1 &lt;= N, K &lt;= 10^9).

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 2  212 2  1003 3 | 248  1024 |

Giải thích test 1:

212 + 12 = 224, 224 + 24 = 248

### OLP130 - SỐ LƯỢNG DÃY NGOẶC ĐÚNG BT1

Biểu thức ngoặc là xâu chỉ gồm các ký tự ‘(’ hoặc ‘)’. Biểu thức ngoặc đúng và bậc của biểu thức ngoặc được định nghĩa một cách đệ qui như sau:

- Biểu thức rỗng là biểu thức ngoặc đúng và có bậc bằng 0,
- Nếu A là biểu thức ngoặc đúng có bậc bằng k thì (A) cũng là một biểu thức ngoặc đúng có bậc bằng k+1,
- Nếu A và B là hai biểu thức ngoặc đúng và có bậc tương ứng là k\_1 và k\_2 thì AB cũng là một biểu thức ngoặc đúng có bậc bằng max(k\_1,k\_2).
 
Ví dụ, ‘()(())’ là một biểu thức ngoặc đúng có bậc bằng 2 còn ‘(()(()))’ là một biểu thức ngoặc đúng và có bậc bằng 3.

**Yêu cầu:** Cho *n*, đếm số biểu thức ngoặc đúng có độ dài *n*.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 10)

Gồm nhiều dòng, mỗi dòng là một bộ dữ liệu, chứa một số nguyên *n (n &lt;= 100);*

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

Nếu kết quá có hơn 10 chữ số thì ghi theo định dạng: 5 chữ số đầu tiên, tiếp theo là 3 dấu chấm, cuối cùng là 5 chữ số cuối.

**Test ví dụ:**

 | Input | Output |
|---|---|
| 4  2  4  6  56 | 1  2  5  26374...50360 |

### S01 - LÀM TRÒN SỐ

Cho số nguyên dương không quá 9 chữ số. Hãy làm tròn số N theo quy tắc sau:

- Nếu N&gt;10, làm tròn đến số hàng chục gần nhất
- Sau đó nếu kết quả lớn hơn 100 thì làm tròn đến số hàng trăm gần nhất
- Sau đó nếu kết quả lớn hơn 1000 thì làm trong đến số hàng nghìn gần nhất
- Cứ tiếp tục như vậy …
 
Chú ý: Giá trị 5 sẽ được làm tròn lên.

**Input**

Dòng đầu ghi số bộ test (không quá 100)

Mỗi bộ test ghi số N trên một dòng (N nguyên dương và không quá 9 chữ số)

**Output**

Với mỗi test, ghi ra kết quả làm tròn tương ứng trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 7  15  14  5  99  12345678  44444445  1445 | 20  10  5  100  10000000  50000000  2000 |

### S02 - BỘI SỐ CHUNG NHỎ NHẤT

Viết chương trình tính bội số chung nhỏ nhất của hai số nguyên dương lớn (có thể đến 500 chữ số)

**Input:**  
 Dòng 1 ghi số bộ test. Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một số.

**Output:**  
 Với mỗi bộ test ghi ra kết quả trên một dòng.

  
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3    12    100    1212    8888    121212121212121212    45678978 | 300    26664    102534181818181818079284 |

### S03 - LỰA CHỌN THAM LAM

Cho hai số nguyên dương N và S. Hãy lựa chọn các chữ số phù hợp để tạo ra số nhỏ nhất và số lớn nhất có N chữ số sao cho tổng chữ số đúng bằng S.

**Input**

Chỉ có một dòng ghi hai số N và S. (0 &lt; N &lt;= 100; 0 &lt;= S &lt;= 900)

**Output**

Ghi ra hai số nhỏ nhất và lớn nhất tìm được, cách nhau một khoảng trống.

Nếu không thể tìm được thì ghi ra “-1 -1”

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3 20 | 299 992 |
| 2 900 | -1 -1 |
| 3 0 | -1 -1 |

### S05 - DÃY CON CÓ TỔNG NGUYÊN TỐ

Cho dãy số A\[\] có N phần tử là các số nguyên dương khác nhau từng đôi một. Hãy sắp xếp dãy theo thứ tự giảm dần, sau đó liệt kê tất cả các dãy con của A\[\] có tổng các phần tử là số nguyên tố.

**Input**

Dòng đầu ghi số bộ test, mỗi test có 2 dòng:

- Dòng đầu ghi số N (2 &lt; N &lt;15)
- Dòng thứ 2 ghi N số của dãy A\[\], các số đều nguyên dương, nhỏ hơn 100 và khác nhau từng đôi một.
 
**Output**

Với mỗi test, liệt kê tất cả các dãy con có tổng các phần tử là số nguyên tố theo, mỗi dãy con trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 1  4  3 2 5 4 | 2  3  3 2  4 3  5  5 2  5 4 2 |

### S06 - DÃY CON CÓ K PHẦN TỬ TĂNG DẦN

Cho dãy số A\[\] có N phần tử là các số nguyên dương khác nhau từng đôi một và một số K &lt; N.

Hãy liệt kê tất cả các dãy con khác nhau có K phần tử của A\[\], mỗi dãy đều được sắp xếp theo thứ tự tăng dần.

Các dãy con được liệt kê lần lượt theo thứ tự từ điển.

**Input**

Dòng đầu ghi số bộ test, mỗi test có 2 dòng:

- Dòng đầu ghi hai số N và K (2 &lt; K &lt; N &lt;15)
- Dòng thứ 2 ghi N số của dãy A\[\], các số đều nguyên dương, nhỏ hơn 100 và khác nhau từng đôi một.
 
**Output**

Với mỗi test, liệt kê tất cả các dãy con thỏa mãn, mỗi dãy con trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 1  4 3  3 2 5 4 | 2 3 4  2 3 5  2 4 5  3 4 5 |

### S07 - HOÁN VỊ DÃY SỐ

Cho dãy số A\[\] có N phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các hoán vị của dãy số A\[\] theo thứ tự tăng dần, tức là hoán vị đầu tiên có giá trị tăng dần từ trái qua phải, hoán vị cuối cùng giảm dần từ trái qua phải.

**Input**

Dòng đầu ghi số N (1 &lt; N &lt; 9)

Dòng thứ 2 ghi N số của dãy A\[\] (0 &lt; A\[i\] &lt; 10000)

**Output**

Ghi mỗi hoán vị của dãy số trên một dòng

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  88 77 99 | 77 88 99  77 99 88  88 77 99  88 99 77  99 77 88  99 88 77 |

### S08 - TRỤC TỌA ĐỘ

Trên trục Ox tính từ vị trí 0, người ta muốn xếp nhiều nhất các đoạn thẳng sao cho không đoạn nào chồng lấn lên nhau. Đoạn thẳng thứ i có vị trí bắt đầu là X1\[i\] và kết thúc tại X2\[i\], với X1\[i\] &lt;= X2\[i\].

Hãy tính số đoạn thẳng nhiều nhất có thể được lựa chọn để đưa lên trục Ox và không có đoạn nào chồng lấn lên nhau.

**Input**

Dòng đầu tiên ghi số bộ test, không quá 10.

Với mỗi bộ test: dòng đầu ghi số N là số đoạn thẳng (không quá 105)

Tiếp theo là N dòng, mỗi dòng có 2 số nguyên mô tả đoạn thẳng. Các giá trị tọa độ đều là các số nguyên không âm và không quá 106.

**Output**

Với mỗi test, viết trên 1 dòng số lượng đoạn thẳng nhiều nhất có thể được lựa chọn thỏa mãn điều kiện đề bài.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 1  10  39 55  37 74  0 1  19 25  65 76  51 52  19 21  5 94  46 65  32 40 | 5 |

### S09 - NHIỀU NHẤT – ÍT NHẤT

Giả sử tra có N cuốn sách. Cuốn sách thứ i có Pi trang sách. Nhiệm vụ của bạn là giao sách đọc đến M sinh viên. Các ràng buộc:

- Mỗi cuốn sách được giao cho duy nhất một sinh viên.
- Mỗi sinh viên đọc ít nhất một cuốn sách.
- Các cuốn sách được giao cho một sinh viên liên tiếp nhau.
 
Nhiệm vụ của bạn là tìm giải pháp giao sách đọc cho sinh viên sao cho số lượng trang sách nhiều nhất giao cho một sinh viên là ít nhất. Ví dụ với số sách N là 4, số sinh viên M = 2 và số trang trong mỗi cuốn sách là {12, 34, 67, 90} ta có các cách phân công 2 sinh viên đọc sách như sau:

- \[12\] \[34, 67, 90\]: sinh viên 2 đọc nhiều nhất 34+67+90=191.
- \[12, 34\] \[67,90\]: sinh viên 2 đọc nhiều nhất 67+90 = 157.
- \[12, 34, 67\] \[90\]: sinh viên 1 đọc nhiều nhất 12+34+67 = 113
 
Như vậy, phương án 3 là 113 giao nhiều trang sách nhất cho một sinh viên là ít nhất.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào số lượng sách N và số lượng sinh viên M; dòng tiếp theo đưa vào số trang của mỗi sách; các số được viết cách nhau một vài khoảng trống.
- T, N, M, P\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, M≤106; 1≤P\[i\]≤106.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng. Đưa ra -1 nếu không có giải pháp giao sách cho M sinh viên.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    4 2    12 34 67 90    3 2  15 17 20 | 113    32 |

### S109 - ĐỔI CHỖ ÍT NHẤT

Cho mảng A\[\] gồm n phần tử. Hãy tìm số phép đổi chỗ ít nhất giữa các phần tử của mảng để mảng A\[\] được sắp xếp. Ví dụ với A\[\] = {4, 3, 2, 1} ta cần thực hiện ít nhất 2 phép đổi chỗ: Swap(A\[0\], A\[3\]), Swap(A\[1\], A\[2\]).

 **Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A \[i\] của mảng A \[\];các số được viết cách nhau một vài khoảng trống.
- T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103.
 
 **Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 2    4    4 3 2 1    5    1 5 4 3 2 | 2    2 |

### S11 - TÁCH NHÓM TỐI ƯU

Cho dãy số A\[\] có N phần tử là các số nguyên dương. Với mỗi số nguyên K, hãy tính xem có thể tách dãy số A thành ít nhất bao nhiêu nhóm sao cho mỗi số trong nhóm đều có thể tìm được ít nhất một số khác **cùng nhóm** có chênh lệch **không vượt quá K.**

Ví dụ: A\[\] = {2, 6, 1, 7, 3, 4, 9}; K = 1 thì kết quả là 3 ứng với 3 nhóm {2,1,3,4}; {6,7}; {9}

**Input**

Dòng đầu ghi hai số N và K (0 &lt;= K &lt;= 105; 0 &lt;= N &lt;= 106).

Dòng thứ 2 ghi ra N số của dãy A\[\], các số nguyên dương và không quá 106.

**Output**

Ghi ra số nhóm ít nhất có thể.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 7 1  2 6 1 7 3 4 9 | 3 |

### S110 - SẮP XẾP LẠI DÃY CON

Cho mảng A\[\] gồm n phần tử. Hãy tìm dãy con liên tục của mảng A\[R\], .., A\[L\] sao cho khi sắp xếp lại dãy con ta nhận được một mảng được sắp xếp. Ví dụ với A\[\] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60} ta chỉ cần sắp xếp lại dãy con từ A\[4\],.., A\[9\]: {30, 25, 40, 32, 31, 35} để có mảng được sắp.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A\[\]; dòng tiếp theo là n số A \[i\] của mảng A \[\]các số được viết cách nhau một vài khoảng trống.
- T, n, A\[i\] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤106; 0≤ A\[i\] ≤107.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 2    11    10 12 20 30 25 40 32 31 35 50 60    9    0 1 15 25 6 7 30 40 50 | 4 9    3 6 |

### S12 - SỐ XA CÁCH

Cho số nguyên dương N (2 &lt; N &lt;10). Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn:

- K không chứa chữ số 0
- Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần
- Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1.
 
Hãy liệt kê tất cả các số thỏa mãn theo thứ tự tăng dần.

**Input**

- Dòng đầu ghi số bộ test (không quá 10)
- Mỗi bộ test là 1 số nguyên dương N (2 &lt; N &lt; 10)
 
**Output**

Liệt kê tất cả các số thỏa mãn, mỗi số trên một dòng.

Sau mỗi test in ra một khoảng trống.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  3  4 | 2413  3142 |

### S121 - BẦU CỬ

Khu dân cư ABC tiến hành bầu tổ trưởng dân phố. Có M ứng viên và N cử tri. Người dân trong khu dân cư đã chán ngấy với việc các ứng viên vận động tranh cử, câu kéo phiếu bầu trong các nhiệm kỳ trước nên họ quyết định đặt ra quy định mới như sau:

- Các ứng viên được đánh số từ 1 tới M. Mỗi cử tri sẽ viết ra đúng 1 số thứ tự ứng viên mình muốn chọn và bỏ vào hòm phiếu.
- Người trúng cử là người có số phiếu bầu **nhiều thứ hai**
- Nếu không có người đứng thứ hai thì kết quả bầu cử sẽ bị hủy bỏ
- Nếu có nhiều hơn 1 người cùng có số phiếu nhiều thứ hai thì người nào có số thứ tự nhỏ nhất sẽ được chọn.
 
Viết chương trình xác định người trúng cử.

**Input**

Dòng đầu ghi hai số N và M (1 &lt; M &lt; 10, 5 &lt; N &lt; 500).

Dòng thứ 2 ghi N giá trị trong các phiếu bầu. Các giá trị đảm bảo hợp lệ (tức là từ 1 đến M).

**Output**

Ghi ra số thứ tự của người trúng cử.

Hoặc nếu không có ai trúng cử thì ghi ra NONE

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 10 4  2 3 1 2 3 4 1 2 3 2 | 3 |
| 8 4  1 2 3 4 4 3 2 1 | NONE |

### S122 - HỢP VÀ GIAO CỦA HAI TẬP HỢP TỪ

Trong lập trình cơ bản, một từ được hiểu là một dãy ký tự liên tiếp không chứa khoảng trống, dấu tab hoặc dấu xuống dòng.

  
 Hãy xác định tập hợp các từ khác nhau trong một xâu ký tự, sau khi đã chuyển hết về dạng chữ thường. Sau đó nhập hai dòng ký tự và hiển thị hợp và giao của hai tập từ tương ứng.

**Input**

Chỉ có 2 dòng, mỗi dòng có độ dài không quá 1000 ký tự.

**Output**

Dòng 1 ghi hợp của 2 tập từ theo thứ tự từ điển

Dòng 2 ghi giao của 2 tập từ theo thứ tự từ điển.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| Lap trinh huong doi tuong  Ngon ngu lap trinh C++ | c++ doi huong lap ngon ngu trinh tuong  lap trinh |

### S123 - DI CHUYỂN ROBOT

Một robot xuất phát từ vị trí (0,0) mặt quay về hướng Bắc. Mỗi lần chỉ có một trong 4 lệnh chuyển động là G, L, R, B tương ứng là tiến về phía trước, tiến sang trái, tiến sang phải, lùi về phía sau một đơn vị.

Cho dãy lệnh chuyển động. Hãy tính xem vị trí cuối cùng của robot là vị trí nào?

**Input**

- Dòng đầu tiên ghi n (n≤100) là số lệnh robot cần thực hiện.
- Dòng thứ hai là dãy n ký tự mô tả dãy lệnh robot thực hiện
 
**Output**

Ghi ra hai số nguyên là tọa độ (x,y) của vị trí cuối cùng robot

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  GLLRB | -1 0 |
| **Input** | **Output** |
| 2  RG | 2 0 |

### S124 - SẮP XẾP ĐOẠN CON

Cho dãy số nguyên A có N phần tử. Hãy đếm số lượng chỉ số M &lt; N thỏa mãn: nếu sắp xếp đoạn con (A1,…,AM) và (AM+1, …, AN) theo thứ tự tăng dần thì ta được dãy số A tăng dần.

**Input**

Dòng đầu ghi số bộ test T

Mỗi bộ test gồm 2 dòng:

- Dòng đầu ghi số N (2 ≤ N ≤ 105)
- Dòng thứ hai: ghi N số của dãy A (|Ai| ≤ 109).
 
**Output**

Với mỗi bộ test:

- Dòng đầu ghi ra số K là số lượng chỉ số M tìm được
- Dòng thứ 2 ghi ra K giá trị chỉ số thỏa mãn theo thứ tự tăng dần. Nếu K = 0 thì dòng này bỏ trống.
 
**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  2  2 1  5  2 1 3 5 4 | 0  2  2 3 |

### S125 - ĐẾM ƯỚC SỐ

Cho hai số nguyên dương n và k. Hãy đếm số ước số khác nhau của tổ hợp chập k của n phần tử.

**Input:**

Dữ liệu vào gồm nhiều dòng, mỗi dòng ghi hai số nguyên dương n và k (0 ≤ k ≤ n ≤ 431). (chú ý: không có dòng ghi số bộ test, cần tự đọc đến hết các dòng của luồng vào).

**Output:**

Ghi ra kết quả trên một dòng. Dữ liệu vào đảm bảo kết quả không vượt quá 263 – 1.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 5 1  6 3  10 4 | 2  6  16 |

### S127 - XÂU CON LỚN NHẤT

**Xâu con** của một xâu ký tự S được tạo ra bằng cách lấy một hoặc nhiều ký tự trong S và giữ nguyên thứ tự ban đầu.

Cho xâu S chỉ bao gồm các chữ cái viết thường. Hãy in ra xâu con có thứ tự từ điển là lớn nhất.

**Input**

Chỉ có xâu ký tự S, độ dài không quá 100000. Không có khoảng trống.

**Output**

Ghi ra xâu con có thứ tự từ điển lớn nhất.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| ababba | bbba |
| abbcbccacbbcbaaba | cccccbba |

### S129 - PHÉP TOÁN OR

Phép toán trên thao tác bit OR lấy 2 dãy bit có độ dài bằng nhau và thực hiện phép toán lý luận bao hàm OR trên mỗi cặp bit tương ứng. Kết quả ở mỗi vị trí sẽ là 0 nếu cả 2 bit là 0, ngược lại kết quả là 1. Trong C, C++, Java toán tử thao tác bit OR được biểu diễn bằng kí hiệu "|" (vạch đứng )

Ví dụ : 10|17 = 01010|10001=11011=27

Cho một mảng a gồm n phần tử. Một dãy con liên tiếp của a được định nghĩa là một dãy a\[l\], a\[l+\]),a\[l+2\],...,a\[r\] với 1 ≤ l ≤ r ≤ n

Ta định nghĩa phép toán OR của 1 dãy con liên tiếp của mảng a là việc thực hiện phép toán thao tác bit OR của toàn bộ các phần tử trong dãy con đó.

OR(l,r) = a\[l\] | a\[l+1\] | a\[l+2\]|...|a\[r\]

Nhiệm vụ của bạn là tính giá trị OR của toàn bộ các dãy con của một mảng a cho trước và đếm xem có bao nhiêu giá trị khác nhau.

**Input:**

Dòng thứ 1 gồm 1 số n (1 ≤ n ≤ 1e5): số phần tử của mảng a

Dòng thứ 2 gồm n số a\[1\], a\[2\], ..., a\[n\] ( 0 ≤ a\[i\] ≤ 1e9)

**Output:**

Với mỗi testcase, in ra kết quả trên 1 dòng.

**Ví dụ :**

 | Input | Output |
|---|---|
| 3  1 2 3 | 3 |

Giải thích test:

Ta có tất cả 6 dãy con: (các số trong ngoặc là vị trí đầu và cuối )

1. (1,1) -&gt; 1
2. (1,2) -&gt; 1|2 = 2
3. (1,3) -&gt; 1|2|3 = 3
4. (2,2) -&gt; 2
5. (2,3) -&gt; 2|3=3
6. (3,3) -&gt; 3
 
Có 3 giá trị khác nhau là 1, 2, 3-&gt; kết quả là 3.

### S131 - BIẾN ĐỔI A – B

Cho xâu ký tự s chỉ bao gồm hai chữ cái là ‘A’ và ‘B’.

Mỗi bước được phép biến đổi một vị trí bất kỳ trong xâu (A thành B, B thành A) hoặc cũng có thể biến đổi một dãy liên tiếp các ký tự nào đó tính từ đầu xâu.

Hãy tính xem cần ít nhất bao nhiêu bước để biến đổi xâu về dạng toàn chữ cái A.

**Input**

Chỉ có 1 dòng ghi xâu ký tự s, độ dài không quá 1 triệu ký tự.

**Output**

Ghi ra kết quả bài toán

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| AAABBBAAABBB | 4 |

### S133 - VỊ TRÍ CHẴN

Cho trước 1 chữ số d (0 ≤ d ≤ 9) , ta gọi họ số đặc biệt của d là tập các số tự nhiên mà chữ số d chỉ xuất hiện tại vị trí chẵn (không xuất hiện trong vị trí lẻ).

Ví dụ: Số 1717171 là 1 số trong họ số đặc biệt của chữ số 7

Số 20 là 1 số trong họ số đặc biệt của chữ số 2.

Bài toán đặt ra là: *Cho trước 1 chữ số d, hãy đếm số lượng các số thuộc họ số đặc biệt của d nằm trong đoạn từ \[a,b\] mà là bội số của 1 số m cho trước.*

**Input:**

Dòng đầu tiên gồm 2 số m và d (1 ≤ m ≤ 2000, 0 ≤ d ≤ 9)

Dòng thứ 2 gồm 2 số a và b ( a ≤ b, số chữ số của cả a và b bằng nhau, không vượt quá 2000 và không có chữ số 0 ở đầu).

**Output:**

In ra kết quả bài toán. Vì kết quả bài toán có thể rất lớn nên kết quả in ra phải được lấy dư theo 109 + 7

Ví dụ:

 | **Input** | **Output** |
|---|---|
| 43 3  587 850 | 1 |

Giải thích test:

Trong khoảng từ 587 đến 850 chỉ có duy nhất 1 số thuộc họ số đặc biệt của chữ số 3 mà là bội của 43 đó là 731 (số 3 xuất hiện tại vị trí số 2 là vị trí chẵn)

### S135 - BÀI TOÁN CHỮ SỐ - 2

Hãy tìm 3 chữ số đầu tiên trước dấu phẩy của số (3+sqrt(5))^n.

Ví dụ:

Với n = 5, (3+sqrt(5))^5 = 3935.73982… Đáp số là 935.

Với n = 2, (3+sqrt(5))^2 = 27.4164079… Đáp số là 027.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test gồm một số nguyên n (n ≤ 2 000 000 000).

**Output:**

Với mỗi test in ra STT và đáp án tìm được. In ra đủ 3 chữ số như test ví dụ (n = 2, in ra 027).

**Ví dụ:**

 | Input | Output |
|---|---|
| 2  5  2 | Case #1: 935  Case #2: 027 |

### S14 - TRẢ LƯƠNG CHO LẬP TRÌNH VIÊN

Trong các công ty IT, lập trình viên là một loại nhân sự đặc biệt. Nếu trả mức lương quá thấp, anh ta sẽ không muốn làm việc, năng suất sẽ thấp, thậm chí thỉnh thoảng lại dọa bỏ đi nơi khác. Nếu trả mức lương quá cao thì anh ta lại lười biếng và chẳng muốn làm việc gì cả. Mức lương vừa đủ sẽ khiến động lực làm việc tăng cao và năng suất sẽ là cao nhất.

Giả sử có N lập trình viên, mỗi người có một ngưỡng trả lương từ A\[i\] đến B\[i\] gọi là vừa đủ. Nếu lương nhỏ hơn A\[i\] thì số dòng code đúng mỗi ngày của lập trình viên thứ i sẽ là X, nếu trong đoạn từ A\[i\] đến B\[i\] thì số dòng code sẽ là Y, còn nếu lớn hơn B\[i\] thì số dòng code sẽ là Z. Tất nhiên, Y&gt;X và Y&gt;Z.

Hãy giúp giám đốc công ty chọn ra mức lương nào đó chung cho cả N lập trình viên và tổng số dòng code đúng trong một ngày là lớn nhất có thể.

**Input**

Dòng 1 ghi 4 số N, X, Y, Z (1 &lt;= N &lt;=20000; 0 &lt;= X,Y,Z &lt;=1000)

N dòng tiếp theo, mỗi dòng ghi hai số A\[i\] và B\[i\] (0 &lt;= A\[i\] &lt;= B\[i\] &lt;= 109)

**Output**

Ghi ra số dòng code đúng tối đa có thể đạt được.

**Ví dụ**

 | **Input** | **Ouput** |
|---|---|
| 4 7 9 6  5 8  3 4  13 20  7 10 | 31 |

### S20 - XÂU NHỊ PHÂN XEN KẼ

Một xâu nhị phân được gọi là xen kẽ nếu giá trị 0 ở ngay bên cạnh giá trị 1 và không có hai giá trị nào bằng nhau ở cạnh nhau. Hãy viết chương trình liệt kê các xâu nhị phân xen kẽ có độ dài N.

**Input**

Chỉ có một dòng ghi số N (2 ≤ N ≤ 1000)

**Output**

Ghi ra các xâu nhị phân xen kẽ, mỗi xâu trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3 | 0 1 0  1 0 1 |

### S21 - GIÁ TRỊ LỚN NHẤT

Cho dãy số nguyên A\[\] có N phần tử.

- Gọi **f(i,j) = |ai| + |ai+1| + … + |aj|**
- Goij **g(i,j) = ai + ai+1 + … + aj**
 
Với tất cả các cặp 1 ≤ i ≤ j ≤ N.

Hãy tính **giá trị lớn nhất của f(i,j) + g(i,j).**

**Input**

Dòng đầu ghi số N (1 ≤ N ≤ 50000)

Dòng thứ 2 ghi N số nguyên của dãy A\[\]

**Output**

Ghi ra giá trị lớn nhất của f(i,j) + g(i,j)

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  -3 5 -10 8 -2 | 26 |

### S22 - KHOẢNG CÁCH NGẮN NHẤT

Trong mặt phẳng tọa độ, khoảng cách Manhattan giữa 2 điểm A, B được định nghĩa là

d(A,B) = |xA – xB| + |yA – yB|

Cho hai tập điểm S1 và S2 trong đó:

- S1 chứa tập điểm phân biệt nằm trên đường y = c1
- S2 chứa tập điểm phân biệt nằm trên đường y = c2
 
Hãy tính khoảng cách Manhattan ngắn nhất giữa hai điểm p Î S1 và q Î S2 và đếm xem có bao nhiêu cặp điểm phân biệt có khoảng cách bằng khoảng cách ngắn nhất.

**Input**

- Dòng đầu tiên ghi hai số N, M (1 ≤ N,M ≤ 5000000) trong đó N là số phần tử trong S1, M là số phần tử trong S2
- Dòng thứ 2 ghi hai số c1 và c2 (- 108 ≤ c1,c2 ≤ 108).
- Dòng thứ 3 ghi N số của tập S1 (các số có trị tuyệt đối không quá 108)
- Dòng thứ 4 ghi M số của tập S2 (các số có trị tuyệt đối không quá 108)
 
**Output**

Ghi ra trên một dòng hai số nguyên lần lượt là khoảng cách ngắn nhất và số cặp điểm có khoảng cách ngắn nhất.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3 4  1 -3  3 0 6  -2 5 4 2 | 5 3 |

### S23 - TÍNH TỔNG GIÁ TRỊ ĐẶC BIỆT

Cho một xâu S chỉ bao gồm các chữ số. Với mỗi một xâu con X liên tiếp của S có độ dài bằng K, giá trị đặc biệt của nó được tính bằng giá trị của X trong hệ cơ số B modulo M.

Nhiệm vụ của bạn là tính tổng giá trị đặc biệt của tất cả các xâu con của S có độ dài bằng K.

**Input:**

Dòng đầu tiên gồm xâu S có độ dài không quá 300 000 gồm các kí tự từ 0 – 9.

Dòng tiếp theo là số nguyên K, B và M (1 ≤ K ≤ |S|, 2 ≤ B ≤ 10, 1 ≤ M ≤ 1000).

**Output:** In ra đáp án tìm được.

**Ví dụ:**

 | **Test 1** | **Test 2** |
|---|---|
| Input:  12212  3 3 5  Output:  5 | Input:  111101  4 2 15  Output:  27 |

Giải thích test 1:

*Giá trị của xâu con 122 trong cơ số 3 bằng 17 % 5 = 2.*

*Giá trị của xâu con 221 trong cơ số 3 bằng 25 % 5 = 0.*

*Giá trị của xâu con 212 trong cơ số 3 bằng 23 % 5 = 3.*

*Tổng của chúng bằng 5.*

### S24 - TỔNG GẦN NHẤT

Cho dãy số A\[\] có N số nguyên dương và số M.

Hãy chọn ra 3 số trong dãy A\[\] sao cho tổng 3 số đó nhỏ hơn M nhưng gần với M nhất.

In ra tổng 3 số tìm được.

**Input**

- Dòng đầu ghi số bộ test (không quá 10)
- Mối test có hai dòng. Dòng đầu ghi 2 số N và M (1 ≤ N ≤ 100; 10 ≤ M ≤ 300000). Dòng thứ 2 ghi N số của dãy số A\[\]. Các số đều nguyên dương và không quá 6 chữ số.
- Input đảm bảo luôn có ít nhất một bộ ba số có tổng nhỏ hơn M.
 
**Output**

Mỗi test ghi giá trị tổng của 3 số tìm được trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  5 21  5 6 7 8 9  10 500  93 181 245 214 315 36 185 138 216 295 | 21  497 |

### S25 - CHÊNH LỆCH NHỎ NHẤT

Cho dãy A\[\] có N số nguyên, mỗi số có đúng K chữ số (có thể có chữ số 0 ở đầu). Gọi độ chênh lệch của dãy là hiệu giữa phần tử lớn nhất và bé nhất của dãy.

Bạn có thể hoán vị các chữ số của một số để tạo số mới (có thể có chữ số 0 ở đầu). Bằng cách hoán vị tất cả n số **theo cùng một cách**, ta nhận được dãy số mới.

Tìm độ chênh lệch nhỏ nhất có thể tạo được.

**Input:**

Dòng đầu chứa 2 số N và K. (1 ≤ N, K ≤ 8)

N dòng sau, mỗi dòng chứa 1 số nguyên có K chữ số.

**Output:**

Độ chênh lệch nhỏ nhất tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3 3  010  909  012 | 3 |

*Giải thích test ví dụ:*

*Đổi chỗ chữ số thứ 1 và 2 có thể nhận được dãy 100, 99, 102.*

### S26 - BIẾN ĐỔI VỀ 0

Cho số tự nhiên N và thực hiện trừ N lần lượt N đi chữ số đầu tiên của N để N trở về 0. Ví dụ với N=13 ta thực hiện các phép dịch chuyển N về 0 như sau:

- Bước 1: N=N-1 = 13-1=12
- Bước 2: N=N-1 = 12-1=11
- Bước 3: N=N-1 = 11-1=10
- Bước 4: N=N-1 = 10-1=9
- Bước 5: N=N-1 = 9-9=0
 
Cho K là số các phép dịch chuyển N về 0 theo nguyên tắc kể trên. Nhiệm vụ của bạn là tìm số N lớn nhất từ xuất phát điểm ban đầu.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là số tự nhiên K được viết trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤106.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    1    2 | 9  10 |

### S28 - MÃ SỐ

Số lượng máy tính ở các phòng thực hành nhà A3 tăng lên nhanh chóng. Để gán mã cho các máy tính của PTIT người ta sử dụng mã gồm 2\*N ký tự, trong đó:

- N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A.
- N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau).
 
Người ta ước tính chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành. Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

**Input**

Chỉ có duy nhất số N (1 &lt; N &lt; 6)

**Output**

Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2 | AB11  AB12  AB21  AB22  BA11  BA12  BA21  BA22 |

### S30 - QUÂN VUA TRÊN BÀN CỜ

Trên bàn cờ vua kích thước 8\*8 thì quân vua được phép di chuyển đến cả 8 ô liền kề theo cả đường dọc và đường chéo. Tất nhiên quân vua sẽ không thể di chuyển được ra ngoài bàn cờ.

Cho 2 ô trên bàn cờ gọi là ô bắt đầu và ô kết thúc. Hãy tính xem quân vua cần ít nhất bao nhiêu bước để di chuyển từ ô bắt đầu đến ô kết thúc.

**Input**

Có 2 cặp số nguyên s1,s2 và f1,f2 lần lượt và vị trí ô bắt đầu và ô kết thúc. Các vị trí đảm bảo nằm trong phạm vi bàn cờ.

**Output**

Số bước đi ít nhất của quân vua

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 4 3 1 6 | 3 |
| 5 5 5 6 | 1 |

 

Giới hạn thời gian: 1s

### S31 - DÃY CON CÓ TỔNG BẰNG S

Cho dãy số A\[\] có n phần tử và số nguyên dương S. Hãy tìm dãy con có ít phần tử nhất của A\[\] có tổng các phần tử đúng bằng S.

**Input**

Dòng đầu ghi hai số n và S. (n ≤ 30; S ≤ 109).

Dòng thứ 2 ghi n số của dãy A\[\], các số đều nguyên dương và không quá 9 chữ số.

**Output**

Ghi ra độ dài của dãy con ngắn nhất có tổng bằng S.

Nếu không có kết quả đúng thì ghi ra -1

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 10 390  200 10 20 20 50 50 50 50 100 100 | 5 |

### S32 - MÃ GRAY

Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. Ví dụ với n=3 ta có 23 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trình liệt kê các mã Gray có độ dài n.

**Input:** Dòng đầu tiên là số lượng test T. T dòng kế tiếp ghi lại mỗi dòng một test. Mỗi test là một số tự nhiên n. T, n thỏa mãn ràng buộc: 1≤T, n≤10.

**Output:** Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 2  3  4 | 000 001 011 010 110 111 101 100  0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 1110 1010 1011 1001 1000 |

### S33 - LIỆT KÊ XÂU KÝ TỰ

Cho chữ cái c in hoa (‘A’ &lt; c &lt; ’K’) và số nguyên K (0 &lt; K &lt; (c – ‘A’)).

Hãy tìm cách liệt kê tất cả các xâu ký tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. Các ký tự được phép lặp lại nhưng không tính các xâu là hoán vị của xâu nào đó đã liệt kê trước đó.

Xem ví dụ để hiểu thêm yêu cầu đề bài.

**Input**

Chỉ có một dòng ghi chữ cái c và số nguyên K thỏa mãn ràng buộc đề bài.

**Output**

Ghi ra lần lượt các xâu ký tự kết quả theo thứ tự từ điển, mỗi xâu trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| D 2 | AA  AB  AC  AD  BB  BC  BD  CC  CD  DD |

### S34 - TỔNG ƯỚC SỐ

Cho hai số nguyên dương a,b. Hãy đếm xem trong đoạn \[a,b\] có bao nhiêu số có tổng các ước số (không tính chính nó) lớn hơn giá trị của nó.

Ví dụ: số 12 có tổng ước số là 1 + 2 + 3 + 4 + 6 = 16 &gt; 12.

**Input**

Chỉ có hai số a và b (1 &lt;= a &lt;= b &lt;= 106).

**Output**

Ghi ra số lượng các số thỏa mãn.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 1 50 | 9 |

### S40 - TÍNH LŨY THỪA

Cho hai số nguyên không âm a và b. Hãy tính ab.

Nếu kết quả quá lớn hãy chia dư cho 109 + 7.

**Input**

Gồm không quá 20 bộ test, mỗi test ghi trên một dòng hai số a,b; a không quá 9 chữ số, b không quá 18 chữ số.

Input kết thúc khi a = b = 0

**Output**

Với mỗi test ghi ra kết quả tính được trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2 3  2 4  3 2  0 0 | 8  16  9 |

### S41 - NỐI DÂY 2

Cho N sợi dây với độ dài khác nhau được lưu trong mảng A\[\]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A\[i\] và A\[j\].

**Input**

Dòng đầu ghi số bộ test T (T&lt;10). Mỗi bộ test gồm 2 dòng. Dòng đầu tiên là số nguyên N (N ≤ 2\*106).

Dòng tiếp theo gồm N số nguyên dương c\[i\] ( 1 ≤ A\[i\] ≤ 109).

**Output**

In ra đáp án của bộ test trên từng dòng, theo modulo 109+7.

**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 7  2 4 1 2 10 2 3 | 59 |

### S42 - PHẦN TỬ LỚN NHẤT TRONG DÃY CON

Cho dãy số A\[\] gồm có N phần tử và số nguyên K.

Với mỗi dãy con liên tiếp có độ dài bằng K (từ trái sang phải), bạn hãy in ra phần tử lớn nhất trong dãy con này.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 1 ≤ K ≤ N).

Dòng tiếp theo gồm N số nguyên A\[i\] (0 ≤ A\[i\] ≤ 109).

**Output:**

Với mỗi test, in ra trên một dòng N-K+1 số nguyên là đáp án tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  9 3  1 2 3 1 4 5 2 3 6  10 4  8 5 10 7 9 4 15 12 90 13 | 3 3 4 5 5 5 6  10 10 10 15 15 90 90 |

### S43 - LỰA CHỌN TỐI ƯU

Bạn được giao cho N công việc, công việc thứ i có thời gian bắt đầu là A\[i\] và kết thúc tại B\[i\]. Tại một thời điểm, bạn chỉ có thể làm một công việc.

Bạn hãy lựa chọn các công việc một cách tối ưu sao cho số công việc làm được là nhiều nhất.

**Input:** Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).

N dòng tiếp theo, mỗi dòng gồm 2 số A\[i\] và B\[i\] (0 ≤ A\[i\] &lt; B\[i\] ≤ 106).

**Output:** Với mỗi test, in ra đáp án trên một dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  6  5 9  1 2  3 4  0 6  5 7  8 9 | 4 |

*Giải thích test: Lựa chọn công việc 2, 3, 5, 6.*

### S45 - LŨY THỪA MA TRẬN

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = AK với K là số nguyên cho trước. Sau đó, **tính tổng các phần tử của cột cuối cùng**. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 109+7.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 109) là kích thước của ma trận và số mũ.

**Output:**

Với mỗi test, in ra kết quả của ma trận X.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2 5  1 1  1 0  3 1000000000  1 2 3  4 5 6  7 8 9 | 8  581039956 |

Giải thích:

A^5 = 8 5

 5 3

Tổng các phần tử trên cột cuối cùng bằng 5+3 = 8.

 597240088 35500972 473761863

B^1000000000 = 781257150 154135232 527013321

 965274212 272769492 580264779

Tổng các phần tử trên cột cuối cùng là:

(473761863+527013321+580264779) % 1000000007 = 581039956

### S46 - SẮP XẾP ĐƠN GIẢN

Cho một dãy số a\[\] có n phần tử gồm các số từ 1 đến n theo 1 thứ tự ngẫu nhiên. Nhiệm vụ của bạn là sắp xếp lại dãy số này theo thứ tự tăng dần với điều kiện : ở mỗi bước sắp xếp, bạn chỉ được chọn 1 số ở 1 vị trí bất kì và chuyển số đó lên đầu dãy hoặc về cuối dãy.

Hãy tính số bước tối thiểu cần thực hiện để hoàn thành việc sắp xếp.

**Input**

- Dòng đầu tiên ghi 1 số n: số lượng phần tử của dãy a (1 ≤ n ≤ 100000)
- Dòng tiếp theo gồm n số từ 1 đến n theo thứ tự ngẫu nhiên
 
**Output**

- Một số nguyên duy nhất là số bước tối thiểu cần thực hiện để hoàn thành việc sắp xếp.
 
**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  4 1 2 5 3 | 2 |

### S47 - TÌM DÃY SỐ

Cho dãy số nguyên A\[\] gồm có N phần tử. Nhiệm vụ của bạn là tìm dãy số B\[\] có tổng phần tử nhỏ nhất thỏa mãn tính chất A\[i\] **/** B\[i\] = A\[i+1\] **/** B\[i+1\] với mọi chỉ số i (0 ≤ i ≤ N-2).

Phép chia trong bài toán này là phép chia nguyên (tức là chỉ lấy phần nguyên của kết quả: ví dụ 5/3 = 1).

**Dữ liệu vào:**

Dòng đầu tiên là số lượng phần tử N (1 ≤ N ≤ 1000).

Dòng tiếp theo gồm N số nguyên A\[i\] (1 ≤ A\[i\] ≤ 2000).

**Kết quả:**

In ra một số nguyên là tổng các phần tử của dãy số B\[\] tìm được.

**Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 5  18 27 16 22 6 | 25 |

*Giải thích test: Dãy B\[\] tìm được là 5, 7, 5, 6, 2.*

### S48 - ĐẾM SỐ VẬT CẢN TRÊN MÊ CUNG

Một mê cung được mô tả dưới dạng ma trận ký tự trong đó dấu ‘.’ là mô tả ô trống, không có vật cản, dấu ‘#’ mô tả một vật cản. Các vật cản sẽ ghép lại với nhau thành vật cản lớn hơn nếu nó liền kề theo hàng hoặc cột.

Hãy đếm xem trong mê cung có bao nhiêu vật cản.

**Input**

Dong đầu ghi số hai số N, M là số hàng và số cột của mê cung.

N dòng tiếp theo mô tả mê cung trong đó chỉ có các ký tự ‘.’ và ‘#’.

**Output**

Ghi ra số vật cản đếm được.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5 6  .#....  ..#...  ..#..#  ...##.  .#.... | 5 |

### S49 - SỐ MAY MẮN TIẾP THEO

Trong bài tập môn CTDL và GT, số may mắn được hiểu là số chỉ có hai chữ số 4 và 7. Với mỗi số nguyên dương N thì số may mắn tiếp theo của N được định nghĩa là số may mắn nhỏ nhất lớn hơn hoặc bằng N.

Cho hai số nguyên dương a và b (với a &lt;= b). Hãy tính tổng các số may mắn tiếp theo của tất cả các số trong đoạn \[a,b\]

**Input**

Chỉ có một dòng ghi hai số a,b (1 &lt;= a &lt;= b &lt;= 109).

**Output**

Ghi ra giá trị kết quả tính được.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2 7 | 33 |
| 7 7 | 7 |

### S50 - DÃY CON LIÊN TIẾP DÀI NHẤT

Cho dãy số A\[\] có N số nguyên và một số nguyên K.

Hãy tính độ dài dãy con liên tiếp dài nhất có thể trong dãy A\[\] sao cho trung bình cộng của dãy con đó lớn hơn hoặc bằng K.

**Input**

Dòng đầu ghi hai số N và K (1 &lt;= N &lt;= 106; |K| &lt;= 106 )

Dòng thứ hai ghi N số của dãy A\[\] ( |A\[i\]| &lt;= 106)

**Output**

Ghi ra độ dài dãy con liên tiếp dài nhất có trung bình cộng lớn hơn K.

(tức là nếu không tìm được dãy nào thỏa mãn thì ghi ra số 0).

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 7 3  1 5 2 3 1 4 1 | 5 |

### S54 - MIN VÀ MAX

Cho dãy số A\[\] có N phần tử là các số nguyên dương không quá 6 chữ số.

Người ta tạo ra ma trận C\[\]\[\] như sau:

- Kích thước của C là N\*N
- Với chỉ số tính từ 1 thì C\[i\]\[j\] = j \* min (A\[i\], A\[i+1\], …, A\[i+j-1\]).
 
với 1 &lt;= j &lt;=n; 1 &lt;= i &lt;= N – j + 1.

Hãy tìm **giá trị lớn nhất của ma trận C.**

**Input**

Dòng đầu ghi số N (1 &lt; N &lt;= 105).

Dòng tiếp theo ghi N số của dãy A\[\], các giá trị đều dương và không quá 106.

**Output**

Ghi ra giá trị lớn nhất tính được.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  1 4 6 3 2 | 9 |

### S55 - THỜI GIAN TỐI THIỂU

Có K công nhận được sắp xếp dọn dẹp một tòa nhà có N tầng. Để đảm bảo tính an toàn của dự án, công việc ở tầng thứ i sẽ phải hoàn thành trước khi bắt đầu dọn dẹp tầng thứ i+1. Các công nhân làm việc theo ca, mỗi tầng được giao cho ít nhất 1 công nhân. Sau khi tầng thứ i dọn xong, các công nhân phụ trách tầng thứ i+1 sẽ bắt đầu ngay công việc.

Lượng công việc ở tầng thứ i là A\[i\]. Nếu có C công nhân làm việc tại tầng A\[i\], thời gian hoàn thành công việc sẽ là A\[i\]/C (giờ) (giữ nguyên kết quả là số thập phân).

Các bạn hãy tính giúp chủ thầu xem thời gian tối thiểu để dọn dẹp xong tòa nhà là bao nhiêu?

**Input:**

Dòng đầu là 2 số nguyên N và K (1 &lt;= M &lt;= K &lt;= 10^12).

N dòng tiếp theo, mỗi dòng gồm một số nguyên A\[i\] (1 &lt;= A\[i\] &lt;= 10^12).

**Output:**

In ra số giờ tối thiểu để hoàn thành dự án. Làm tròn đáp án đến số tự nhiên gần nhất.

**Test ví dụ:**

 | Input | Output |
|---|---|
| 2 5  10  4 | 5 |

Giải thích test:

Sắp xếp 3 công nhân ở tầng I và 2 công nhân ở tầng II. Ta có round(10/3 + 4/2) = 5.

### S60 - DÃY SỐ VÔ HẠN

Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau: *Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.*

Ví dụ với 2 bước biến đổi, ta có \[1\] à \[1 2 1\] à \[1 2 1 3 1 2 1\]. Hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

**Input:** Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).

**Output:** Với mỗi test, in ra đáp án trên một dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  3 2  4 8 | 2  4 |

Giải thích test 1: Dãy số thu được là \[1, 2, 1, 3, 1, 2, 1\].

Giải thích test 2: Dãy số thu được là \[1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1\].

### S62 - TỔNG CHỮ SỐ - 2

Cho hai số nguyên dương A và B. Tìm số N nhỏ nhất thỏa mãn: A là tổng các chữ số của N, B là tổng bình phương các chữ số của N. Nếu không tồn tại N thỏa mãn A và B hãy đưa ra -1. Giả thiết N có không quá 100 chữ số.

Ví dụ với A = 18, B = 162 ta tìm được số nhỏ nhất N=99 vì 9+9=18 và 92 + 92 = 162. Với A = 12, B = 9 ta có kết quả là -1.

**Input:** Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số A, B được viết trên một dòng. T, A, B thỏa mãn ràng buộc: 1≤T≤100; 1≤A≤100; 1≤B≤10000.

**Output:** Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    18 162    12 9 | 99  -1 |

### SEQ5 - SEQ5

seq5

### T1291 - PHÉP CỘNG

Cho một phép toán có dạng **a + b = c** với a,b,c chỉ là các số nguyên dương có một chữ số. Hãy kiểm tra xem phép toán đó có đúng hay không.

**Dữ liệu vào:** Dòng đầu ghi số bộ test. Mỗi test chỉ có một dòng ghi ra phép toán (gồm đúng 9 ký tự)

**Kết quả:** Ghi ra YES nếu phép toán đó đúng. Ghi ra NO nếu sai.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  1 + 2 = 3  2 + 2 = 5 | YES  NO |

### T1300 - SỐ KHỐI LẬP PHƯƠNG

Một số X được gọi là số khối lập phương nếu X là lũy thừa bậc 3 của số Y (X= Y3). Cho số nguyên dương N, nhiệm vụ của bạn là tìm số khối lập phương lớn nhất bằng cách loại bỏ đi các chữ số của N. Ví dụ số 4125 ta có kết quả là 125 = 53.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤1018.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng. Nếu không tìm được đáp án in ra -1.
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 2    4125    976 | 125    -1 |

### T1302 - PHÂN SỐ ĐƠN VỊ

Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2 + 1/6. Cho phân số nguyên dương P/Q bất kỳ (P &lt; Q), hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi tử số P và mẫu số Q của phân số nguyên dương được viết trên một dòng.
- T, P, Q thỏa mãn ràng buộc: 1≤T≤100; 1≤P, Q≤100.
 
**Output:**

- Đưa ra đáp án tìm được trên 1 dòng, theo dạng “1/a + 1/b + …”
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 2  2 3  1 3 | 1/2 + 1/6  1/3 |

### T1307 - BỐN ĐIỂM TRÊN MẶT PHẲNG

Cho 4 điểm trong không gian 3 chiều. Nhiệm vụ của bạn là kiểm tra xem chúng có cùng nằm trên một mặt phẳng hay không? Nếu có in ra “YES”, in ra “NO” trong trường hợp ngược lại.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 10000).

Mỗi test gồm 4 dòng, lần lượt là tọa độ nguyên x\[i\], y\[i\], z\[i\] của các điểm.

(-1000 &lt;= x\[i\], y\[i\], z\[i\] &lt;= 1000).

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

 | Input: | Output |
|---|---|
| 3  1 2 0  2 3 0  4 0 0  0 0 0  1 1 1  2 2 2  3 3 3  4 4 4  5 6 7  -8 -9 -10  12 19 0  3 1 5 | YES  YES  NO |

### T1308 - LẤY BỚT QUÂN CỜ

Trên bàn có C quân cờ. Có hai đối thủ chơi lần lượt. Mỗi lượt, người chơi sẽ lấy khỏi bàn từ 1 đến M quân cờ. Người thắng cuộc là người lấy được quân cờ cuối cùng.

Biết rằng hai người chơi đều chơi tối ưu. Hãy xác định xem ai là người thắng cuộc?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T &lt;= 1000).

Mỗi test gồm 2 số nguyên C và M (0 &lt;= C &lt;= 1000, 1 &lt;= M &lt;= 1000).

**Output:**

In ra “First” nếu người đi trước là người chiến thắng, in ra “Second” nếu người chơi sau là người chiến thắng.

**Test ví dụ:**

 | Input: | Output |
|---|---|
| 4  20 9  1 5  7 5  0 3 | Second  First  First  Second |

## CÂY NHỊ PHÂN VÀ CÂY NHỊ PHÂN TÌM KIẾM

### 1410 - DUYỆT CÂY 1

Cho phép duyệt cây nhị phân Inorder và Preorder, hãy đưa ra kết quả phép duyệt Postorder của cây nhị phân. Ví dụ với cây nhị phân có các phép duyệt cây nhị phân của cây dưới đây:

Inorder : 4 2 5 1 3 6

Preorder: : 1 2 4 5 3 6

Postorder : 4 5 2 6 3 1

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng node; dòng tiếp theo đưa vào N số theo phép duyệt Inorder; dòng cuối cùng đưa vào N số là kết quả của phép duyệt Preorder; các số được viết cách nhau một vài khoảng trống.
- T, N, node thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤1000; 1≤ giá trị node ≤104;
 
**Output:**

- Đưa ra kết quả phép duyệt Postorder theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  6    4 2 5 1 3 6  1 2 4 5 3 6 | 4 5 2 6 3 1 |

### 1411 - DUYỆT CÂY 2

Cho mảng A\[\] gồm N node là biểu diễn phép duyệt theo thứ tự giữa (Preorder) của cây nhị phân tìm kiếm. Nhiệm vụ của bạn là đưa ra phép duyệt theo thứ tự sau của cây nhị phân tìm kiếm.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng node; dòng tiếp theo đưa vào N số A\[i\]; các số được viết cách nhau một vài khoảng trống.
- T, N, node thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤A\[i\]≤104;
 
**Output:**

- Đưa ra kết quả phép duyệt Postorder theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    5    40 30 35 80 100    8    40 30 32 35 80 90 100 120 | 35 30 100 80 40    35 32 30 120 100 90 80 40 |

### 1412 - DUYỆT CÂY 3

Cho cây nhị phân, nhiệm vụ của bạn là duyệt cây theo Level-order. Phép duyệt level-order trên cây là phép thăm node theo từng mức của cây. Ví dụ với cây dưới đây sẽ cho ta kết quả của phép duyệt level-order: 20 8 22 4 12 10 14.

![https://media.geeksforgeeks.org/wp-content/cdn-uploads/BinaryTree4.png](https://media.geeksforgeeks.org/wp-content/cdn-uploads/BinaryTree4.png)

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả phép duyệt level-order theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    2    1 2 R 1 3 L    4    10 20 L 10 30 R 20 40 L 20 60 R | 1 3 2  10 0 30 40 60 |

### 1413 - DUYỆT CÂY 4

Cho hai mảng là phép duyệt Inorder và Level-order, nhiệm vụ của bạn là xây dựng cây nhị phân và đưa ra kết quả phép duyệt Postorder. Level-order là phép duyệt theo từng mức của cây. Ví dụ như cây dưới đây ta có phép Inorder và Level-order như dưới đây:

Inorder : 4 8 10 12 14 20 22

Level order: 20 8 22 4 12 10 14

![https://media.geeksforgeeks.org/wp-content/cdn-uploads/BinaryTree4.png](![https://media.geeksforgeeks.org/wp-content/cdn-uploads/BinaryTree4.png)

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng node; dòng tiếp theo đưa vào N số là phép duyệt Inorder; dòng cuối cùng đưa vào N số là phép duyệt Level-order; các số được viết cách nhau một vài khoảng trống.
- T, N, node thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤A\[i\]≤104;
 
**Output:**

- Đưa ra kết quả phép duyệt Postorder theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    3    1 0 2     0 1 2     7    3 1 4 0 5 2 6     0 1 2 3 4 5 6 | 1 2 0  3 4 1 5 6 2 0 |

### 1414 - DUYỆT CÂY 5

Cho cây nhị phân, nhiệm vụ của bạn là duyệt cây theo xoắn ốc (spiral-order). Phép. Ví dụ với cây dưới đây sẽ cho ta kết quả của phép duyệt spiral-order: 1 2 3 4 5 6 7.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả phép duyệt level-order theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    2    1 2 R 1 3 L    4    10 20 L 10 30 R 20 40 L 20 60 R | 1 3 2  10 0 30 60 40 |

### 1415 - DUYỆT CÂY 6

Cho cây nhị phân, nhiệm vụ của bạn là duyệt cây theo mức đảo ngược (revese-level-order). Với cây dưới đây sẽ cho ta kết quả của phép duyệt theo mức đảo ngược là : 7 6 5 4 3 2 1.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả phép duyệt revese-level-order theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    2    1 2 R 1 3 L    4    10 20 L 10 30 R 20 40 L 20 60 R | 3 2 1  40 20 30 10 |

### 1416 - KIỂM TRA NODE LÁ

Cho cây nhị phân, nhiệm vụ của bạn là kiểm tra xem tất cả các node lá của cây có cùng một mức hay không? Ví dụ với cây dưới đây sẽ cho ta kết quả là Yes.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2    1 2 R 1 3 L    4    10 20 L 10 30 R 20 40 L 20 60 R | 1    0 |

### 1417 - CÂY NHỊ PHÂN HOÀN HẢO

Cho cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có phải là một cây hoàn hảo hay không (perfect tree)? Một cây nhị phân được gọi là cây hoàn hảo nếu tất cả các node trung gian của nó đều có hai node con và tất cả các node lá đều có cùng một mức.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3    6    10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R    2    18 15 L 18 30 R    5    1 2 L 2 4 R 1 3 R 3 5 L 3 6 R | Yes    Yes    No |

### 1418 - CÂY NHỊ PHÂN ĐỦ

Cho cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có phải là một cây đủ hay không (full binary tree)? Một cây nhị phân được gọi là cây đủ nếu tất cả các node trung gian của nó đều có hai node con.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    4    1 2 L 1 3 R 2 4 L 2 5 R    3    1 2 L 1 3 R 2 4 L | 1    0 |

### 1419 - CÂY NHỊ PHÂN BẰNG NHAU

Cho hai cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có giống nhau hay không?

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái của mỗi cây; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    2    1 2 L 1 3 R    2    1 2 L 1 3 R    2    1 2 L 1 3 R    2    1 3 L 1 2 R | 1    0 |

### 1420 - TỔNG LỚN NHẤT

Cho cây nhị phân có giá trị mỗi node là một số, nhiệm vụ của bạn là tìm tổng lớn nhất từ một node lá này sang một node lá khác? Ví dụ với cây dưới đây ta có tổng lớn nhất là 27.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1    12    -15 5 L -15 6 R 5 -8 L 5 1 R -8 2 L -8 -3 R 6 3 L 6 9 R 9 0 R 0 4 L 0 -1 R -1 10 L | 27 |

### 1421 - BIẾN ĐỔI SANG CÂY NHỊ PHÂN TÌM KIẾM

Cho cây nhị phân, nhiệm vụ của bạn là dịch chuyển cây nhị phân thành cây nhị phân tìm kiếm. Phép dịch chuyển phải bảo toàn được cấu trúc cây nhị phân ban đầu.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
- T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng là phép duyệt Inorder của cây tìm kiếm.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    2    1 2 R 1 3 L    4    10 20 L 10 30 R 20 40 L 20 60 R | 1 2 3    10 20 30 40 60 |

### 1422 - XÂY DỰNG LẠI CÂY NHỊ PHÂN TÌM KIẾM

Cho một mảng là phép duyệt level-order của cây nhị phân tìm kiếm. Nhiệm vụ của bạn là xây dựng lại cây nhị phân tìm kiếm bảo toàn được cấu trúc cây nhị phân ban đầu.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm dòng: dòng đầu tiên đưa vào số N là số lượng node của cây tìm kiếm; dòng tiếp theo đưa vào phép duyệt level-order của cây tìm kiếm; các số được viết cách nhau một vài khoảng trống.
- T, N, node thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤node≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng là phép duyệt Inorder của cây tìm kiếm.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    9    7 4 12 3 6 8 1 5 10    6    1 3 4 6 7 8 | 7 4 3 1 6 5 12 8 10    1 3 4 6 7 8 |

### 1423 - DUYỆT CÂY NHỊ PHÂN TÌM KIẾM 1

Cho một mảng A\[\] gồm N phần tử biểu diễn phép duyệt preorder của cây nhị phân tìm kiếm. Nhiệm vụ của bạn là đưa ra phép duyệt postorder của cây nhị phân tìm kiếm.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng node của cây tìm kiếm; dòng tiếp theo đưa vào phép duyệt preorder của cây tìm kiếm; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤A\[i\]≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng là phép duyệt postorder của cây tìm kiếm.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    5    40 30 35 80 100    8    40 30 32 35 80 90 100 120 | 35 30 100 80 40    35 32 30 120 100 90 80 40 |

### 1424 - DUYỆT CÂY NHỊ PHÂN TÌM KIẾM 2

Cho một mảng A\[\] gồm N phần tử. Nhiệm vụ của bạn là đưa ra 1 nếu mảng A\[\] biểu diễn phép duyệt inorder của cây nhị phân tìm kiếm, ngược lại đưa ra 0.

 **Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng node của cây tìm kiếm; dòng tiếp theo đưa vào N số A\[i\]; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤A\[i\]≤104;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3    5    10 20 30 40 50    6    90 80 100 70 40 30    3    1 1 2 | 1    0    0 |

### 1425 - NODE LÁ CỦA CÂY NHỊ PHÂN TÌM KIẾM

Cho dãy số gồm N số là phép duyệt theo thứ tự trước (Preorder) của một cây nhị phân tìm kiếm. Hãy in ra tất cả các node lá của cây ?

Ví dụ với dãy A\[\] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} là phép duyệt cây theo thứ tự trước sẽ cho ta kết quả: 15, 23, 28, 33, 38, 45.

 **Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất là số tự nhiên N (N≤106). Dòng tiếp theo là N số là phép duyệt theo thứ tự trước của cây BST.
 
 **Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  6  10 5 1 7 40 50  11  30 20 15 25 23 28 40 35 33 38 45 | 1 7 50  15 3 28 33 38 45 |

### 1426 - NODE TRUNG GIAN CỦA CÂY NHỊ PHÂN TÌM KIẾM

Cho dãy số gồm N số là phép duyệt theo thứ tự trước (Preorder) của một cây nhị phân tìm kiếm. Hãy đưa ra số các node trung gian của cây ?

Ví dụ với dãy A\[\] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} là phép duyệt cây theo thứ tự trước sẽ cho ta kết quả là 5 bao gồm các node: 30, 20, 25, 40, 35.

 **Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất là số tự nhiên N (N≤106). Dòng tiếp theo là N số là phép duyệt theo thứ tự trước của cây BST.
 
 **Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 2  6  10 5 1 7 40 50  11  30 20 15 25 23 28 40 35 33 38 45 | 3  5 |

### 1427 - ĐỘ SÂU CÂY NHỊ PHÂN TÌM KIẾM

Cho dãy số gồm N số là phép duyệt theo thứ tự trước (Preorder) của một cây nhị phân tìm kiếm. Hãy tìm độ sâu của cây ?

Ví dụ với dãy A\[\] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} là phép duyệt cây theo thứ tự trước sẽ cho ta kết quả là 3.

 **Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất là số tự nhiên N (N≤106). Dòng tiếp theo là N số là phép duyệt theo thứ tự trước của cây BST.
 
 **Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 2  6  10 5 1 7 40 50  11  30 20 15 25 23 28 40 35 33 38 45 | 2  3 |

### 1428 - CÂY NHỊ PHÂN TÌM KIẾM CÂN BẰNG 1

Hãy xây dựng một cây nhị phân tìm kiếm cân bằng từ dãy số A\[\] =(a0, a1, .., an-1}. Đưa ra nội dung node gốc của cây tìm kiếm cân bằng. Ví dụ với dãy A\[\]={40, 28, 45, 38, 33, 15, 25, 20, 23, 35, 30} ta sẽ có cây nhị phân tìm kiếm cân bằng với node gốc là 33.

 **Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất là số tự nhiên N (N≤106). Dòng tiếp theo là N số của mảng A\[\].
 
 **Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  11  40 28 45 38 33 15 25 20 23 35 30  10  1 2 3 4 5 6 7 8 9 10 | 30  5 |

### 1429 - CÂY NHỊ PHÂN TÌM KIẾM CÂN BẰNG 2

Hãy xây dựng một cây nhị phân tìm kiếm cân bằng từ dãy số A\[\] =(a0, a1, .., an-1}. Đưa ra phép duyệt theo thứ tự trước (preorder) của cây tìm kiếm cân bằng. Ví dụ với dãy A\[\]={40, 28, 45, 38, 33, 15, 25, 20, 23, 35, 30} ta sẽ có phép duyệt theo thứ tự trước của cây nhị phân tìm kiếm cân bằng với node gốc là 33 : 33, 25, 20, 15, 23, 28, 30, 40, 38, 35, 45.

 **Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất là số tự nhiên N (N≤106). Dòng tiếp theo là N số của mảng A\[\].
 
 **Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  11  40 28 45 38 33 15 25 20 23 35 30  10  1 2 3 4 5 6 7 8 9 10 | 30 23 15 20 25 28 38 33 35 40 45  5 2 1 3 4 8 6 7 9 10 |

## QUY HOẠCH ĐỘNG

### 1450 - BÀI 1. XÂU CON CHUNG DÀI NHẤT

Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này *(các phần tử không nhất thiết phải liên tiếp nhau).*

**Input:** Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

**Output:** Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2  AGGTAB  GXTXAYB  AA  BB | 4  0 |

Giải thích test 1: Dãy con chung là G, T, A, B.

### 1451 - DÃY CON LẶP LẠI DÀI NHẤT

Cho xâu ký tự S. Nhiệm vụ của bạn là tìm độ dài dãy con lặp lại dài nhất trong S. Dãy con có thể chứa các phần tử không liên tiếp nhau.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào độ dài xâu str; dòng tiếp theo đưa vào xâu S.
- T, str thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 1 ≤ size(S) ≤ 100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    3    abc  5    axxxy | 0    2 |

### 1452 - DÃY CON CHUNG DÀI NHẤT CỦA BA XÂU

Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào độ dài xâu X, Y, X; dòng tiếp theo đưa vào ba xâu X, Y, Z.
- T, X, Y, Z thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 1 ≤ size(X), size(Y), size(Z) ≤ 100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  5 8 13  geeks geeksfor geeksforgeeks  7 6 5  abcd1e2 bc12ea bd1ea | 5  3 |

### 1453 - BÀI 4. DÃY CON TĂNG DÀI NHẤT

Cho một dãy số nguyên gồm N phần tử A\[1\], A\[2\], ... A\[N\].

Biết rằng dãy con tăng là 1 dãy A\[i1\],... A\[ik\]

thỏa mãn i1 &lt; i2 &lt; ... &lt; ik và A\[i1\] &lt; A\[i2\] &lt; .. &lt; A\[ik\].

Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử?

**Input:** Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). Dòng thứ 2 ghi N số nguyên A\[1\], A\[2\], .. A\[N\] (1 ≤ A\[i\] ≤ 1000).

**Output:** Ghi ra độ dài của dãy con tăng dài nhất.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 6  1 2 5 4 6 2 | 4 |

### 1454 - BÀI 5. TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN

Cho dãy số A\[\] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A\[\]. Ví dụ với dãy A\[\] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100. Với dãy A\[\] = {10, 7, 5} ta có kết quả là 10. Với dãy A\[\] = {1, 2, 3, 5} ta có kết quả là 11.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A\[\]; dòng tiếp theo đưa vào N số A\[i\]; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤103; 0≤A\[i\] ≤103.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 3  7  1 101 2 3 100 4 5  3  10 7 5  4  1 2 3 5 | 106  10  11 |

### 1455 - BÀI 6. SỐ BƯỚC ÍT NHẤT

Cho mảng A\[\] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A\[\] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số của mảng A\[\]; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤1000; 1≤A\[i\] ≤1000.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 1    7    2 3 5 1 4 7 6 | 3 |

### 1456 - BÀI 7. CON ẾCH

Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là số n là số bước con ếch có thể lên được đỉnh.
- T, n thỏa mãn ràng buộc: 1≤T≤100; 1≤n ≤50.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| Input | Output |
|---|---|
| 2    1    5 | 1    13 |

### 1457 - BÀI 8. TỔ HỢP C(N, K)

Cho 2 số nguyên n, k. Bạn hãy tính C(n, k) modulo 109+7.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm 2 số nguyên n, k (1 ≤ k ≤ n ≤ 1000).

**Output:**

- Với mỗi test, in ra đáp án trên một dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2  5 2  10 3 | 10  120 |

### 1458 - BÀI 9. BẬC THANG

Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm hai số nguyên dương N và K(1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).

**Output:**

- Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2  2 2  4 2 | 2  5 |

Giải thích test 1: Có 2 cách đó là (1, 1) và (2).

Giải thích test 2: 5 cách đó là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).

### 1459 - XÂU CON ĐỐI XỨNG DÀI NHẤT

Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.

Hãy tìm xâu con đối xứng dài nhất của S.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm một xâu S có độ dài không vượt quá 1000, chỉ gồm các kí tự thường.
 
**Output:** Với mỗi test, in ra đáp án tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  abcbadd  aaaaa | 5  5 |

### 1460 - BÀI 11. XÂU ĐỐI XỨNG 1

Cho xâu ký tự str. Nhiệm vụ của bạn là tìm số phép chèn tối thiểu các ký tự vào str để str trở thành xâu đối xứng. Ví dụ: str =”ab” ta có số phép chèn tối thiểu là 1 để trở thành xâu đối xứng “aba” hoặc “bab”. Với xâu str=”aa” thì số phép chèn tối thiểu là 0. Với xâu str=”abcd” có số phép chèn tối thiểu là 3 để trở thành xâu “dcbabcd”

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự được viết trên một dòng
- T, str thỏa mãn ràng buộc: 1≤T≤100; 1≤length(str)≤40.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 3    abcd    aba    geeks | 3    0  3 |

### 1461 - BÀI 12. XÂU ĐỐI XỨNG 2

Cho xâu ký tự S. Nhiệm vụ của bạn là tìm số phép loại bỏ ít nhất các ký tự trong S để S trở thành xâu đối xứng. Chú ý, phép loại bỏ phải bảo toàn tính trước sau của các ký tự trong S.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự được viết trên một dòng
- T, str thỏa mãn ràng buộc: 1≤T≤100; 1≤length(S)≤100.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    aebcbda    geeksforgeeks | 2    8 |

### 1462 - BÀI 13. XEM PHIM

John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim. Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w\[i\] của từng con (đều nhỏ hơn C), hãy cho biết **khối lượng bò lớn nhất** mà John có thể đưa đi xem phim là bao nhiêu.

**Input:**

- Dòng 1: 2 số nguyên C và N cách nhau bởi dấu cách
- Dòng 2..N+1: Ghi lần lượt các số nguyên: w\[i\]

**Output:**

- Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 259 5  81  58  42  33  61 | 242 |

### 1463 - BÀI 14. CÁI TÚI

Một người có cái túi thể tích V (V&lt;1000). Anh ta có N đồ vật cần mang theo (N≤1000), mỗi đồ vật có thể tích là A\[i\] (A\[i\]≤100) và giá trị là C\[i\] (C\[i\]≤100). Hãy xác định tổng giá trị lớn nhất của các đồ vật mà người đó có thể mang theo, sao cho tổng thể tích không vượt quá V.

**Input**

- Dòng đầu ghi số bộ test T (T&lt;10)
- Mỗi bộ test gồm ba dòng. Dòng đầu ghi 2 số N và V. Dòng tiếp theo ghi N số của mảng A. Sau đó là một dòng ghi N số của mảng C.
- Dữ liệu vào luôn đảm bảo không có đồ vật nào có thể tích lớn hơn V.

**Output**

- Với mỗi bộ test, ghi trên một dòng giá trị lớn nhất có thể đạt được.

**Ví dụ**

| **Input** | **Output** |
|---|---|
| 1  15 10  5 2 1 3 5 2 5 8 9 6 3 1 4 7 8  1 2 3 5 1 2 5 8 7 4 1 2 3 2 1 | 15 |

### 1465 - BÀI 16. KÝ TỰ GIỐNG NHAU

Giả sử bạn cần viết N ký tự giống nhau lên màn hình. Bạn chỉ được phép thực hiện ba thao tác dưới đây với chi phí thời gian khác nhau:

- Thao tác insert: chèn một ký tự với thời gian là X.
- Thao tác delete: loại bỏ ký tự cuối cùng với thời gian là Y.
- Thao tác copying: copy và paste tất cả các ký tự đã viết để số ký tự được nhân đôi với thời gian là Z.

Hãy tìm thời gian ít nhất để có thể đưa ra màn hình N ký tự giống nhau. Ví dụ với N = 9, X =1, Y = 2, Z =1 ta có kết quả là 5 bằng cách thực hiện: insert, insert, copying, copying, insert.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số các ký tự giống nhau cần viết lên màn hình; dòng tiếp theo đưa vào bộ ba số X, Y, Z tương ứng với thời gian thực hiện ba thao tác; các số được viết cách nhau một vài khoảng trống.
- T, N, X, Y, Z thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤100; 1≤X, Y, Z ≤100.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    9    1 2 1    10    2 5 4 | 5    14 |

### 1466 - BÀI 17. TỔNG CÁC XÂU CON

Cho số nguyên dương N được biểu diễn như một xâu ký tự số. Nhiệm vụ của bạn là tìm tổng của tất cả các số tạo bởi các xâu con của N. Ví dụ N=”1234” ta có kết quả là 1670 = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤1012.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    1234    421 | 1670    491 |

### 1467 - BÀI 18. TỔNG BẰNG K

Cho một mảng A\[\] gồm N số nguyên và số K. Tính số cách lấy tổng các phần tử của A\[\] để bằng K. Phép lấy lặp các phần tử hoặc sắp đặt lại các phần tử được chấp thuận. Ví dụ với mảng A\[\] = {1, 5, 6}, K = 7 ta có 6 cách sau:

7 = 1 + 1 + 1+1 + 1 + 1+1 (lặp số 1 7 lần)

7 = 1 + 1 + 5 (lặp số 1)

7 = 1 + 5 + 1 (lặp và sắp đặt lại số 1)

7 = 1 + 6

7 = 6 + 1

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào N và K; dòng tiếp theo đưa vào N số của mảng A\[\]; các số được viết cách nhau một vài khoảng trống.
- T, N, K, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤1000; 1≤A\[i\]≤100.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng. Khi kết quả quá lớn đưa ra kết quả dưới dạng modulo với 109+7.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    3 7    1 5 6    4 14    12 3 1 9 | 6    150 |

### 1468 - BÀI 19. GIẢI MÃ

Một bản tin M đã mã hóa bí mật thành các con số theo ánh xạ như sau: ‘A’-&gt;1, ‘B’-&gt;2, .., ‘Z’-&gt;26. Hãy cho biết có bao nhiêu cách khác nhau để giải mã bản tin M. Ví dụ với bản mã M=”123” nó có thể được giải mã thành ABC (1 2 3), LC (12 3), AW(1 23).

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự số M.
- T, M thỏa mãn ràng buộc: 1≤T≤100; 1≤length(M)≤40.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    123    2563 | 3    2 |

### 1469 - BÀI 20. TỔNG BÌNH PHƯƠNG

Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. Ví dụ số 100 = 102 hoặc 100 = 52 + 52 + 52 + 52. Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi test là một số tự nhiên N được viết trên 1 dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤10000.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 3    100    6    25 | 1    3    1 |

### 1470 - HÌNH VUÔNG LỚN NHẤT

Cho một bảng số N hàng, M cột chỉ gồm 0 và 1. Bạn hãy tìm hình vuông có kích thước lớn nhất, sao cho các số trong hình vuông toàn là số 1.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test bắt đầu bởi 2 số nguyên N, M (1 ≤ N, M ≤ 500).
- N dòng tiếp theo, mỗi dòng gồm M số mô tả một hàng của bảng.
 
**Output:**

- Với mỗi test, in ra đáp án là kích thước của hình vuông lớn nhất tìm được trên một dòng.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 2  6 5  0 1 1 0 1  1 1 0 1 0  0 1 1 1 0  1 1 1 1 0  1 1 1 1 1  0 0 0 0 0  2 2  0 0  0 0 | 3  0 |

## THUẬT TOÁN QUY HOẠCH ĐỘNG

### 1464 - BÀI 15. BÀI TOÁN CÁI TÚI KHÔNG NGUYÊN

Một trong những bài toán kinh điển của lý thuyết tổ hợp là Bài toán cái túi. Bài toán được phát biểu như sau: Một nhà thám hiểm cần đem theo một cái túi trọng lượng không quá W. Có N đồ vật cần đem theo. Đồ vật thứ i có trọng lượng A\[i\], có giá trị sử dụng C\[i\]. Nhiệm vụ của bạn là hãy tìm cách đưa đồ vật vào túi cho nhà thám hiểm sao cho tổng giá trị sử dụng các đồ vật trong túi là lớn nhất. Giả thiết với mỗi vật dụng, ta có thể chia nhỏ chúng ra thành nhiều phần khác nhau (Fraction Knapsack).

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số N, W tương ứng với số lượng đồ vật và trọng lượng túi; phần thứ 2 đưa vào 2\*N số tương ứng với trọng lượng đồ vật A\[i\] và giá trị sử dụng C\[i\] của mỗi đồ vật.
- T, N, W, A\[i\], C\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, W≤100; 1≤A\[i\], C\[i\]≤100.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng, in ra 2 chữ số sau dấu phảy.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    3 50    60 10  100 20  120 30    2 50    60 10  100 20 | 240.00    160.00 |

### 1471 - BÀI 22. ĐƯỜNG ĐI NHỎ NHẤT

Cho bảng A\[\] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. Khi đi qua ô (i, j), điểm nhận được bằng A\[i\]\[j\].

Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm số nguyên dương N và M.
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A\[i\]\[j\] (0 ≤ A\[i\] ≤ 1000).

**Output:**

- Với mỗi test, in ra độ dài dãy con tăng dài nhất trên một dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 1  3 3  1 2 3  4 8 2  1 5 3 | 8 |

Giải thích test: Đường đi (1, 1) à (1, 2) à (2, 3) à (3, 3).

### 1474 - BÀI 25. SO SÁNH XÂU CON

Cho một xâu S và Q truy vấn. Mỗi truy vấn có dạng a b c d yêu cầu bạn so sánh 2 xâu con từ vị trí aà b và cà d. In ra “YES” nếu bạn có thể sắp xếp lại các kí tự của 2 xâu con sao cho 2 xâu mới thu được giống nhau, in ra “NO” trong trường hợp ngược lại.

**Input:** Dòng đầu tiên là số nguyên N (1 ≤ N ≤ 50 000).

Dòng tiếp theo là số lượng truy vấn Q (1 ≤ Q ≤ 50 000).

Q dòng tiếp theo, mỗi dòng gồm 4 số nguyên a b c d.

**Output:** Với mỗi truy vấn in ra đáp án tìm được trên một dòng.

**Ví dụ:**

| **Test 1** | **Test 2** |
|---|---|
| Input:  abbbabba  2  3 5 2 4  1 2 6 7  Output:  NO    NO | Input:  acmptit  2  1 2 5 6  5 5 7 7  Output:  NO    YES |

*Giải thích test 1: Truy vấn 1: bba – bbb. Truy vấn 2: ab – bb*

### S101 - TÍNH P(N,K)

P(n, k) là số phép biểu diễn các tập con có thứ tự gồm k phần tử của tập gồm n phần tử. Số P(n, k) được định nghĩa theo công thức sau:

![Ảnh](./img/S101.png)

Cho số hai số n, k. Hãy tìm P(n,k) theo modulo 109+7.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số n, k được viết trên một dòng.
- T, n, k thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 1 ≤ n,k ≤ 1000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    5 2    4 2 | 20    12 |

### S102 - TẬP CON BẰNG NHAU

Cho tập các số A\[\] = (a1, a2, .., an). Hãy kiểm tra xem ta có thể chia tập A\[\] thành hai tập con sao cho tổng các phần tử của hai tập con bằng nhau hay không. Đưa ra YES nếu có thể thực hiện được, ngược lại đưa ra NO.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A\[\]; dòng tiếp theo đưa vào N phần tử của dãy số A\[\].
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤100; 1≤ A\[i\] ≤100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 | Input | Output |
|---|---|
| 2    4    1 5 11 5    3    1 3 5 | YES    NO |

### S103 - TỔNG BÌNH PHƯƠNG

Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. Ví dụ số 100 = 102 hoặc 100 = 52 + 52 + 52 + 52. Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi test là một số tự nhiên N được viết trên 1 dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤10000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3    100    6    25 | 1    3    1 |

### S104 - DÃY SỐ BI-TONIC

Một dãy số được gọi là Bi-tonic nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm dần. Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bi-tonic của dãy số A\[\]. Ví dụ với dãy A\[\] = {1, 15, 51, 45, 33, 100, 12, 18, 9} ta có kết quả là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A\[\]; dòng tiếp theo đưa vào N số A\[i\]; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤100; 0≤A\[i\] ≤100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    6    80 60 30 40 20 10    9    1 15 51 45 33 100 12 18 9 | 210    194 |

### S105 - TỔNG CHỮ SỐ

Cho hai số nguyên dương A và B. Tìm số N nhỏ nhất thỏa mãn: A là tổng các chữ số của N, B là tổng bình phương các chữ số của N. Nếu không tồn tại N thỏa mãn A và B hãy đưa ra -1. Giả thiết N có không quá 100 chữ số.

Ví dụ với A = 18, B = 162 ta tìm được số nhỏ nhất N=99 vì 9+9=18 và 92 + 92 = 162. Với A = 12, B = 9 ta có kết quả là -1.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số A, B được viết trên một dòng.
- T, A, B thỏa mãn ràng buộc: 1≤T≤100; 1≤A≤100; 1≤B≤10000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    18 162    12 9 | 99  -1 |

### S106 - GIẢI MÃ

Một bản tin M đã mã hóa bí mật thành các con số theo ánh xạ như sau: ‘A’-&gt;1, ‘B’-&gt;2, .., ‘Z’-&gt;26. Hãy cho biết có bao nhiêu cách khác nhau để giải mã bản tin M. Ví dụ với bản mã M=”123” nó có thể được giải mã thành ABC (1 2 3), LC (12 3), AW(1 23).

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự số M.
- T, M thỏa mãn ràng buộc: 1≤T≤100; 1≤length(M)≤40.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    123    2563 | 3    2 |

### S107 - ĐƯỜNG ĐI NHỎ NHẤT - 1

Cho bảng A\[\] kích thước N x M (N hàng, M cột).

Bạn được phép **đi xuống dưới, đi sang phải và đi xuống ô chéo dưới**. Khi đi qua ô (i, j), điểm nhận được bằng A\[i\]\[j\].

Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm số nguyên dương N và M (1 &lt; N, M &lt; 500)
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A\[i\]\[j\] (0 ≤ A\[i\] ≤ 1000).
 
**Output:**

- Với mỗi test, in ra giá trị tổng điểm nhỏ nhất tìm được trên một dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  3 3  1 2 3  4 8 2  1 5 3 | 8 |

Giải thích test: Đường đi (1, 1) - (1, 2) - (2, 3) - (3, 3).

### S108 - ĐƯỜNG ĐI NHỎ NHẤT - 2

Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng A\[i\]\[j\]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất.

Tại mỗi ô, bạn được phép **đi sang trái, sang phải, đi lên trên và xuống dưới**.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A\[i\]\[j\] (0 ≤ A\[i\]\[j\] ≤ 9).
 
**Output:**

- Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 3  4  5  0 3 1 2 9  7 3 4 9 9  1 7 5 5 3  2 3 4 2 5  1  6  0 1 2 3 4 5  5 5  1 1 1 9 9  9 9 1 9 9  1 1 1 9 9  1 9 9 9 9  1 1 1 1 1 | 24  15  13 |

### S111 - DÃY CON TĂNG DÀI NHẤT 2 CHIỀU

Cho N cặp số Ai (xi, yi). Cặp (x1, y1) &lt; (x2,y2) nếu như x1 &lt; x2 và y1 &lt; y2.

Nhiệm vụ của bạn là hãy tìm dãy con tăng dài nhất trên mảng các cặp số này.

**Input:**

Dòng đầu tiên là số nguyên N (N &lt;= 100 000).

N dòng tiếp theo, mỗi dòng gồm 2 số nguyên xi, yi. Các số có giá trị tuyệt đối không vượt quá 109.

**Output:**

In ra một số nguyên là độ dài dãy con tăng dài nhất tìm được.

 | Input: | Output |
|---|---|
| 8  1 3  3 2  1 1  4 5  6 3  9 9  8 7  7 6 | 3 |

### S112 - CHIA HẾT

Cho một dãy số T gồm N phần tử T1, T2, … , TN phân biệt. Một số nguyên dương được gọi là số phù hợp với dãy T nếu tổng các chữ số của nó chia hết cho một trong N số Ti.

Hãy đếm số lượng các số phù hợp với dãy T trong đoạn \[L, R\].

**Input**

Dòng đầu tiên gồm một số nguyên dương Q (1 ≤ Q ≤ 20) là số lượng truy vấn.

Mỗi truy vấn có dạng như sau:

Dòng đầu tiên gồm 2 số nguyên L, R (1 ≤ L ≤ R ≤ 1018).

Dòng thứ hai gồm 1 số nguyên N (1 ≤ N ≤ 10).

Dòng thứ 3 gồm N số nguyên T1, T2, … , TN (1 ≤ Ti ≤ 50). Các giá trị của Ti phân biệt.

**Output**

Với mỗi truy vấn, in ra kết quả tính được trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  1 20  1  2  1 21  2  2 3  15 | 10  15 |

**Giải thích:** Ở truy vấn đầu tiên, các số thoả mãn là 2, 4, 6, 8, 11, 13, 15, 17, 19, 20.

### S113 - XÂU ĐỐI XỨNG - 3

Xâu đối xứng là xâu mà khi ta đảo ngược thứ tự của xâu thì nhận lại được xâu cũ.

**Xâu tốt** là xâu mà mỗi ký tự của nó thuộc về ít nhất 1 xâu đối xứng có độ dài lớn hơn 1.

Ví dụ: AABBAA, AABA,.. là các xâu tốt.

Giá sử cho xâu s chỉ có 2 ký tự A và B. Hãy đếm số xâu con là xâu tốt trong s ( Xâu con là dãy các phần tử liền kề nhau của xâu gốc ).

**Input:**

Dòng đầu là số ký tự của s ( Không vượt quá 105)

Dòng thứ 2 là xâu S chỉ gồm các ký tự A và B

**Ouput**

Ghi ra kết quả đếm được

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 7  BABBAAB | 13 |
| 6  BAABBA | 8 |

### S114 - TRÒ CHƠI DÒ MÌN

![Ảnh](./img/S114.jpg)

Hầu hết chúng ta đã quen thuộc với trò chơi Dò mìn trên Windows.

Mỗi ô hoặc là chưa biết, hoặc là chứa mìn, hoặc là chứa số lượng số các quả mìn xung quanh chúng.

Ở phiên bản dễ hơn của trò chơi này. Bàn chơi là một đường thẳng.

Cũng với quy tắc như vậy. Ô nào có mìn được đánh dấu là \*, chưa biết là ? nếu biết chắc chắn rằng không chứa mìn thì sẽ có giá trị là số mìn xung quanh nó ( Vì là đường thẳng nên số mìn xung quanh chỉ có thể là 0, 1 hoặc 2).

Ví dụ một dãy hợp lệ: ?1?\*101\*2\*

 Yêu cầu: Hãy tìm **số cách** đặt ký tự hợp lệ vào tất cả các ô chưa biết ( ô có chứa dấu ? ) sao cho dãy sau khi điền là hợp lệ.

**Input:**

Xâu ký tự có độ dài không vượt quá 106 ký tự.

**Output:**

Gồm một dòng duy nhất ghi kết quả của bài toán.

 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| \*2\*? | 2 |
| ?1?\*101\*2\* | 2 |

Giải thích test:

Test 1: 2 ký tự có thể điền là 1 hoặc \*

Test 2: 2 ký tự có thể điền là \*1 hoặc 0\*

### S115 - BÀI TOÁN CÁI TÚI KHÔNG NGUYÊN

Một trong những bài toán kinh điển của lý thuyết tổ hợp là Bài toán cái túi. Bài toán được phát biểu như sau: Một nhà thám hiểm cần đem theo một cái túi trọng lượng không quá W. Có N đồ vật cần đem theo. Đồ vật thứ i có trọng lượng A\[i\], có giá trị sử dụng C\[i\]. Nhiệm vụ của bạn là hãy tìm cách đưa đồ vật vào túi cho nhà thám hiểm sao cho tổng giá trị sử dụng các đồ vật trong túi là lớn nhất. Giả thiết với mỗi đồ vật, ta có thể chia nhỏ chúng ra thành nhiều phần khác nhau (Fraction Knapsack).

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số N, W tương ứng với số lượng đồ vật và trọng lượng túi; phần thứ 2 đưa vào 2\*N số tương ứng với trọng lượng đồ vật A\[i\] và giá trị sử dụng C\[i\] của mỗi đồ vật.
- T, N, W, A\[i\], C\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, W≤100; 1≤A\[i\], C\[i\]≤100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng, in ra 2 chữ số sau dấu phảy.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    3 50    60 10  100 20  120 30    2 50    60 10  100 20 | 240.00    160.00 |

### S126 - NGÂN HÀNG

Một ngân hàng muốn dành ra N đồng để cho sinh viên vay vốn ưu đãi và có m sinh viên đăng ký, sinh viên thứ i đăng ký vay ti đồng. Ngân hàng muốn đáp ứng được nhiều sinh viên nhất nhưng phải đảm bảo nếu sinh viên thứ i được cho vay thì phải vay đúng ti đồng.

Trong các cách thỏa mãn, ngân hàng muốn chọn cách mà số sinh viên vay ít nhất là lớn nhất.

**Yêu cầu:** Cho t1,t2,…,tm và lần lượt Q giá trị N giả định.

Với mỗi giá trị N, hãy đưa ra cách cho vay thỏa mãn yêu cầu đề bài.

**Input**

Dòng đầu ghi 2 số m và Q (m,Q ≤ 9000).

Dòng thứ 2 ghi m số nguyên dương t1 … tm (0 &lt; ti ≤ 109)

Dòng thứ 3 ghi Q giá trị N giả định (0 &lt; Ni ≤ 1018)

**Output**

Gồm Q dòng, mỗi dòng ghi 2 số s,v lần lượt là số sinh viên được vay vốn và số tiền sinh viên được vay ít nhất ứng với giá trị N giả định.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5 2  1 3 2 3 5  6 8 | 3 1  3 2 |

### S128 - PHẦN TỬ CHỐT

Cho dãy số A\[\] gồm có N phần tử. Phần tử A\[i\] được gọi là phần tử Pivot (hay phần tử chốt) nếu như nó phân hoạch dãy số thành 2 phần:

- Các phần tử bên trái có giá trị nhỏ hơn hoặc bằng A\[i\],
- Các phần tử bên phải có giá trị lớn hơn A\[i\].
 
Với dãy số A\[\] = {2, 1, 3, 4, 6, 5, 7}, có 3 phần tử chốt là 3, 4, 7. Với phần tử 3, ta có phân hoạch {2, 1}, 3 và {4, 6, 5, 7} thỏa mãn các tính chất nêu trên. Với phần tử 7, tập hợp các phần tử bên phải là một tập rỗng nên cũng thõa mãn yêu cầu.

Việc xác định được phần tử chốt đóng vai trò quan trọng trong thuật toán Quicksort. Các bạn hãy xác định xem dãy số đã cho có bao nhiêu phần tử chốt?

**Input:**

Dòng đầu tiên là số lượng bộ test (T ≤ 10).

Dòng test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100 000) là số lượng phần tử của dãy số.

Dòng tiếp theo gồm N phần tử A\[i\] (0 ≤ A\[i\] ≤ 109).

**Output:**

In ra đáp án là số lượng phần tử chốt tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3  3  1 1 1  3  1 2 3  7  2 1 3 4 6 5 7 | 1  3  3 |

### S130 - CẶP SỐ ĐẶC BIỆT

Cho dãy số nguyên A có n phần tử.

Hãy đếm xem có bao nhiêu cặp (i,j) thỏa mãn:

- i &lt; j
- A\[i\] &gt; A\[j\] và đều là số chẵn
- Tồn tại chỉ số k với i &lt; k &lt; j sao cho A\[k\] là số lẻ
 
**Input**

Dòng đầu tiên ghi số n (1 ≤ n ≤ 105).

**Output**

Dòng thứ 2 ghi n số của dãy A, các giá trị A\[i\] không vượt quá 106.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  4 3 2 5 1 | 1 |

### S132 - MA TRẬN CON LỚN NHẤT

Giả sử giá trị của một ma trận là hiệu giữa tổng các số trên đường chéo chính và tổng các số trên đường chéo phụ. Cho ma trận A kích thước N \* N, hãy tìm ma trận con của A sao cho ma trận con đó có giá trị lớn nhất.

**Input**

Dòng đầu ghi số N (2 ≤ N ≤ 400)

N dòng tiếp theo ghi ma trận A. Các số trong đoạn \[-1000, 1000\].

**Output**

Ghi ra giá trị lớn nhất tìm được.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 4  9 -2 -8 0  -6 -2 0 -9  4 -5 6 1  1 3 4 9 | 26 |

### S134 - BÀI TOÁN CHỮ SỐ - 1

Cho 2 số nguyên A, B. Nhiệm vụ của bạn là hãy đếm xem mỗi chữ số sẽ xuất hiện bao nhiêu lần nếu như liệt kê tất cả các số từ A đến B.

**Input**

- Số đầu tiên là số lượng bộ test T (T ≤ 5000). Mỗi test gồm 2 số nguyên A và B.
- 1 ≤ A ≤ B ≤ 108.
 
**Output**

- Với mỗi test, hãy in ra trên một dòng 10 số nguyên, là tần số xuất hiện của các chữ số từ 0 đến 9.
 
**Example**

 | **Input** | **Output** |
|---|---|
| 3  1 9  10 456  123 2437 | 0 1 1 1 1 1 1 1 1 1  85 195 195 195 152 92 85 84 84 84  661 1738 1206 770 700 662 662 662 661 661 |

### S15 - CHIA ĐÔI

Ngày lễ Valentine, Nam mang hộp socola đến nhà bạn gái để tặng nhưng bạn gái từ chối. Nam đành phải mang về ăn dần. Giả sử socola dạng thanh và rất đắng nên mỗi lần Nam chỉ ăn một nửa cái. Nếu lấy ra một thanh nguyên vẹn thì Nam bẻ đôi thanh socola đó rồi ăn một nửa, một nửa còn lại bỏ vào trong hộp. Nếu lấy ra là một nửa thanh thì Nam sẽ ăn ngay.

Giả sử nếu lấy ra một thanh nguyên vẹn thì Nam viết ra chữ D (devide), còn nếu lấy ra một nửa thì Nam viết chữ C (conquer). Hỏi Nam có tất cả bao nhiêu cách để ăn hết hộp có N thanh socola. Tức là có bao nhiêu xâu ký tự khác nhau được tạo ra.

**Input**

Dòng đầu ghi số bộ test, mỗi test ghi một số nguyên N là số thanh socola trong hộp (không quá 30).

**Ouput**

Mỗi test ghi ra số cách khác nhau giúp Nam ăn hết hộp socola đó.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 6  6  1  4  2  3  30 | 132  1  14  2  5  3814986502092304 |

### S51 - TỔNG DÃY CON LIÊN TIẾP

Cho dãy số nguyên dương A\[\] có N phần tử. Người ta cố gắng chia dãy A\[\] thành các đoạn liên tiếp sao tổng của các đoạn đó bằng nhau.

Ví dụ: dãy A\[\] = {2, 5, 1, 3, 3, 7} có thể được chia thành 3 đoạn {2, 5} {1, 3, 3} {7} cùng có tổng các phần tử bằng 7.

Hãy tính giá trị tổng liên tiếp **nhỏ nhất** có thể của các đoạn con tổng bằng nhau trong dãy A.

**Input**

Dòng đầu ghi số bộ test, không quá 1000.

Mỗi bộ test có hai dòng, dòng đầu ghi số N (1 &lt;= N &lt;= 105), các dòng tiếp theo, mỗi dòng ghi tối đa 10 số của dãy A\[\], các giá trị A\[i\] đều dương và không quá 20000.

**Output**

Ghi ra giá trị tổng nhỏ nhất tính được

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  6  2 5 1 3 3 7  6  1 2 3 4 5 6  20  1 1 2 1 1 2 1 1 2 1  1 2 1 1 2 1 1 2 1 1 | 7  21  2 |

### S53 - DÃY CON DÀI NHẤT

Cho hai dãy số thực A\[\] và B\[\] đều có N phần tử, các giá trị là số thực và không quá 100.

Hãy tính độ dài dài nhất của dãy các vị trí (không cần liên tiếp) thỏa mãn cả hai điều kiện:

- Nếu xét các vị trí đó trên dãy A\[\] thì dãy con thu được thỏa mãn tính chất tăng dần (giá trị bằng nhau không được tính vào dãy tăng).
- Nếu xét các vị trí đó trên dãy B\[\] thì dãy con thu được thỏa mãn tính chất giảm dần (giá trị bằng nhau không được tính vào dãy giảm).
 
**Input**

Dòng đầu ghi số bộ test (không quá 100).

Mỗi bộ test bắt đầu bởi số N (không quá 500).

Tiếp theo là N dòng, mỗi dòng ghi 2 giá trị A\[i\] và B\[i\]

**Output**

Với mỗi test, ghi ra độ dài tính được trên một dòng.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  2  1.0 1.0  1.5 0.0  3  1.0 1.0  1.0 1.0  1.0 1.0  6  1.5 9.0  2.0 2.0  2.5 6.0  3.0 5.0  4.0 2.0  10.0 5.5 | 2  1  4 |

### S61 - SỐ BƯỚC ÍT NHẤT

Cho mảng A\[\] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A\[\] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số của mảng A\[\]; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤1000; 1≤A\[i\] ≤1000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1    7    2 3 5 1 4 7 6 | 3 |

### S63 - TỔNG CÁC XÂU CON

Cho số nguyên dương N được biểu diễn như một xâu ký tự số. Nhiệm vụ của bạn là tìm tổng của tất cả các số tạo bởi các xâu con của N. Ví dụ N=”1234” ta có kết quả là 1670 = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234.

**Input:** Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N. T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤1012.

**Output:** Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    1234    421 | 1670    491 |

### S64 - SỐ NGUYÊN LỚN

Cho hai số nguyên lớn N và M có không quá 1000 chữ số. Người ta muốn tính xem liệu có thể lấy ra **nhiều nhất bao nhiêu chữ số** trong N, không cần liên tiếp nhau nhưng phải giữ nguyên thứ tự ban đầu để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M theo cách tương tự.

**Input:** Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, dòng thứ nhất ghi số N, dòng thứ 2 ghi số M.

**Output:** Với mỗi test, hãy in ra số chữ số nhiều nhất có thể của X.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  144615  4976135  44  88 | 4  0 |

*Giải thích test 1: số X tìm được là 4615.*

### S65 - SỐ THUẬN NGHỊCH

Cho số nguyên dương N có không quá 1000 chữ số.

Hãy tính độ dài lớn nhất của một số thuận nghịch tạo được bằng cách lấy liên tiếp các chữ số trong N.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test ghi ra một số nguyên dương N không quá 1000 chữ số.
 
**Output:** Với mỗi test, in ra đáp án tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  13731456  44444 | 5  5 |

 *Giải thích ví dụ:*

- *Test 1: số thuận nghịch dài nhất tìm được là 13731*
- *Test 2: số thuận nghịch dài nhất tìm được là 44444*

### S66 - XÂU ĐỐI XỨNG

Cho xâu ký tự S. Nhiệm vụ của bạn là tìm số phép chèn tối thiểu các ký tự vào S để S trở thành xâu đối xứng. Ví dụ: S = “ab” ta có số phép chèn tối thiểu là 1 để trở thành xâu đối xứng “aba” hoặc “bab”. Với xâu S = “aa” thì số phép chèn tối thiểu là 0. Với xâu S = “abcd” có số phép chèn tối thiểu là 3 để trở thành xâu “dcbabcd”

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự được viết trên một dòng
- T, str thỏa mãn ràng buộc: 1≤T≤100; 1≤length(str)≤40.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    abcd    aba | 3    0 |

### S67 - KÝ TỰ GIỐNG NHAU

Giả sử bạn cần viết N ký tự giống nhau lên màn hình. Bạn chỉ được phép thực hiện ba thao tác dưới đây với chi phí thời gian khác nhau:

- Thao tác insert: chèn một ký tự với thời gian là X.
- Thao tác delete: loại bỏ ký tự cuối cùng với thời gian là Y.
- Thao tác copying: copy và paste tất cả các ký tự đã viết để số ký tự được nhân đôi với thời gian là Z.
 
Hãy tìm thời gian ít nhất để có thể đưa ra màn hình N ký tự giống nhau. Ví dụ với N = 9, X =1, Y = 2, Z =1 ta có kết quả là 5 bằng cách thực hiện: insert, insert, copying, copying, insert.

**Input:** Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số các ký tự giống nhau cần viết lên màn hình; dòng tiếp theo đưa vào bộ ba số X, Y, Z tương ứng với thời gian thực hiện ba thao tác; các số được viết cách nhau một vài khoảng trống. T, N, X, Y, Z thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤100; 1≤X, Y, Z ≤100.

**Output:** Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    9    1 2 1    10    2 5 4 | 5    14 |

### S70 - DÃY CON LIÊN TIẾP CÓ TỔNG BẰNG K

Cho dãy số A\[\] gồm có N phần tử không âm và số K.

Nhiệm vụ của bạn là hãy xác định xem có tìm được 1 dãy con liên tiếp mà tổng các phần tử bằng K hay không?

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 0 ≤ K ≤ 1018).
- Dòng tiếp theo gồm N số nguyên A\[i\] (0 ≤ A\[i\] ≤ 109).
 
**Output:**

- Với mỗi test, in ra trên một dòng là đáp án thu được. Nếu có hãy in ra “YES”. Nếu không tìm được đáp án, in ra “NO”.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 3  6 33  1 4 20 3 10 5  7 7  1 4 0 0 3 10 5  2 0  1 4 | YES  YES  NO |

**Giải thích test 1:** 20+3+10 = 33

### S71 - TỔNG SỐ CÁCH DI CHUYỂN

Khu vui chơi trẻ em thiết kế một cầu thang có N bậc để di chuyển lên đỉnh tháp. Sinh viên PTIT cũng được phép leo lên cầu thang này nhưng nhìn chung chân sinh viên PTIT khá là dài nên có thể đi từ 1 đến K bậc mỗi bước (chứ không chỉ là 1 bậc như trẻ em).

Hãy tính xem sinh viên PTIT có bao nhiêu cách để leo lên đến đỉnh.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm hai số nguyên dương N và K (1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).
 
**Output:**

- Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2 2  4 2 | 2  5 |

Giải thích test 2: Có 5 cách lần lượt là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).

### S72 - DÃY TAM GIÁC DÀI NHẤT

Cho dãy số A\[\] gồm có N phần tử. Một dãy con liên tiếp được gọi là dãy tam giác nếu như dãy đó tăng dần rồi lại giảm dần, hay tồn tại i, j, k sao cho A\[i\] ≤ A\[i+1\] ≤ … ≤ A\[k\] ≥ A\[k+1\] ≥ … ≥ A\[j\].

Nhiệm vụ của bạn là hãy tìm dãy con liên tiếp là dãy tam giác có độ dài lớn nhất.

Lưu ý: Dãy đơn điệu không giảm hoặc không tăng cũng là dãy tam giác. Ví dụ A\[\] = {10, 20, 30, 40} là một dãy tam giác.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N(1≤ N ≤ 100 000).

Dòng tiếp theo gồm N số nguyên A\[i\] (0 ≤ A\[i\] ≤ 106).

**Output:**

Với mỗi test, in ra trên một dòng là độ dài của dãy con tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  6  12 4 78 90 45 23  8  20 4 1 2 3 4 2 10 | 5  5 |

***Giải thích test 1:***

*Dãy tìm được là 4, 78, 90, 45, 23*

### S73 - ĐẦU TƯ BITCOIN

Xu hướng đầu tư bitcoin kiếm lời đang lan rộng. Thay vì hướng dẫn cách chơi, Học viện Hoàng Gia lại ra đề bài để thử thách khả năng tính toán tối ưu của sinh viên.

Biết trước giá bitcoin trong N ngày, và giả sử đang có 1 coin. Hãy tính toán lợi nhuận lớn nhất có thể thu được nếu bán đồng coin đó vào một ngày nào đó, sau đó mua lại chính đồng coin đó trong một ngày nào đó sau đó.

Chú ý: không được vừa mua vừa bán trong 1 ngày. Và chỉ mua bán một lần duy nhất.

**Input**

Dòng 1 ghi số N (*1 ≤ N ≤ 100000*)

Dòng tiếp theo ghi N số nguyên dương lần lượt là giá của đồng bitcoin trong N ngày (các giá trị không quá 100).

**Output**

Ghi ra giá trị lợi nhuận lớn nhất.

Hoặc nếu không thể có lợi nhuận thì ghi ra **“Lo nang roi!”**

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  1 3 2 | 1 |

### S75 - BỘ BA SỐ PYTAGO (BẢN KHÓ)

3 số a, b, c được gọi là một bộ số Pytago nếu như a2 + b2 = c2.

Cho số nguyên N, nhiệm vụ của bạn là hãy đếm bộ số (a, b, c) thỏa mãn 1 ≤a, b, c≤ N-1, a ≤b và a2 + b2 = c2 (mod N).

**Input:**

Một số nguyên dương N (2 ≤ N ≤ 500 000).

**Output:**

In ra một số nguyên là số bộ 3 số tìm được.

**Ví dụ:**

 | **Test 1** | **Test 2** |
|---|---|
| Input:  7  Output:  18 | Input:  15  Output:  64 |

### T301 - XÂU CON CHUNG DÀI NHẤT

Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này *(các phần tử không nhất thiết phải liên tiếp nhau).*

**Input:** Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

**Output:** Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  AGGTAB  GXTXAYB  AA  BB | 4  0 |

Giải thích test 1: Dãy con chung là G, T, A, B.

### T304 - DÃY CON TĂNG DÀI NHẤT

Cho một dãy số nguyên gồm N phần tử A\[1\], A\[2\], ... A\[N\].

Biết rằng dãy con tăng là 1 dãy A\[i1\],... A\[ik\]

thỏa mãn i1 &lt; i2 &lt; ... &lt; ik và A\[i1\] &lt; A\[i2\] &lt; .. &lt; A\[ik\].

Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử?

**Input:** Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). Dòng thứ 2 ghi N số nguyên A\[1\], A\[2\], .. A\[N\] (1 ≤ A\[i\] ≤ 1000).

**Output:** Ghi ra độ dài của dãy con tăng dài nhất.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 6  1 2 5 4 6 2 | 4 |

### T305 - TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN

Cho dãy số A\[\] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A\[\]. Ví dụ với dãy A\[\] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100. Với dãy A\[\] = {10, 7, 5} ta có kết quả là 10. Với dãy A\[\] = {1, 2, 3, 5} ta có kết quả là 11.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A\[\]; dòng tiếp theo đưa vào N số A\[i\]; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤103; 0≤A\[i\] ≤103.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3  7  1 101 2 3 100 4 5  3  10 7 5  4  1 2 3 5 | 106  10  11 |

### T307 - CON ẾCH

Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là số n là số bước con ếch có thể lên được đỉnh.
- T, n thỏa mãn ràng buộc: 1≤T≤100; 1≤n ≤50.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | Input | Output |
|---|---|
| 2    1    5 | 1    13 |

### T308 - TỔ HỢP C(N, K)

Cho 2 số nguyên n, k. Bạn hãy tính C(n, k) modulo 109+7.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm 2 số nguyên n, k (1 ≤ k ≤ n ≤ 1000).
 
**Output:**

- Với mỗi test, in ra đáp án trên một dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  5 2  10 3 | 10  120 |

### T309 - BẬC THANG

Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm hai số nguyên dương N và K(1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).
 
**Output:**

- Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2 2  4 2 | 2  5 |

Giải thích test 1: Có 2 cách đó là (1, 1) và (2).

Giải thích test 2: 5 cách đó là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).

### TN01021 - TỔNG SỐ CÁCH DI CHUYỂN

Khu vui chơi trẻ em thiết kế một cầu thang có N bậc để di chuyển lên đỉnh tháp. Sinh viên PTIT cũng được phép leo lên cầu thang này nhưng nhìn chung chân sinh viên PTIT khá là dài nên có thể đi từ 1 đến K bậc mỗi bước (chứ không chỉ là 1 bậc như trẻ em).

Hãy tính xem sinh viên PTIT có bao nhiêu cách để leo lên đến đỉnh.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm hai số nguyên dương N và K (1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).
 
**Output:**

- Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2 2  4 2 | 2  5 |

Giải thích test 2: Có 5 cách lần lượt là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).

## NGĂN XẾP - HÀNG ĐỢI

### 1514 - SỬA LẠI DÃY NGOẶC

Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

**Ví dụ:**

| Input: | Output |
|---|---|
| 4  ))((  ((((  (((())  )(())((( | 2  2  1  3 |

### 1515 - BIỂU THỨC TƯƠNG ĐƯƠNG

Cho biểu thức đúng P chỉ bao gồm các phép toán +, -, các toán hạng cùng với các ký tự ‘(’, ‘)’. Hãy bỏ tất cả các ký tự ‘(’, ‘)’ trong P để nhận được biểu thức tương đương. Ví dụ với P = a – (b + c) ta có kết quả P = a – b – c .

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T;
- Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức P được viết trên một dòng.

**Output**:

- Đưa ra kết quả mỗi test theo từng dòng.

**Ràng buộc**:

- T, P thỏa mãn ràng buộc: 1≤T≤100; 1≤length(P)≤103.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    a–(b+c)    a-(b-c-(d+e))-f | a-b-c    a-b+c+d+e-f |

### 1516 - SO SÁNH BIỂU THỨC

Cho P1, P2 là hai biểu thức đúng chỉ bao gồm các ký tự mở ngoặc ‘(’ hoặc đóng ngoặc ‘)’ và các toán hạng in thường. Nhiệm vụ của bạn là định xem P1 và P2 có giống nhau hay không.

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T;
- Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào P1, dòng tiếp theo đưa vào P2.

**Output**:

- Đưa ra kết quả mỗi test theo từng dòng.

**Ràng buộc**:

- T, P thỏa mãn ràng buộc: 1≤T≤100; 1≤length(P) ≤100.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    -(a+b+c)    -a-b-c    a-b-(c-d)    a-b-c-d | YES    NO |

### 1518 - TÍNH GIÁ TRỊ BIỂU THỨC HẬU TỐ

Hãy viết chương trình chuyển tính toán giá trị của biểu thức hậu tố.

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T;
- Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức hậu tố exp. Các số xuất hiện trong biểu thức là các số đơn có 1 chữ số.

**Output**:

- Đưa ra kết quả mỗi test theo từng dòng, chỉ lấy giá trị phần nguyên.

**Ràng buộc**:

- T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2  231\*+9–  875\*+9- | -4  34 |

### 1519 - TÍNH GIÁ TRỊ BIỂU THỨC TIỀN TỐ

 Hãy viết chương trình tính toán giá trị của biểu thức tiền tố.

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T;
- Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp. Các số xuất hiện trong biểu thức là các số đơn có 1 chữ số.

**Output**:

- Đưa ra kết quả mỗi test theo từng dòng, chỉ lấy giá trị phần nguyên.

**Ràng buộc**:

- T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.

**Ví dụ:**

| Input | Output |
|---|---|
| 2  -+8/632  -+7\*45+20 | 8  25 |

### 1521 - GIẢI MÃ XÂU KÝ TỰ

Cho xâu ký tự mã hóa str. Hãy viết chương trình giải mã xâu ký tự str. Xâu ký tự mã hóa được thực hiện theo số lần lặp các xâu con của str như sau:

Xâu đầu vào: “abbbababbbababbbab ”

Xâu mã hóa : "3\[a3\[b\]1\[ab\]\]"

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T;
- Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một xâu mã hóa str được viết trên một dòng.

**Output**:

- Đưa ra kết quả mỗi test theo từng dòng.

**Ràng buộc**:

- T, str thỏa mãn ràng buộc: 1≤T≤100; 1≤length(str)≤100.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2    1\[b\]    3\[b2\[ca\]\] | b    bcacabcacabcaca |

### 1524 - GIÁ TRỊ NHỎ NHẤT CỦA XÂU

Cho xâu ký tự S\[\] bao gồm các ký tự in hoa \[A, B, …,Z\]. Ta định nghĩa giá trị của xâu S\[\] là tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. Ví dụ với xâu S\[\] = “AAABBCD” ta có F(S) = 32 + 22 + 12 + 12 = 15. Hãy tìm giá trị nhỏ nhất của xâu S\[\] sau khi loại bỏ K ký tự trong xâu.

**Input**:

- Dòng đầu tiên đưa vào số lượng test T (T≤100).
- Mỗi test được tổ chức thành 2 dòng. Dòng thứ nhất ghi lại số K. Dòng thứ 2 ghi lại xâu ký tự S\[\] có độ dài không vượt quá 10^6.

Output:

- Đưa ra giá trị nhỏ nhất của mỗi test theo từng dòng.

| Input | Output |
|---|---|
| 2  0  ABCC  1  ABCC | 6  3 |

### 1525 - SỐ BDN

Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K = 101 là số BDN, k=102 không phải là số BDN.

Số BDN của N là số P =M´N sao cho P là số BDN. Cho số tự nhiên N (N&lt;1000), hãy tìm số BDN nhỏ nhất của N.

**Ví dụ**. Với N=2, ta tìm được số BDN của N là P = 5´2=10. N = 17 ta tìm được số BDN của 17 là P = 653´17=11101.

**Input:**

- Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
- T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.

 **Output:**

 Đưa ra kết quả mỗi test theo từng dòng.

 **Ví dụ:**

| **Input** | **Output** |
|---|---|
| 3  2  12  17 | 10  11100  11101 |

## NGĂN XẾP VÀ HÀNG ĐỢI

### 1517 - BÀI 4. BIẾN ĐỔI TRUNG TỐ - HẬU TỐ

Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng trung tố về dạng hậu tố.

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T;
- Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.

**Output**:

- Đưa ra kết quả mỗi test theo từng dòng.

**Ràng buộc**:

- T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤10.

**Ví dụ:**

| Input | Output |
|---|---|
| 2  (A+(B+C)  ((A\*B)+C) | ABC++  AB\*C+ |

### 1520 - BÀI 7. TÍNH TOÁN GIÁ TRỊ BIỂU THỨC TRUNG TỐ

Cho biểu thức trung tố S với các toán tử +, -, \*, / và dấu ngoặc (). Các toán hạng là các số có giá trị không vượt quá 100. Hãy tính giá trị biểu thức S. Phép chia thực hiện với số nguyên, input đảm bảo số bị chia luôn khác 0, đáp số biểu thức có không quá 10 chữ số.

**Input:**

Dòng đầu tiên là số lượng bộ test (T ≤ 100).

Mỗi dòng gồm một xâu S, không quá 100 kí tự. Các toán hạng là các số nguyên không âm.

**Output:**

Với mỗi test, in ra đáp án tìm được.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 4  6\*3+2-(6-4/2)  100+99\*22  6\*((4\*3)+5)  1-2 | 16  2278  102  -1 |

### 1526 - BÀI 13. KHOẢNG CÁCH XÂU KÝ TỰ

Cho tập n xâu ký tự S và hai xâu s, t Î S. Ta giả thiết các xâu ký tự S\[i\] Î S có độ dài bằng nhau. Hãy tìm khoảng cách đường đi ngắn nhất từ s đến t. Biết từ một xâu ký tự bất kỳ ta chỉ được phép dịch chuyển đến xâu khác với nó duy nhất 1 ký tự. Ví dụ ta có tập các từ S = { POON, TOON, PLEE, SAME, POIE, PLEA, PLIE, POIN }, s = TOON, t = PLEA ta có độ dài đường đi ngắn nhất là 7 tương ứng với các phép dịch chuyển : TOON -&gt; POON –&gt; POIN –&gt; POIE –&gt; PLIE –&gt; PLEE –&gt; PLEA.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T (T≤100).
- Mỗi test được tổ chức thành 2 dòng. Dòng thứ nhất ghi lại n là số từ trong S và hai từ s, t. Dòng thứ 2 đưa vào n xâu xâu ký tự của S; các xâu ký tự được viết cách nhau một vài khoảng trống, có độ dài không vượt quá 10 kí tự.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 1  8 TOON PLEA  POON TOON PLEE SAME POIE PLEA PLIE POIN | 7 |

### 1527 - BÀI 14. TÌM SỐ K THỎA MÃN ĐIỀU KIỆN

Cho hai số nguyên dương L, R. Hãy đưa ra số các số K trong khoảng \[L, R\] thỏa mãn điều kiện:

- Tất cả các chữ số của K đều khác nhau.
- Tất cả các chữ số của K đều nhỏ hơn hoặc bằng 5.

Ví dụ với L = 4, R = 13 ta có 5 số thỏa mãn yêu cầu là 4, 5, 10, 12, 13,

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test được là một cặp L, R được viết trên một dòng.
- T, L, R thỏa mãn ràng buộc: 1≤T≤100; 0≤L≤R≤105.

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 2  4 13  100 1000 | 5  100 |

### 1528 - BÀI 15. QUAY HÌNH VUÔNG

Có một chiếc bảng hình chữ nhật với 6 miếng ghép, trên mỗi miếng ghép được điền một số nguyên trong khoảng từ 1 đến 6. Tại mỗi bước, chọn một hình vuông (bên trái hoặc bên phải), rồi quay theo chiều kim đồng hồ.

|  |  |  |
|---|---|---|

Yêu cầu: Cho một trạng thái của bảng, hãy tính số phép biến đổi ít nhất để đưa bảng đến trạng thái đích.

**Input:**

- Dòng đầu ghi số bộ test (không quá 10). Mỗi bộ test gồm hai dòng: 
    - Dòng đầu tiên chứa 6 số là trạng thái bảng ban đầu (thứ tự từ trái qua phải, dòng 1 tới dòng 2).
    - Dòng thứ hai chứa 6 số là trạng thái bảng đích (thứ tự từ trái qua phải, dòng 1 tới dòng 2).

**Output:**

- Với mỗi test, in ra một số nguyên là đáp số của bài toán.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 1  1 2 3 4 5 6  4 1 2 6 5 3 | 2 |

### 1529 - BÀI 16. DI CHUYỂN TRÁNH VẬT CẢN

Cho một bảng kích thước N x N, trong đó có các ô trống ‘.’ và vật cản ‘X’. Các hàng và các cột được đánh số từ 0.

Mỗi bước di chuyển, bạn có thể đi từ ô (x, y) tới ô (u, v) nếu như 2 ô này nằm trên cùng một hàng hoặc một cột, và không có vật cản nào ở giữa.

Cho điểm xuất phát và điểm đích. Bạn hãy tính số bước di chuyển ít nhất?

**Input:**

- Dòng đầu ghi số bộ test (không quá 10). Mỗi test gồm: 
    - Dòng đầu tiên là số nguyên dương N (1 ≤ N ≤ 100).
    - N dòng tiếp theo, mỗi dòng gồm N kí tự mô tả bảng.
    - Cuối cùng là 4 số nguyên a, b, c, d với (a, b) là tọa độ điểm xuất phát, (c, d) là tọa độ đích. Dữ liệu đảm bảo hai vị trí này không phải là ô có vật cản.

**Output:**

- Với mỗi test, in ra một số nguyên là đáp số của bài toán.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 1  3  .X.  .X.  ...  0 0 0 2 | 3 |

### 1530 - BÀI 17.  HEXGAME

HEXGAME là một trò chơi xếp hình gồm 10 miếng ghép hình lục giác đều, trên mỗi miếng ghép được điền một số nguyên, có 8 miếng được điền số từ 1 đến 8 và có hai miếng điền số 0. Các miếng liên kết với nhau tạo thành lưới tổ ong. Ban đầu các miếng ghép ở vị trí như hình vẽ. Tại mỗi bước, chọn một miếng ghép có đúng 6 miếng ghép kề cạnh làm tâm, rồi xoay một nấc 6 miếng ghép kề cạnh đó theo chiều kim đồng hồ. Như vậy chỉ có hai cách chọn tâm, đó là chọn tâm bên trái và chọn tâm bên phải.

Yêu cầu: Cho một trạng thái của trò chơi (nhận được sau một dãy biến đổi từ trạng thái ban đầu), hãy tính số phép biến đổi ít nhất để đưa về trạng thái ban đầu.

**Input:**

- Dòng đầu ghi số bộ test (không quá 10). Mỗi bộ test gồm: 
    - Dòng đầu tiên chứa 3 số ở 3 miếng ghép dòng thứ nhất (thứ tự từ trái qua phải).
    - Dòng thứ hai chứa 4 số ở 4 miếng ghép dòng thứ hai (thứ tự từ trái qua phải).
    - Dòng thứ 3 chứa 3 số ở 3 miếng ghép dòng thứ ba (thứ tự từ trái qua phải).

**Output:**

- Với mỗi bộ test in ra một số nguyên là số phép biến đổi ít nhất để đưa được về trạng thái ban đầu.

**Ví dụ:**

| **Input** | **Output** |
|---|---|
| 1  1 0 2  8 6 0 3  7 5 4 | 5 |

### 1531 - BÀI 18. TÍNH TỔNG

Cho một xâu s. Với mỗi một xâu con X liên tiếp của s có độ dài bằng K, giá trị đặc biệt của nó được tính bằng giá trị của X trong hệ cơ số B modulo M.

Nhiệm vụ của bạn là tính tổng giá trị đặc biệt của tất cả các xâu con của s có độ dài bằng K.

**Input:**

Dòng đầu tiên gồm xâu S có độ dài không quá 300 000 gồm các kí tự từ 0 – 9.

Dòng tiếp theo là số nguyên K, B và M (1 &lt;= K &lt;= |s|, 2 &lt;= B &lt;= 10, 1 &lt;= M &lt;= 1000).

**Output:**

In ra đáp án tìm được.

**Test ví dụ:**

| Test 1 | Test 2 |
|---|---|
| Input:  12212  3 3 5  Output:  5 | Input:  111101  4 2 15  Output:  27 |

Giải thích test 1:

Giá trị của xâu con 122 trong cơ số 3 bằng 17 % 5 = 2.

Giá trị của xâu con 221 trong cơ số 3 bằng 25 % 5 = 0.

Giá trị của xâu con 212 trong cơ số 3 bằng 23 % 5 = 3.

Tổng của chúng bằng 5.

### 1532 - BÀI 19. BỘI SỐ LỚN NHẤT CỦA 3

Cho dãy số A\[\] có N phần tử là các chữ số từ 0 đến 9. Nhiệm vụ của bạn là hãy chọn lấy một tổ hợp các phần tử và sắp xếp chúng sao cho thu được số lớn nhất chia hết cho 3.

Nếu không tìm được số nào, in ra -1.

**Input:**

Dòng đầu tiên là số lượng bộ test T (1 &lt;= N &lt;= 50).

Mỗi test bắt đầu bởi số nguyên N (1 &lt;= N &lt;= 100 000).

Dòng tiếp theo gồm N số nguyên A\[i\] (0 &lt;= A\[i\] &lt;= 9).

**Output:**

Với mỗi test, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 3  3  8 1 9  5  8 1 7 6 0  2  5 2 | 981  8760  -1 |

### S211 - BIỂU THỨC TĂNG GIẢM

Cho dãy ký tự S chỉ bao gồm các ký tự I hoặc D. Ký tự I được hiểu là tăng (Increasing) ký tự D được hiểu là giảm (Decreasing). Sử dụng các số từ 1 đến 9, hãy đưa ra số nhỏ nhất được đoán nhận từ S. Chú ý, các số không được phép lặp lại. Dưới đây là một số ví dụ mẫu:

- A\[\] = “I” : số tăng nhỏ nhất là 12.
- A\[\] = “D” : số giảm nhỏ nhất là 21
- A\[\] =”DD” : số giảm nhỏ nhất là 321
- A\[\] = “DDIDDIID”: số thỏa mãn 321654798
 
**Input:** Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu S. T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ length(S) ≤8; .

**Output:** Đưa ra thứ tự bộ test và kết quả mỗi test theo từng dòng.

**Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 4  I  D  DD    DDIDDIID | Test 1: 12  Test 2: 21  Test 3: 321  Test 4: 321654798 |

### S218 - LOẠI BỎ DẤU NGOẶC

Cho một biểu thức đúng và thỏa mãn:

\- Các biến trong biểu thức chỉ chứa các chữ cái viết hoa.

\- Các toán tử trong biểu thức là ‘+’ hoặc ‘-’

Hãy loại bỏ các dấu ngoặc thừa mà vẫn giữ nguyên ý nghĩa của biểu thức.

**Input:**

\- Dòng đầu tiên chứa số biểu thức M (1&lt;=M&lt;=10).

\- M dòng tiếp theo, mỗi dòng là một biểu thức đúng, có thể có các dấu cách tùy ý trong mỗi dòng. Độ dài mỗi dòng (bao gồm cả dấu cách) không quá 255 kí tự.

**Output:**

Với mỗi biểu thức, in ra trên một dòng biểu thức không có các dấu ngoặc thừa.

Chú ý: Thứ tự của các toán hạng trong biểu thức kết quả và biểu thức đầu vào phải giống nhau. Các dấu cách thừa nếu có cũng phải được loại bỏ.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3  (A - B + C)-(A+ (B–C)) - (C- (D- E) )  ((A)- ((B ) ))  A-( B+C) | A-B+C-(A+B-C)-(C-(D-E))  A-B  A-(B+C) |

### S228 - GIẤY KHAI SINH

Một buổi họp mặt đại gia đình nhân dịp cụ già Ted tròn 100 tuổi, người ta muốn sắp xếp con cháu của cụ theo thứ tự từ tuổi cao xuống thấp. Giả sử ta có thông tin về giấy khai sinh của từng người đó. Mỗi giấy khai sinh chỉ viết ba thông tin đơn giản gồm: *Tên người cha, Tên người con, Tuổi của người cha lúc sinh con*.

Hãy giúp đại gia đình trên tính ra tuổi của từng người con cháu cụ Ted và viết ra danh sách theo thứ tự từ tuổi cao xuống thấp.

**Input**

Dòng đầu ghi số bộ test (không quá 100). Với mỗi bộ test:

- Dòng đầu tiên ghi số X (0&lt;X&lt;100) là số người con cháu cần sắp xếp.
- Tiếp theo là X dòng, mỗi dòng ghi thông tin về một giấy khai sinh của từng người (thứ tự ngẫu nhiên) gồm 3 thành phần, mỗi thành phần cách nhau một khoảng trống:
    - Tên người cha: không quá 20 ký tự và không chứa khoảng trống
 
- - Tên người con: không quá 20 ký tự và không chứa khoảng trống
    - Tuổi của người cha khi sinh con: 1 số nguyên dương, không quá 100.
 
**Output**

- Với mỗi bộ test, in ra màn hình thứ tự bộ test (xem thêm trong bộ test ví dụ), sau đó lần lượt là từng người trong danh sách tuổi từ cao xuống thấp (không tính cụ Ted). Mỗi người viết ra hai thông tin: tên, một khoảng trống rồi đến tuổi của người đó.
- Nếu hai người có cùng tuổi thì xếp theo thứ tự từ điển.
 
**Ví dụ**

 | **INPUT** | **OUTPUT** |
|---|---|
| 2  1  Ted Bill 25  4  Ray James 40  James Beelzebub 17  Ray Mark 75  Ted Ray 20 | DATASET 1     Bill 75     DATASET 2     Ray 80     James 40     Beelzebub 23     Mark 5 |

## CÁC CẤU TRÚC DỮ LIỆU NÂNG CAO

### 1545 - GIÁ TRỊ LỚN NHẤT

Cho dãy số gồm N phần tử có giá trị ban đầu bằng 0.

Có M phép biến đổi, mỗi phép có dạng (u, v, k): tăng mỗi phần tử từ u tới v lên k đơn vị.

Cho Q câu hỏi, mỗi câu hỏi có dạng (u, v): yêu cầu tìm phần tử lớn nhất trong đoạn \[u, v\].

**Input**

- Dòng đầu tiên gồm 2 số nguyên N và M (1 &lt;= N, M &lt;= 100 000).
- M dòng tiếp theo, mỗi dòng gồm 3 số u, v, k (1 &lt;= k &lt;= 10 000).
- Dòng tiếp theo là số nguyên Q (1 &lt;= Q &lt;= 100 000).
- Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v.

**Output**

- Với mỗi truy vấn, hãy in ra đáp án trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 6 2  1 3 2  4 6 3  1  3 4 | 3 |

### 1546 - VẪN LÀ GIÁ TRỊ LỚN NHẤT

Cho dãy số gồm N phần tử có giá trị ban đầu bằng 0.

Có Q truy vấn:

Loại 1 có dạng (1, u, v, k): tăng mỗi phần tử từ u tới v lên k đơn vị (1 &lt;= k &lt;= 10 000).

Loại 2 có dạng (2, u, v): yêu cầu tìm phần tử lớn nhất trong đoạn \[u, v\].

**Input**

- Dòng đầu tiên gồm 2 số nguyên N và Q (1 &lt;= N, M &lt;= 100 000).
- Q dòng tiếp theo, mỗi dòng gồm một trong hai loại truy vấn như trên.

**Output**

- Với mỗi truy vấn loại 2, hãy in ra đáp án trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 6 3  1 1 3 3  1 4 6 4  2 1 6 | 4 |

### 1547 - DÃY CON NHỎ NHẤT CÓ USCLN BẰNG K

Cho dãy số A\[\] có N phần tử. Nhiệm vụ của bạn là tìm dãy con liên tiếp có độ dài nhỏ nhất, sao cho UCLN của các phần tử đúng bằng K.

**Input**

- Dòng đầu tiên là số lượng bộ test T (T &lt;= 10).
- Mỗi test bắt đầu bằng 2 số nguyên N và K (1 &lt;= N &lt;= 100 000).
- Dòng tiếp theo gồm N số nguyên A\[i\] (1 &lt;= A\[i\], K &lt;= 10^9).

**Output**

- Với mỗi test, hãy in ra đáp án trên một dòng. Nếu không tìm được dãy con nào, in ra -1.

**Test ví dụ:**

| Input | Output |
|---|---|
| 3  8 3  6 9 7 10 12 24 36 27  4 3  2 4 6 8  4 6  1 2 3 6 | 2  -1  1 |

### 1548 - PHẦN TỬ TRUNG VỊ

Phần tử trung vị của một dãy số có n phần tử là phần tử chính giữa (số thứ a\[(n+1)/2\]) sau khi dãy số được sắp xếp. Ví dụ dãy A\[\] = \[1, 2, 3, 4, 5\], phần tử trung vị là 3.

Cho một dãy số ban đầu rỗng và Q truy vấn, mỗi truy vấn có dạng:

- add x: Thêm số x vào dãy số (1 &lt;= x &lt;= 10^6).
- del x: Xóa bỏ x (x đảm bảo tồn tại trong dãy)
- print: Yêu cầu in ra phần tử trung vị của dãy số.

**Input**

- Dòng đầu tiên là số lượng truy vấn Q (Q &lt;= 100 000).
- Q dòng tiếp theo, mỗi dòng gồm một trong 3 loại truy vấn như trên.

**Output**

- Với mỗi truy vấn “print”, hãy in ra phần tử trung vị của dãy số.

**Test ví dụ:**

| Input | Output |
|---|---|
| 10  add 1  add 4  add 7  add 8  print  add 9  print  del 1  del 8  print | 4  7  7 |

Giải thích truy vấn 1: Dãy số hiện tại là \[1, 4, 7, 8\]. Phần tử trung vị là 4.

### 1549 - K-QUERY

Cho dãy số A\[\] có N phần tử. Có Q truy vấn dạng (u, v, K) yêu cầu bạn xác định số lượng phần tử lớn hơn K trong dãy con A\[u\], A\[u+1\], ..., A\[v\].

**Input**

- Dòng đầu tiên là số nguyên N (1 &lt;= N &lt;= 100 000).
- Dòng tiếp theo gồm N số nguyên A\[i\] (1 &lt;= A\[i\] &lt;= 10^9).
- Tiếp theo là số lượng truy vấn Q (1 &lt;= Q &lt;= 100 000).
- Q dòng tiếp theo, mỗi dòng gồm 3 số nguyên u, v, K (1 &lt;= u, v &lt;= N, 1 &lt;= K &lt;= 10^9).

**Output**

- Với mỗi truy vấn, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 5  5 1 2 3 4  3  2 4 1  4 4 4  1 5 2 | 2  0  3 |

### 1550 - CHẠY ĐUA KỲ THÚ

Với một trang trại rộng lớn, nông dân Bell quyết định tổ chức của đua cho những con bò của mình để nâng cao thể lực. Hành trình của cuộc đua gồm có N trạm. Mỗi thí sinh có một hành trình khác nhau và phải tuân thủ chạy lần lượt theo thứ tự từ trạm xuất phát đến trạm đích.

Để tăng thêm sự thú vị cho cuộc thi, thỉnh thoảng anh Bell sẽ thay đổi vị trí của các trạm. Biết rằng các con bò của mình không đủ thể lực, anh Bell cho phép các thí sinh được bỏ qua một trạm nào đó trong hành trình của nó. Và anh vẫn thầm nghĩ rằng, chắc chúng chẳng chọn ra được giải pháp tối ưu đâu.

Các con bò của nông dân Bell không được thông minh cho lắm, các bạn hãy giúp chúng tính quãng đường ngắn nhất để hoàn thành chặng đua của mình.

Khoảng cách giữa 2 trạm có tọa độ (x1, y1) và (x2, y2) được tính bằng khoảng cách Manhattan theo công thức |x1-x2| + |y1-y2|.

**Input**

- Dòng đầu tiên gồm 2 số nguyên N và Q.
- N dòng tiếp theo, mỗi dòng cho biết tọa độ x\[i\], y\[i\] của trạm thứ i.
- Q dòng tiếp theo, mỗi dòng thuộc một trong hai dạng dưới đây: 
    - Truy vấn “U I X Y” làm thay đổi tọa độ điểm thứ I thành tọa độ mới (X, Y)
    - Truy vấn “Q I J” cho biết một thí sinh của anh Bell phải chạy từ trạm I tới trạm J. Bạn hãy tính thời gian ngắn nhất để thí sinh này hoàn thành cuộc thi.

**Output**

- Với mỗi truy vấn loại 2, hãy in ra đáp án trên một dòng.

**Giới hạn:**

- 1 &lt;= N, Q &lt;= 100 000.
- -1000 &lt;= x\[i\], y\[i\] &lt;= 1000.
- 30% test có N, Q &lt;= 1000.

**Test ví dụ:**

| Input | Output |
|---|---|
| 5 5  -4 4  -5 -3  -1 5  -3 4  0 5  Q 1 5  U 4 0 1  U 4 -1 1  Q 2 4  Q 1 4 | 11  8  8 |

**Giải thích test:**

Truy vấn 1: Bỏ qua trạm thứ 2, hành trình 1à3à4à5.

### 1551 - ĐẾM SỐ TAM GIÁC

Cho mặt phẳng Oxy, có Q truy vấn:

Loại 1 có dạng (1, x, y): thêm một điểm tại tọa độ (x, y). Các điểm thêm vào là phân biệt.

Loại 2 có dạng (2, a, b, u, v): yêu cầu số tam giác được tạo ra từ 3 điểm nằm trong hình chữ nhật có điểm trái dưới là (a, b), điểm phải trên là (u, v) (a &lt;= u, b &lt;= v).

**Input**

- Dòng đầu tiên là số nguyên Q (1 &lt;= Q &lt;= 100 000).
- Q dòng tiếp theo, mỗi dòng gồm một trong hai loại truy vấn như trên.
- Các tọa độ nằm trong khoảng từ 1 tới 1000.

**Output**

- Với mỗi truy vấn loại 2, hãy in ra đáp án trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 8  1 2 2  1 3 5  1 4 2  1 4 5  1 5 4  2 1 1 6 6  1 3 3  2 1 1 6 6 | 10  20 |

### 1552 - SỐ CẶP NGHỊCH THẾ TRONG MA TRẬN

Cho ma trận A có kích thước N x N. Nhiệm vụ của bạn là đếm số lượng cặp nghịch thế thỏa mãn: x1 &lt;= x2, y1 &lt;= y2 và A\[x2\]\[y2\] &lt; A\[x1\]\[y1\].

**Input**

- Dòng đầu tiên là số lượng bộ test T (T &lt;= 10).
- Mỗi test bắt đầu bởi số nguyên N (1 &lt;= N &lt;= 500).
- N dòng tiếp theo, mỗi dòng gồm N số nguyên mô tả ma trận A (1 &lt;= A\[i\]\[j\] &lt;= 10^9).

**Output**

- Với mỗi test, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 2  2  7 5  3 1  4  4 7 2 9  6 4 1 7  5 3 8 1  3 2 5 6 | 5  43 |

### 1553 - SỐ NHỎ THỨ K

Cho dãy số A\[\] có N phần tử. Có Q truy vấn dạng (u, v, K) yêu cầu bạn tìm số nhỏ thứ K trong dãy con A\[u\], A\[u+1\], ..., A\[v\].

**Input**

- Dòng đầu tiên chứa 2 số N và Q (1 &lt;= N &lt;= 100 000, 1 &lt;= Q &lt;= 5000).
- Dòng tiếp chứa N số nguyên A\[i\] (-10^9 &lt;= A\[i\] &lt;= 10^9), các số là phân biệt.
- Q dòng tiếp, mỗi dòng gồm 3 số nguyên u, v, K (1 &lt;= K &lt;= v-u+1).

**Output**

- Với truy vấn, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 7 3  1 5 2 6 3 7 4  2 5 3  4 4 1  1 7 3 | 5  6  3 |

### 1554 - TRUY VẤN TRÊN CÂY

Cho một cây có N đỉnh. Mỗi đỉnh có trọng số w\[i\]. Có M truy vấn, mỗi truy vấn có dạng (u, v, k) yêu cầu bạn tìm đỉnh có trọng số nhỏ thứ k trên đường đi từ u tới v.

**Input**

- Dòng đầu tiên chứa 2 số N và M (1 &lt;= N, M &lt;= 100 000).
- Dòng tiếp gồm N số nguyên w\[i\] (1 &lt;= w\[i\] &lt;= 10^9)
- N-1 dòng tiếp, mỗi dòng gồm 2 số nguyên u và v cho biết đỉnh u nối với đỉnh v.
- M câu truy vấn, mỗi dòng có dạng u v k (k đảm bảo nằm trong phạm vi độ dài đường đi từ u tới v).

**Output**

- Với truy vấn, in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

| Input | Output |
|---|---|
| 8 5  105 2 9 3 8 5 7 7  1 2  1 3  1 4  3 5  3 6  3 7  4 8  2 5 1  2 5 2  2 5 3  2 5 4  7 8 2 | 2  8  9  105  7 |

## KIỂU DỮ LIỆU VÀ PHÉP TOÁN

### C01025 - HÌNH VUÔNG NHỎ NHẤT

Cho 2 hình chữ nhật trên mặt phẳng Oxy. Cần tìm hình vuông có kích thước nhỏ nhất sao cho phủ kín được 2 hình chữ nhật đã cho.

**Dữ liệu vào:**

2 dòng, mỗi dòng gồm 4 số nguyên lần lượt mô tả điểm trái dưới và phải trên của hình chữ nhật. Các tọa độ có giá trị tuyệt đối không vượt quá 100.

**Kết quả:**

In ra diện tích của hình vuông tìm được.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 6 6 8 8  1 8 4 9 | 49 |

## VÒNG LẶP

### C01052 - ƯỚC SỐ CHIA HẾT CHO 2

\# Cho số nguyên dương N. Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2? \*\*Input:\*\* Dòng đầu tiên là số lượng bộ test T (T ≤ 100). Mỗi bộ test gồm một số nguyên N (1 ≤ N ≤ 109) \*\*Output:\*\* Với mỗi test, in ra đáp án tìm được trên một dòng. \*\*Ví dụ:\*\*

| Input: | Output: |
|---|---|
| 2  9  8 | 0  3 |

### C03051 - SỐ CHỈ CÓ BA ƯỚC SỐ

Cho hai số L, R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số trong khoảng \[L, R\]. Ví dụ L =1, R =10, ta có kết quả là 2 vì chỉ có số 4 và 9 là có đúng 3 ước số.

**Input:**

- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số L, R.
- T, N thỏa mãn rang buộc 1≤T≤100; 1≤L, R ≤1012.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  1 10  1 1000000000000 | 2  78498 |

## VIẾT HÀM

### C03038 - ƯỚC SỐ CỦA GIAI THỪA

Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho px. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 32.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số N, p được viết cách nhau một vài khoảng trống.
- T, N, p thỏa mãn ràng buộc : 1≤T≤100; 1≤N≤105; 2≤p≤5000;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 **Ví dụ:**

 | Input: | Output: |
|---|---|
| 3    62 7    76 2    3 5 | 9    73    0 |

### C03058 - BỘI SỐ NHỎ NHẤT CỦA N SỐ NGUYÊN DƯƠNG ĐẦU TIÊN

Cho số tự nhiên n. Nhiệm vụ của bạn là tìm số nguyên dương nhỏ nhất chia hết cho 1, 2, .., n.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- T dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một số tự nhiên n.
- T thỏa mãn ràng buộc: 1≤T≤104; n không quá 100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
 Ví dụ:**

 | Input | Output |
|---|---|
| 2  3  5 | 6  60 |

### C03060 - CHIA HẾT

Cho hai số nguyên dương n và k. Hãy kiểm tra xem giai thừa của n (n!) có chia hết cho 2k hay không.

**Input**

Có một dòng ghi 2 số n và k (1 ≤ n, k ≤ 100).

**Output**

Nếu n! chia hết cho 2k thì in ra “Yes”, ngược lại in ra “No”.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5 3 | Yes |
| **Input** | **Output** |
| 1 1 | No |

### CTEST022 - TÁCH ĐÔI

Cho số nguyên dương N không quá 18 chữ số. Nếu số chữ số của N là chẵn thì ta có thể tách thành hai nửa trái và phải có số chữ số bằng nhau.

Hãy tính bội số chung nhỏ nhất của hai nửa trái và phải của số N.

**Input**

Dòng đầu ghi số bộ test (không quá 10)

Mỗi bộ test ghi một số N, không quá 18 chữ số.

**Output**

Nếu số chữ số là lẻ thì ghi ra INVALID

Nếu số chữ số là chẵn thì in ra bội số chung nhỏ nhất của hai nửa trái và phải.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 3  7  1220  1234567 | INVALID  60  INVALID |

## LẬP TRÌNH CƠ BẢN

### CP01003 - SỐ THUẦN NGUYÊN TỐ

Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

**Dữ liệu vào:** Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống. Các số đều không vượt quá 9 chữ số.

**Kết quả:** Mỗi bộ test viết ra số lượng các số thuần nguyên tố tương ứng.

**Ví dụ:**

 | **Input** | **Ouput** |
|---|---|
| 2  23 199  2345 6789 | 1  15 |

### CP01005 - TẦN SUẤT LẺ

Cho dãy số A\[\] gồm có N phần tử. Các phần tử trong dãy số đều xuất hiện với tần suất chẵn, chỉ có duy nhất 1 số có số lần xuất hiện là số lẻ. Nhiệm vụ của bạn là hãy tìm số này.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu. N là một số lẻ.

Dòng tiếp theo gồm N số nguyên A\[i\] (1 ≤ A\[i\] ≤ 1 000 000).

**Output:**

Với mỗi test in ra trên mỗi dòng một số nguyên là đáp án của bài toán.

**Ví dụ:**

 | Input: | Output |
|---|---|
| 2  7  1 2 3 2 3 1 3  5  1 1 3 3 2 | 3  2 |

## DYNAMIC PROGRAMMING

### DSA05008 - DÃY CON CÓ TỔNG BẰNG S

Cho N số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.

**Input:** Dòng đầu ghi số bộ test T (T&lt;10). Mỗi bộ test có hai dòng, dòng đầu tiên ghi hai số nguyên dương N và S (0 &lt; N ≤ 200) và S (0 &lt; S ≤ 40000). Dòng tiếp theo lần lượt ghi N số hạng của dãy A là các số A1, A2, ..., AN (0 &lt; Ai ≤ 200).

**Output:** Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  5 6    1 2 4 3 5  10 15  2 2 2 2 2 2 2 2 2 2 | YES  NO |

### DSAKT110 - NHÀ KHÔNG KỀ NHAU

Có N ngôi nhà trên một dãy phố, mỗi ngôi nhà chứa đựng một số lượng tài sản khác nhau. Một tên trộm muốn ăp cắp được nhiều nhất tài sản của dãy phố nhưng không muốn lấy tài sản của hai nhà kề nhau. Hãy cho biết, bằng cách đó tên trộm có thể đánh cắp được nhiều nhất bao nhiêu tài sản.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N là số lượng ngôi nhà; dòng tiếp theo đưa vào N số là tài sản tương ứng trong mỗi ngôi nhà; các số được viết cách nhau một vài khoảng trống.
- T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N ≤106; 1≤A\[i\] ≤107.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    6    5 5 10 100 10 5    4    3 2 7 10 | 110    13 |

## STACK

### DSA07028 - NHỊP CHỨNG KHOÁN

Bạn là một nhà đầu tư chứng khoán nổi tiếng. Nhiệm vụ hàng ngày của bạn là tính nhịp tăng giảm của phiên chứng khoán trong N ngày để có thể bắt kịp thị trường. Nhịp chứng khoán của ngày thứ i được định nghĩa là số ngày liên tiếp từ ngày thứ i trở về mà giá chứng khoán bé hơn hoặc bằng với giá chứng khoán của ngày i.

**Input:** Dòng đầu ghi số bộ test (không quá 10). Mỗi test có 2 dòng.

- Dòng đầu tiên gồm 1 số nguyên N (1 ≤ N ≤ 105) là số ngày.
- Dòng tiếp theo gồm N số nguyên A1, A2, …, AN (1 ≤ Ai ≤ 106) là giá chứng khoán của các ngày.
 
**Output**

- In ra N số B1, B2, …, BN trong đó Bi là nhịp chứng khoán của ngày thứ i.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  7  100 80 60 70 60 75 85 | 1 1 1 2 1 4 6 |

## GRAPH

### DSA09010 - KIỂM TRA TÍNH LIÊN THÔNG MẠNH

Cho đồ thị có hướng G=&lt;V, E&gt; được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có liên thông mạnh hay không?

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
 
**Output:**

- Đưa ra “YES”, hoặc “NO” theo từng dòng tương ứng với test là liên thông mạnh hoặc không liên thông mạnh.
 
 **Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 1  6 9  1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 3 | YES |

### DSA10006 - CÂY KHUNG CỦA ĐỒ THỊ THEO THUẬT TOÁN DFS

Cho đồ thị vô hướng G=(V, E). Hãy xây dựng một cây khung của đồ thị G với đỉnh u ∈ V là gốc của cây bằng thuật toán DFS.

<a name="_Toc8394325"></a><a name="_Toc8132625">**Input**</a>

Dòng đầu tiên gồm một số nguyên T (1 ≤ T ≤ 20) là số lượng bộ test.

Tiếp theo là T bộ test, mỗi bộ test có dạng sau:

- Dòng đầu tiên gồm 3 số nguyên N=|V|, M=|E|, u (1 ≤ N ≤ 103, 1 ≤ M ≤ 105, 1 ≤ u ≤ N).
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên a, b (1 ≤ a, b ≤ N, a ≠ b) tương ứng cạnh nối hai chiều từ a tới b.
- Dữ liệu đảm bảo giữa hai đỉnh chỉ tồn tại nhiều nhất một cạnh nối.
 
<a name="_Toc8394326"></a><a name="_Toc8132626">**Output**</a>

Với mỗi bộ test, nếu tồn tại cây khung thì in ra N – 1 cạnh của cây khung với gốc là đỉnh u trên N – 1 dòng theo thứ tự duyệt của thuật toán DFS. Ngược lại nếu không tồn tại cây khung thì in ra -1.

<a name="_Toc8394327"></a><a name="_Toc8132627">**Ví dụ**</a>

 | **Input** | **Output** |
|---|---|
| 2  4 4 2  1 2  1 3  2 4  3 4  4 2 2  1 2  3 4 | 2 1  1 3  3 4  -1 |

### DSA10007 - CÂY KHUNG CỦA ĐỒ THỊ THEO THUẬT TOÁN BFS

Cho đồ thị vô hướng G=(V, E). Hãy xây dựng một cây khung của đồ thị G với đỉnh u ∈ V là gốc của cây bằng thuật toán BFS.

<a name="_Toc8394321"></a><a name="_Toc8132621">**Input**</a>

Dòng đầu tiên gồm một số nguyên T (1 ≤ T ≤ 20) là số lượng bộ test.

Tiếp theo là T bộ test, mỗi bộ test có dạng sau:

- Dòng đầu tiên gồm 3 số nguyên N=|V|, M=|E|, u (1 ≤ N ≤ 103, 1 ≤ M ≤ 105, 1 ≤ u ≤ N).
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên a, b (1 ≤ a, b ≤ N, a ≠ b) tương ứng cạnh nối hai chiều từ a tới b.
- Dữ liệu đảm bảo giữa hai đỉnh chỉ tồn tại nhiều nhất một cạnh nối.
 
<a name="_Toc8394322"></a><a name="_Toc8132622">**Output**</a>

Với mỗi bộ test, nếu tồn tại cây khung thì in ra N – 1 cạnh của cây khung với gốc là đỉnh u trên N – 1 dòng theo thứ tự duyệt của thuật toán BFS. Ngược lại nếu không tồn tại cây khung thì in ra -1.

<a name="_Toc8394323"></a><a name="_Toc8132623">**Ví dụ**</a>

 | **Input** | **Output** |
|---|---|
| 2  4 4 2  1 2  1 3  2 4  3 4  4 2 2  1 2  3 4 | 2 1  2 4  1 3  -1 |

### DSA10008 - DIJKSTRA

Cho đồ thị có trọng số không âm G=&lt;V, E&gt; được biểu diễn dưới dạng danh sách cạnh trọng số. Hãy viết chương trình tìm đường đi ngắn nhất từ đỉnh uÎV đến tất cả các đỉnh còn lại trên đồ thị.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai ba số |V|, |E| tương ứng với số đỉnh và uÎV là đỉnh bắt đầu; |E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
 
**Output:**

- Đưa ra kết quả của mỗi test theo từng dòng. Kết quả mỗi test là trọng số đường đi ngắn nhất từ đỉnh u đến các đỉnh còn lại của đồ thị theo thứ tự tăng dần các đỉnh.
 
 **Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 1  9 12 1  1 2 4  1 8 8  2 3 8  2 8 11  3 4 7  3 6 4  3 9 2  4 5 9  4 6 14  5 6 10  6 7 2  6 9 6 | 0 4 12 19 26 16 18 8 14 |

### DSA10009 - FLOYD

Cho đơn đồ thị vô hướng liên thông G = (V, E) gồm N đỉnh và M cạnh, các đỉnh được đánh số từ 1 tới N và các cạnh được đánh số từ 1 tới M.

Có Q truy vấn, mỗi truy vấn yêu cầu bạn tìm đường đi ngắn nhất giữa đỉnh X\[i\] tới Y\[i\].

**Input:**

- Dòng đầu tiên hai số nguyên N và M (1 ≤ N ≤ 100, 1 ≤ M ≤ N\*(N-1)/2).
- M dòng tiếp theo, mỗi dòng gồm 3 số nguyên u, v, c cho biết có cạnh nối giữa đỉnh u và v có độ dài bằng c (1 ≤ c ≤ 1000).
- Tiếp theo là số lượng truy vấn Q (1 ≤ Q ≤ 100 000).
- Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên X\[i\], Y\[i\].
 
**Output:**

- Với mỗi truy vấn, in ra đáp án là độ dài đường đi ngắn nhất tìm được.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 5 6  1 2 6  1 3 7  2 4 8  3 4 9  3 5 1  4 5 2  3  1 5  2 5  4 3 | 8  10  3 |

### DSA10011 - DI CHUYỂN TRÊN BẢNG SỐ

Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng A\[i\]\[j\]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất. Tại mỗi ô, bạn được phép đi sang trái, sang phải, đi lên trên và xuống dưới.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A\[i\]\[j\] (0 ≤ A\[i\]\[j\] ≤ 9).
 
**Output:**

- Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 3  4  5  0 3 1 2 9  7 3 4 9 9  1 7 5 5 3  2 3 4 2 5  1  6  0 1 2 3 4 5  5 5  1 1 1 9 9  9 9 1 9 9  1 1 1 9 9  1 9 9 9 9  1 1 1 1 1 | 24  15  13 |

### DSA10012 - ĐƯỜNG ĐI TRUNG BÌNH

Cho một đồ thị có hướng gồm N đỉnh và M cạnh. Nhiệm vụ của bạn là hãy tính khoảng cách trung bình ngắn nhất giữa hai node bất kì nếu như chúng liên thông với nhau. Input đảm bảo rằng trong một nhóm liên thông, nếu như u đi tới được v thì v cũng đi tới được v với mọi cặp u, v.

![Ảnh](./img/DSA10012.png)

**Input:** Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N ≤ 100, M ≤ N\*(N-1)/2). M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối đơn hướng từ u tới v.

**Output:** Với mỗi test, in ra đáp án tìm được với độ chính xác 2 chữ số sau dấu phảy.

**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 2  4 5  1 2  2 4  1 3  3 1  4 3  7 5  1 2  1 4  4 2  2 7  7 1 | 1.83  1.75 |

Giải thích test 1: Ta có

d(1, 2) = 1, d(1, 3) = 1, d(1, 4) = 2; d (2, 1) = 3, d(2, 3) = 2, d(2, 4) = 1;

d(3, 1) = 1, d(3, 2) = 2, d(3, 4) = 3; d(4, 1) = 2, d(4, 2) = 3, d(4, 3) = 1.

Trung bình bằng 22/12 = 1.83

### DSA10015 - KRUSKAL

Cho đồ thị vô hướng có trọng số G=&lt;V, E, W&gt;. Nhiệm vụ của bạn là hãy xây dựng một cây khung nhỏ nhất của đồ thị bằng thuật toán Kruskal.

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số V, E tương ứng với số đỉnh và số cạnh của đồ thị; phần thứ 2 đưa vào E cạnh của đồ thị, mỗi cạnh là một bộ 3: đỉnh đầu, đỉnh cuối và trọng số của cạnh.
- T, S, D thỏa mãn ràng buộc: 1≤T≤100; 1≤V≤100; 1≤E, W≤10000.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    3 3    1 2 5  2 3 3  1 3 1    2 1    1 2 5 | 4    5 |

## DANH SÁCH

### ICPC0101 - THU GỌN DÃY SỐ

Cho dãy số A\[\] chỉ bao gồm các số nguyên dương. Người ta thu gọn dần dãy số bằng cách loại bỏ các cặp phần tử kề nhau mà có tổng là chẵn. Sau khi cặp phần tử đó bị loại ra thì dãy số được dồn lại. Cứ tiếp tục như vậy cho đến khi không còn cặp phần tử nào kề nhau có tổng chẵn nữa.

Hãy tính xem cuối cùng dãy A\[\] còn bao nhiêu phần tử.

**Input**

Dòng đâu ghi số N là số phần tử của dãy (1 ≤ N ≤ 105 tức là dãy A có thể có đến 10 nghìn phần tử).

Dòng tiếp theo ghi N số của dãy A (1 ≤ A\[i\] ≤ 100).

**Output**

Ghi ra trên một dòng số phần tử còn lại trong dãy A\[\].

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5  2 3 4 5 6 | 5 |
| **Input** | **Output** |
| 10  1 5 5 8 6 4 3 5 9 3 | 2 |

### ICPC0108 - SUM TRIPLE ZERO

Cho mảng A\[\] gồm N số nguyên khác nhau. Nhiệm vụ của bạn là đếm số lượng các bộ ba phần tử khác nhau có tổng là 0. Ví dụ A\[\] = {0, -1, 2, -3, 1}, ta nhận được kết quả là 2 vì có hai bộ 3: (0, -1, 1) và (2, -3, 1).

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào N là số lượng phần tử của mảng A\[\]; dòng tiếp theo đưa vào các phần tử A\[i\] của mảng A\[\].
- T, N, A\[i\] thỏa mãn ràng buộc : 1≤T≤100; 1≤ N≤103; -109≤ A\[i\] ≤109;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input:** | **Output:** |
|---|---|
| 2    5    0 -1 2 -3 1     5    1 -2 1 0 5 | 2    1 |

### ICPC0109 - MIN TRIPLE

Cho mảng A\[\] gồm N số nguyên.

Nhiệm vụ của bạn là tìm tổng nhỏ nhất của bộ ba số trong mảng. Ví dụ A\[\] = {1, 2, 3, 4, 5}, ta nhận được tổng nhỏ nhất của bộ ba số là 1 + 2 + 3 = 6. Chú ý nếu sử dụng kỹ thuật sắp xếp, submit lời giải của bạn sẽ bị fail.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào N là số lượng phần tử của mảng A\[\]; dòng tiếp theo đưa vào các phần tử A\[i\] của mảng A\[\].
- T, N, A\[i\] thỏa mãn ràng buộc : 1≤T≤100; 1≤N ≤106; -108≤ A\[i\] ≤108;
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
Ví dụ:

 | **Input:** | **Output:** |
|---|---|
| 2    7    1 2 3 0 -1 8 10     7    9 8 20 3 4 -1 0 | 0    2 |

### PY02003 - DÃY SỐ HAMMING

Dãy số nguyên dương tăng dần trong đó ước số nguyên tố lớn nhất của các số trong dãy đều không vượt quá 5 được gọi là dãy số Hamming. Ví dụ 10 = 2x5 thuộc dãy Hamming còn 26 = 2x13 không thuộc dãy Hamming.

Số 1 được coi là số đầu tiên của dãy Hamming.

Cho số nguyên dương N. Hãy xác định xem N có thuộc dãy Hamming hay không và nếu có thì thứ tự của N trong dãy Hamming là bao nhiêu.

**Input:**

Dòng đầu tiên ghi số bộ test (không quá 105).

Mỗi test ghi một số N (1 ≤ N ≤ 1018).

**Output:**

Nếu giá trị N thuộc dãy Hamming thì ghi ra thứ tự của N (tính từ 1).

Nếu không thì ghi ra “Not in sequence”

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 11  1  2  6  7  8  9  10  11  12  13  14 | 1  2  6  Not in sequence  7  8  9  Not in sequence  10  Not in sequence  Not in sequence |

### PYKT12026 - 2X-Y

Mảng a ban đầu có n số nguyên. Bạn có thể thực hiện thao tác sau nhiều lần:

\- Chọn số 2 số x và y bất kỳ trong mảng và thêm 2x – y vào mảng.

Với 1 số nguyên k, hãy kiểm tra xem bạn có thể tạo ra được số k hay không.

**Input:**

Dòng đầu tiên chứa số bộ test t (t ≤ 20).

Mỗi test có định dạng như sau:

\- Dòng đầu tiên chứa 2 số nguyên n và k (2 ≤ n ≤ 105, -109 ≤ k ≤ 109)

\- Dòng tiếp theo chứa n số nguyên ban đầu (-109 ≤ ai ≤ 109)

**Output:**

Với mỗi test, in ra “YES” nếu có thể và “NO” trong trường hợp còn lại.

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 6  2 1  1 2  3 0  2 3 7  2 -1  31415926 27182818  2 1000000000000000000  1 1000000000000000000  2 -1000000000000000000  -1000000000000000000 123  6 80  -5 -20 13 -14 -2 -11 | YES  YES  NO  YES  YES  NO |

## MẢNG

### J02005 - GIAO CỦA HAI DÃY SỐ

Cho dãy số a\[\] có n phần tử và dãy số b\[\] có m phần tử là các số nguyên dương nhỏ hơn 1000. Gọi tập hợp A là tập các số khác nhau trong a\[\], tập hợp B là tập các số khác nhau trong b\[\].

Hãy tìm tập giao của A và B.

**Input**

Dòng đầu ghi 2 số n và m (1 &lt; n,m &lt;100).

Dòng thứ 2 ghi n số của a\[\].

Dòng thứ 3 ghi m số của b\[\].

Các số đều dương và nhỏ hơn 1000.

**Output**

Ghi tập giao của A và B trên một dòng theo thứ tự từ nhỏ đến lớn.

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 5 6  1 2 3 4 5  3 4 5 6 7 8 | 3 4 5 |

## XÂU KÝ TỰ

### J03038 - ĐÁNH DẤU CHỮ CÁI

Cho một xâu ký tự S chỉ có các chữ cái Tiếng Anh viết thường. Hãy đếm xem có bao nhiêu ký tự chữ cái khác nhau trong S.

**Input:** Có duy nhất một dòng chứa xâu ký tự S, độ dài không quá 100.

**Output:** Ghi ra số ký tự chữ cái khác nhau

**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| banana | 3 |

## CÂU LỆNH ĐIỀU KHIỂN

### PY01065 - PHÉP TOÁN CƠ BẢN

Cho một biểu thức trong phạm vi hai chữ số với các phép toán cộng trừ nhân chia. *Các toán hạng và kết quả đảm bảo là số nguyên dương có hai chữ số*, *nếu có phép chia thì phải thỏa mãn tính chia hết.*

Người ta có thể ẩn đi một số chữ số hoặc phép toán bằng cách điền dấu chấm hỏi (?). Nhiệm vụ của bạn là khôi phục các dấu chấm hỏi và in ra phép toán chính xác ban đầu. Nếu không thể có kết quả đúng thì ghi ra WRONG PROBLEM!

**Dữ liệu vào**

Dòng đầu ghi số bộ test T (1 ≤ T ≤ 100).

T dòng tiếp theo, mỗi dòng là một biểu thức *có thể* có các dấu ?.

*Dữ liệu vào đảm bảo chỉ có duy nhất một kết quả đúng hoặc không thể có kết quả đúng.*

**Kết quả**

Với mỗi bộ test, ghi ra biểu thức đúng tìm được. Hoặc WRONG PROBLEM!

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2    ?0 ? 12 = 28    40 / ?3 = ?? | 40 - 12 = 28  WRONG PROBLEM! |

## BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN

### PY01074 - TỔNG ƯỚC SỐ

Cho N số nguyên. Nhiệm vụ của bạn là phân tích các số nguyên đã cho dưới dạng tích của các thừa số nguyên tố, sau đó tính tổng các ước số nguyên tố này.

**Input:**

Dòng đầu tiên số nguyên N (1 ≤≤ N ≤ 106).

N dòng tiếp theo, mỗi dòng gồm một số nguyên có giá trị không vượt quá 2\*106.

**Output**

In ra một số nguyên là đáp án tìm được.

**Ví dụ**

 | Input: | Output: |
|---|---|
| 5  7  9  10  13  100 | 47 |

*Giải thích test:*

*7 = 7*

*9 = 3 x 3 à 3 + 3 = 6*

*10 = 2 x 5 à 2 + 5 = 7*

*13 = 13*

*100 = 2 x 2 x 5 x 5 à 2+2+5+5 = 14*

*Cộng lại, 7 + 6 + 7 + 13 + 14 = 47.*

## HÀNG ĐỢI

### S213 - SỐ LỘC PHÁT

Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.

**Input:**

- Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T&lt;10);
- T dòng kế tiếp mỗi dòng ghi số N (1&lt;N&lt;15).
 
**Output:**

- Dòng đầu tiên là số lượng số lộc phát tìm được. Dòng thứ hai in ra đáp án **theo thứ tự giảm dần**.
 
 **Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2  2  3 | 6  88 86 68 66 8 6  14  888 886 868 866 688 686 668 666 88 86 68 66 8 6 |

### S223 - BIẾN ĐỔI SỐ TỰ NHIÊN

Cho số tự nhiên N (N&lt;10^9) và hai phép biến đổi (a), (b) dưới đây.

- **Thao tác (a)**: Trừ N đi 1 (N=N-1). Ví dụ N=17, thao tác (a) biến đổi N = N-1 =16.
- **Thao tác (b)**: N = max(u,v) nếu u\*v =N (u&gt;1, v&gt;1). Ví dụ N=16, thao tác (b) có thể biến đổi N = max(2, 8)=8 hoặc N=max(4, 4)=4.
 
Chỉ được phép sử dụng hai thao tác (a) hoặc (b), hãy biến đổi N thành 1 sao số các thao tác (a), (b) được thực hiện ít nhất. Ví dụ với N=17, số các phép (a), (b) nhỏ nhất biến đổi N thành 1 là 4 bước như sau:

 **Thao tác (a)**: N = N-1 = 17-1 = 16

 **Thao tác (b)**: 16 = max(4,4) = 4

 **Thao tác (b)**: 4 = max(2,2) = 2

 **Thao tác (a)**: 2 = 2-1 = 1

**Input:**

- Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
- T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số N.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 3  17  50  100 | 4  5  5 |

### S224 - DI CHUYỂN TRÊN BẢNG SỐ

Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng A\[i\]\[j\]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất. Tại mỗi ô, bạn được phép đi sang trái, sang phải, đi lên trên và xuống dưới.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A\[i\]\[j\] (0 ≤ A\[i\]\[j\] ≤ 9).
 
**Output:**

- Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 3  4  5  0 3 1 2 9  7 3 4 9 9  1 7 5 5 3  2 3 4 2 5  1  6  0 1 2 3 4 5  5 5  1 1 1 9 9  9 9 1 9 9  1 1 1 9 9  1 9 9 9 9  1 1 1 1 1 | 24  15  13 |

## NGĂN XẾP

### S226 - BIỂU THỨC ĐÚNG

Cho biểu thức số học bất kỳ. Nhiệm vụ của bạn là xác định độ dài lớn nhất của các cặp đóng mở ngoặc đúng lồng nhau. Ví dụ với biểu thức P = “( ((X)) (((Y))) )” ta có độ dài các cặp đóng mở ngoặc lồng nhau đúng là 4.

Nếu biểu thức không đúng hãy đưa ra -1.

**Input**:

- Dòng đầu tiên đưa vào số lượng bộ test T (1 ≤ T ≤ 100)
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một biểu thức số học được đưa vào trên một dòng. Độ dài biểu thức không quá 106
 
**Output**:

- Đưa ra kết quả mỗi test theo từng dòng.
 
**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 2  (((X))(((Y))))  (b)((c)() | 4  -1 |

## ĐỒ THỊ

### S301 - ĐƯỜNG ĐI CÓ HƯỚNG

Cho đồ thị có hướng G=&lt;V, E&gt; được biểu diễn dưới dạng danh sách cạnh.

Hãy tìm đường đi từ đỉnh u đến đỉnh v trên đồ thị bằng **thuật toán BFS**.

**Input:**

- Dòng đầu tiên đưa vào T là số lượng bộ test.
- Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, u, v tương ứng với số đỉnh, số cạnh, đỉnh xuất phát u, đỉnh kết thúc v;
- |E| dòng tiếp theo mỗi dòng đưa vào bộ đôi x, y tương ứng với một cạnh của đồ thị.
- T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
 
**Output:**

- Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán BFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 1  6 9 1 6  1 2  2 5  3 1  3 2  3 5  4 3  5 4  5 6  6 4 | 1 -&gt; 2 -&gt; 5 -&gt; 6 |

### S302 - ĐIỂM NÚT GIAO THÔNG TRỌNG YẾU

Một thành phố có N điểm nút giao thông. Các tuyến đường hai chiều được thiết kế giúp cho người dân có thể đi từ một nút bất kỳ đến tất cả các nút còn lại.

Những nút giao thông trọng yếu được định nghĩa là nút giao thông mà nếu các con đường đến nó đều bị chặn thì thành phố sẽ bị chia cắt, tức là khi đó sẽ có những cặp điểm nút không thể đi đến nhau được nữa.

Giả sử các điểm nút giao thông được đánh số từ 1 đến N. Hãy liệt kê các nút giao thông trọng yếu theo thứ tự tăng dần.

**Input**

- Dòng đầu là số bộ test (không quá 100)
- Mỗi bộ test bắt đầu với số nút giao thông N (không quá 1000) và số tuyến đường M.
- Tiếp theo là một dòng có M cặp số mô tả các tuyến đường hai chiều trong thành phố.
 
**Output**

Dòng đầu ghi ra số lượng điểm nút giao thông trọng yếu

Dòng thứ 2 lần lượt liệt kê các nút giao thông trọng yếu theo thứ tự tăng dần

**Ví dụ**

 | **Input** | **Output** |
|---|---|
| 1  5 5  1 2 1 3 2 3 2 5 3 4 | 2  2 3 |

### S308 - MẠNG XÃ HỘI HOÀN HẢO

Mạng xã hội hoàn hảo khi với mọi bộ ba X, Y, Z, nếu X kết bạn với Y, Y kết bạn với Z thì X và Z cũng phải là bạn bè của nhau trên mạng xã hội.

Hãy xác định một mạng xã hội có phải là hoàn hảo hay không? Nếu có hãy in ra “YES”, “NO” trong trường hợp ngược lại.

**Input:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết u và v là kết bạn với nhau trên mạng xã hội.
 
**Output:**

- Với mỗi test, in ra đáp án tìm được trên một dòng.
 
**Ví dụ:**

 | **Input:** | **Output** |
|---|---|
| 3  4 3  1 3  3 4  1 4  4 4  3 1  2 3  3 4  1 2  10 4  4 3  5 10  8 9  1 2 | YES  NO  YES |

## LÀM QUEN LẬP TRÌNH THI ĐẤU

### S52 - BIỂU DIỄN SỐ K

Cho một mảng A\[\] gồm N số nguyên dương và số K. Người ta gọi “biểu diễn số K trên mảng A\[\]” là một cách liệt kê các phần tử trong mảng A\[\] sao cho tổng các phần tử đó đúng bằng K. Các số được phép lặp lại và một cách sắp đặt lại thứ tự các số cũng được xem là một cách biểu diễn khác.

Hãy đếm số cách biểu diễn số K trên mảng A\[\].

Ví dụ với mảng A\[\] = {1, 5, 6}, K = 7 ta có 6 cách sau:

7 = 1 + 1 + 1+1 + 1 + 1+1 (lặp số 1 7 lần)

7 = 1 + 1 + 5 (lặp số 1)

7 = 1 + 5 + 1 (lặp và sắp đặt lại số 1)

7 = 1 + 6

7 = 6 + 1

**Input:**

- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào N và K; dòng tiếp theo đưa vào N số của mảng A\[\]; các số được viết cách nhau một vài khoảng trống.
- T, N, K, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤1000; 1≤A\[i\]≤100.
 
**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.
- Kết quả được tính theo modulo 109+7.
 
**Ví dụ:**

 | **Input** | **Output** |
|---|---|
| 2    3 7    1 5 6    4 14    12 3 1 9 | 6    150 |