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

#ifndef NAVIGATION_CONTROLDISPLAYMESSAGE_H
#define NAVIGATION_CONTROLDISPLAYMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Navigation/Navigation/ControlDisplay.h"

namespace aasb {
namespace message {
namespace navigation {
namespace navigation {

//Class Definition
struct ControlDisplayMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "Navigation";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "ControlDisplay";
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
        using ControlDisplay = ::aasb::message::navigation::navigation::ControlDisplay;

        ControlDisplay controlDisplay;
    };
    static const std::string& topic() {
        static std::string topic = "Navigation";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "ControlDisplay";
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
inline void to_json(nlohmann::json& j, const ControlDisplayMessage::Payload& c) {
    j = nlohmann::json{
        {"controlDisplay", c.controlDisplay},
    };
}
inline void from_json(const nlohmann::json& j, ControlDisplayMessage::Payload& c) {
    j.at("controlDisplay").get_to(c.controlDisplay);
}

inline void to_json(nlohmann::json& j, const ControlDisplayMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, ControlDisplayMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const ControlDisplayMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, ControlDisplayMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const ControlDisplayMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, ControlDisplayMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string ControlDisplayMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace navigation
}  // namespace navigation
}  // namespace message
}  // namespace aasb

#endif  // NAVIGATION_CONTROLDISPLAYMESSAGE_H
