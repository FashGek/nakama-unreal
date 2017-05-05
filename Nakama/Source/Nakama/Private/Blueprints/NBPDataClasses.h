/**
* Copyright 2017 The Nakama Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include "Engine.h"
#include "NakamaSDK/NFriend.h"
#include "NakamaSDK/NResultSet.h"
#include "NBPDataClasses.generated.h"

class UPlayFabJsonObject;

using namespace Nakama;

// ------------------------- NError -------------------------

UCLASS(BlueprintType)
class UNBPError : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Error")
		FString GetErrorMessage();

	NError* ErrorRef;
};

// ------------------------- NFriend -------------------------

UENUM(BlueprintType)
enum class EFriendType : uint8
{
	Friend = 0, Invite, Invited, Blocked
};

UCLASS(BlueprintType)
class UNBPFriend : public UObject
{
	GENERATED_BODY()

public:
	static TArray<UNBPFriend*> FromResultSet(NResultSet<NFriend>* resultSet);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetAvatarUrl() { return UTF8_TO_TCHAR(FriendRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FDateTime GetCreatedAt() { return FDateTime::FromUnixTimestamp(FriendRef->GetCreatedAt()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetFullname() { return UTF8_TO_TCHAR(FriendRef->GetFullname().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetHandle() { return UTF8_TO_TCHAR(FriendRef->GetHandle().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetId() { return UTF8_TO_TCHAR(FriendRef->GetId().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetLang() { return UTF8_TO_TCHAR(FriendRef->GetLang().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FDateTime GetLastOnlineAt() { return FDateTime::FromUnixTimestamp(FriendRef->GetLastOnlineAt()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetLocation() { return UTF8_TO_TCHAR(FriendRef->GetLocation().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetMetadata() { return UTF8_TO_TCHAR(FriendRef->GetMetadata().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FString GetTimezone() { return UTF8_TO_TCHAR(FriendRef->GetTimezone().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		FDateTime GetUpdatedAt() { return FDateTime::FromUnixTimestamp(FriendRef->GetUpdatedAt()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Friend")
		EFriendType GetState() { return (EFriendType)FriendRef->GetState(); }

	NFriend* FriendRef;

};

// ------------------------- NSelf -------------------------

UCLASS(BlueprintType)
class UNBPSelf : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetAvatarUrl() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FDateTime GetCreatedAt() { return FDateTime::FromUnixTimestamp(SelfRef->GetCreatedAt()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetFullname() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetHandle() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetId() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetLang() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FDateTime GetLastOnlineAt() { return FDateTime::FromUnixTimestamp(SelfRef->GetLastOnlineAt()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetLocation() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetMetadata() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetTimezone() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FDateTime GetUpdatedAt() { return FDateTime::FromUnixTimestamp(SelfRef->GetUpdatedAt()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetCustomId() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		TArray<FString> GetDeviceIds();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetEmail() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetFacebookId() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetGameCenterId() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		FString GetSteamId() { return UTF8_TO_TCHAR(SelfRef->GetAvatarUrl().c_str()); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Nakama|Self")
		bool IsVerified() { return SelfRef->IsVerified(); }

	NSelf* SelfRef;

};
