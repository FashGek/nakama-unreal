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
#include "NBPDataClasses.h"

using namespace Nakama;

// ------------------------- NError -------------------------

FString UNBPError::GetErrorMessage() {
	return UTF8_TO_TCHAR(ErrorRef->GetErrorMessage().c_str());
}

// ------------------------- NFriend -------------------------

TArray<UNBPFriend*> UNBPFriend::FromResultSet(NResultSet<NFriend>* resultSet)
{
	TArray<UNBPFriend*> friends;
	for (int i = 0, maxI = resultSet->Size(); i < maxI; i++)
	{
		auto bpFriend = NewObject<UNBPFriend>();
		auto f = resultSet->GetResults()[i];
		bpFriend->FriendRef = &f;
		friends.Add(bpFriend);
	}
	return friends;
}

// ------------------------- NSelf -------------------------

TArray<FString> UNBPSelf::GetDeviceIds()
{
	auto ids = TArray<FString>();
	auto nIds = SelfRef->GetDeviceIds();
	for (int i = 0, maxI = nIds.size(); i < maxI; i++)
	{
		auto id = nIds[i];
		ids.Add(UTF8_TO_TCHAR(id.c_str()));
	}
	return ids;
}
