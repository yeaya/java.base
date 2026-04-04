#include <sun/security/provider/SHA5$SHA512.h>
#include <sun/security/provider/SHA5.h>
#include <jcpp.h>

#undef INITIAL_HASHES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA5 = ::sun::security::provider::SHA5;

namespace sun {
	namespace security {
		namespace provider {

$longs* SHA5$SHA512::INITIAL_HASHES = nullptr;

void SHA5$SHA512::init$() {
	$SHA5::init$("SHA-512"_s, 64, SHA5$SHA512::INITIAL_HASHES);
}

$Object* SHA5$SHA512::clone() {
	return $SHA5::clone();
}

void SHA5$SHA512::clinit$($Class* clazz) {
	$assignStatic(SHA5$SHA512::INITIAL_HASHES, $new($longs, {
		(int64_t)0x6a09e667f3bcc908,
		(int64_t)0xbb67ae8584caa73b,
		(int64_t)0x3c6ef372fe94f82b,
		(int64_t)0xa54ff53a5f1d36f1,
		(int64_t)0x510e527fade682d1,
		(int64_t)0x9b05688c2b3e6c1f,
		(int64_t)0x1f83d9abfb41bd6b,
		(int64_t)0x5be0cd19137e2179
	}));
}

SHA5$SHA512::SHA5$SHA512() {
}

$Class* SHA5$SHA512::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA512, INITIAL_HASHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA5$SHA512, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA5$SHA512, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA5$SHA512", "sun.security.provider.SHA5", "SHA512", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA5$SHA512",
		"sun.security.provider.SHA5",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SHA5"
	};
	$loadClass(SHA5$SHA512, name, initialize, &classInfo$$, SHA5$SHA512::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA5$SHA512));
	});
	return class$;
}

$Class* SHA5$SHA512::class$ = nullptr;

		} // provider
	} // security
} // sun