#include <sun/security/provider/AbstractDrbg$NonceProvider.h>
#include <sun/security/provider/AbstractDrbg.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$bytes* AbstractDrbg$NonceProvider::block = nullptr;

void AbstractDrbg$NonceProvider::init$() {
}

$bytes* AbstractDrbg$NonceProvider::next() {
	$init(AbstractDrbg$NonceProvider);
	$synchronized(class$) {
		int32_t k = 15;
		while (true) {
			bool var$0 = k >= 0;
			if (!(var$0 && (++(*AbstractDrbg$NonceProvider::block)[k] == 0))) {
				break;
			}
			{
				--k;
			}
		}
		return $cast($bytes, AbstractDrbg$NonceProvider::block->clone());
	}
}

void AbstractDrbg$NonceProvider::clinit$($Class* clazz) {
	$assignStatic(AbstractDrbg$NonceProvider::block, $new($bytes, 16));
}

AbstractDrbg$NonceProvider::AbstractDrbg$NonceProvider() {
}

$Class* AbstractDrbg$NonceProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"block", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractDrbg$NonceProvider, block)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AbstractDrbg$NonceProvider, init$, void)},
		{"next", "()[B", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(AbstractDrbg$NonceProvider, next, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.AbstractDrbg$NonceProvider", "sun.security.provider.AbstractDrbg", "NonceProvider", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.AbstractDrbg$NonceProvider",
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
		"sun.security.provider.AbstractDrbg"
	};
	$loadClass(AbstractDrbg$NonceProvider, name, initialize, &classInfo$$, AbstractDrbg$NonceProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDrbg$NonceProvider);
	});
	return class$;
}

$Class* AbstractDrbg$NonceProvider::class$ = nullptr;

		} // provider
	} // security
} // sun