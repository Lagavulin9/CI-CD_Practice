/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COMMONAPI_EXAMPLES_E01_Hello_World_PROXY_BASE_HPP_
#define V0_COMMONAPI_EXAMPLES_E01_Hello_World_PROXY_BASE_HPP_

#include <v0/commonapi/examples/E01HelloWorld.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace commonapi {
namespace examples {

class E01HelloWorldProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&)> SayHelloAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&)> SayByeAsyncCallback;

    virtual void sayHello(std::string _name, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> sayHelloAsync(const std::string &_name, SayHelloAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void sayBye(std::string _name, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> sayByeAsync(const std::string &_name, SayByeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;

    virtual std::future<void> getCompletionFuture() = 0;
};

} // namespace examples
} // namespace commonapi
} // namespace v0


// Compatibility
namespace v0_1 = v0;

#endif // V0_COMMONAPI_EXAMPLES_E01_Hello_World_PROXY_BASE_HPP_
