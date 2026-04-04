#include <sun/security/ssl/SSLHandshakeBinding.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

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
	$MethodInfo methodInfos$$[] = {
		{"getHandshakeConsumers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/SSLConsumer;>;", $PUBLIC, $virtualMethod(SSLHandshakeBinding, getHandshakeConsumers, $Map$EntryArray*, $HandshakeContext*)},
		{"getHandshakeProducers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/HandshakeProducer;>;", $PUBLIC, $virtualMethod(SSLHandshakeBinding, getHandshakeProducers, $Map$EntryArray*, $HandshakeContext*)},
		{"getRelatedHandshakers", "(Lsun/security/ssl/HandshakeContext;)[Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(SSLHandshakeBinding, getRelatedHandshakers, $SSLHandshakeArray*, $HandshakeContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLHandshakeBinding",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLHandshakeBinding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLHandshakeBinding);
	});
	return class$;
}

$Class* SSLHandshakeBinding::class$ = nullptr;

		} // ssl
	} // security
} // sun