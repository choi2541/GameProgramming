// 주석- 컴퓨터는 알아볼 수 없다.
/*
작성일자 : 2025-02-17
작성자 : 최수환
주제 : 변수
*/
// 0 환경 설정

#include <stdio.h>

int main()
{
    // Player : 닉네임(문자열)
    // enemy  : 몬스터 이름(문자열)
    // Plarer's attackpower : 플레이어의 공격력(숫지)
    // enemy's attackpowe : 몬스터의 공격력(숫자)
    //
    // 변수를 이용해서, 한방에 player의 이름을 바꿔보자.

    // Plarer's attackpower 값을 8로 해주세요.
    // 컴퓨터에게 전달해야 할 정보(변수의 이름, 어떠한 종류인가(**)!!!, 값)

    //PlayerA 하면 뛰어쓰기 가능
    
    int playerAttackPower = 5;
    int enemyAttackPower = 3;
    int itemReinforcement = 90;


    printf("%s와 %s가 어딘가에 발견했습니다.\n", "초보", "고블린");
    printf("%s는 아직 %s를 발견하지 못했습니다.\n", "고블린", "초보");
    printf("%s가 %s에게 마법 공격하여 %d만큼 데미지를 줬습니다.\n", "초보", "고블린", playerAttackPower);
    printf("%s이 %s를 바로 공격하지만 반격당해 %d와 %d 입음.\n", "고블린", "초보", playerAttackPower, enemyAttackPower);
    printf("%s가 %s를 물리쳤다!!\n", "고블린", "초보");
    printf("%s의 아이템을 얻었다.\n", "고블린");
    printf("%s의 아이템을 강화하시겠습니까? 확률 %d%\n", "고블린", itemReinforcement);
    printf("%s의 아이템을 강화가 성공했습니다!!!!\n", "고블린");

    char char1 = "a";
    int int1 = 10;
    float float1 = 0.8f;

    printf("문자 출력 : %c\n", char1);
    printf("정수 출력 : %d\n", int1);
    printf("실수 출력 : %f\n", float1);
    printf("문자열 출력 : 고블린");
    // 강화 시스템 스토리를 짠다.
    // 아이템 이름 %s 현제 레벨%d 강화 확률%f
    // 강화를 시도합니다.
    // 성공했다면 -> 출력, 실패했다면 -> 출력
    printf("");



}
// F5 디버깅 버튼 클릭
// 콘솔창에 "안녕 변수" 출력시켜보겠습니다.

// 1. 출력하고 싶은 내용을 작성했다.
// 2. 단어, 정수, 실수, 문자열 출력하세요.

