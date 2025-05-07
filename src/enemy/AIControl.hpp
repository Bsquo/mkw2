#pragma once

#include "AIInfo.hpp"
#include "AIPath.hpp"
#include "AIProbability.hpp"
#include "util/State.hpp"

namespace Enemy {

    struct AIControlBase: public Util::StateSequencer<AIControlBase> {
        AIInfo* mpInfo;
        AIPathHandler* mpPathHandler;
        void* mpStuck;
        AIProbabilityBase* mpProbability;
        u8 field_0x44[28];
    };

}
