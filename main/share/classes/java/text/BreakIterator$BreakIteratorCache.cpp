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

$FieldInfo _BreakIterator$BreakIteratorCache_FieldInfo_[] = {
	{"iter", "Ljava/text/BreakIterator;", nullptr, $PRIVATE, $field(BreakIterator$BreakIteratorCache, iter)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(BreakIterator$BreakIteratorCache, locale)},
	{}
};

$MethodInfo _BreakIterator$BreakIteratorCache_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Locale;Ljava/text/BreakIterator;)V", nullptr, 0, $method(static_cast<void(BreakIterator$BreakIteratorCache::*)($Locale*,$BreakIterator*)>(&BreakIterator$BreakIteratorCache::init$))},
	{"createBreakInstance", "()Ljava/text/BreakIterator;", nullptr, 0, $method(static_cast<$BreakIterator*(BreakIterator$BreakIteratorCache::*)()>(&BreakIterator$BreakIteratorCache::createBreakInstance))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, 0, $method(static_cast<$Locale*(BreakIterator$BreakIteratorCache::*)()>(&BreakIterator$BreakIteratorCache::getLocale))},
	{}
};

$InnerClassInfo _BreakIterator$BreakIteratorCache_InnerClassesInfo_[] = {
	{"java.text.BreakIterator$BreakIteratorCache", "java.text.BreakIterator", "BreakIteratorCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BreakIterator$BreakIteratorCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.BreakIterator$BreakIteratorCache",
	"java.lang.Object",
	nullptr,
	_BreakIterator$BreakIteratorCache_FieldInfo_,
	_BreakIterator$BreakIteratorCache_MethodInfo_,
	nullptr,
	nullptr,
	_BreakIterator$BreakIteratorCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.BreakIterator"
};

$Object* allocate$BreakIterator$BreakIteratorCache($Class* clazz) {
	return $of($alloc(BreakIterator$BreakIteratorCache));
}

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
	$loadClass(BreakIterator$BreakIteratorCache, name, initialize, &_BreakIterator$BreakIteratorCache_ClassInfo_, allocate$BreakIterator$BreakIteratorCache);
	return class$;
}

$Class* BreakIterator$BreakIteratorCache::class$ = nullptr;

	} // text
} // java