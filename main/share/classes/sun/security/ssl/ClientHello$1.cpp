#include <sun/security/ssl/ClientHello$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

#undef HELLO_REQUEST
#undef HELLO_RETRY_REQUEST
#undef HELLO_VERIFY_REQUEST

using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ClientHello = ::sun::security::ssl::ClientHello;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ClientHello$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$SSLHandshake", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClientHello$1, $SwitchMap$sun$security$ssl$SSLHandshake)},
	{}
};

$EnclosingMethodInfo _ClientHello$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.ClientHello",
	nullptr,
	nullptr
};

$InnerClassInfo _ClientHello$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientHello$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ClientHello$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.ClientHello$1",
	"java.lang.Object",
	nullptr,
	_ClientHello$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ClientHello$1_EnclosingMethodInfo_,
	_ClientHello$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientHello"
};

$Object* allocate$ClientHello$1($Class* clazz) {
	return $of($alloc(ClientHello$1));
}

$ints* ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake = nullptr;

void clinit$ClientHello$1($Class* class$) {
	$assignStatic(ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake, $new($ints, $($SSLHandshake::values())->length));
	{
		try {
			$nc(ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake)->set($SSLHandshake::HELLO_REQUEST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake)->set($SSLHandshake::HELLO_VERIFY_REQUEST->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ClientHello$1::$SwitchMap$sun$security$ssl$SSLHandshake)->set($SSLHandshake::HELLO_RETRY_REQUEST->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ClientHello$1::ClientHello$1() {
}

$Class* ClientHello$1::load$($String* name, bool initialize) {
	$loadClass(ClientHello$1, name, initialize, &_ClientHello$1_ClassInfo_, clinit$ClientHello$1, allocate$ClientHello$1);
	return class$;
}

$Class* ClientHello$1::class$ = nullptr;

		} // ssl
	} // security
} // sun