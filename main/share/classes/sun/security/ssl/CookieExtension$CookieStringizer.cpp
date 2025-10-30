#include <sun/security/ssl/CookieExtension$CookieStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CookieExtension = ::sun::security::ssl::CookieExtension;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$CookieStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CookieExtension$CookieStringizer::*)()>(&CookieExtension$CookieStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CookieExtension$CookieStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$CookieStringizer", "sun.security.ssl.CookieExtension", "CookieStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CookieExtension$CookieStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$CookieStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_CookieExtension$CookieStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$CookieStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$CookieStringizer($Class* clazz) {
	return $of($alloc(CookieExtension$CookieStringizer));
}

void CookieExtension$CookieStringizer::init$() {
}

$String* CookieExtension$CookieStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($CookieExtension$CookieSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

CookieExtension$CookieStringizer::CookieExtension$CookieStringizer() {
}

$Class* CookieExtension$CookieStringizer::load$($String* name, bool initialize) {
	$loadClass(CookieExtension$CookieStringizer, name, initialize, &_CookieExtension$CookieStringizer_ClassInfo_, allocate$CookieExtension$CookieStringizer);
	return class$;
}

$Class* CookieExtension$CookieStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun