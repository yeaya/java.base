#include <sun/security/ssl/SSLStringizer.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLStringizer_MethodInfo_[] = {
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLStringizer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLStringizer",
	nullptr,
	nullptr,
	nullptr,
	_SSLStringizer_MethodInfo_
};

$Object* allocate$SSLStringizer($Class* clazz) {
	return $of($alloc(SSLStringizer));
}

$Class* SSLStringizer::load$($String* name, bool initialize) {
	$loadClass(SSLStringizer, name, initialize, &_SSLStringizer_ClassInfo_, allocate$SSLStringizer);
	return class$;
}

$Class* SSLStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun