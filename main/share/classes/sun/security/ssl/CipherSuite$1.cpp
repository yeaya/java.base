#include <sun/security/ssl/CipherSuite$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/CipherType.h>
#include <jcpp.h>

#undef AEAD_CIPHER
#undef BLOCK_CIPHER

using $CipherTypeArray = $Array<::sun::security::ssl::CipherType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherType = ::sun::security::ssl::CipherType;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CipherSuite$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$CipherType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherSuite$1, $SwitchMap$sun$security$ssl$CipherType)},
	{}
};

$EnclosingMethodInfo _CipherSuite$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.CipherSuite",
	nullptr,
	nullptr
};

$InnerClassInfo _CipherSuite$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.CipherSuite$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CipherSuite$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.CipherSuite$1",
	"java.lang.Object",
	nullptr,
	_CipherSuite$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CipherSuite$1_EnclosingMethodInfo_,
	_CipherSuite$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CipherSuite"
};

$Object* allocate$CipherSuite$1($Class* clazz) {
	return $of($alloc(CipherSuite$1));
}

$ints* CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType = nullptr;

void clinit$CipherSuite$1($Class* class$) {
	$assignStatic(CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType, $new($ints, $($CipherType::values())->length));
	{
		try {
			$nc(CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType)->set($CipherType::BLOCK_CIPHER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType)->set($CipherType::AEAD_CIPHER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CipherSuite$1::CipherSuite$1() {
}

$Class* CipherSuite$1::load$($String* name, bool initialize) {
	$loadClass(CipherSuite$1, name, initialize, &_CipherSuite$1_ClassInfo_, clinit$CipherSuite$1, allocate$CipherSuite$1);
	return class$;
}

$Class* CipherSuite$1::class$ = nullptr;

		} // ssl
	} // security
} // sun