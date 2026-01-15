//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 42,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 43,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 45
    [DIFFICULTY_NORMAL][PARTNER_CYRUS] =
    {
#line 46
        .trainerName = _("Cyrus"),
#line 47
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 48
        .trainerPic = TRAINER_BACK_PIC_CYRUS,
        .encounterMusic_gender =
#line 50
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 56
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 55
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 54
            .lvl = 43,
#line 53
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 57
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 62
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 66
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 65
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 64
            .lvl = 44,
#line 63
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 67
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 72
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 76
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 75
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 74
            .lvl = 42,
#line 73
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 77
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 82
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 86
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 85
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 84
            .lvl = 43,
#line 83
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 87
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 92
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 96
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 95
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 94
            .lvl = 44,
#line 93
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 97
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 102
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 104
            .lvl = 42,
#line 103
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 107
                MOVE_NIGHT_SLASH,
                MOVE_DRAIN_PUNCH,
                MOVE_ICE_SPINNER,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 112
    [DIFFICULTY_NORMAL][PARTNER_CYRUS_2] =
    {
#line 113
        .trainerName = _("Cyrus"),
#line 114
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 115
        .trainerPic = TRAINER_BACK_PIC_CYRUS,
        .encounterMusic_gender =
#line 117
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 123
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 121
            .lvl = 43,
#line 120
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 124
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 129
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 133
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 131
            .lvl = 44,
#line 130
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 134
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 139
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 143
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 141
            .lvl = 42,
#line 140
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 144
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
