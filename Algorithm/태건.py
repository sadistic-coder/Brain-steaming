#-*-coding: utf-8-*-

# 첫 번째 퀘스트
def wizard(n):
  min_num = n
  cnt = 1
  print(n, end=' ')
  while n > 1:
    if n % 3 == 0:
      n = n // 3
    elif n % 3 == 1:
      n = 5 * n - 2
    else:
      n = 5 * n - 1
    cnt += 1
    print(n, end=' ')
    if n < min_num:
      print('')
      return cnt
  print('입력 값이 잘못되었다.')

num = int(input('자연수를 입력하세요: '))
print(wizard(num))