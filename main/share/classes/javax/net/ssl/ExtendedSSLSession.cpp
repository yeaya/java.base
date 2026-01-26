#include <javax/net/ssl/ExtendedSSLSession.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $List = ::java::util::List;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _ExtendedSSLSession_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExtendedSSLSession, init$, void)},
	{"getLocalSupportedSignatureAlgorithms", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedSSLSession, getLocalSupportedSignatureAlgorithms, $StringArray*)},
	{"getPeerSupportedSignatureAlgorithms", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedSSLSession, getPeerSupportedSignatureAlgorithms, $StringArray*)},
	{"getRequestedServerNames", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $PUBLIC, $virtualMethod(ExtendedSSLSession, getRequestedServerNames, $List*)},
	{"getStatusResponses", "()Ljava/util/List;", "()Ljava/util/List<[B>;", $PUBLIC, $virtualMethod(ExtendedSSLSession, getStatusResponses, $List*)},
	{}
};

$ClassInfo _ExtendedSSLSession_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.ExtendedSSLSession",
	"java.lang.Object",
	"javax.net.ssl.SSLSession",
	nullptr,
	_ExtendedSSLSession_MethodInfo_
};

$Object* allocate$ExtendedSSLSession($Class* clazz) {
	return $of($alloc(ExtendedSSLSession));
}

void ExtendedSSLSession::init$() {
}

$List* ExtendedSSLSession::getRequestedServerNames() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$List* ExtendedSSLSession::getStatusResponses() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

ExtendedSSLSession::ExtendedSSLSession() {
}

$Class* ExtendedSSLSession::load$($String* name, bool initialize) {
	$loadClass(ExtendedSSLSession, name, initialize, &_ExtendedSSLSession_ClassInfo_, allocate$ExtendedSSLSession);
	return class$;
}

$Class* ExtendedSSLSession::class$ = nullptr;

		} // ssl
	} // net
} // javax