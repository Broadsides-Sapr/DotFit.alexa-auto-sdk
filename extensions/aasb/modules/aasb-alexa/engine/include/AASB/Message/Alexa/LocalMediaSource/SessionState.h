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

#ifndef LOCALMEDIASOURCE_SESSIONSTATE_H
#define LOCALMEDIASOURCE_SESSIONSTATE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Alexa/LocalMediaSource/ContentSelector.h"

namespace aasb {
namespace message {
namespace alexa {
namespace localMediaSource {

//Class Definition
struct SessionState {
    using ContentSelector = ::aasb::message::alexa::localMediaSource::ContentSelector;

    std::string toString() const;
    std::string endpointId;
    bool loggedIn;
    std::string userName;
    bool isGuest;
    bool launched;
    bool active;
    std::string accessToken;
    int64_t tokenRefreshInterval;
    std::vector<ContentSelector> supportedContentSelectors;
    std::string spiVersion;
};

//JSON Serialization
inline void to_json(nlohmann::json& j, const SessionState& c) {
    j = nlohmann::json{
        {"endpointId", c.endpointId},
        {"loggedIn", c.loggedIn},
        {"userName", c.userName},
        {"isGuest", c.isGuest},
        {"launched", c.launched},
        {"active", c.active},
        {"accessToken", c.accessToken},
        {"tokenRefreshInterval", c.tokenRefreshInterval},
        {"supportedContentSelectors", c.supportedContentSelectors},
        {"spiVersion", c.spiVersion},
    };
}
inline void from_json(const nlohmann::json& j, SessionState& c) {
    j.at("endpointId").get_to(c.endpointId);
    j.at("loggedIn").get_to(c.loggedIn);
    j.at("userName").get_to(c.userName);
    j.at("isGuest").get_to(c.isGuest);
    j.at("launched").get_to(c.launched);
    j.at("active").get_to(c.active);
    j.at("accessToken").get_to(c.accessToken);
    j.at("tokenRefreshInterval").get_to(c.tokenRefreshInterval);
    j.at("supportedContentSelectors").get_to(c.supportedContentSelectors);
    j.at("spiVersion").get_to(c.spiVersion);
}

inline std::string SessionState::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace localMediaSource
}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // LOCALMEDIASOURCE_SESSIONSTATE_H
