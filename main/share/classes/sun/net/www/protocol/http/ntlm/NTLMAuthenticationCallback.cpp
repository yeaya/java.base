#include <sun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$FieldInfo _NTLMAuthenticationCallback_FieldInfo_[] = {
	{"callback", "Lsun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(NTLMAuthenticationCallback, callback)},
	{}
};

$MethodInfo _NTLMAuthenticationCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NTLMAuthenticationCallback::*)()>(&NTLMAuthenticationCallback::init$))},
	{"getNTLMAuthenticationCallback", "()Lsun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NTLMAuthenticationCallback*(*)()>(&NTLMAuthenticationCallback::getNTLMAuthenticationCallback))},
	{"isTrustedSite", "(Ljava/net/URL;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setNTLMAuthenticationCallback", "(Lsun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(NTLMAuthenticationCallback*)>(&NTLMAuthenticationCallback::setNTLMAuthenticationCallback))},
	{}
};

$ClassInfo _NTLMAuthenticationCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.www.protocol.http.ntlm.NTLMAuthenticationCallback",
	"java.lang.Object",
	nullptr,
	_NTLMAuthenticationCallback_FieldInfo_,
	_NTLMAuthenticationCallback_MethodInfo_
};

$Object* allocate$NTLMAuthenticationCallback($Class* clazz) {
	return $of($alloc(NTLMAuthenticationCallback));
}

$volatile(NTLMAuthenticationCallback*) NTLMAuthenticationCallback::callback = nullptr;

void NTLMAuthenticationCallback::init$() {
}

void NTLMAuthenticationCallback::setNTLMAuthenticationCallback(NTLMAuthenticationCallback* callback) {
	$init(NTLMAuthenticationCallback);
	$assignStatic(NTLMAuthenticationCallback::callback, callback);
}

NTLMAuthenticationCallback* NTLMAuthenticationCallback::getNTLMAuthenticationCallback() {
	$init(NTLMAuthenticationCallback);
	return NTLMAuthenticationCallback::callback;
}

NTLMAuthenticationCallback::NTLMAuthenticationCallback() {
}

$Class* NTLMAuthenticationCallback::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthenticationCallback, name, initialize, &_NTLMAuthenticationCallback_ClassInfo_, allocate$NTLMAuthenticationCallback);
	return class$;
}

$Class* NTLMAuthenticationCallback::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun