/*
 * File: iClientEntityList.h
 * Project: files
 * Created Date: 16.02.2023 21:45:21
 * Author: 3urobeat
 * 
 * Last Modified: 17.02.2023 15:38:44
 * Modified By: 3urobeat
 * 
 * Copyright (c) 2023 3urobeat <https://github.com/HerrEurobeat>
 * 
 * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
 */


#pragma once


#include "../../../main.h"
#include "../../classes/files/cUserCmd.h"


// https://gitlab.com/KittenPopo/csgo-2018-source/-/blob/main/game/server/entitylist.h#L374
class IEntityList {
    private:
        // TODO: TEMP
        virtual void Unused_0() = 0;
        virtual void Unused_1() = 0;
        virtual void Unused_2() = 0;

    public:
        virtual CEntity *GetClientEntity(int index) = 0;
};