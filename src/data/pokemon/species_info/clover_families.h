#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenClover[] =
{
#endif

#if P_FAMILY_GRASSHOLE
    [SPECIES_GRASSHOLE] =
    {
        .baseHP        = 56,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 50,
        .baseSpAttack  = 47,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grasshole"),
        .cryId = CRY_GRASSHOLE,
//        .natDexNum = NATIONAL_DEX_GRASSHOLE,
        .categoryName = _("Seed"),
        .height = 7,
        .weight = 69,
        .description = COMPOUND_STRING(
            "Grasshole is born with a strange plant growing\n"
            "out of its buttocks. It uses its own waste as fertilizer."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grasshole,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Grasshole,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Grasshole,
        .shinyPalette = gMonShinyPalette_Grasshole,
        .iconSprite = gMonIcon_Grasshole,
        .iconPalIndex = 0,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Grasshole)
        .levelUpLearnset = sGrassholeLevelUpLearnset,
        .teachableLearnset = sGrassholeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ANALGAE}),
    },

    [SPECIES_ANALGAE] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Analgae"),
        .cryId = CRY_ANALGAE,
 //       .natDexNum = NATIONAL_DEX_ANALGAE,
        .categoryName = _("Seed"),
        .height = 10,
        .weight = 130,
        .description = COMPOUND_STRING(
            "The plant in Analgae’s buttcrack is filled\n"
            "with nutrients. Bird Pokémon love to peck at it."),
        .pokemonScale = 335,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Analgae,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Analgae,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Analgae,
        .shinyPalette = gMonShinyPalette_Analgae,
        .iconSprite = gMonIcon_Analgae,
        .iconPalIndex = 0,
        SHADOW(-1, 3, SHADOW_SIZE_L)
        .levelUpLearnset = sAnalgaeLevelUpLearnset,
        .teachableLearnset = sAnalgaeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_RECTREEM}),
    },

    [SPECIES_RECTREEM] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GROUND),
        .catchRate = 45,
        .expYield = 263,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rectreem"),
        .cryId = CRY_VENUSAUR,
//        .natDexNum = NATIONAL_DEX_VENUSAUR,
        .categoryName = _("Seed"),
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "If two Rectreem meet, they fight using their trees.\n"
            "Whoever loses suffers a horrible Ass Shove from the victor.."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Rectreem,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Rectreem,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Rectreem,
        .shinyPalette = gMonShinyPalette_Rectreem,
        .iconSprite = gMonIcon_Rectreem,
        .iconPalIndex = 0,
        SHADOW(2, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        .levelUpLearnset = sRectreemLevelUpLearnset,
        .teachableLearnset = sRectreemTeachableLearnset,
    },
#ifdef __INTELLISENSE__
};
#endif
#endif //P_FAMILY_GRASSHOLE