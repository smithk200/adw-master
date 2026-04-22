//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
#line 5
        .gender = TRAINER_GENDER_MALE,
#line 6
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("Steven"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_PIC_STEVEN,
#line 12
        .gender = TRAINER_GENDER_MALE,
#line 13
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 16
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 20
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 19
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 18
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 17
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 21
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 26
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 30
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 28
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 27
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 36
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 40
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 38
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 37
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 46
    [DIFFICULTY_NORMAL][PARTNER_CYRUS] =
    {
#line 47
        .trainerName = _("Cyrus"),
#line 48
        .trainerClass = TRAINER_CLASS_GALACTIC_BOSS,
#line 49
        .trainerPic = TRAINER_PIC_CYRUS,
#line 50
        .gender = TRAINER_GENDER_MALE,
#line 51
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 52
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 54
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 58
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 56
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 55
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 60
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 64
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 63
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 62
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 61
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 66
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 70
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 69
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 68
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 67
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 72
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 76
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 75
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 74
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 73
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 77
                MOVE_WATERFALL,
                MOVE_CRUNCH,
                MOVE_RAIN_DANCE,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 82
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 86
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 85
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 84
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 83
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 88
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 92
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 91
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 90
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 89
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 94
    [DIFFICULTY_NORMAL][PARTNER_JOY] =
    {
#line 95
        .trainerName = _("Joy"),
#line 96
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 97
        .trainerPic = TRAINER_PIC_MAY,
#line 98
        .gender = TRAINER_GENDER_FEMALE,
#line 99
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 100
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 102
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 104
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 103
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 108
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 112
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 110
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 109
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 114
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 118
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 116
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 115
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 120
            .species = SPECIES_CAROLINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 124
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 122
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 121
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 126
            .species = SPECIES_AUDIEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 130
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 128
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 127
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 132
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 136
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 134
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 133
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
