/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.0 at Thu Jun 18 23:02:57 2015. */

#include "msg.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const int32_t NActorAdd_PlayerId_default = -1;
const int32_t NActorHeal_PlayerId_default = -1;
const int32_t NActorAddAmmo_PlayerId_default = -1;
const int32_t NAddPickup_SpawnerUID_default = -1;
const int32_t NRemovePickup_SpawnerUID_default = -1;


const pb_field_t NRequestPlayers_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t NCmd_fields[2] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NCmd, Cmd, Cmd, 0),
    PB_LAST_FIELD
};

const pb_field_t NNewPlayers_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NNewPlayers, ClientId, ClientId, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NNewPlayers, NumPlayers, ClientId, 0),
    PB_LAST_FIELD
};

const pb_field_t NClientId_fields[2] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NClientId, Id, Id, 0),
    PB_LAST_FIELD
};

const pb_field_t NCampaignDef_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, NCampaignDef, Path, Path, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NCampaignDef, GameMode, Path, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, NCampaignDef, Mission, GameMode, 0),
    PB_LAST_FIELD
};

const pb_field_t NPlayerData_fields[12] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, NPlayerData, Name, Name, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NPlayerData, Looks, Name, &NPlayerData_CharLooks_fields),
    PB_FIELD(  3, STRING  , REPEATED, STATIC  , OTHER, NPlayerData, Weapons, Looks, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, NPlayerData, Lives, Weapons, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Score, Lives, 0),
    PB_FIELD(  6, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, TotalScore, Score, 0),
    PB_FIELD(  7, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Kills, TotalScore, 0),
    PB_FIELD(  8, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Suicides, Kills, 0),
    PB_FIELD(  9, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData, Friendlies, Suicides, 0),
    PB_FIELD( 10, UINT32  , REQUIRED, STATIC  , OTHER, NPlayerData, PlayerIndex, Friendlies, 0),
    PB_FIELD( 11, BOOL    , REQUIRED, STATIC  , OTHER, NPlayerData, IsUsed, PlayerIndex, 0),
    PB_LAST_FIELD
};

const pb_field_t NPlayerData_CharLooks_fields[7] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NPlayerData_CharLooks, Face, Face, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData_CharLooks, Skin, Face, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData_CharLooks, Arm, Skin, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData_CharLooks, Body, Arm, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData_CharLooks, Leg, Body, 0),
    PB_FIELD(  6, INT32   , REQUIRED, STATIC  , OTHER, NPlayerData_CharLooks, Hair, Leg, 0),
    PB_LAST_FIELD
};

const pb_field_t NObjectiveCount_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NObjectiveCount, ObjectiveId, ObjectiveId, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NObjectiveCount, Count, ObjectiveId, 0),
    PB_LAST_FIELD
};

const pb_field_t NAddPlayers_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NAddPlayers, ClientId, ClientId, 0),
    PB_FIELD(  2, UINT32  , REPEATED, STATIC  , OTHER, NAddPlayers, PlayerIds, ClientId, 0),
    PB_LAST_FIELD
};

const pb_field_t NAddMapObject_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NAddMapObject, UID, UID, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NAddMapObject, MapObjectClass, UID, 0),
    PB_FIELD(  3, MESSAGE , REQUIRED, STATIC  , OTHER, NAddMapObject, Pos, MapObjectClass, &NVec2i_fields),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, NAddMapObject, TileItemFlags, Pos, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NAddMapObject, Health, TileItemFlags, 0),
    PB_LAST_FIELD
};

const pb_field_t NScore_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NScore, PlayerId, PlayerId, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NScore, Score, PlayerId, 0),
    PB_LAST_FIELD
};

const pb_field_t NVec2i_fields[3] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, NVec2i, x, x, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NVec2i, y, x, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorAdd_fields[8] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorAdd, UID, UID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, NActorAdd, CharId, UID, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NActorAdd, Direction, CharId, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NActorAdd, Health, Direction, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NActorAdd, PlayerId, Health, &NActorAdd_PlayerId_default),
    PB_FIELD(  6, UINT32  , REQUIRED, STATIC  , OTHER, NActorAdd, TileItemFlags, PlayerId, 0),
    PB_FIELD(  7, MESSAGE , REQUIRED, STATIC  , OTHER, NActorAdd, FullPos, TileItemFlags, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorMove_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorMove, UID, UID, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NActorMove, Pos, UID, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NActorState_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorState, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorState, State, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorDir_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorDir, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorDir, Dir, UID, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorHeal_fields[5] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorHeal, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorHeal, PlayerId, UID, &NActorHeal_PlayerId_default),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NActorHeal, Amount, PlayerId, 0),
    PB_FIELD(  4, BOOL    , REQUIRED, STATIC  , OTHER, NActorHeal, IsRandomSpawned, Amount, 0),
    PB_LAST_FIELD
};

const pb_field_t NActorAddAmmo_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NActorAddAmmo, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NActorAddAmmo, PlayerId, UID, &NActorAddAmmo_PlayerId_default),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, NActorAddAmmo, AmmoId, PlayerId, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NActorAddAmmo, Amount, AmmoId, 0),
    PB_FIELD(  5, BOOL    , REQUIRED, STATIC  , OTHER, NActorAddAmmo, IsRandomSpawned, Amount, 0),
    PB_LAST_FIELD
};

const pb_field_t NAddPickup_fields[7] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NAddPickup, UID, UID, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, NAddPickup, PickupClass, UID, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, NAddPickup, IsRandomSpawned, PickupClass, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, NAddPickup, SpawnerUID, IsRandomSpawned, &NAddPickup_SpawnerUID_default),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, NAddPickup, TileItemFlags, SpawnerUID, 0),
    PB_FIELD(  6, MESSAGE , REQUIRED, STATIC  , OTHER, NAddPickup, Pos, TileItemFlags, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NRemovePickup_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NRemovePickup, UID, UID, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NRemovePickup, SpawnerUID, UID, &NRemovePickup_SpawnerUID_default),
    PB_LAST_FIELD
};

const pb_field_t NAddBullet_fields[9] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, NAddBullet, BulletClass, BulletClass, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, NAddBullet, MuzzlePos, BulletClass, &NVec2i_fields),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, MuzzleHeight, MuzzlePos, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, NAddBullet, Angle, MuzzleHeight, 0),
    PB_FIELD(  5, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, Elevation, Angle, 0),
    PB_FIELD(  6, UINT32  , REQUIRED, STATIC  , OTHER, NAddBullet, Flags, Elevation, 0),
    PB_FIELD(  7, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, PlayerIndex, Flags, 0),
    PB_FIELD(  8, INT32   , REQUIRED, STATIC  , OTHER, NAddBullet, UID, PlayerIndex, 0),
    PB_LAST_FIELD
};

const pb_field_t NExploreTile_fields[2] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, NExploreTile, Tile, Tile, &NVec2i_fields),
    PB_LAST_FIELD
};

const pb_field_t NObjectiveUpdate_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, NObjectiveUpdate, ObjectiveId, ObjectiveId, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, NObjectiveUpdate, Count, ObjectiveId, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(NPlayerData, Looks) < 65536 && pb_membersize(NAddMapObject, Pos) < 65536 && pb_membersize(NActorAdd, FullPos) < 65536 && pb_membersize(NActorMove, Pos) < 65536 && pb_membersize(NAddPickup, Pos) < 65536 && pb_membersize(NAddBullet, MuzzlePos) < 65536 && pb_membersize(NExploreTile, Tile) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_NRequestPlayers_NCmd_NNewPlayers_NClientId_NCampaignDef_NPlayerData_NPlayerData_CharLooks_NObjectiveCount_NAddPlayers_NAddMapObject_NScore_NVec2i_NActorAdd_NActorMove_NActorState_NActorDir_NActorHeal_NActorAddAmmo_NAddPickup_NRemovePickup_NAddBullet_NExploreTile_NObjectiveUpdate)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for NCampaignDef.Path is too large. Define PB_FIELD_16BIT to fix this.
#endif


