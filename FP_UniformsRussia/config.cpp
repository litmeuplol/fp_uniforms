class CfgPatches
{
	class FP_UniformsRussia
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"FP_UniformsEverywhereElse"
		};
	};
};
class CfgVehicles
{
	class O_officer_F;
	class FP_Rifleman_klmk: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK (BDU)";
		uniformClass="FP_Uniform_KLMK";
		author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\officer_klmk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_klmkvdv: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK (BDU/VDV)";
		uniformClass="FP_Uniform_klmkvdv";
		author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\officer_klmkvdv.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_kmsh: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU Kamysh (BDU)";
		uniformClass="FP_Uniform_kmsh";
		author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\officer_kmsh.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_vsr: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU VSR (BDU)";
		uniformClass="FP_Uniform_VSR";
		author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\officer_VSR.paa"
		};
	    hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_klmkwinter: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK Winter";
		uniformClass="FP_Uniform_klmkwinter";
		author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\officer_klmkwint.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class rhs_msv_rifleman_m88_patchless;
	class FP_Rifleman_GreenM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP M88 (Green)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_GreenM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\green_m88.paa"
		};
	};
	class FP_Rifleman_KLMKM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU KLMK (M88)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KLMKM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\FP_KLMKM88.paa"
		};
	};
	class FP_Rifleman_BerezkaM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU Berezka (M88)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_BerezkaM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\FP_BerezkaM88.paa"
		};
	};
	class FP_Rifleman_KSORM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU KSOR (M88)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KSORM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\FP_KSOR.paa"
		};
	};
};
class cfgWeapons
{
	class UniformItem;
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_klmk: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (BDU)";
		picture="\FP_UniformsRussia\UI\u_klmk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KLMKVDV: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (BDU/VDV)";
		picture="\FP_UniformsRussia\UI\u_klmkvdv_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmkvdv";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_kmsh: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU Kamysh (BDU)";
		picture="\FP_UniformsRussia\UI\u_kmsh_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_kmsh";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_vsr: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU VSR (BDU)";
		picture="\FP_UniformsRussia\UI\u_vsr_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_VSR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_klmkwinter: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (Reversed)";
		picture="\FP_UniformsRussia\UI\u_klmkwint_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmkwinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_m88_patchless;
	class FP_Uniform_GreenM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP M88 (Green)";
		picture="\A3\characters_f\data\ui\icon_u_b_combatuniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_GreenM88";
			containerClass="Supply20";
			mass=80;
		};
	};
	class FP_Uniform_KLMKM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP RU KLMK (M88)";
		picture="\FP_UniformsRussia\UI\klmkicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KLMKM88";
			containerClass="Supply20";
			mass=40;
		};
	};
	class FP_Uniform_BerezkaM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP RU Berezka (M88)";
		picture="\FP_UniformsRussia\UI\berezkaicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BerezkaM88";
			containerClass="Supply20";
			mass=40;
		};
	};
	class FP_Uniform_KSOR: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP RU KSOR (M88)";
		picture="\FP_UniformsRussia\UI\ksoricon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KSORM88";
			containerClass="Supply20";
			mass=40;
		};
	};
    class LOP_H_SSh68Helmet_OLV;
	class FP_Helmet_VSRSSH68: LOP_H_SSh68Helmet_OLV
	{
		author = "FP Mod Team";
		_generalMacro = "LOP_H_SSh68Helmet_OLV";
		scope = 2;
		displayName = "FP RU SSH68 (VSR)";
		hiddenSelectionsTextures[] = {"FP_UniformsRussia\SkinsHeadgear\FP_FloraSSH68.paa"};
	};
};