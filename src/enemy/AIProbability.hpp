#pragma once

#include "AIInfo.hpp"

namespace Enemy {

    class AIProbabilityBase {
        inline AIProbabilityBase() {}
        virtual ~AIProbabilityBase();
        virtual void determineIfCanMiniturbo();
        virtual void getStartBoost();
        virtual void setDoTrick(bool);
        virtual s32 getStartBoostLevel();
        virtual bool getDrift(bool);
        virtual bool getMiniturbo();
        virtual bool getTrick();
        virtual bool getWheelie();
        virtual bool vf_0x2C();
        virtual bool isLaunchBlockLine();

        s32 mGroupKind;
        s32 mStartBoostLevel;
    };

    class AIProbabilityRace: public AIProbabilityBase {
        AIProbabilityRace();
        ~AIProbabilityRace();
        void determineIfCanMiniturbo();
        void getStartBoost();
        bool getDrift(bool);
        bool getMiniturbo();
        bool getTrick();
        bool getWheelie();
        bool vf_0x2C();
        bool isLaunchBlockLine();

        AIInfo* mpInfo;
        s32 field_0x10;
        bool mbCanDrift;
        bool mbCanMiniturbo;
    };

    // Unknown vtable at 0x808CA060
    class AIProbabilityBattleBase: public AIProbabilityBase {
        inline AIProbabilityBattleBase() {}
        virtual ~AIProbabilityBattleBase();
        virtual void determineIfCanMiniturbo();
        virtual bool getDrift(bool);
        virtual bool getMiniturbo();
        virtual bool getTrick();
        virtual bool getWheelie();
        virtual bool vf_0x2C();
        virtual bool isLaunchBlockLine();
    };

    class AIProbabilityBattle: public AIProbabilityBattleBase {
        inline AIProbabilityBattle() {}
        void setDoTrick(bool);
        virtual bool vf_0x2C();

        bool mbDoTrick;
    };

    class AIProbabilityDemo: public AIProbabilityBase {
        inline AIProbabilityDemo() {}
        ~AIProbabilityDemo();
        void determineIfCanMiniturbo();
        s32 getStartBoostLevel();
        bool getDrift(bool);
        bool getMiniturbo();
        bool getTrick();
        bool getWheelie();
        bool vf_0x2C();
        bool isLaunchBlockLine();
    };

}
