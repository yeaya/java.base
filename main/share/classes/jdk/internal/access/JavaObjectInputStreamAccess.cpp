#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaObjectInputStreamAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"checkArray", "(Ljava/io/ObjectInputStream;Ljava/lang/Class;I)V", "(Ljava/io/ObjectInputStream;Ljava/lang/Class<*>;I)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaObjectInputStreamAccess, checkArray, void, $ObjectInputStream*, $Class*, int32_t), "java.io.InvalidClassException"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaObjectInputStreamAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(JavaObjectInputStreamAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaObjectInputStreamAccess);
	});
	return class$;
}

$Class* JavaObjectInputStreamAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk