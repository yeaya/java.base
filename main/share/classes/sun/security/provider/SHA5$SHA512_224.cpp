#include <sun/security/provider/SHA5$SHA512_224.h>
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

$longs* SHA5$SHA512_224::INITIAL_HASHES = nullptr;

void SHA5$SHA512_224::init$() {
	$SHA5::init$("SHA-512/224"_s, 28, SHA5$SHA512_224::INITIAL_HASHES);
}

$Object* SHA5$SHA512_224::clone() {
	return $SHA5::clone();
}

void SHA5$SHA512_224::clinit$($Class* clazz) {
	$assignStatic(SHA5$SHA512_224::INITIAL_HASHES, $new($longs, {
		(int64_t)0x8c3d37c819544da2,
		(int64_t)0x73e1996689dcd4d6,
		(int64_t)0x1dfab7ae32ff9c82,
		(int64_t)0x679dd514582f9fcf,
		(int64_t)0x0f6d2b697bd44da8,
		(int64_t)0x77e36f7304c48942,
		(int64_t)0x3f9d85a86a1d36c8,
		(int64_t)0x1112e6ad91d692a1
	}));
}

SHA5$SHA512_224::SHA5$SHA512_224() {
}

$Class* SHA5$SHA512_224::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA512_224, INITIAL_HASHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA5$SHA512_224, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA5$SHA512_224, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA5$SHA512_224", "sun.security.provider.SHA5", "SHA512_224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA5$SHA512_224",
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
	$loadClass(SHA5$SHA512_224, name, initialize, &classInfo$$, SHA5$SHA512_224::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA5$SHA512_224));
	});
	return class$;
}

$Class* SHA5$SHA512_224::class$ = nullptr;

		} // provider
	} // security
} // sun