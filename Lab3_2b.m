N = input('Nhập chiều dài vector N: ');
binaryVector = randi([0 1], 1, N);
disp('Vector ban đầu:');
disp(binaryVector);
binaryVector(binaryVector == 1) = 2;
disp('Vector sau khi thay đổi:');
disp(binaryVector);
