/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dota_shared_enums.proto */

#ifndef PROTOBUF_C_dota_5fshared_5fenums_2eproto__INCLUDED
#define PROTOBUF_C_dota_5fshared_5fenums_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _CDOTAClientHardwareSpecs CDOTAClientHardwareSpecs;
typedef struct _CDOTASaveGame CDOTASaveGame;
typedef struct _CDOTASaveGame__Player CDOTASaveGame__Player;
typedef struct _CDOTASaveGame__SaveInstance CDOTASaveGame__SaveInstance;
typedef struct _CDOTASaveGame__SaveInstance__PlayerPositions CDOTASaveGame__SaveInstance__PlayerPositions;


/* --- enums --- */

typedef enum _DOTAGameMode {
  DOTA__GAME_MODE__DOTA_GAMEMODE_NONE = 0,
  DOTA__GAME_MODE__DOTA_GAMEMODE_AP = 1,
  DOTA__GAME_MODE__DOTA_GAMEMODE_CM = 2,
  DOTA__GAME_MODE__DOTA_GAMEMODE_RD = 3,
  DOTA__GAME_MODE__DOTA_GAMEMODE_SD = 4,
  DOTA__GAME_MODE__DOTA_GAMEMODE_AR = 5,
  DOTA__GAME_MODE__DOTA_GAMEMODE_INTRO = 6,
  DOTA__GAME_MODE__DOTA_GAMEMODE_HW = 7,
  DOTA__GAME_MODE__DOTA_GAMEMODE_REVERSE_CM = 8,
  DOTA__GAME_MODE__DOTA_GAMEMODE_XMAS = 9,
  DOTA__GAME_MODE__DOTA_GAMEMODE_TUTORIAL = 10,
  DOTA__GAME_MODE__DOTA_GAMEMODE_MO = 11,
  DOTA__GAME_MODE__DOTA_GAMEMODE_LP = 12,
  DOTA__GAME_MODE__DOTA_GAMEMODE_POOL1 = 13,
  DOTA__GAME_MODE__DOTA_GAMEMODE_FH = 14,
  DOTA__GAME_MODE__DOTA_GAMEMODE_CUSTOM = 15,
  DOTA__GAME_MODE__DOTA_GAMEMODE_CD = 16,
  DOTA__GAME_MODE__DOTA_GAMEMODE_BD = 17,
  DOTA__GAME_MODE__DOTA_GAMEMODE_ABILITY_DRAFT = 18,
  DOTA__GAME_MODE__DOTA_GAMEMODE_EVENT = 19,
  DOTA__GAME_MODE__DOTA_GAMEMODE_ARDM = 20,
  DOTA__GAME_MODE__DOTA_GAMEMODE_1V1MID = 21,
  DOTA__GAME_MODE__DOTA_GAMEMODE_ALL_DRAFT = 22
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTA__GAME_MODE)
} DOTAGameMode;
typedef enum _DOTAGameState {
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_INIT = 0,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_WAIT_FOR_PLAYERS_TO_LOAD = 1,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_HERO_SELECTION = 2,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_STRATEGY_TIME = 3,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_PRE_GAME = 4,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_GAME_IN_PROGRESS = 5,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_POST_GAME = 6,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_DISCONNECT = 7,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_TEAM_SHOWCASE = 8,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_CUSTOM_GAME_SETUP = 9,
  DOTA__GAME_STATE__DOTA_GAMERULES_STATE_LAST = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTA__GAME_STATE)
} DOTAGameState;
typedef enum _DOTAGCTEAM {
  DOTA__GC__TEAM__DOTA_GC_TEAM_GOOD_GUYS = 0,
  DOTA__GC__TEAM__DOTA_GC_TEAM_BAD_GUYS = 1,
  DOTA__GC__TEAM__DOTA_GC_TEAM_BROADCASTER = 2,
  DOTA__GC__TEAM__DOTA_GC_TEAM_SPECTATOR = 3,
  DOTA__GC__TEAM__DOTA_GC_TEAM_PLAYER_POOL = 4,
  DOTA__GC__TEAM__DOTA_GC_TEAM_NOTEAM = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTA__GC__TEAM)
} DOTAGCTEAM;
typedef enum _EEvent {
  EEVENT__EVENT_ID_NONE = 0,
  EEVENT__EVENT_ID_DIRETIDE = 1,
  EEVENT__EVENT_ID_SPRING_FESTIVAL = 2,
  EEVENT__EVENT_ID_FROSTIVUS_2013 = 3,
  EEVENT__EVENT_ID_COMPENDIUM_2014 = 4,
  EEVENT__EVENT_ID_NEXON_PC_BANG = 5,
  EEVENT__EVENT_ID_PWRD_DAC_2015 = 6,
  EEVENT__EVENT_ID_NEW_BLOOM_2015 = 7,
  EEVENT__EVENT_ID_INTERNATIONAL_2015 = 8,
  EEVENT__EVENT_ID_FALL_MAJOR_2015 = 9,
  EEVENT__EVENT_ID_ORACLE_PA = 10,
  EEVENT__EVENT_ID_NEW_BLOOM_2015_PREBEAST = 11,
  EEVENT__EVENT_ID_FROSTIVUS = 12,
  EEVENT__EVENT_ID_WINTER_MAJOR_2016 = 13,
  EEVENT__EVENT_ID_INTERNATIONAL_2016 = 14
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EEVENT)
} EEvent;
typedef enum _DOTALeaverStatusT {
  DOTALEAVER_STATUS_T__DOTA_LEAVER_NONE = 0,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_DISCONNECTED = 1,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_DISCONNECTED_TOO_LONG = 2,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_ABANDONED = 3,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_AFK = 4,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_NEVER_CONNECTED = 5,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_NEVER_CONNECTED_TOO_LONG = 6,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_FAILED_TO_READY_UP = 7,
  DOTALEAVER_STATUS_T__DOTA_LEAVER_DECLINED = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTALEAVER_STATUS_T)
} DOTALeaverStatusT;
typedef enum _DOTAConnectionStateT {
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_UNKNOWN = 0,
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_NOT_YET_CONNECTED = 1,
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_CONNECTED = 2,
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_DISCONNECTED = 3,
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_ABANDONED = 4,
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_LOADING = 5,
  DOTACONNECTION_STATE_T__DOTA_CONNECTION_STATE_FAILED = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTACONNECTION_STATE_T)
} DOTAConnectionStateT;
typedef enum _FantasyRoles {
  FANTASY__ROLES__FANTASY_ROLE_UNDEFINED = 0,
  FANTASY__ROLES__FANTASY_ROLE_CORE = 1,
  FANTASY__ROLES__FANTASY_ROLE_SUPPORT = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FANTASY__ROLES)
} FantasyRoles;
typedef enum _FantasyTeamSlots {
  FANTASY__TEAM__SLOTS__FANTASY_SLOT_NONE = 0,
  FANTASY__TEAM__SLOTS__FANTASY_SLOT_CORE = 1,
  FANTASY__TEAM__SLOTS__FANTASY_SLOT_SUPPORT = 2,
  FANTASY__TEAM__SLOTS__FANTASY_SLOT_ANY = 3,
  FANTASY__TEAM__SLOTS__FANTASY_SLOT_BENCH = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FANTASY__TEAM__SLOTS)
} FantasyTeamSlots;
typedef enum _FantasySelectionMode {
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_INVALID = 0,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_LOCKED = 1,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_SHUFFLE = 2,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_FREE_PICK = 3,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_ENDED = 4,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_PRE_SEASON = 5,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_PRE_DRAFT = 6,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_DRAFTING = 7,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_REGULAR_SEASON = 8,
  FANTASY__SELECTION__MODE__FANTASY_SELECTION_CARD_BASED = 9
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FANTASY__SELECTION__MODE)
} FantasySelectionMode;
typedef enum _DOTAChatChannelTypeT {
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Regional = 0,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Custom = 1,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Party = 2,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Lobby = 3,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Team = 4,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Guild = 5,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Fantasy = 6,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Whisper = 7,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Console = 8,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Tab = 9,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Invalid = 10,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_GameAll = 11,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_GameAllies = 12,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_GameSpectator = 13,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_GameCoaching = 14,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Cafe = 15,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_CustomGame = 16,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_Private = 17,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_PostGame = 18,
  DOTACHAT_CHANNEL_TYPE_T__DOTAChannelType_BattleCup = 19
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTACHAT_CHANNEL_TYPE_T)
} DOTAChatChannelTypeT;
typedef enum _EProfileCardSlotType {
  EPROFILE_CARD_SLOT_TYPE__k_EProfileCardSlotType_Empty = 0,
  EPROFILE_CARD_SLOT_TYPE__k_EProfileCardSlotType_Stat = 1,
  EPROFILE_CARD_SLOT_TYPE__k_EProfileCardSlotType_Trophy = 2,
  EPROFILE_CARD_SLOT_TYPE__k_EProfileCardSlotType_Item = 3,
  EPROFILE_CARD_SLOT_TYPE__k_EProfileCardSlotType_Hero = 4,
  EPROFILE_CARD_SLOT_TYPE__k_EProfileCardSlotType_Emoticon = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EPROFILE_CARD_SLOT_TYPE)
} EProfileCardSlotType;
typedef enum _EMatchGroupServerStatus {
  EMATCH_GROUP_SERVER_STATUS__k_EMatchGroupServerStatus_OK = 0,
  EMATCH_GROUP_SERVER_STATUS__k_EMatchGroupServerStatus_LimitedAvailability = 1,
  EMATCH_GROUP_SERVER_STATUS__k_EMatchGroupServerStatus_Offline = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EMATCH_GROUP_SERVER_STATUS)
} EMatchGroupServerStatus;
typedef enum _DOTACMPICK {
  DOTA__CM__PICK__DOTA_CM_RANDOM = 0,
  DOTA__CM__PICK__DOTA_CM_GOOD_GUYS = 1,
  DOTA__CM__PICK__DOTA_CM_BAD_GUYS = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTA__CM__PICK)
} DOTACMPICK;
typedef enum _DOTALowPriorityBanType {
  DOTALOW_PRIORITY_BAN_TYPE__DOTA_LOW_PRIORITY_BAN_ABANDON = 0,
  DOTALOW_PRIORITY_BAN_TYPE__DOTA_LOW_PRIORITY_BAN_REPORTS = 1,
  DOTALOW_PRIORITY_BAN_TYPE__DOTA_LOW_PRIORITY_BAN_SECONDARY_ABANDON = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTALOW_PRIORITY_BAN_TYPE)
} DOTALowPriorityBanType;
typedef enum _DOTALobbyReadyState {
  DOTALOBBY_READY_STATE__DOTALobbyReadyState_UNDECLARED = 0,
  DOTALOBBY_READY_STATE__DOTALobbyReadyState_ACCEPTED = 1,
  DOTALOBBY_READY_STATE__DOTALobbyReadyState_DECLINED = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTALOBBY_READY_STATE)
} DOTALobbyReadyState;
typedef enum _DOTAGameVersion {
  DOTAGAME_VERSION__GAME_VERSION_CURRENT = 0,
  DOTAGAME_VERSION__GAME_VERSION_STABLE = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTAGAME_VERSION)
} DOTAGameVersion;
typedef enum _DOTAJoinLobbyResult {
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_SUCCESS = 0,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_ALREADY_IN_GAME = 1,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_INVALID_LOBBY = 2,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_INCORRECT_PASSWORD = 3,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_ACCESS_DENIED = 4,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_GENERIC_ERROR = 5,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_INCORRECT_VERSION = 6,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_IN_TEAM_PARTY = 7,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_NO_LOBBY_FOUND = 8,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_LOBBY_FULL = 9,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_CUSTOM_GAME_INCORRECT_VERSION = 10,
  DOTAJOIN_LOBBY_RESULT__DOTA_JOIN_RESULT_TIMEOUT = 11
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTAJOIN_LOBBY_RESULT)
} DOTAJoinLobbyResult;
typedef enum _SelectionPriorityType {
  SELECTION_PRIORITY_TYPE__UNDEFINED = 0,
  SELECTION_PRIORITY_TYPE__RADIANT = 1,
  SELECTION_PRIORITY_TYPE__DIRE = 2,
  SELECTION_PRIORITY_TYPE__FIRST_PICK = 3,
  SELECTION_PRIORITY_TYPE__SECOND_PICK = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SELECTION_PRIORITY_TYPE)
} SelectionPriorityType;
typedef enum _DOTAMatchVote {
  DOTAMATCH_VOTE__DOTAMatchVote_INVALID = 0,
  DOTAMATCH_VOTE__DOTAMatchVote_POSITIVE = 1,
  DOTAMATCH_VOTE__DOTAMatchVote_NEGATIVE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTAMATCH_VOTE)
} DOTAMatchVote;
typedef enum _DOTALobbyMemberXPBonus {
  DOTA__LOBBY_MEMBER_XPBONUS__DOTA_LobbyMemberXPBonus_DEFAULT = 0,
  DOTA__LOBBY_MEMBER_XPBONUS__DOTA_LobbyMemberXPBonus_BATTLE_BOOSTER = 1,
  DOTA__LOBBY_MEMBER_XPBONUS__DOTA_LobbyMemberXPBonus_SHARE_BONUS = 2,
  DOTA__LOBBY_MEMBER_XPBONUS__DOTA_LobbyMemberXPBonus_PARTY = 3,
  DOTA__LOBBY_MEMBER_XPBONUS__DOTA_LobbyMemberXPBonus_RECRUITMENT = 4,
  DOTA__LOBBY_MEMBER_XPBONUS__DOTA_LobbyMemberXPBonus_PCBANG = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTA__LOBBY_MEMBER_XPBONUS)
} DOTALobbyMemberXPBonus;
typedef enum _DOTALobbyVisibility {
  DOTALOBBY_VISIBILITY__DOTALobbyVisibility_Public = 0,
  DOTALOBBY_VISIBILITY__DOTALobbyVisibility_Friends = 1,
  DOTALOBBY_VISIBILITY__DOTALobbyVisibility_Unlisted = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTALOBBY_VISIBILITY)
} DOTALobbyVisibility;
typedef enum _EDOTAPlayerMMRType {
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_Invalid = 0,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_GeneralHidden = 1,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_SoloHidden = 2,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_GeneralCompetitive = 3,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_SoloCompetitive = 4,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_1v1Competitive = 5,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_GeneralSeasonalRanked = 6,
  EDOTAPLAYER_MMRTYPE__k_EDOTAPlayerMMRType_SoloSeasonalRanked = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EDOTAPLAYER_MMRTYPE)
} EDOTAPlayerMMRType;
typedef enum _MatchType {
  MATCH_TYPE__MATCH_TYPE_CASUAL = 0,
  MATCH_TYPE__MATCH_TYPE_COOP_BOTS = 1,
  MATCH_TYPE__MATCH_TYPE_TEAM_RANKED = 2,
  MATCH_TYPE__MATCH_TYPE_LEGACY_SOLO_QUEUE = 3,
  MATCH_TYPE__MATCH_TYPE_COMPETITIVE = 4,
  MATCH_TYPE__MATCH_TYPE_WEEKEND_TOURNEY = 5,
  MATCH_TYPE__MATCH_TYPE_CASUAL_1V1 = 6,
  MATCH_TYPE__MATCH_TYPE_EVENT = 7,
  MATCH_TYPE__MATCH_TYPE_SEASONAL_RANKED = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MATCH_TYPE)
} MatchType;
typedef enum _DOTABotDifficulty {
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_PASSIVE = 0,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_EASY = 1,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_MEDIUM = 2,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_HARD = 3,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_UNFAIR = 4,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_INVALID = 5,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_EXTRA1 = 6,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_EXTRA2 = 7,
  DOTABOT_DIFFICULTY__BOT_DIFFICULTY_EXTRA3 = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DOTABOT_DIFFICULTY)
} DOTABotDifficulty;
typedef enum _MatchLanguages {
  MATCH_LANGUAGES__MATCH_LANGUAGE_INVALID = 0,
  MATCH_LANGUAGES__MATCH_LANGUAGE_ENGLISH = 1,
  MATCH_LANGUAGES__MATCH_LANGUAGE_RUSSIAN = 2,
  MATCH_LANGUAGES__MATCH_LANGUAGE_CHINESE = 3,
  MATCH_LANGUAGES__MATCH_LANGUAGE_KOREAN = 4,
  MATCH_LANGUAGES__MATCH_LANGUAGE_SPANISH = 5,
  MATCH_LANGUAGES__MATCH_LANGUAGE_PORTUGUESE = 6,
  MATCH_LANGUAGES__MATCH_LANGUAGE_ENGLISH2 = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MATCH_LANGUAGES)
} MatchLanguages;
typedef enum _ETourneyQueueDeadlineState {
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_Normal = 0,
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_Missed = 1,
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_ExpiredOK = 2,
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_SeekingBye = 3,
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_EligibleForRefund = 4,
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_NA = -1,
  ETOURNEY_QUEUE_DEADLINE_STATE__k_ETourneyQueueDeadlineState_ExpiringSoon = 101
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(ETOURNEY_QUEUE_DEADLINE_STATE)
} ETourneyQueueDeadlineState;
typedef enum _EMatchOutcome {
  EMATCH_OUTCOME__k_EMatchOutcome_Unknown = 0,
  EMATCH_OUTCOME__k_EMatchOutcome_RadVictory = 2,
  EMATCH_OUTCOME__k_EMatchOutcome_DireVictory = 3,
  EMATCH_OUTCOME__k_EMatchOutcome_NotScored_PoorNetworkConditions = 64,
  EMATCH_OUTCOME__k_EMatchOutcome_NotScored_Leaver = 65,
  EMATCH_OUTCOME__k_EMatchOutcome_NotScored_ServerCrash = 66,
  EMATCH_OUTCOME__k_EMatchOutcome_NotScored_NeverStarted = 67
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EMATCH_OUTCOME)
} EMatchOutcome;

/* --- messages --- */

struct  _CDOTAClientHardwareSpecs
{
  ProtobufCMessage base;
  protobuf_c_boolean has_logical_processors;
  uint32_t logical_processors;
  protobuf_c_boolean has_cpu_cycles_per_second;
  uint64_t cpu_cycles_per_second;
  protobuf_c_boolean has_total_physical_memory;
  uint64_t total_physical_memory;
  protobuf_c_boolean has_is_64_bit_os;
  protobuf_c_boolean is_64_bit_os;
  protobuf_c_boolean has_upload_measurement;
  uint64_t upload_measurement;
  protobuf_c_boolean has_prefer_not_host;
  protobuf_c_boolean prefer_not_host;
};
#define CDOTACLIENT_HARDWARE_SPECS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cdotaclient_hardware_specs__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _CDOTASaveGame__Player
{
  ProtobufCMessage base;
  protobuf_c_boolean has_team;
  DOTAGCTEAM team;
  char *name;
  char *hero;
};
#define CDOTASAVE_GAME__PLAYER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cdotasave_game__player__descriptor) \
    , 0,DOTA__GC__TEAM__DOTA_GC_TEAM_GOOD_GUYS, NULL, NULL }


struct  _CDOTASaveGame__SaveInstance__PlayerPositions
{
  ProtobufCMessage base;
  protobuf_c_boolean has_x;
  float x;
  protobuf_c_boolean has_y;
  float y;
};
#define CDOTASAVE_GAME__SAVE_INSTANCE__PLAYER_POSITIONS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cdotasave_game__save_instance__player_positions__descriptor) \
    , 0,0, 0,0 }


struct  _CDOTASaveGame__SaveInstance
{
  ProtobufCMessage base;
  protobuf_c_boolean has_game_time;
  uint32_t game_time;
  protobuf_c_boolean has_team1_score;
  uint32_t team1_score;
  protobuf_c_boolean has_team2_score;
  uint32_t team2_score;
  size_t n_player_positions;
  CDOTASaveGame__SaveInstance__PlayerPositions **player_positions;
  protobuf_c_boolean has_save_id;
  uint32_t save_id;
  protobuf_c_boolean has_save_time;
  uint32_t save_time;
};
#define CDOTASAVE_GAME__SAVE_INSTANCE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cdotasave_game__save_instance__descriptor) \
    , 0,0, 0,0, 0,0, 0,NULL, 0,0, 0,0 }


struct  _CDOTASaveGame
{
  ProtobufCMessage base;
  protobuf_c_boolean has_match_id;
  uint64_t match_id;
  protobuf_c_boolean has_save_time;
  uint32_t save_time;
  size_t n_players;
  CDOTASaveGame__Player **players;
  size_t n_save_instances;
  CDOTASaveGame__SaveInstance **save_instances;
};
#define CDOTASAVE_GAME__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cdotasave_game__descriptor) \
    , 0,0, 0,0, 0,NULL, 0,NULL }


/* CDOTAClientHardwareSpecs methods */
void   cdotaclient_hardware_specs__init
                     (CDOTAClientHardwareSpecs         *message);
size_t cdotaclient_hardware_specs__get_packed_size
                     (const CDOTAClientHardwareSpecs   *message);
size_t cdotaclient_hardware_specs__pack
                     (const CDOTAClientHardwareSpecs   *message,
                      uint8_t             *out);
size_t cdotaclient_hardware_specs__pack_to_buffer
                     (const CDOTAClientHardwareSpecs   *message,
                      ProtobufCBuffer     *buffer);
CDOTAClientHardwareSpecs *
       cdotaclient_hardware_specs__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cdotaclient_hardware_specs__free_unpacked
                     (CDOTAClientHardwareSpecs *message,
                      ProtobufCAllocator *allocator);
/* CDOTASaveGame__Player methods */
void   cdotasave_game__player__init
                     (CDOTASaveGame__Player         *message);
/* CDOTASaveGame__SaveInstance__PlayerPositions methods */
void   cdotasave_game__save_instance__player_positions__init
                     (CDOTASaveGame__SaveInstance__PlayerPositions         *message);
/* CDOTASaveGame__SaveInstance methods */
void   cdotasave_game__save_instance__init
                     (CDOTASaveGame__SaveInstance         *message);
/* CDOTASaveGame methods */
void   cdotasave_game__init
                     (CDOTASaveGame         *message);
size_t cdotasave_game__get_packed_size
                     (const CDOTASaveGame   *message);
size_t cdotasave_game__pack
                     (const CDOTASaveGame   *message,
                      uint8_t             *out);
size_t cdotasave_game__pack_to_buffer
                     (const CDOTASaveGame   *message,
                      ProtobufCBuffer     *buffer);
CDOTASaveGame *
       cdotasave_game__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cdotasave_game__free_unpacked
                     (CDOTASaveGame *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CDOTAClientHardwareSpecs_Closure)
                 (const CDOTAClientHardwareSpecs *message,
                  void *closure_data);
typedef void (*CDOTASaveGame__Player_Closure)
                 (const CDOTASaveGame__Player *message,
                  void *closure_data);
typedef void (*CDOTASaveGame__SaveInstance__PlayerPositions_Closure)
                 (const CDOTASaveGame__SaveInstance__PlayerPositions *message,
                  void *closure_data);
typedef void (*CDOTASaveGame__SaveInstance_Closure)
                 (const CDOTASaveGame__SaveInstance *message,
                  void *closure_data);
typedef void (*CDOTASaveGame_Closure)
                 (const CDOTASaveGame *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    dota__game_mode__descriptor;
extern const ProtobufCEnumDescriptor    dota__game_state__descriptor;
extern const ProtobufCEnumDescriptor    dota__gc__team__descriptor;
extern const ProtobufCEnumDescriptor    eevent__descriptor;
extern const ProtobufCEnumDescriptor    dotaleaver_status_t__descriptor;
extern const ProtobufCEnumDescriptor    dotaconnection_state_t__descriptor;
extern const ProtobufCEnumDescriptor    fantasy__roles__descriptor;
extern const ProtobufCEnumDescriptor    fantasy__team__slots__descriptor;
extern const ProtobufCEnumDescriptor    fantasy__selection__mode__descriptor;
extern const ProtobufCEnumDescriptor    dotachat_channel_type_t__descriptor;
extern const ProtobufCEnumDescriptor    eprofile_card_slot_type__descriptor;
extern const ProtobufCEnumDescriptor    ematch_group_server_status__descriptor;
extern const ProtobufCEnumDescriptor    dota__cm__pick__descriptor;
extern const ProtobufCEnumDescriptor    dotalow_priority_ban_type__descriptor;
extern const ProtobufCEnumDescriptor    dotalobby_ready_state__descriptor;
extern const ProtobufCEnumDescriptor    dotagame_version__descriptor;
extern const ProtobufCEnumDescriptor    dotajoin_lobby_result__descriptor;
extern const ProtobufCEnumDescriptor    selection_priority_type__descriptor;
extern const ProtobufCEnumDescriptor    dotamatch_vote__descriptor;
extern const ProtobufCEnumDescriptor    dota__lobby_member_xpbonus__descriptor;
extern const ProtobufCEnumDescriptor    dotalobby_visibility__descriptor;
extern const ProtobufCEnumDescriptor    edotaplayer_mmrtype__descriptor;
extern const ProtobufCEnumDescriptor    match_type__descriptor;
extern const ProtobufCEnumDescriptor    dotabot_difficulty__descriptor;
extern const ProtobufCEnumDescriptor    match_languages__descriptor;
extern const ProtobufCEnumDescriptor    etourney_queue_deadline_state__descriptor;
extern const ProtobufCEnumDescriptor    ematch_outcome__descriptor;
extern const ProtobufCMessageDescriptor cdotaclient_hardware_specs__descriptor;
extern const ProtobufCMessageDescriptor cdotasave_game__descriptor;
extern const ProtobufCMessageDescriptor cdotasave_game__player__descriptor;
extern const ProtobufCMessageDescriptor cdotasave_game__save_instance__descriptor;
extern const ProtobufCMessageDescriptor cdotasave_game__save_instance__player_positions__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_dota_5fshared_5fenums_2eproto__INCLUDED */
