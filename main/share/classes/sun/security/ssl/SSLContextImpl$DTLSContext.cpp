#include <sun/security/ssl/SSLContextImpl$DTLSContext.h>

#include <sun/security/ssl/SSLContextImpl$CustomizedDTLSContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLContextImpl$CustomizedDTLSContext = ::sun::security::ssl::SSLContextImpl$CustomizedDTLSContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLContextImpl$DTLSContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextImpl$DTLSContext::*)()>(&SSLContextImpl$DTLSContext::init$))},
	{}
};

$InnerClassInfo _SSLContextImpl$DTLSContext_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$DTLSContext", "sun.security.ssl.SSLContextImpl", "DTLSContext", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$CustomizedDTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedDTLSContext", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLContextImpl$DTLSContext_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLContextImpl$DTLSContext",
	"sun.security.ssl.SSLContextImpl$CustomizedDTLSContext",
	nullptr,
	nullptr,
	_SSLContextImpl$DTLSContext_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl$DTLSContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl"
};

$Object* allocate$SSLContextImpl$DTLSContext($Class* clazz) {
	return $of($alloc(SSLContextImpl$DTLSContext));
}

void SSLContextImpl$DTLSContext::init$() {
	$SSLContextImpl$CustomizedDTLSContext::init$();
}

SSLContextImpl$DTLSContext::SSLContextImpl$DTLSContext() {
}

$Class* SSLContextImpl$DTLSContext::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl$DTLSContext, name, initialize, &_SSLContextImpl$DTLSContext_ClassInfo_, allocate$SSLContextImpl$DTLSContext);
	return class$;
}

$Class* SSLContextImpl$DTLSContext::class$ = nullptr;

		} // ssl
	} // security
} // sun