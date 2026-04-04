#include <sun/security/provider/SHA2$SHA224.h>
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

$ints* SHA2$SHA224::INITIAL_HASHES = nullptr;

void SHA2$SHA224::init$() {
	$SHA2::init$("SHA-224"_s, 28, SHA2$SHA224::INITIAL_HASHES);
}

$Object* SHA2$SHA224::clone() {
	return $SHA2::clone();
}

void SHA2$SHA224::clinit$($Class* clazz) {
	$assignStatic(SHA2$SHA224::INITIAL_HASHES, $new($ints, {
		(int32_t)0xc1059ed8,
		0x367cd507,
		0x3070dd17,
		(int32_t)0xf70e5939,
		(int32_t)0xffc00b31,
		0x68581511,
		0x64f98fa7,
		(int32_t)0xbefa4fa4
	}));
}

SHA2$SHA224::SHA2$SHA224() {
}

$Class* SHA2$SHA224::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_HASHES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA2$SHA224, INITIAL_HASHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA2$SHA224, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA2$SHA224, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA2$SHA224", "sun.security.provider.SHA2", "SHA224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA2$SHA224",
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
	$loadClass(SHA2$SHA224, name, initialize, &classInfo$$, SHA2$SHA224::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA2$SHA224));
	});
	return class$;
}

$Class* SHA2$SHA224::class$ = nullptr;

		} // provider
	} // security
} // sun