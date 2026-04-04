#include <jdk/internal/icu/text/UnicodeSet$VersionFilter.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jdk/internal/icu/util/VersionInfo.h>
#include <jcpp.h>

#undef NO_VERSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $UnicodeSet = ::jdk::internal::icu::text::UnicodeSet;
using $VersionInfo = ::jdk::internal::icu::util::VersionInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void UnicodeSet$VersionFilter::init$($VersionInfo* version) {
	$set(this, version, version);
}

bool UnicodeSet$VersionFilter::contains(int32_t ch) {
	$var($VersionInfo, v, $UCharacter::getAge(ch));
	$init($UnicodeSet);
	return v != $UnicodeSet::NO_VERSION && $nc(v)->compareTo(this->version) <= 0;
}

UnicodeSet$VersionFilter::UnicodeSet$VersionFilter() {
}

$Class* UnicodeSet$VersionFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"version", "Ljdk/internal/icu/util/VersionInfo;", nullptr, 0, $field(UnicodeSet$VersionFilter, version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/util/VersionInfo;)V", nullptr, 0, $method(UnicodeSet$VersionFilter, init$, void, $VersionInfo*)},
		{"contains", "(I)Z", nullptr, $PUBLIC, $virtualMethod(UnicodeSet$VersionFilter, contains, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.UnicodeSet$VersionFilter", "jdk.internal.icu.text.UnicodeSet", "VersionFilter", $PRIVATE | $STATIC},
		{"jdk.internal.icu.text.UnicodeSet$Filter", "jdk.internal.icu.text.UnicodeSet", "Filter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.UnicodeSet$VersionFilter",
		"java.lang.Object",
		"jdk.internal.icu.text.UnicodeSet$Filter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.UnicodeSet"
	};
	$loadClass(UnicodeSet$VersionFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnicodeSet$VersionFilter);
	});
	return class$;
}

$Class* UnicodeSet$VersionFilter::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk