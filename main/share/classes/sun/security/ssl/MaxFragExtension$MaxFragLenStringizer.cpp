#include <sun/security/ssl/MaxFragExtension$MaxFragLenStringizer.h>

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
#include <sun/security/ssl/MaxFragExtension$MaxFragLenSpec.h>
#include <sun/security/ssl/MaxFragExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $MaxFragExtension = ::sun::security::ssl::MaxFragExtension;
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;
using $SSLStringizer = ::sun::security::ssl::SSLStringizer;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$MaxFragLenStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MaxFragExtension$MaxFragLenStringizer::*)()>(&MaxFragExtension$MaxFragLenStringizer::init$))},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaxFragExtension$MaxFragLenStringizer_InnerClassesInfo_[] = {
	{"sun.security.ssl.MaxFragExtension$MaxFragLenStringizer", "sun.security.ssl.MaxFragExtension", "MaxFragLenStringizer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MaxFragExtension$MaxFragLenStringizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.MaxFragExtension$MaxFragLenStringizer",
	"java.lang.Object",
	"sun.security.ssl.SSLStringizer",
	nullptr,
	_MaxFragExtension$MaxFragLenStringizer_MethodInfo_,
	nullptr,
	nullptr,
	_MaxFragExtension$MaxFragLenStringizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.MaxFragExtension"
};

$Object* allocate$MaxFragExtension$MaxFragLenStringizer($Class* clazz) {
	return $of($alloc(MaxFragExtension$MaxFragLenStringizer));
}

void MaxFragExtension$MaxFragLenStringizer::init$() {
}

$String* MaxFragExtension$MaxFragLenStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	try {
		return ($$new($MaxFragExtension$MaxFragLenSpec, hc, buffer))->toString();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

MaxFragExtension$MaxFragLenStringizer::MaxFragExtension$MaxFragLenStringizer() {
}

$Class* MaxFragExtension$MaxFragLenStringizer::load$($String* name, bool initialize) {
	$loadClass(MaxFragExtension$MaxFragLenStringizer, name, initialize, &_MaxFragExtension$MaxFragLenStringizer_ClassInfo_, allocate$MaxFragExtension$MaxFragLenStringizer);
	return class$;
}

$Class* MaxFragExtension$MaxFragLenStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun