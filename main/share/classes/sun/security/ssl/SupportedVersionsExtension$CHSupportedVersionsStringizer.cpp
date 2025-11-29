#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsStringizer.h>

#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SupportedVersionsExtension$CHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$CHSupportedVersionsStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedVersionsExtension$CHSupportedVersionsStringizer::*)()>(&SupportedVersionsExtension$CHSupportedVersionsStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$CHSupportedVersionsStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsStringizer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedVersionsExtension$CHSupportedVersionsStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_SupportedVersionsExtension$CHSupportedVersionsStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$CHSupportedVersionsStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$CHSupportedVersionsStringizer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$CHSupportedVersionsStringizer));
}

void SupportedVersionsExtension$CHSupportedVersionsStringizer::init$() {
}

$String* SupportedVersionsExtension$CHSupportedVersionsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($SupportedVersionsExtension$CHSupportedVersionsSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SupportedVersionsExtension$CHSupportedVersionsStringizer::SupportedVersionsExtension$CHSupportedVersionsStringizer() {
}

$Class* SupportedVersionsExtension$CHSupportedVersionsStringizer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$CHSupportedVersionsStringizer, name, initialize, &_SupportedVersionsExtension$CHSupportedVersionsStringizer_ClassInfo_, allocate$SupportedVersionsExtension$CHSupportedVersionsStringizer);
	return class$;
}

$Class* SupportedVersionsExtension$CHSupportedVersionsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun