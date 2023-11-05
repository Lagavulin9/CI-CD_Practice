/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_EXAMPLES_E01_BYEBYE_WORLD_HPP_
#define V1_COMMONAPI_EXAMPLES_E01_BYEBYE_WORLD_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/Types.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {
namespace examples {

class E01ByebyeWorld {
public:
    virtual ~E01ByebyeWorld() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* E01ByebyeWorld::getInterface() {
    return ("commonapi.examples.E01ByebyeWorld:v1_0");
}

CommonAPI::Version E01ByebyeWorld::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace examples
} // namespace commonapi
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_EXAMPLES_E01_BYEBYE_WORLD_HPP_
