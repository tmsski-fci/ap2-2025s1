print('Boa Noite!')
for i in range(1,4):
    print("\n Notas do aluno:", i)
    n=2 
    p1= float(input("nota da p1: "))
    p2= float(input("digite a nota da p2: "))
    media=(p1+p2)/n
    print(f'Sua média é {media}')
    if media >= 6:
        print("Aprovado")
    else:
        print("Recuperação")
        
