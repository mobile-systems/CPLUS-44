# 12.7. �������� �������

� �������� �������� ������� ����� ������� ����� �������� ������� `IsKPeriodic`, ������� ���������, �������� �� ������ ������� ����� `K`.

��������� � ������������� ������ ������ `K` �������� (`K` ������ ���� ������ `0`). ��������, `abcabcabcabc` ����� ��������� `3`,  ��� ��� ��� ������� �� �������� `abc`, ������� ����� `3`.

*������� ��������� � ����������� �� GitHub.*

### ��������
������� �������������� ������� ����� ���������� �������� �� ������� ������ `char text[]`, 
���� ���������� � ������� `int textCount[256]`.
����� ����������� ������ `textCount[]` �� ���������� �������� � �������� ������ � ����� ������ ��������� ��� ��� ���� ������:
```
int minFind = 0, // ����������� ���������� ���������� �������� (������� �� ����, ��������� ����������� ��������)
    avgFind = 0, // ������� ���������� ���������� ��������
    maxFind = 0; // ������������ ���������� ���������� �������� (������������� � �������� ��������)
```
� ���������� ���������� `K = (strlen(text) / avgFind)` � ��������� K �� ����� ������� `bool IsKPeriodic(char text[], int K)`