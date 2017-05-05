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

#include "OnlineBlueprintCallProxyBase.h"
#include "NBPDataClasses.h"
#include "NakamaClientAPI.generated.h"

DECLARE_DYNAMIC_DELEGATE(FDelegateOnSuccess);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateOnFail, UNBPError*, error);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateOnSuccess_FriendsList, TArray<UNBPFriend*>, friends);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateOnSuccess_Self, UNBPSelf*, self);

/**
 * Handling for Authentication
 */

UCLASS()
class UNBPAuthenticateRequest : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
	
public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithCustomId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithCustomId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithDeviceId(UNakamaComponent* nakama, FString deviceId, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithDeviceId(UNakamaComponent* nakama, FString deviceId, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithEmail(UNakamaComponent* nakama, FString email, FString password, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithEmail(UNakamaComponent* nakama, FString email, FString password, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithFacebook(UNakamaComponent* nakama, FString oauthToken, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithFacebook(UNakamaComponent* nakama, FString oauthToken, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithGameCenter(UNakamaComponent* nakama, FString playerId, FString bundleId, FDateTime timestamp, FString salt, FString signature, FString publicKeyUrl, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithGameCenter(UNakamaComponent* nakama, FString playerId, FString bundleId, FDateTime timestamp, FString salt, FString signature, FString publicKeyUrl, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithGoogle(UNakamaComponent* nakama, FString oauthToken, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithGoogle(UNakamaComponent* nakama, FString oauthToken, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Register")
		static UNBPAuthenticateRequest* RegisterWithSteam(UNakamaComponent* nakama, FString sessionToken, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Client|Login")
		static UNBPAuthenticateRequest* LoginWithSteam(UNakamaComponent* nakama, FString sessionToken, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

private:
	enum AuthType { Custom, Device, Email, Facebook, GameCenter, Google, Steam };
	AuthType type;
	bool Register;
	UPROPERTY() FString PrimaryId;
	UPROPERTY() FString Password;
	UPROPERTY() FString BundleId;
	UPROPERTY() FDateTime Timestamp;
	UPROPERTY() FString Salt;
	UPROPERTY() FString Signature;
	UPROPERTY() FString PublicKeyUrl;
	UPROPERTY() UNakamaComponent* NakamaRef;
	UPROPERTY() FDelegateOnSuccess OnSuccess;
	UPROPERTY() FDelegateOnFail OnFail;
};


/**
* Handling for Friends
*/

UCLASS()
class UNBPManageFriendRequest : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()

public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Friends")
		static UNBPManageFriendRequest* AddFriendByUserId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Friends")
		static UNBPManageFriendRequest* BlockFriendByUserId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Friends")
		static UNBPManageFriendRequest* RemoveFriendByUserId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Friends")
		static UNBPManageFriendRequest* ListFriends(UNakamaComponent* nakama, FDelegateOnSuccess_FriendsList onSuccess, FDelegateOnFail onFail);

private:
	enum Mode { Add, Block, Remove, List };

	Mode mode;
	UPROPERTY() FString Id;
	UPROPERTY() UNakamaComponent* NakamaRef;
	UPROPERTY() FDelegateOnSuccess OnManageSuccess;
	UPROPERTY() FDelegateOnSuccess_FriendsList OnListSuccess;
	UPROPERTY() FDelegateOnFail OnFail;
};


/**
* Handling for Self
*/

UCLASS()
class UNBPSelfFetchRequest : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()

public:
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Nakama|Friends")
		static UNBPSelfFetchRequest* FetchSelf(UNakamaComponent* nakama, FDelegateOnSuccess_Self onSuccess, FDelegateOnFail onFail);

private:
	UPROPERTY() UNakamaComponent* NakamaRef;
	UPROPERTY() FDelegateOnSuccess_Self OnSuccess;
	UPROPERTY() FDelegateOnFail OnFail;
};
