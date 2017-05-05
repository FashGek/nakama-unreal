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
#include "NakamaSDK/NClient.h"
#include "NakamaComponent.h"

using namespace Nakama;

UNakamaComponent::UNakamaComponent() {
	PrimaryComponentTick.bCanEverTick = true;
}

UNakamaComponent::~UNakamaComponent() {
	delete clientRef;
	clientRef = nullptr;
}

void UNakamaComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (clientRef != nullptr) {
		clientRef->Tick(DeltaTime);
	}
}

void UNakamaComponent::SetupClient(FString serverKey, FString host, int32 port, FString lang, bool ssl) {
	auto client = &NClient::Builder(TCHAR_TO_UTF8(*serverKey))
		.Host(TCHAR_TO_UTF8(*host))
		.Port(port)
		.Lang(TCHAR_TO_UTF8(*lang))
		.SSL(ssl)
		.Build();
	this->clientRef = client;
}

void UNakamaComponent::ShutdownClient()
{
	if (clientRef != nullptr) {
		clientRef->Disconnect();
	}

	this->UnregisterComponent();
}
