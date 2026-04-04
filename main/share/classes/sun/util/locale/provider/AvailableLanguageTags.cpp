#include <sun/util/locale/provider/AvailableLanguageTags.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$Class* AvailableLanguageTags::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AvailableLanguageTags, getAvailableLanguageTags, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.locale.provider.AvailableLanguageTags",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AvailableLanguageTags, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AvailableLanguageTags);
	});
	return class$;
}

$Class* AvailableLanguageTags::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun