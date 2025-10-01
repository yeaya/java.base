#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroupsStringizer.h>

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
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroupsSpec.h>
#include <sun/security/ssl/SupportedGroupsExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;
using $SupportedGroupsExtension = ::sun::security::ssl::SupportedGroupsExtension;
using $SupportedGroupsExtension$SupportedGroupsSpec = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroupsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedGroupsExtension$SupportedGroupsStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedGroupsExtension$SupportedGroupsStringizer::*)()>(&SupportedGroupsExtension$SupportedGroupsStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SupportedGroupsExtension$SupportedGroupsStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroupsStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedGroupsExtension$SupportedGroupsStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_SupportedGroupsExtension$SupportedGroupsStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedGroupsExtension$SupportedGroupsStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedGroupsExtension"
};

$Object* allocate$SupportedGroupsExtension$SupportedGroupsStringizer($Class* clazz) {
	return $of($alloc(SupportedGroupsExtension$SupportedGroupsStringizer));
}

void SupportedGroupsExtension$SupportedGroupsStringizer::init$() {
}

$String* SupportedGroupsExtension$SupportedGroupsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($SupportedGroupsExtension$SupportedGroupsSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SupportedGroupsExtension$SupportedGroupsStringizer::SupportedGroupsExtension$SupportedGroupsStringizer() {
}

$Class* SupportedGroupsExtension$SupportedGroupsStringizer::load$($String* name, bool initialize) {
	$loadClass(SupportedGroupsExtension$SupportedGroupsStringizer, name, initialize, &_SupportedGroupsExtension$SupportedGroupsStringizer_ClassInfo_, allocate$SupportedGroupsExtension$SupportedGroupsStringizer);
	return class$;
}

$Class* SupportedGroupsExtension$SupportedGroupsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun