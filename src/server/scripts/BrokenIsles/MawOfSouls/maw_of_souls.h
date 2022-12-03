/*
* 
* Copyright 2023 AzgathCore
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAW_OF_SOULS_H_
#define MAW_OF_SOULS_H_

#define MawOfSoulsScriptName "instance_maw_of_souls"
#define DataHeader "MOS"

uint32 const EncounterCount = 3;

enum MOSDataTypes
{
    // Encounter States/Boss GUIDs
    DATA_YMIRON_MAW = 0,
    DATA_HARBARON_MAW,
    DATA_SKJAL,
    DATA_HELYA_MAW,
    MAX_ENCOUNTER,

    DATA_YMIRON_GORN,
    DATA_SHIP,
    DATA_SAVE_PLAYER_GUID
};

enum MOSCreatureIds
{
    //Ymiron
    NPC_YMIRON_MAW              = 96756,
    NPC_BIRD                    = 97163,
    NPC_SEACURSED_SLAVER        = 97043,
    NPC_SHIELDMAIDEN            = 102104,
    NPC_RUNECARVER              = 102375,
    NPC_RUNECARVER_IN_CAGE      = 102894,
    NPC_RUNECARVER_INTRO        = 114712,
    NPC_RISEN_WARRIOR           = 98246,

    //Harbaron
    NPC_HARBARON_MAW            = 96754,
    NPC_SOUL_FRAGMENT           = 98761,
    NPC_COSMIC_SCYTHE           = 98989,
    NPC_COSMIC_SCYTHE_2         = 100839,

    // Skjal
    NPC_SKJAL_MAW               = 99307,
    NPC_HELARJAR_CHAMPION       = 97097,
    NPC_SEACURSED_SWIFTBLADE    = 98919,
    NPC_HELARJAR_MISTCALLER     = 99033,
    NPC_SEACURSED_MISTMENDER    = 97365,
    NPC_SEACURSED_SOULKEEPER    = 97200,

    NPC_HELYA_MAW               = 96759,
    NPC_DESTRUCTOR_TENTACLE     = 99803, 
    NPC_GRASPING_TENTACLE_1     = 99800, 
    NPC_GRASPING_TENTACLE_2     = 100361,
    NPC_GRASPING_TENTACLE_3     = 100359,
    NPC_GRASPING_TENTACLE_4     = 100353,
    NPC_GRASPING_TENTACLE       = 100360,
    NPC_SWIRLING_POOL_VEH       = 97099, 
    NPC_PIERCING_TENTACLE       = 100188,
    NPC_SWIRLING_POOL_TRIG      = 102306
};

enum MOSGameObjectIds
{
    GO_YMIRON_GORN              = 247041,
    GO_HARBARON_DOOR            = 246947,
    GO_HARBARON_DOOR_2          = 246888,
    GO_SKJAL_INVIS_DOOR         = 246435,
    GO_SKJAL_DOOR_1             = 265477,
    GO_SKJAL_DOOR_2             = 265476,

    GO_SHIP                     = 246919,
    GO_HELYA_CHEST              = 246036,

    GO_SWIRLING_POOL_1          = 246834,
    GO_SWIRLING_POOL_2          = 246835,
    GO_SWIRLING_POOL_3          = 246836,
    GO_SWIRLING_POOL_4          = 246837,
    GO_SWIRLING_POOL_5          = 246838,
    GO_SWIRLING_POOL_6          = 246839,
    GO_SWIRLING_POOL_7          = 246840,
    GO_SWIRLING_POOL_8          = 246841,
    GO_SWIRLING_POOL_9          = 246842,
    GO_SWIRLING_POOL_10         = 246843,
    GO_SWIRLING_POOL_11         = 246844
};

enum MOSStateShip
{
    STATE_DESTROY               = 0,
    STATE_REBUILDING            = 1
};

template<class AI>
AI* GetMawOfSoulsAI(Creature* creature)
{
    return GetInstanceAI<AI>(creature, MawOfSoulsScriptName);
}

#endif // MAW_OF_SOULS_H_
