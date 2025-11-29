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

$CompoundAttribute _ValueConversions$WrapperCache_FieldAnnotations_map[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _ValueConversions$WrapperCache_FieldInfo_[] = {
	{"map", "[Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(ValueConversions$WrapperCache, map), _ValueConversions$WrapperCache_FieldAnnotations_map},
	{}
};

$MethodInfo _ValueConversions$WrapperCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ValueConversions$WrapperCache::*)()>(&ValueConversions$WrapperCache::init$))},
	{"get", "(Lsun/invoke/util/Wrapper;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"put", "(Lsun/invoke/util/Wrapper;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _ValueConversions$WrapperCache_InnerClassesInfo_[] = {
	{"sun.invoke.util.ValueConversions$WrapperCache", "sun.invoke.util.ValueConversions", "WrapperCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ValueConversions$WrapperCache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.invoke.util.ValueConversions$WrapperCache",
	"java.lang.Object",
	nullptr,
	_ValueConversions$WrapperCache_FieldInfo_,
	_ValueConversions$WrapperCache_MethodInfo_,
	nullptr,
	nullptr,
	_ValueConversions$WrapperCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.invoke.util.ValueConversions"
};

$Object* allocate$ValueConversions$WrapperCache($Class* clazz) {
	return $of($alloc(ValueConversions$WrapperCache));
}

void ValueConversions$WrapperCache::init$() {
	$set(this, map, $new($MethodHandleArray, $Wrapper::COUNT));
}

$MethodHandle* ValueConversions$WrapperCache::get($Wrapper* w) {
	return $nc(this->map)->get($nc(w)->ordinal());
}

$MethodHandle* ValueConversions$WrapperCache::put($Wrapper* w, $MethodHandle* mh) {
	$synchronized(this) {
		$var($MethodHandle, prev, $nc(this->map)->get(w->ordinal()));
		if (prev != nullptr) {
			return prev;
		} else {
			$nc(this->map)->set(w->ordinal(), mh);
			return mh;
		}
	}
}

ValueConversions$WrapperCache::ValueConversions$WrapperCache() {
}

$Class* ValueConversions$WrapperCache::load$($String* name, bool initialize) {
	$loadClass(ValueConversions$WrapperCache, name, initialize, &_ValueConversions$WrapperCache_ClassInfo_, allocate$ValueConversions$WrapperCache);
	return class$;
}

$Class* ValueConversions$WrapperCache::class$ = nullptr;

		} // util
	} // invoke
} // sun