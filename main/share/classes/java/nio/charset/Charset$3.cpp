#include <java/nio/charset/Charset$3.h>
#include <java/nio/charset/Charset$ExtendedProviderHolder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER

using $CharsetProviderArray = $Array<::java::nio::charset::spi::CharsetProvider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Charset$ExtendedProviderHolder = ::java::nio::charset::Charset$ExtendedProviderHolder;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $TreeMap = ::java::util::TreeMap;

namespace java {
	namespace nio {
		namespace charset {

void Charset$3::init$() {
}

$Object* Charset$3::run() {
	$useLocalObjectStack();
	$var($TreeMap, m, $new($TreeMap, $String::CASE_INSENSITIVE_ORDER));
	$init($Charset);
	$Charset::put($($nc($Charset::standardProvider)->charsets()), $cast($AbstractMap, m));
	$init($Charset$ExtendedProviderHolder);
	$var($CharsetProviderArray, ecps, $Charset$ExtendedProviderHolder::extendedProviders$);
	{
		$var($CharsetProviderArray, arr$, ecps);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($CharsetProvider, ecp, arr$->get(i$));
			{
				$Charset::put($($nc(ecp)->charsets()), $cast($AbstractMap, m));
			}
		}
	}
	{
		$var($Iterator, i, $Charset::providers());
		for (; $nc(i)->hasNext();) {
			$var($CharsetProvider, cp, $cast($CharsetProvider, i->next()));
			$Charset::put($($nc(cp)->charsets()), $cast($AbstractMap, m));
		}
	}
	return $Collections::unmodifiableSortedMap(m);
}

Charset$3::Charset$3() {
}

$Class* Charset$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Charset$3, init$, void)},
		{"run", "()Ljava/util/SortedMap;", "()Ljava/util/SortedMap<Ljava/lang/String;Ljava/nio/charset/Charset;>;", $PUBLIC, $virtualMethod(Charset$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.charset.Charset",
		"availableCharsets",
		"()Ljava/util/SortedMap;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.charset.Charset$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.charset.Charset$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/SortedMap<Ljava/lang/String;Ljava/nio/charset/Charset;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.charset.Charset"
	};
	$loadClass(Charset$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Charset$3);
	});
	return class$;
}

$Class* Charset$3::class$ = nullptr;

		} // charset
	} // nio
} // java