// Copyright (c) 2019 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TYPESUPPORT_HELPERS_HPP_
#define TYPESUPPORT_HELPERS_HPP_

#include <string>
#include <tuple>
#include <utility>

#include "rosidl_generator_cpp/message_type_support_decl.hpp"
#include "rosbag2/visibility_control.hpp"

namespace iceoryx_ros2_bridge
{

ROSBAG2_PUBLIC
const rosidl_message_type_support_t *
get_typesupport(const std::string & type, const std::string & typesupport_identifier);

ROSBAG2_PUBLIC
const std::tuple<std::string, std::string, std::string>
extract_type_identifier(const std::string & full_type);

}  // namespace iceoryx_ros2_bridge

#endif  // TYPESUPPORT_HELPERS_HPP_
