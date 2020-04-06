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

#pragma once

#include "iceoryx_posh/iceoryx_posh_types.hpp"

#include <cstdint>

namespace iox
{
namespace roudi
{
struct RouDiConfig
{
    struct
    {
        /// @todo since we are now fully relocatable, this can be removed
        uint64_t m_sharedMemoryBaseAddressOffset = 0u;
        bool m_verifySharedMemoryPlacement = false;
    } roudi;

    RouDiConfig& setDefaults();
    RouDiConfig& optimize();
};
} // namespace roudi
} // namespace iox
