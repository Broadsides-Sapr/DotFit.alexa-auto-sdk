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

/*********************************************************
**********************************************************
**********************************************************

THIS FILE IS AUTOGENERATED. DO NOT EDIT

**********************************************************
**********************************************************
*********************************************************/

#ifndef TEMPLATERUNTIME_RENDERPLAYERINFOMESSAGE_H
#define TEMPLATERUNTIME_RENDERPLAYERINFOMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Alexa/AudioPlayer/PlayerActivity.h"
#include "AASB/Message/Alexa/TemplateRuntime/FocusState.h"

namespace aasb {
namespace message {
namespace alexa {
namespace templateRuntime {

//Class Definition
struct RenderPlayerInfoMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "TemplateRuntime";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "RenderPlayerInfo";
                return action;
            }
        };
        static const std::string& version() {
            static std::string version = "3.0";
            return version;
        }
        static const std::string& messageType() {
            static std::string messageType = "Publish";
            return messageType;
        }
        std::string id = aace::engine::utils::uuid::generateUUID();
        MessageDescription messageDescription;
    };
    struct Payload {
        using PlayerActivity = ::aasb::message::alexa::PlayerActivity;
        using FocusState = ::aasb::message::alexa::FocusState;

        std::string payload;
        PlayerActivity audioPlayerState;
        int offset;
        FocusState focusState;
    };
    static const std::string& topic() {
        static std::string topic = "TemplateRuntime";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "RenderPlayerInfo";
        return action;
    }
    static const std::string& version() {
        static std::string version = "3.0";
        return version;
    }
    static const std::string& messageType() {
        static std::string messageType = "Publish";
        return messageType;
    }
    std::string toString() const;
    Header header;
    Payload payload;
};

//JSON Serialization
inline void to_json(nlohmann::json& j, const RenderPlayerInfoMessage::Payload& c) {
    j = nlohmann::json{
        {"payload", c.payload},
        {"audioPlayerState", c.audioPlayerState},
        {"offset", c.offset},
        {"focusState", c.focusState},
    };
}
inline void from_json(const nlohmann::json& j, RenderPlayerInfoMessage::Payload& c) {
    j.at("payload").get_to(c.payload);
    j.at("audioPlayerState").get_to(c.audioPlayerState);
    j.at("offset").get_to(c.offset);
    j.at("focusState").get_to(c.focusState);
}

inline void to_json(nlohmann::json& j, const RenderPlayerInfoMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, RenderPlayerInfoMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const RenderPlayerInfoMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, RenderPlayerInfoMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const RenderPlayerInfoMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, RenderPlayerInfoMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string RenderPlayerInfoMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace templateRuntime
}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // TEMPLATERUNTIME_RENDERPLAYERINFOMESSAGE_H
