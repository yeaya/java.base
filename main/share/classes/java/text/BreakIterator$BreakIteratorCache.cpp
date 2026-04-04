#include <java/text/BreakIterator$BreakIteratorCache.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;

namespace java {
	namespace text {

void BreakIterator$BreakIteratorCache::init$($Locale* locale, $BreakIterator* iter) {
	$set(this, locale, locale);
	$set(this, iter, $cast($BreakIterator, $nc(iter)->clone()));
}

$Locale* BreakIterator$BreakIteratorCache::getLocale() {
	return this->locale;
}

$BreakIterator* BreakIterator$BreakIteratorCache::createBreakInstance() {
	return $cast($BreakIterator, $nc(this->iter)->clone());
}

BreakIterator$BreakIteratorCache::BreakIterator$BreakIteratorCache() {
}

$Class* BreakIterator$BreakIteratorCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iter", "Ljava/text/BreakIterator;", nullptr, $PRIVATE, $field(BreakIterator$BreakIteratorCache, iter)},
		{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(BreakIterator$BreakIteratorCache, locale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Locale;Ljava/text/BreakIterator;)V", nullptr, 0, $method(BreakIterator$BreakIteratorCache, init$, void, $Locale*, $BreakIterator*)},
		{"createBreakInstance", "()Ljava/text/BreakIterator;", nullptr, 0, $method(BreakIterator$BreakIteratorCache, createBreakInstance, $BreakIterator*)},
		{"getLocale", "()Ljava/util/Locale;", nullptr, 0, $method(BreakIterator$BreakIteratorCache, getLocale, $Locale*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.BreakIterator$BreakIteratorCache", "java.text.BreakIterator", "BreakIteratorCache", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.text.BreakIterator$BreakIteratorCache",
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
		"java.text.BreakIterator"
	};
	$loadClass(BreakIterator$BreakIteratorCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIterator$BreakIteratorCache);
	});
	return class$;
}

$Class* BreakIterator$BreakIteratorCache::class$ = nullptr;

	} // text
} // java