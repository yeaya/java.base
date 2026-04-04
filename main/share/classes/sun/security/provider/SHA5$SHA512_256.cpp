#include <sun/security/provider/SHA5$SHA512_256.h>
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

$longs* SHA5$SHA512_256::INITIAL_HASHES = nullptr;

void SHA5$SHA512_256::init$() {
	$SHA5::init$("SHA-512/256"_s, 32, SHA5$SHA512_256::INITIAL_HASHES);
}

$Object* SHA5$SHA512_256::clone() {
	return $SHA5::clone();
}

void SHA5$SHA512_256::clinit$($Class* clazz) {
	$assignStatic(SHA5$SHA512_256::INITIAL_HASHES, $new($longs, {
		(int64_t)0x22312194fc2bf72c,
		(int64_t)0x9f555fa3c84c64c2,
		(int64_t)0x2393b86b6f53b151,
		(int64_t)0x963877195940eabd,
		(int64_t)0x96283ee2a88effe3,
		(int64_t)0xbe5e1e2553863992,
		(int64_t)0x2b0199fc2c85b8aa,
		(int64_t)0x0eb72ddc81c52ca2
	}));
}

SHA5$SHA512_256::SHA5$SHA512_256() {
}

$Class* SHA5$SHA512_256::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA512_256, INITIAL_HASHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA5$SHA512_256, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA5$SHA512_256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA5$SHA512_256", "sun.security.provider.SHA5", "SHA512_256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA5$SHA512_256",
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
	$loadClass(SHA5$SHA512_256, name, initialize, &classInfo$$, SHA5$SHA512_256::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA5$SHA512_256));
	});
	return class$;
}

$Class* SHA5$SHA512_256::class$ = nullptr;

		} // provider
	} // security
} // sun