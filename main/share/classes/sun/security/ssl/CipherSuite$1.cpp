#include <sun/security/ssl/CipherSuite$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/CipherType.h>
#include <jcpp.h>

#undef AEAD_CIPHER
#undef BLOCK_CIPHER

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CipherType = ::sun::security::ssl::CipherType;

namespace sun {
	namespace security {
		namespace ssl {

$ints* CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType = nullptr;

void CipherSuite$1::clinit$($Class* clazz) {
	$assignStatic(CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType, $new($ints, $($CipherType::values())->length));
	{
		try {
			CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType->set($CipherType::BLOCK_CIPHER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType->set($CipherType::AEAD_CIPHER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CipherSuite$1::CipherSuite$1() {
}

$Class* CipherSuite$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$CipherType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherSuite$1, $SwitchMap$sun$security$ssl$CipherType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.CipherSuite",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CipherSuite$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.CipherSuite$1",
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
		"sun.security.ssl.CipherSuite"
	};
	$loadClass(CipherSuite$1, name, initialize, &classInfo$$, CipherSuite$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CipherSuite$1);
	});
	return class$;
}

$Class* CipherSuite$1::class$ = nullptr;

		} // ssl
	} // security
} // sun