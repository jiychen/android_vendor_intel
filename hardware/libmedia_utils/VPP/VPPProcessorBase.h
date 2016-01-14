
/*
 * Copyright (C) 2012 Intel Corporation.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef _VPP_PROCESSOR_BASE_H_
#define _VPP_PROCESSOR_BASE_H_

#include <stdint.h>

namespace android {

class VPPProcessorBase {
public:
    VPPProcessorBase(){};
    virtual ~VPPProcessorBase(){};
    virtual void setDisplayMode(int32_t mode) = 0;
};
} /* namespace android */
#endif