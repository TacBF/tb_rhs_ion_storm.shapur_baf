class cfgMagazines
{
        class magazineLimitations
        {
                /*---------------------------------------------------------------------------
                        Sets the amount of magazines you can have out of the following array (So in total!)
                        You can specify a special number for resistance as well
                ---------------------------------------------------------------------------*/
                class 40mm_HE
                {
 
                        magazineArray[] = {"rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_VOG25", "rhs_VOG25P", "rhs_VG40TB"};
                        limit = 6;
                        limtResistance = 6;
                        categoryName = "40mm HE Grenades";
                };
               
                class Grenade
                {
                        magazineArray[] = {"rhs_mag_rgd5", "rhs_mag_m67"};
                        limit = 2;
                        limtResistance = 2;
                        categoryName = "HE Grenades";
                };
               
                class Stun_Grenade
                {
                        magazineArray[] = {"rhs_mag_fakel", "rhs_mag_fakels", "rhs_mag_zarya2", "rhs_mag_plamyam", "rhs_mag_mk84", "rhs_mag_an_m14_th3", "rhs_mag_m7a3_cs", "rhs_mag_mk3a2"};
                        limit = 2;
                        limtResistance = 2;
                        categoryName = "Stun Grenades";
                };
               
                class HE_Rockets
                {
                        magazineArray[] = {"RPG32_HE_F","rhs_rpg7_OG70V_mag","R_TBG32V_F","TMR_M_NLAW_MPV_F"};
                        limit = 3;
                        limtResistance = 3;
                        categoryName = "HE Rockets";
                };
        };
};