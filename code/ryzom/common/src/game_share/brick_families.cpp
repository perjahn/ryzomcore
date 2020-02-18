// Ryzom - MMORPG Framework <http://dev.ryzom.com/projects/ryzom/>
// Copyright (C) 2010  Winch Gate Property Limited
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

#include "nel/misc/debug.h"
#include "brick_families.h"
// nel
#include "nel/misc/string_conversion.h"

using namespace std;
using namespace NLMISC;

namespace BRICK_FAMILIES
{

	NL_BEGIN_STRING_CONVERSION_TABLE (TBrickFamily)
		// root
		NL_STRING_CONVERSION_TABLE_ENTRY(BFPA)

		NL_STRING_CONVERSION_TABLE_ENTRY(BMPA)

		// combat options
		NL_STRING_CONVERSION_TABLE_ENTRY(BFOA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFOB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFOC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFOD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFOE)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFOF)

		// combat parameters
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMH)

		NL_STRING_CONVERSION_TABLE_ENTRY(BFMRF)	// Range dmg Fire
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMRT)	// Range dmg Poison
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMRW)	// Range dmg Shockwave
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMRE)	// Range dmg Electricity

		NL_STRING_CONVERSION_TABLE_ENTRY(BFHME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAHHME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAHCME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAHAME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAHHAME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAHLME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAHFME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFKME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAKHME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAKCME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAKAME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAKHAME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAKLME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAKFME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFQME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAQHME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAQCME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAQAME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAQHAME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAQLME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFAQFME)

		// deprecated : only used by saibricks
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1MC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2MC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1HMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1PMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1BMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1SMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2PMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2BMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2SMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1MC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2MC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1MD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2MD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1MD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2MD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1ME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2ME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1ME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2ME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1MF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2MF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1MF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2MF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1BMG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2BMG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2SMG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1BMH)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2BMH)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2SMH)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1BMI)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2BMI)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1SMJ)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1PMK)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2PMK)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2LFML)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2SSFML)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2SAFML)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1SAFML)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1BMTMM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2BMTMM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1HTMM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1BTMM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1BSZMN)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1PSZMN)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2BZMN)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM2PPZMN)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1PDMMO)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR1PMMO)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFM1SSMMO)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFR2RMMO)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMMQ)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMR)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMK)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFMP)
		// end deprecated

		// combat credit
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCE)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BFCG)

		// Magic Mandatories
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDALEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDHTEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOALEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMSTEA)

		// Magic Parameters
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDALMF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDALMM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDALMS)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDHTMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDHTMP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMDHTMT)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOALMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOALMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOALMD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOALMM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOALMR)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELMF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELMP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELMR)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOELMS)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETMF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETMP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETMR)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOETMS)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMSTMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMSTMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMSTMP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMSTMT)

		// Magic options
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOH)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOR)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMOV)

		// Magic Credits
		NL_STRING_CONVERSION_TABLE_ENTRY(BMCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMCC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMCP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BMCR)

		// Faber Root
		NL_STRING_CONVERSION_TABLE_ENTRY(BCPA)

		// Faber Mandatories
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCREA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCPEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCAEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCAEB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCAEC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCAED)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCSEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCBMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCBREA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFREA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFPEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFAEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFAEB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFAEC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFAED)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFSEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFJEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMREA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMPEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMAEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMAEB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMAEC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMAED)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMSEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMJEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTREA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTPEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTAEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTAEB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTAEC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTAED)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTSEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTJEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZREA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZPEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZAEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZAEB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZAEC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZAED)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZSEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZJEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCRMEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCRAEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCKAMMI)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCKARMI)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKAMM01)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKAMR01)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKAMT01)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKARM01)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKARR01)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKART01)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKAMM02)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKAMR02)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKAMT02)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKARM02)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKARR02)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCOKART02)

		// Faber options
        NL_STRING_CONVERSION_TABLE_ENTRY(BCOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFAOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFMOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFROA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFPOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFSOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFJOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMAOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMMOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMROA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMPOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMSOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMJOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTAOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTMOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTROA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTPOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTSOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTJOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZAOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZMOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZROA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZPOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZSOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZJOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFAOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFMOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFROB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFPOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFSOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFJOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMAOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMMOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMROB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMPOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMSOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMJOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTAOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTMOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTROB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTPOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTSOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTJOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZAOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZMOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZROB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZPOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZSOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZJOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFAOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFMOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFROC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFPOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFSOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFJOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMAOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMMOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMROC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMPOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMSOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMJOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTAOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTMOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTROC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTPOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTSOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTJOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZAOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZMOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZROC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZPOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZSOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZJOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFAOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFMOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFROD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFPOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFSOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFJOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMAOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMMOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMROD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMPOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMSOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMJOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTAOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTMOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTROD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTPOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTSOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTJOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZAOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZMOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZROD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZPOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZSOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZJOD)

		// Faber Credits
		NL_STRING_CONVERSION_TABLE_ENTRY(BCCMCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCCRCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCCPCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFACA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFMCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFRCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFPCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFSCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCFJCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMACA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMMCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMRCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMPCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMSCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCMJCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTACA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTMCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTRCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTPCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTSCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCTJCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZACA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZMCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZRCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZPCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZSCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BCZJCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCKAMBCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCKARBCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCFTCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCMTCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCTTCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BCZTCA)


		// Faber Raw material // DO NOT REMOVE THIS !!! faber raw materials is not a bricks !
		NL_STRING_CONVERSION_TABLE_ENTRY(FARawMaterial)

		// Faber Tools // DO NOT REMOVE THIS !!! faber tools is not a bricks !
		NL_STRING_CONVERSION_TABLE_ENTRY(FATool)

		// harvest
		NL_STRING_CONVERSION_TABLE_ENTRY(RootHarvest)

		// training & characteristics
		NL_STRING_CONVERSION_TABLE_ENTRY(BTFOC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BTHP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BTSAP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BTSTA)

		NL_STRING_CONVERSION_TABLE_ENTRY(BPPC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPM)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPI)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPW)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPS)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPPL)

		// Bonuses
		NL_STRING_CONVERSION_TABLE_ENTRY(BPBCA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPBHFEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BPBGLA)
		//NL_STRING_CONVERSION_TABLE_ENTRY(BPBF)
		//NL_STRING_CONVERSION_TABLE_ENTRY(BPBM)

		// Title
		NL_STRING_CONVERSION_TABLE_ENTRY(BPTEA)

		// Interface
		NL_STRING_CONVERSION_TABLE_ENTRY(BIF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BIG)

		// Forage
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFSPA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFGPA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOE)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOF)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOG)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOH)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOI)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOJ)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOK)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPPOL)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPSOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPCA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFME)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMF)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMG)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMH)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMI)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMJ)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMK)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFML)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMM)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMN)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMO)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMP)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMQ)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMR)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMS)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMT)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMU)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMV)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMW)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPRMFMX)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPME)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMF)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMG)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMH)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMI)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMJ)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMK)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPML)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFPMM)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEPA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFECA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOE)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOF)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BHFEOH)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEEA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEEB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEEC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMA)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMB)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMC)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMD)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEME)
        NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BHFEMK)

		// Special powers
		NL_STRING_CONVERSION_TABLE_ENTRY(BSXPA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSXEA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSXEB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSCEA)

		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFME)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMG)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMH)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMI)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMJ)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFMK)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSFML)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSXMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSXMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSXMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSDMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBE)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBF)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBP)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBR)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMBS)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSMMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSMMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSMMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSMMD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSCMA)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSCMB)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSCMC)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSCMD)
		NL_STRING_CONVERSION_TABLE_ENTRY(BSGMC)

		NL_STRING_CONVERSION_TABLE_ENTRY(BSXCA)

		// proc enchantement
		NL_STRING_CONVERSION_TABLE_ENTRY(BEPA)

		// timed actions
		NL_STRING_CONVERSION_TABLE_ENTRY(BAPA)

		NL_STRING_CONVERSION_TABLE_ENTRY(Unknown)
	NL_END_STRING_CONVERSION_TABLE(TBrickFamily, BrickFamilyConversion, Unknown)

	//-----------------------------------------------
	// toSBrickFamily :
	//-----------------------------------------------
	TBrickFamily toSBrickFamily(const std::string &str)
	{
//		uint16 nb = BrickFamilyConversion.getNbPairs();
//		nlassert( uint16(NbFamilies+1) == nb - 1 );
		return BrickFamilyConversion.fromString(str);
	} // toBrickFamily //


	//-----------------------------------------------
	// toString :
	//-----------------------------------------------
	const std::string &toString(TBrickFamily family)
	{
		return BrickFamilyConversion.toString(family);
	} // toString //


	//-----------------------------------------------
	// brickType :
	//-----------------------------------------------
	BRICK_TYPE::EBrickType brickType( TBrickFamily rootFamily )
	{
		if(rootFamily>=BeginCombat && rootFamily<=EndCombat)
			return BRICK_TYPE::COMBAT;
		else if(rootFamily>=BeginMagic && rootFamily<=EndMagic)
			return BRICK_TYPE::MAGIC;
		else if(rootFamily>=BeginFaber && rootFamily<=EndFaber)
			return BRICK_TYPE::FABER;
		else if(rootFamily>=BeginHarvest && rootFamily<=EndHarvest)
			return BRICK_TYPE::HARVEST;
		else if(rootFamily>=BeginForageProspection && rootFamily<=EndForageProspection)
			return BRICK_TYPE::FORAGE_PROSPECTION;
		else if(rootFamily>=BeginForageExtraction && rootFamily<=EndForageExtraction)
			return BRICK_TYPE::FORAGE_EXTRACTION;
		else if(rootFamily>=BeginSpecialPowers && rootFamily<=EndSpecialPowers)
			return BRICK_TYPE::SPECIAL_POWER;
		else if (rootFamily >= BeginProcEnchantement && rootFamily <=EndProcEnchantement)
			return BRICK_TYPE::PROC_ENCHANTEMENT;
		else if (rootFamily >= BeginTraining && rootFamily <= EndTraining)
			return BRICK_TYPE::TRAINING;
		else if (rootFamily >= BeginTimedActions && rootFamily <= EndTimedActions)
			return BRICK_TYPE::TIMED_ACTION;
		else if (rootFamily >= BeginBonus && rootFamily <= EndBonus)
			return BRICK_TYPE::BONUS;
		else
// ADD HERE NEW BRICK TYPES
			return BRICK_TYPE::UNKNOWN;
	} // brickType //


}; // BRICK_FAMILIES





















