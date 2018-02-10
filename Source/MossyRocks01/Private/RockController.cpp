// Flynn's Rad Copyright.

#include "RockController.h"

ARockController::ARockController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;
    bAutoManageActiveCameraTarget = false; //Do not allow controller to change camera upon possession.
}
