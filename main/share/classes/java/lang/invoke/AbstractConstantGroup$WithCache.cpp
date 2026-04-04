#include <java/lang/invoke/AbstractConstantGroup$WithCache.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/AbstractConstantGroup.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef NOT_PRESENT
#undef RESOLVED_TO_NULL

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup = ::java::lang::invoke::AbstractConstantGroup;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace lang {
		namespace invoke {

bool AbstractConstantGroup$WithCache::$assertionsDisabled = false;
$Object* AbstractConstantGroup$WithCache::RESOLVED_TO_NULL = nullptr;
$Object* AbstractConstantGroup$WithCache::NOT_PRESENT = nullptr;

void AbstractConstantGroup$WithCache::init$(int32_t size) {
	$AbstractConstantGroup::init$(size);
	$set(this, cache, $new($ObjectArray, size));
}

void AbstractConstantGroup$WithCache::initializeCache($List* cacheContents, Object$* ifNotPresent) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < this->cache->length; ++i) {
		$var($Object, x, $nc(cacheContents)->get(i));
		if ($equals(x, ifNotPresent)) {
			continue;
		}
		if (x == nullptr) {
			$assign(x, AbstractConstantGroup$WithCache::RESOLVED_TO_NULL);
		}
		this->cache->set(i, x);
	}
}

$Object* AbstractConstantGroup$WithCache::get(int32_t i) {
	$var($Object, x, this->cache->get(i));
	if (x == nullptr) {
		$assign(x, fillCache(i));
	}
	return unwrapNull(x);
}

$Object* AbstractConstantGroup$WithCache::get(int32_t i, Object$* ifNotAvailable) {
	$var($Object0, x, this->cache->get(i));
	if (x == nullptr) {
		return $of(ifNotAvailable);
	}
	return unwrapNull(x);
}

bool AbstractConstantGroup$WithCache::isPresent(int32_t i) {
	return this->cache->get(i) != nullptr;
}

$Object* AbstractConstantGroup$WithCache::fillCache(int32_t i) {
	$useLocalObjectStack();
	$throwNew($NoSuchElementException, $$str({"constant group does not contain element #"_s, $$str(i)}));
	$shouldNotReachHere();
}

$Object* AbstractConstantGroup$WithCache::wrapNull(Object$* x) {
	$init(AbstractConstantGroup$WithCache);
	return x == nullptr ? AbstractConstantGroup$WithCache::RESOLVED_TO_NULL : $of(x);
}

$Object* AbstractConstantGroup$WithCache::unwrapNull(Object$* x) {
	$init(AbstractConstantGroup$WithCache);
	if (!AbstractConstantGroup$WithCache::$assertionsDisabled && !(x != nullptr)) {
		$throwNew($AssertionError);
	}
	return $equals(x, AbstractConstantGroup$WithCache::RESOLVED_TO_NULL) ? ($Object*)nullptr : $of(x);
}

void AbstractConstantGroup$WithCache::clinit$($Class* clazz) {
	$load($AbstractConstantGroup);
	AbstractConstantGroup$WithCache::$assertionsDisabled = !$AbstractConstantGroup::class$->desiredAssertionStatus();
	$assignStatic(AbstractConstantGroup$WithCache::RESOLVED_TO_NULL, $new($Object));
	$assignStatic(AbstractConstantGroup$WithCache::NOT_PRESENT, $new($Object));
}

AbstractConstantGroup$WithCache::AbstractConstantGroup$WithCache() {
}

$Class* AbstractConstantGroup$WithCache::load$($String* name, bool initialize) {
	$CompoundAttribute cachefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractConstantGroup$WithCache, $assertionsDisabled)},
		{"cache", "[Ljava/lang/Object;", nullptr, $FINAL, $field(AbstractConstantGroup$WithCache, cache), cachefieldAnnotations$$},
		{"RESOLVED_TO_NULL", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(AbstractConstantGroup$WithCache, RESOLVED_TO_NULL)},
		{"NOT_PRESENT", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(AbstractConstantGroup$WithCache, NOT_PRESENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(AbstractConstantGroup$WithCache, init$, void, int32_t)},
		{"fillCache", "(I)Ljava/lang/Object;", nullptr, 0, $virtualMethod(AbstractConstantGroup$WithCache, fillCache, $Object*, int32_t)},
		{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractConstantGroup$WithCache, get, $Object*, int32_t)},
		{"get", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractConstantGroup$WithCache, get, $Object*, int32_t, Object$*)},
		{"initializeCache", "(Ljava/util/List;Ljava/lang/Object;)V", "(Ljava/util/List<Ljava/lang/Object;>;Ljava/lang/Object;)V", 0, $virtualMethod(AbstractConstantGroup$WithCache, initializeCache, void, $List*, Object$*)},
		{"isPresent", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AbstractConstantGroup$WithCache, isPresent, bool, int32_t)},
		{"unwrapNull", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(AbstractConstantGroup$WithCache, unwrapNull, $Object*, Object$*)},
		{"wrapNull", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(AbstractConstantGroup$WithCache, wrapNull, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.AbstractConstantGroup$WithCache", "java.lang.invoke.AbstractConstantGroup", "WithCache", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.invoke.AbstractConstantGroup$WithCache",
		"java.lang.invoke.AbstractConstantGroup",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.AbstractConstantGroup"
	};
	$loadClass(AbstractConstantGroup$WithCache, name, initialize, &classInfo$$, AbstractConstantGroup$WithCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractConstantGroup$WithCache);
	});
	return class$;
}

$Class* AbstractConstantGroup$WithCache::class$ = nullptr;

		} // invoke
	} // lang
} // java