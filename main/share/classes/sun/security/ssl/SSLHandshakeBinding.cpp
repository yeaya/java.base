#include <sun/security/ssl/SSLHandshakeBinding.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLHandshakeBinding_MethodInfo_[] = {
	{"getHandshakeConsumers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/SSLConsumer;>;", $PUBLIC},
	{"getHandshakeProducers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/HandshakeProducer;>;", $PUBLIC},
	{"getRelatedHandshakers", "(Lsun/security/ssl/HandshakeContext;)[Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SSLHandshakeBinding_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLHandshakeBinding",
	nullptr,
	nullptr,
	nullptr,
	_SSLHandshakeBinding_MethodInfo_
};

$Object* allocate$SSLHandshakeBinding($Class* clazz) {
	return $of($alloc(SSLHandshakeBinding));
}

$SSLHandshakeArray* SSLHandshakeBinding::getRelatedHandshakers($HandshakeContext* handshakeContext) {
	return $new($SSLHandshakeArray, 0);
}

$Map$EntryArray* SSLHandshakeBinding::getHandshakeProducers($HandshakeContext* handshakeContext) {
	return ($new($Map$EntryArray, 0));
}

$Map$EntryArray* SSLHandshakeBinding::getHandshakeConsumers($HandshakeContext* handshakeContext) {
	return ($new($Map$EntryArray, 0));
}

$Class* SSLHandshakeBinding::load$($String* name, bool initialize) {
	$loadClass(SSLHandshakeBinding, name, initialize, &_SSLHandshakeBinding_ClassInfo_, allocate$SSLHandshakeBinding);
	return class$;
}

$Class* SSLHandshakeBinding::class$ = nullptr;

		} // ssl
	} // security
} // sun