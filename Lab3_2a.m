
N = input('Nhập chiều dài vector N: ');

binaryVector = randi([0 1], 1, N);
disp('Vector ban đầu:');
disp(binaryVector);

for i = 1:N
    if binaryVector(i) == 1
        binaryVector(i) = 2;
    end
end

disp('Vector sau khi thay đổi:');
disp(binaryVector);
