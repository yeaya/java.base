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

$CompoundAttribute _AbstractConstantGroup$WithCache_FieldAnnotations_cache[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _AbstractConstantGroup$WithCache_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractConstantGroup$WithCache, $assertionsDisabled)},
	{"cache", "[Ljava/lang/Object;", nullptr, $FINAL, $field(AbstractConstantGroup$WithCache, cache), _AbstractConstantGroup$WithCache_FieldAnnotations_cache},
	{"RESOLVED_TO_NULL", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(AbstractConstantGroup$WithCache, RESOLVED_TO_NULL)},
	{"NOT_PRESENT", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(AbstractConstantGroup$WithCache, NOT_PRESENT)},
	{}
};

$MethodInfo _AbstractConstantGroup$WithCache_MethodInfo_[] = {
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

$InnerClassInfo _AbstractConstantGroup$WithCache_InnerClassesInfo_[] = {
	{"java.lang.invoke.AbstractConstantGroup$WithCache", "java.lang.invoke.AbstractConstantGroup", "WithCache", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractConstantGroup$WithCache_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.AbstractConstantGroup$WithCache",
	"java.lang.invoke.AbstractConstantGroup",
	nullptr,
	_AbstractConstantGroup$WithCache_FieldInfo_,
	_AbstractConstantGroup$WithCache_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractConstantGroup$WithCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.AbstractConstantGroup"
};

$Object* allocate$AbstractConstantGroup$WithCache($Class* clazz) {
	return $of($alloc(AbstractConstantGroup$WithCache));
}

bool AbstractConstantGroup$WithCache::$assertionsDisabled = false;
$Object* AbstractConstantGroup$WithCache::RESOLVED_TO_NULL = nullptr;
$Object* AbstractConstantGroup$WithCache::NOT_PRESENT = nullptr;

void AbstractConstantGroup$WithCache::init$(int32_t size) {
	$AbstractConstantGroup::init$(size);
	$set(this, cache, $new($ObjectArray, size));
}

void AbstractConstantGroup$WithCache::initializeCache($List* cacheContents, Object$* ifNotPresent) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->cache)->length; ++i) {
		$var($Object, x, $nc(cacheContents)->get(i));
		if ($equals(x, ifNotPresent)) {
			continue;
		}
		if (x == nullptr) {
			$assign(x, AbstractConstantGroup$WithCache::RESOLVED_TO_NULL);
		}
		$nc(this->cache)->set(i, x);
	}
}

$Object* AbstractConstantGroup$WithCache::get(int32_t i) {
	$var($Object, x, $nc(this->cache)->get(i));
	if (x == nullptr) {
		$assign(x, fillCache(i));
	}
	return $of(unwrapNull(x));
}

$Object* AbstractConstantGroup$WithCache::get(int32_t i, Object$* ifNotAvailable) {
	$var($Object0, x, $nc(this->cache)->get(i));
	if (x == nullptr) {
		return $of(ifNotAvailable);
	}
	return $of(unwrapNull(x));
}

bool AbstractConstantGroup$WithCache::isPresent(int32_t i) {
	return $nc(this->cache)->get(i) != nullptr;
}

$Object* AbstractConstantGroup$WithCache::fillCache(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$throwNew($NoSuchElementException, $$str({"constant group does not contain element #"_s, $$str(i)}));
	$shouldNotReachHere();
}

$Object* AbstractConstantGroup$WithCache::wrapNull(Object$* x) {
	$init(AbstractConstantGroup$WithCache);
	return $of(x == nullptr ? AbstractConstantGroup$WithCache::RESOLVED_TO_NULL : $of(x));
}

$Object* AbstractConstantGroup$WithCache::unwrapNull(Object$* x) {
	$init(AbstractConstantGroup$WithCache);
	if (!AbstractConstantGroup$WithCache::$assertionsDisabled && !(x != nullptr)) {
		$throwNew($AssertionError);
	}
	return $of($equals(x, AbstractConstantGroup$WithCache::RESOLVED_TO_NULL) ? ($Object*)nullptr : $of(x));
}

void clinit$AbstractConstantGroup$WithCache($Class* class$) {
	$load($AbstractConstantGroup);
	AbstractConstantGroup$WithCache::$assertionsDisabled = !$AbstractConstantGroup::class$->desiredAssertionStatus();
	$assignStatic(AbstractConstantGroup$WithCache::RESOLVED_TO_NULL, $new($Object));
	$assignStatic(AbstractConstantGroup$WithCache::NOT_PRESENT, $new($Object));
}

AbstractConstantGroup$WithCache::AbstractConstantGroup$WithCache() {
}

$Class* AbstractConstantGroup$WithCache::load$($String* name, bool initialize) {
	$loadClass(AbstractConstantGroup$WithCache, name, initialize, &_AbstractConstantGroup$WithCache_ClassInfo_, clinit$AbstractConstantGroup$WithCache, allocate$AbstractConstantGroup$WithCache);
	return class$;
}

$Class* AbstractConstantGroup$WithCache::class$ = nullptr;

		} // invoke
	} // lang
} // java