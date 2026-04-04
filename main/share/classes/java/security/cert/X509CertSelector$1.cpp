#include <java/security/cert/X509CertSelector$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/security/cert/X509CertSelector.h>
#include <sun/security/util/KnownOIDs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $KnownOIDs = ::sun::security::util::KnownOIDs;

namespace java {
	namespace security {
		namespace cert {

$ints* X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs = nullptr;

void X509CertSelector$1::clinit$($Class* clazz) {
	$assignStatic(X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs, $new($ints, $($KnownOIDs::values())->length));
	{
		try {
			X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs->set($KnownOIDs::PrivateKeyUsage->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs->set($KnownOIDs::SubjectAlternativeName->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs->set($KnownOIDs::NameConstraints->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs->set($KnownOIDs::CertificatePolicies->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			X509CertSelector$1::$SwitchMap$sun$security$util$KnownOIDs->set($KnownOIDs::extendedKeyUsage->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

X509CertSelector$1::X509CertSelector$1() {
}

$Class* X509CertSelector$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$util$KnownOIDs", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(X509CertSelector$1, $SwitchMap$sun$security$util$KnownOIDs)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.cert.X509CertSelector",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.cert.X509CertSelector$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.security.cert.X509CertSelector$1",
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
		"java.security.cert.X509CertSelector"
	};
	$loadClass(X509CertSelector$1, name, initialize, &classInfo$$, X509CertSelector$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(X509CertSelector$1);
	});
	return class$;
}

$Class* X509CertSelector$1::class$ = nullptr;

		} // cert
	} // security
} // java