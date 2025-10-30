#include <sun/security/ssl/SSLContextImpl$TLSContext.h>

#include <sun/security/ssl/SSLContextImpl$CustomizedTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLContextImpl$CustomizedTLSContext = ::sun::security::ssl::SSLContextImpl$CustomizedTLSContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLContextImpl$TLSContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$TLSContext::*)()>(&SSLContextImpl$TLSContext::init$))},
	{}
};

$InnerClassInfo _SSLContextImpl$TLSContext_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$TLSContext", "sun.security.ssl.SSLContextImpl", "TLSContext", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$CustomizedTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedTLSContext", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLContextImpl$TLSContext_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$TLSContext",
	"sun.security.ssl.SSLContextImpl$CustomizedTLSContext",
	nullptr,
	nullptr,
	_SSLContextImpl$TLSContext_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$TLSContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$TLSContext($Class* clazz) {
	return $of($alloc(SSLContextImpl$TLSContext));
}

void SSLContextImpl$TLSContext::init$() {
	$SSLContextImpl$CustomizedTLSContext::init$();
}

SSLContextImpl$TLSContext::SSLContextImpl$TLSContext() {
}

$Class* SSLContextImpl$TLSContext::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$TLSContext, name, initialize, &_SSLContextImpl$TLSContext_ClassInfo_, allocate$SSLContextImpl$TLSContext);
	return class$;
}

$Class* SSLContextImpl$TLSContext::class$ = nullptr;

		} // ssl
	} // security
} // sun