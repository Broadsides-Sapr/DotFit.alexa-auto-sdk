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

#ifndef MESSAGING_PERMISSIONSTATE_H
#define MESSAGING_PERMISSIONSTATE_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace messaging {

//Enum Definition
enum class PermissionState {
    OFF,
    ON,
};

inline std::string toString(PermissionState enumValue) {
    switch (enumValue) {
        case (PermissionState::OFF):
            return "OFF";
        case (PermissionState::ON):
            return "ON";
    }
    throw std::runtime_error("invalidPermissionStateType");
}

inline PermissionState toPermissionState(const std::string& stringValue) {
    static std::unordered_map<std::string, PermissionState> map = {
        {"OFF", PermissionState::OFF},
        {"ON", PermissionState::ON},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidPermissionStateType");
}

inline void to_json(nlohmann::json& j, const PermissionState& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, PermissionState& c) {
    c = toPermissionState(j);
}

}  // namespace messaging
}  // namespace message
}  // namespace aasb

#endif  // MESSAGING_PERMISSIONSTATE_H
