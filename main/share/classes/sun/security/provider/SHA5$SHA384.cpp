#include <sun/security/provider/SHA5$SHA384.h>
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

$longs* SHA5$SHA384::INITIAL_HASHES = nullptr;

void SHA5$SHA384::init$() {
	$SHA5::init$("SHA-384"_s, 48, SHA5$SHA384::INITIAL_HASHES);
}

$Object* SHA5$SHA384::clone() {
	return $SHA5::clone();
}

void SHA5$SHA384::clinit$($Class* clazz) {
	$assignStatic(SHA5$SHA384::INITIAL_HASHES, $new($longs, {
		(int64_t)0xcbbb9d5dc1059ed8,
		(int64_t)0x629a292a367cd507,
		(int64_t)0x9159015a3070dd17,
		(int64_t)0x152fecd8f70e5939,
		(int64_t)0x67332667ffc00b31,
		(int64_t)0x8eb44a8768581511,
		(int64_t)0xdb0c2e0d64f98fa7,
		(int64_t)0x47b5481dbefa4fa4
	}));
}

SHA5$SHA384::SHA5$SHA384() {
}

$Class* SHA5$SHA384::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL_HASHES", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5$SHA384, INITIAL_HASHES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA5$SHA384, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA5$SHA384, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA5$SHA384", "sun.security.provider.SHA5", "SHA384", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA5$SHA384",
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
	$loadClass(SHA5$SHA384, name, initialize, &classInfo$$, SHA5$SHA384::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA5$SHA384));
	});
	return class$;
}

$Class* SHA5$SHA384::class$ = nullptr;

		} // provider
	} // security
} // sun