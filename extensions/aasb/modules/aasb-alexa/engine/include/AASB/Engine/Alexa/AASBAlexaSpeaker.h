/*
 * Copyright 2017-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef AASB_ENGINE_ALEXA_AASB_ALEXA_SPEAKER_H
#define AASB_ENGINE_ALEXA_AASB_ALEXA_SPEAKER_H

#include <AACE/Alexa/AlexaSpeaker.h>
#include <AACE/Engine/AASB/MessageBrokerInterface.h>

namespace aasb {
namespace engine {
namespace alexa {

class AASBAlexaSpeaker
        : public aace::alexa::AlexaSpeaker
        , public std::enable_shared_from_this<AASBAlexaSpeaker> {
public:
    static std::shared_ptr<AASBAlexaSpeaker> create(
        std::shared_ptr<aace::engine::aasb::MessageBrokerInterface> messageBroker);

    // aace::alexa::AASBAlexaSpeaker
    void speakerSettingsChanged(SpeakerType type, bool local, int8_t volume, bool mute) override;

private:
    AASBAlexaSpeaker() = default;
    bool initialize(std::shared_ptr<aace::engine::aasb::MessageBrokerInterface> messageBroker);

    std::weak_ptr<aace::engine::aasb::MessageBrokerInterface> m_messageBroker;
};

}  // namespace alexa
}  // namespace engine
}  // namespace aasb

#endif  //AASB_ENGINE_ALEXA_AASB_ALEXA_CLIENT_H
