#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsStringizer.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SupportedVersionsExtension = ::sun::security::ssl::SupportedVersionsExtension;
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$SHSupportedVersionsStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedVersionsExtension$SHSupportedVersionsStringizer::*)()>(&SupportedVersionsExtension$SHSupportedVersionsStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$SHSupportedVersionsStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsStringizer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedVersionsExtension$SHSupportedVersionsStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_SupportedVersionsExtension$SHSupportedVersionsStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$SHSupportedVersionsStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$SHSupportedVersionsStringizer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$SHSupportedVersionsStringizer));
}

void SupportedVersionsExtension$SHSupportedVersionsStringizer::init$() {
}

$String* SupportedVersionsExtension$SHSupportedVersionsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	try {
		return ($$new($SupportedVersionsExtension$SHSupportedVersionsSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SupportedVersionsExtension$SHSupportedVersionsStringizer::SupportedVersionsExtension$SHSupportedVersionsStringizer() {
}

$Class* SupportedVersionsExtension$SHSupportedVersionsStringizer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$SHSupportedVersionsStringizer, name, initialize, &_SupportedVersionsExtension$SHSupportedVersionsStringizer_ClassInfo_, allocate$SupportedVersionsExtension$SHSupportedVersionsStringizer);
	return class$;
}

$Class* SupportedVersionsExtension$SHSupportedVersionsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun