#include <sun/security/provider/SHA2$SHA256.h>
#include <sun/security/provider/SHA2.h>
#include <jcpp.h>

#undef INITIAL_HASHES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA2 = ::sun::security::provider::SHA2;

namespace sun {
	namespace security {
		namespace provider {

$ints* SHA2$SHA256::INITIAL_HASHES = nullptr;

void SHA2$SHA256::init$() {
	$SHA2::init$("SHA-256"_s, 32, SHA2$SHA256::INITIAL_HASHES);
}

$Object* SHA2$SHA256::clone() {
	return $SHA2::clone();
}

void SHA2$SHA256::clinit$($Class* clazz) {
	$assignStatic(SHA2$SHA256::INITIAL_HASHES, $new($ints, {
		0x6a09e667,
		(int32_t)0xbb67ae85,
		0x3c6ef372,
		(int32_t)0xa54ff53a,
		0x510e527f,
		(int32_t)0x9b05688c,
		0x1f83d9ab,
		0x5be0cd19
	}));
}

SHA2$SHA256::SHA2$SHA256() {
}

$Class* SHA2$SHA256::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_HASHES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA2$SHA256, INITIAL_HASHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA2$SHA256, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA2$SHA256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA2$SHA256", "sun.security.provider.SHA2", "SHA256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA2$SHA256",
		"sun.security.provider.SHA2",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SHA2"
	};
	$loadClass(SHA2$SHA256, name, initialize, &classInfo$$, SHA2$SHA256::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA2$SHA256));
	});
	return class$;
}

$Class* SHA2$SHA256::class$ = nullptr;

		} // provider
	} // security
} // sun