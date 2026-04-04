#include <sun/security/util/SignatureUtil$EdDSADigestAlgHolder.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/util/SignatureUtil.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef SHAKE256
#undef SHAKE256_LEN

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace util {

$AlgorithmId* SignatureUtil$EdDSADigestAlgHolder::sha512 = nullptr;
$AlgorithmId* SignatureUtil$EdDSADigestAlgHolder::shake256 = nullptr;
$AlgorithmId* SignatureUtil$EdDSADigestAlgHolder::shake256$512 = nullptr;

void SignatureUtil$EdDSADigestAlgHolder::init$() {
}

void SignatureUtil$EdDSADigestAlgHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		try {
			$init($KnownOIDs);
			$assignStatic(SignatureUtil$EdDSADigestAlgHolder::sha512, $new($AlgorithmId, $($ObjectIdentifier::of($KnownOIDs::SHA_512))));
			$assignStatic(SignatureUtil$EdDSADigestAlgHolder::shake256, $new($AlgorithmId, $($ObjectIdentifier::of($KnownOIDs::SHAKE256))));
			$var($ObjectIdentifier, var$0, $ObjectIdentifier::of($KnownOIDs::SHAKE256_LEN));
			$assignStatic(SignatureUtil$EdDSADigestAlgHolder::shake256$512, $new($AlgorithmId, var$0, $$new($DerValue, (int8_t)2, $$new($bytes, {
				2,
				0
			}))));
		} catch ($IOException& e) {
			$throwNew($AssertionError, "Should not happen"_s, e);
		}
	}
}

SignatureUtil$EdDSADigestAlgHolder::SignatureUtil$EdDSADigestAlgHolder() {
}

$Class* SignatureUtil$EdDSADigestAlgHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sha512", "Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureUtil$EdDSADigestAlgHolder, sha512)},
		{"shake256", "Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureUtil$EdDSADigestAlgHolder, shake256)},
		{"shake256$512", "Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureUtil$EdDSADigestAlgHolder, shake256$512)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SignatureUtil$EdDSADigestAlgHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.SignatureUtil$EdDSADigestAlgHolder", "sun.security.util.SignatureUtil", "EdDSADigestAlgHolder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.SignatureUtil$EdDSADigestAlgHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.SignatureUtil"
	};
	$loadClass(SignatureUtil$EdDSADigestAlgHolder, name, initialize, &classInfo$$, SignatureUtil$EdDSADigestAlgHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureUtil$EdDSADigestAlgHolder);
	});
	return class$;
}

$Class* SignatureUtil$EdDSADigestAlgHolder::class$ = nullptr;

		} // util
	} // security
} // sun