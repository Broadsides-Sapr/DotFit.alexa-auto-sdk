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

#ifndef APL_RENDERDOCUMENTRESULTMESSAGE_H
#define APL_RENDERDOCUMENTRESULTMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace apl {
namespace apl {

//Class Definition
struct RenderDocumentResultMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "APL";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "RenderDocumentResult";
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
        std::string token;
        bool result;
        std::string error;
    };
    static const std::string& topic() {
        static std::string topic = "APL";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "RenderDocumentResult";
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
inline void to_json(nlohmann::json& j, const RenderDocumentResultMessage::Payload& c) {
    j = nlohmann::json{
        {"token", c.token},
        {"result", c.result},
        {"error", c.error},
    };
}
inline void from_json(const nlohmann::json& j, RenderDocumentResultMessage::Payload& c) {
    j.at("token").get_to(c.token);
    j.at("result").get_to(c.result);
    j.at("error").get_to(c.error);
}

inline void to_json(nlohmann::json& j, const RenderDocumentResultMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, RenderDocumentResultMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const RenderDocumentResultMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, RenderDocumentResultMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const RenderDocumentResultMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, RenderDocumentResultMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string RenderDocumentResultMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace apl
}  // namespace apl
}  // namespace message
}  // namespace aasb

#endif  // APL_RENDERDOCUMENTRESULTMESSAGE_H
