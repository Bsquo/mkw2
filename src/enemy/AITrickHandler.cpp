#include "AI.hpp"
#include "AIEngine.hpp"
#include "AITrickHandler.hpp"
#include "AIProbability.hpp"
#include "AIControl.hpp"
#include "kart/KartState.hpp"

namespace Enemy {

struct_121::struct_121(s32 arg0) {
    field_0x00 = arg0;
}

struct_121::~struct_121() {}

void struct_121::vf_0x0C() {}
void struct_121::vf_0x10() {}

void AITrickHandler::avoidPow() {
    mpInfo->mpInput->setTrick(System::KPadRaceInputState::UP_TRICK);
}

bool AITrickHandler::isStartingAirborne() {
    Kart::KartState* state = mpInfo->mpAI->kartState();

    if (state->on(Kart::KART_FLAG_AIR_START) && !state->on(Kart::KART_FLAG_JUMPPAD) && !state->on(Kart::KART_FLAG_HIT_ITEM_OR_OBJ)) {
        return true;
    }
    
    return false;
}

bool AITrickHandler::shouldTrick() {
    AIProbabilityBase* probability = mpInfo->mpAI->mpEngine->mpControl->getAIProbability();
    bool startingAirborne = isStartingAirborne();

    if (startingAirborne && probability->getTrick()) {
        return true;
    }
    
    return false;
}
    
}
