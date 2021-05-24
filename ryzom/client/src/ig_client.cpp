// Ryzom - MMORPG Framework <http://dev.ryzom.com/projects/ryzom/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This source file has been modified by the following contributors:
// Copyright (C) 2015  Jan BOON (Kaetemi) <jan.boon@kaetemi.be>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.



#include "stdpch.h"

/////////////
// INCLUDE //
/////////////
// Misc.
#include "nel/misc/path.h"
#include "nel/misc/debug.h"
// 3D Interface.
#include "nel/3d/u_driver.h"
#include "nel/3d/u_scene.h"
// Net.
#include "nel/net/unitime.h"
// Client.
#include "ig_client.h"
#include "entity_fx.h"
#include "misc.h"
// std.
#include <string>
#include <fstream>


///////////
// USING //
///////////
using namespace NLMISC;
using namespace NL3D;
using namespace NLNET;
using namespace std;


////////////
// GLOBAL //
////////////
map<string, UInstanceGroup *> IGCity;
map<string, UInstanceGroup *> IGLoaded;

CLandscapeIGManager			LandscapeIGManager;


////////////
// EXTERN //
////////////
extern UDriver	*Driver;
extern UScene	*Scene;


//-----------------------------------------------
// initIG :
// Initialize Instances Group
//-----------------------------------------------
void initIG()
{
	// Initialize lightmaps colors for the fireworks.

	// Fireworks is group 5
	Scene->setLightGroupColor (LightGroupFireworks, CRGBA(0,0,0));

}// initIG //

