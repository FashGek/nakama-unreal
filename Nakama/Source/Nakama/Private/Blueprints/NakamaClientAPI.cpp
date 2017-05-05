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

#include "../NakamaPrivatePCH.h"
#include "NakamaSDK/NAuthenticateMessage.h"
#include "NakamaSDK/NFriendAddMessage.h"
#include "NakamaSDK/NFriendBlockMessage.h"
#include "NakamaSDK/NFriendRemoveMessage.h"
#include "NakamaSDK/NFriendsListMessage.h"
#include "NakamaSDK/NSelfFetchMessage.h"
#include "NakamaSDK/NSelfLinkMessage.h"
#include "NakamaSDK/NSelfUnlinkMessage.h"
#include "NakamaSDK/NSelfUpdateMessage.h"
#include "NakamaModule.h"
#include "NakamaComponent.h"
#include "NakamaClientAPI.h"

using namespace Nakama;

/**
 * Handling for Authentication
 */

// ------------------------- Custom -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithCustomId(UNakamaComponent* nakama,
	FString id,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = id;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::Custom;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithCustomId(UNakamaComponent* nakama,
	FString id,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = id;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::Custom;
	return proxy;
}

// ------------------------- Device -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithDeviceId(UNakamaComponent* nakama,
	FString deviceId,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = deviceId;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::Device;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithDeviceId(UNakamaComponent* nakama,
	FString deviceId,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = deviceId;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::Device;
	return proxy;
}

// ------------------------- Email -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithEmail(UNakamaComponent* nakama,
	FString email, FString password,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = email;
	proxy->Password = password;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::Email;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithEmail(UNakamaComponent* nakama,
	FString email, FString password,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = email;
	proxy->Password = password;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::Email;
	return proxy;
}

// ------------------------- Facebook -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithFacebook(UNakamaComponent* nakama,
	FString oauthToken,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = oauthToken;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::Facebook;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithFacebook(UNakamaComponent* nakama,
	FString oauthToken,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = oauthToken;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::Facebook;
	return proxy;
}

// ------------------------- GameCenter -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithGameCenter(UNakamaComponent* nakama,
	FString playerId, FString bundleId, FDateTime timestamp, FString salt, FString signature, FString publicKeyUrl,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = playerId;
	proxy->BundleId = bundleId;
	proxy->Timestamp = timestamp;
	proxy->Salt = salt;
	proxy->Signature = signature;
	proxy->PublicKeyUrl = publicKeyUrl;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::GameCenter;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithGameCenter(UNakamaComponent* nakama,
	FString playerId, FString bundleId, FDateTime timestamp, FString salt, FString signature, FString publicKeyUrl,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = playerId;
	proxy->BundleId = bundleId;
	proxy->Timestamp = timestamp;
	proxy->Salt = salt;
	proxy->Signature = signature;
	proxy->PublicKeyUrl = publicKeyUrl;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::GameCenter;
	return proxy;
}

// ------------------------- Google -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithGoogle(UNakamaComponent* nakama,
	FString oauthToken,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = oauthToken;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::Google;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithGoogle(UNakamaComponent* nakama,
	FString oauthToken,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = oauthToken;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::Google;
	return proxy;
}

// ------------------------- Steam -------------------------

UNBPAuthenticateRequest* UNBPAuthenticateRequest::RegisterWithSteam(UNakamaComponent* nakama,
	FString sessionToken,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = sessionToken;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = true;
	proxy->type = AuthType::Steam;
	return proxy;
}

UNBPAuthenticateRequest* UNBPAuthenticateRequest::LoginWithSteam(UNakamaComponent* nakama,
	FString sessionToken,
	FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPAuthenticateRequest>();
	proxy->PrimaryId = sessionToken;
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	proxy->Register = false;
	proxy->type = AuthType::Steam;
	return proxy;
}

void UNBPAuthenticateRequest::Activate()
{
	auto req = this;
	auto client = NakamaRef != nullptr ? NakamaRef->GetClient() : nullptr;
	if (client != nullptr) {
		auto success = [=](NSession* session) mutable {
			client->Connect(session,
				[=](bool s) { if (s && req->OnSuccess.IsBound()) req->OnSuccess.Execute(); }
			);
		};

		auto fail = [=](NError error) {
			if (req->OnFail.IsBound()) {
				auto bpError = NewObject<UNBPError>();
				bpError->ErrorRef = &error;
				req->OnFail.Execute(bpError);
			}
		};

		switch (type) {
		case AuthType::Custom:
			if (req->Register)	client->Register(NAuthenticateMessage::Custom(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			else				client->Login(NAuthenticateMessage::Custom(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			break;

		case AuthType::Device:
			if (req->Register)	client->Register(NAuthenticateMessage::Device(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			else				client->Login(NAuthenticateMessage::Device(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			break;

		case AuthType::Email:
			if (req->Register)	client->Register(NAuthenticateMessage::Email(TCHAR_TO_UTF8(*PrimaryId), TCHAR_TO_UTF8(*Password)), success, fail);
			else				client->Login(NAuthenticateMessage::Email(TCHAR_TO_UTF8(*PrimaryId), TCHAR_TO_UTF8(*Password)), success, fail);
			break;

		case AuthType::Facebook:
			if (req->Register)	client->Register(NAuthenticateMessage::Facebook(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			else				client->Login(NAuthenticateMessage::Facebook(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			break;

		case AuthType::GameCenter:
			if (req->Register)	client->Register(NAuthenticateMessage::GameCenter(TCHAR_TO_UTF8(*PrimaryId), TCHAR_TO_UTF8(*BundleId), Timestamp.ToUnixTimestamp(), TCHAR_TO_UTF8(*Salt), TCHAR_TO_UTF8(*Signature), TCHAR_TO_UTF8(*PublicKeyUrl)), success, fail);
			else				client->Login(NAuthenticateMessage::GameCenter(TCHAR_TO_UTF8(*PrimaryId), TCHAR_TO_UTF8(*BundleId), Timestamp.ToUnixTimestamp(), TCHAR_TO_UTF8(*Salt), TCHAR_TO_UTF8(*Signature), TCHAR_TO_UTF8(*PublicKeyUrl)), success, fail);
			break;

		case AuthType::Google:
			if (req->Register)	client->Register(NAuthenticateMessage::Google(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			else				client->Login(NAuthenticateMessage::Google(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			break;

		case AuthType::Steam:
			if (req->Register)	client->Register(NAuthenticateMessage::Steam(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			else				client->Login(NAuthenticateMessage::Steam(TCHAR_TO_UTF8(*PrimaryId)), success, fail);
			break;

		}
	}
}


/**
 * Handling for Friends
 */

// ------------------------- UNBPManageFriendRequest -------------------------

UNBPManageFriendRequest* UNBPManageFriendRequest::AddFriendByUserId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPManageFriendRequest>();
	proxy->mode = Mode::Add;
	proxy->Id = id;
	proxy->NakamaRef = nakama;
	proxy->OnManageSuccess = onSuccess;
	proxy->OnFail = onFail;
	return proxy;
}

UNBPManageFriendRequest* UNBPManageFriendRequest::BlockFriendByUserId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPManageFriendRequest>();
	proxy->mode = Mode::Block;
	proxy->Id = id;
	proxy->NakamaRef = nakama;
	proxy->OnManageSuccess = onSuccess;
	proxy->OnFail = onFail;
	return proxy;
}

UNBPManageFriendRequest* UNBPManageFriendRequest::RemoveFriendByUserId(UNakamaComponent* nakama, FString id, FDelegateOnSuccess onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPManageFriendRequest>();
	proxy->mode = Mode::Remove;
	proxy->Id = id;
	proxy->NakamaRef = nakama;
	proxy->OnManageSuccess = onSuccess;
	proxy->OnFail = onFail;
	return proxy;
}

UNBPManageFriendRequest * UNBPManageFriendRequest::ListFriends(UNakamaComponent * nakama, FDelegateOnSuccess_FriendsList onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPManageFriendRequest>();
	proxy->mode = Mode::List;
	proxy->NakamaRef = nakama;
	proxy->OnListSuccess = onSuccess;
	proxy->OnFail = onFail;
	return proxy;
}

void UNBPManageFriendRequest::Activate()
{
	auto req = this;
	auto client = NakamaRef != nullptr ? NakamaRef->GetClient() : nullptr;
	if (client == nullptr) return;

	auto fail = [=](NError error) {
		if (req->OnFail.IsBound()) {
			auto bpError = NewObject<UNBPError>();
			bpError->ErrorRef = &error;
			req->OnFail.Execute(bpError);
		}
	};

	if (mode != Mode::List) {
		auto success = [=](void* obj) {
			if (req->OnManageSuccess.IsBound()) req->OnManageSuccess.Execute();
		};

		switch (mode) {
			case Mode::Add: {
				auto message = NFriendAddMessage::Default(TCHAR_TO_UTF8(*Id));
				client->Send(message, success, fail);
				break;
			}
			case Mode::Block: {
				auto message = NFriendBlockMessage::Default(TCHAR_TO_UTF8(*Id));
				client->Send(message, success, fail);
				break;
			}
			case Mode::Remove: {
				auto message = NFriendRemoveMessage::Default(TCHAR_TO_UTF8(*Id));
				client->Send(message, success, fail);
				break;
			}
		}
	}
	else {
		auto success = [=](void* obj) {
			if (req->OnListSuccess.IsBound()) {
				auto rs = (NResultSet<NFriend>*)obj;
				TArray<UNBPFriend*> friends = UNBPFriend::FromResultSet(rs);
				req->OnListSuccess.Execute(friends);
			}
		};

		auto message = NFriendsListMessage::Default();
		client->Send(message, success, fail);
	}
}

/**
* Handling for Self
*/

// ------------------------- UNBPSelfFetchRequest -------------------------

UNBPSelfFetchRequest * UNBPSelfFetchRequest::FetchSelf(UNakamaComponent * nakama, FDelegateOnSuccess_Self onSuccess, FDelegateOnFail onFail)
{
	auto proxy = NewObject<UNBPSelfFetchRequest>();
	proxy->NakamaRef = nakama;
	proxy->OnSuccess = onSuccess;
	proxy->OnFail = onFail;
	return proxy;
}

void UNBPSelfFetchRequest::Activate()
{
	auto req = this;
	auto client = NakamaRef != nullptr ? NakamaRef->GetClient() : nullptr;
	if (client == nullptr) return;

	auto success = [=](void* obj) {
		if (req->OnSuccess.IsBound()) {
			auto self = (NSelf*)obj;
			auto bpSelf = NewObject<UNBPSelf>();
			bpSelf->SelfRef = self;
			req->OnSuccess.Execute(bpSelf);
		}
	};

	auto fail = [=](NError error) {
		if (req->OnFail.IsBound()) {
			auto bpError = NewObject<UNBPError>();
			bpError->ErrorRef = &error;
			req->OnFail.Execute(bpError);
		}
	};

	auto message = NSelfFetchMessage::Default();
	client->Send(message, success, fail);
}
