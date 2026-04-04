#include <sun/security/ssl/ClientHello$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

#undef HELLO_REQUEST
#undef HELLO_RETRY_REQUEST
#undef HELLO_VERIFY_REQUEST

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;

namespace sun {
	namespace security {
		namespace ssl {

$ints* ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake = nullptr;

void ClientHello$1::clinit$($Class* clazz) {
	$assignStatic(ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake, $new($ints, $($SSLHandshake::values())->length));
	{
		try {
			ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake->set($SSLHandshake::HELLO_REQUEST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake->set($SSLHandshake::HELLO_VERIFY_REQUEST->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake->set($SSLHandshake::HELLO_RETRY_REQUEST->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ClientHello$1::ClientHello$1() {
}

$Class* ClientHello$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$SSLHandshake", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClientHello$1, $SwitchMap$sun$security$ssl$SSLHandshake)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.ClientHello",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ClientHello$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.ClientHello$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ClientHello"
	};
	$loadClass(ClientHello$1, name, initialize, &classInfo$$, ClientHello$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClientHello$1);
	});
	return class$;
}

$Class* ClientHello$1::class$ = nullptr;

		} // ssl
	} // security
} // sun