#include <sun/invoke/util/ValueConversions$WrapperCache.h>
#include <java/lang/invoke/MethodHandle.h>
#include <sun/invoke/util/ValueConversions.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef COUNT

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace sun {
	namespace invoke {
		namespace util {

void ValueConversions$WrapperCache::init$() {
	$set(this, map, $new($MethodHandleArray, $Wrapper::COUNT));
}

$MethodHandle* ValueConversions$WrapperCache::get($Wrapper* w) {
	return this->map->get($nc(w)->ordinal());
}

$MethodHandle* ValueConversions$WrapperCache::put($Wrapper* w, $MethodHandle* mh) {
	$synchronized(this) {
		$var($MethodHandle, prev, this->map->get(w->ordinal()));
		if (prev != nullptr) {
			return prev;
		} else {
			this->map->set(w->ordinal(), mh);
			return mh;
		}
	}
}

ValueConversions$WrapperCache::ValueConversions$WrapperCache() {
}

$Class* ValueConversions$WrapperCache::load$($String* name, bool initialize) {
	$CompoundAttribute mapfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"map", "[Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(ValueConversions$WrapperCache, map), mapfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ValueConversions$WrapperCache, init$, void)},
		{"get", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $virtualMethod(ValueConversions$WrapperCache, get, $MethodHandle*, $Wrapper*)},
		{"put", "(Lsun/invoke/util/Wrapper;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ValueConversions$WrapperCache, put, $MethodHandle*, $Wrapper*, $MethodHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.invoke.util.ValueConversions$WrapperCache", "sun.invoke.util.ValueConversions", "WrapperCache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.invoke.util.ValueConversions$WrapperCache",
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
		"sun.invoke.util.ValueConversions"
	};
	$loadClass(ValueConversions$WrapperCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValueConversions$WrapperCache);
	});
	return class$;
}

$Class* ValueConversions$WrapperCache::class$ = nullptr;

		} // util
	} // invoke
} // sun