#include "MonsterClass.h"

void Monster::AttackSpecial(Player targetPlayer)
{
    cout << "기본 공격 데미지 - 10hp" << endl;
}

void MonsterA::AttackSpecial(Player targetPlayer)
{
    cout << "인텡글 공격 데미지 -15hp" << endl;
}
