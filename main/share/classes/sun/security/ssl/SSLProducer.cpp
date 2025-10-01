#include <sun/security/ssl/SSLProducer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLProducer_MethodInfo_[] = {
	{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SSLProducer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLProducer",
	nullptr,
	nullptr,
	nullptr,
	_SSLProducer_MethodInfo_
};

$Object* allocate$SSLProducer($Class* clazz) {
	return $of($alloc(SSLProducer));
}

$Class* SSLProducer::load$($String* name, bool initialize) {
	$loadClass(SSLProducer, name, initialize, &_SSLProducer_ClassInfo_, allocate$SSLProducer);
	return class$;
}

$Class* SSLProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun