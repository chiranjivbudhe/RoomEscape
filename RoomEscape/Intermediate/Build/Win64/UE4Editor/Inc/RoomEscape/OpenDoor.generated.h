// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROOMESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define ROOMESCAPE_OpenDoor_generated_h

#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_RPC_WRAPPERS
#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend ROOMESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoomEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend ROOMESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoomEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__openAngle() { return STRUCT_OFFSET(UOpenDoor, openAngle); } \
	FORCEINLINE static uint32 __PPO__pressurePlate() { return STRUCT_OFFSET(UOpenDoor, pressurePlate); } \
	FORCEINLINE static uint32 __PPO__doorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, doorCloseDelay); }


#define RoomEscape_Source_RoomEscape_OpenDoor_h_10_PROLOG
#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_RPC_WRAPPERS \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_INCLASS \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RoomEscape_Source_RoomEscape_OpenDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
	RoomEscape_Source_RoomEscape_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RoomEscape_Source_RoomEscape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
