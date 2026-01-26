#include <sun/security/ssl/MaxFragExtension$MaxFragLenStringizer.h>

#include <java/io/IOException.h>
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
using $MaxFragExtension$MaxFragLenSpec = ::sun::security::ssl::MaxFragExtension$MaxFragLenSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _MaxFragExtension$MaxFragLenStringizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(MaxFragExtension$MaxFragLenStringizer, init$, void)},
	{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MaxFragExtension$MaxFragLenStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
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
	try {
		return ($$new($MaxFragExtension$MaxFragLenSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
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