#include <com/sun/crypto/provider/PBES2Parameters$General.h>
#include <com/sun/crypto/provider/PBES2Parameters.h>
#include <jcpp.h>

using $PBES2Parameters = ::com::sun::crypto::provider::PBES2Parameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBES2Parameters$General::init$() {
	$PBES2Parameters::init$();
}

PBES2Parameters$General::PBES2Parameters$General() {
}

$Class* PBES2Parameters$General::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBES2Parameters$General, init$, void), "java.security.NoSuchAlgorithmException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBES2Parameters$General", "com.sun.crypto.provider.PBES2Parameters", "General", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBES2Parameters$General",
		"com.sun.crypto.provider.PBES2Parameters",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBES2Parameters"
	};
	$loadClass(PBES2Parameters$General, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBES2Parameters$General);
	});
	return class$;
}

$Class* PBES2Parameters$General::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com