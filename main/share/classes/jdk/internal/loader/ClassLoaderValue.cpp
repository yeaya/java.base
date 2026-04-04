#include <jdk/internal/loader/ClassLoaderValue.h>
#include <java/util/Objects.h>
#include <jdk/internal/loader/AbstractClassLoaderValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $AbstractClassLoaderValue = ::jdk::internal::loader::AbstractClassLoaderValue;

namespace jdk {
	namespace internal {
		namespace loader {

void ClassLoaderValue::init$() {
	$AbstractClassLoaderValue::init$();
}

ClassLoaderValue* ClassLoaderValue::key() {
	return this;
}

bool ClassLoaderValue::isEqualOrDescendantOf($AbstractClassLoaderValue* clv) {
	return equals($Objects::requireNonNull(clv));
}

ClassLoaderValue::ClassLoaderValue() {
}

$Class* ClassLoaderValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassLoaderValue, init$, void)},
		{"isEqualOrDescendantOf", "(Ljdk/internal/loader/AbstractClassLoaderValue;)Z", "(Ljdk/internal/loader/AbstractClassLoaderValue<*TV;>;)Z", $PUBLIC, $virtualMethod(ClassLoaderValue, isEqualOrDescendantOf, bool, $AbstractClassLoaderValue*)},
		{"key", "()Ljdk/internal/loader/ClassLoaderValue;", "()Ljdk/internal/loader/ClassLoaderValue<TV;>;", $PUBLIC, $virtualMethod(ClassLoaderValue, key, ClassLoaderValue*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.loader.ClassLoaderValue",
		"jdk.internal.loader.AbstractClassLoaderValue",
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljdk/internal/loader/AbstractClassLoaderValue<Ljdk/internal/loader/ClassLoaderValue<TV;>;TV;>;"
	};
	$loadClass(ClassLoaderValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaderValue);
	});
	return class$;
}

$Class* ClassLoaderValue::class$ = nullptr;

		} // loader
	} // internal
} // jdk