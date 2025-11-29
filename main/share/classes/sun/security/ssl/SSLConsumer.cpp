#include <sun/security/ssl/SSLConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLConsumer_MethodInfo_[] = {
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SSLConsumer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLConsumer",
	nullptr,
	nullptr,
	nullptr,
	_SSLConsumer_MethodInfo_
};

$Object* allocate$SSLConsumer($Class* clazz) {
	return $of($alloc(SSLConsumer));
}

$Class* SSLConsumer::load$($String* name, bool initialize) {
	$loadClass(SSLConsumer, name, initialize, &_SSLConsumer_ClassInfo_, allocate$SSLConsumer);
	return class$;
}

$Class* SSLConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun