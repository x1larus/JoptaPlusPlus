#include "Jopta++.h"
#include матюгальник
обращайсяпокликухам нах

каста Gopnik
жи
    свои
        целка Hp нах
        
        факт CheckDeath()
        жи
            вилкойвглаз(Hp чутьхуевей 0)
                отвечаю пиздато нах
            иливжопураз
                отвечаю хуево нах
        есть

        нихуя Death()
        жи
            базарь ртом "Blya ya masliny poimal...\n" нах
            ОБЛАВА нах
        есть
    
    шестерки
        Gopnik()
        жи
            Hp сука 100 нах
        есть

        нихуя Meet()
        жи
            базарь ртом "Pizda tebe nah\n" нах
        есть
        
        нихуя GetDamage(целка dmg)
        жи
            Hp сука Hp - dmg нах
            базарь ртом "AAAAAAAA BLYAT\n" нах
            вилкойвглаз (CheckDeath())
                Death() нах
            иливжопураз
                базарь ртом "Sosi y menya eshe " ртом Hp ртом " hp nah\n" нах
        есть
есть нах

целка основа
жи
    Gopnik chel нах
    chel.Meet() нах
    потрещим (пиздато)
    жи
        целка dmg нах
        базарь ртом "Enter dmg: " нах
        слушай ушами dmg нах
        chel.GetDamage(dmg) нах
    есть
есть