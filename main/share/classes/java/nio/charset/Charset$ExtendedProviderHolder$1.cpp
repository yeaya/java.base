#include <java/nio/charset/Charset$ExtendedProviderHolder$1.h>
#include <java/nio/charset/Charset$ExtendedProviderHolder.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $CharsetProviderArray = $Array<::java::nio::charset::spi::CharsetProvider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace nio {
		namespace charset {

void Charset$ExtendedProviderHolder$1::init$() {
}

$Object* Charset$ExtendedProviderHolder$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($CharsetProviderArray, cps, $new($CharsetProviderArray, 1));
	int32_t n = 0;
	$var($ServiceLoader, sl, $ServiceLoader::loadInstalled($CharsetProvider::class$));
	{
		$var($Iterator, i$, $nc(sl)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CharsetProvider, cp, $cast($CharsetProvider, i$->next()));
			{
				if (n + 1 > cps->length) {
					$assign(cps, $cast($CharsetProviderArray, $Arrays::copyOf(cps, cps->length << 1)));
				}
				cps->set(n++, cp);
			}
		}
	}
	return n == cps->length ? cps : $cast($CharsetProviderArray, $Arrays::copyOf(cps, n));
}

Charset$ExtendedProviderHolder$1::Charset$ExtendedProviderHolder$1() {
}

$Class* Charset$ExtendedProviderHolder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Charset$ExtendedProviderHolder$1, init$, void)},
		{"run", "()[Ljava/nio/charset/spi/CharsetProvider;", nullptr, $PUBLIC, $virtualMethod(Charset$ExtendedProviderHolder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.charset.Charset$ExtendedProviderHolder",
		"extendedProviders",
		"()[Ljava/nio/charset/spi/CharsetProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.charset.Charset$ExtendedProviderHolder", "java.nio.charset.Charset", "ExtendedProviderHolder", $PRIVATE | $STATIC},
		{"java.nio.charset.Charset$ExtendedProviderHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.charset.Charset$ExtendedProviderHolder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/nio/charset/spi/CharsetProvider;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.charset.Charset"
	};
	$loadClass(Charset$ExtendedProviderHolder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Charset$ExtendedProviderHolder$1);
	});
	return class$;
}

$Class* Charset$ExtendedProviderHolder$1::class$ = nullptr;

		} // charset
	} // nio
} // java