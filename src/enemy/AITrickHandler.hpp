#pragma once

#include "AIInfo.hpp"

namespace Enemy {

    struct AITrickHandler {
        virtual ~AITrickHandler();
        virtual void vf_0x0C();
        virtual void calc();
        virtual void disableWheelie();
        virtual void update();
        void avoidPow();
        bool isStartingAirborne();
        bool shouldTrick();

        AIInfo* mpInfo;
    };

    struct AITrickHandlerBike: public AITrickHandler {
        virtual ~AITrickHandlerBike();
        void vf_0x0C();
        void calc();
        void disableWheelie();
        void calcWheelie();
        virtual void update();

        bool mbPerformWheelie;
    };

    struct AITrickHandlerBikeUnused: public AITrickHandlerBike {
        ~AITrickHandlerBikeUnused();
        void update();
    };

    struct struct_121 {
        struct_121();
        virtual ~struct_121();
        virtual void vf_0x0C();
        virtual void vf_0x10();

        s32 field_0x00;
    };

}
