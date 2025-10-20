#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer.h>

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
#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $ExtendedMasterSecretExtension$ExtendedMasterSecretSpec = ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::*)()>(&ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer", "sun.security.ssl.ExtendedMasterSecretExtension", "ExtendedMasterSecretStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer));
}

void ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::init$() {
}

$String* ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	try {
		return ($$new($ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer() {
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::load$($String* name, bool initialize) {
	$loadClass(ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer, name, initialize, &_ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer_ClassInfo_, allocate$ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer);
	return class$;
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun