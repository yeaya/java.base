#include <jdk/internal/access/foreign/NativeLibraryProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

$Class* NativeLibraryProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"lookup", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NativeLibraryProxy, lookup, int64_t, $String*), "java.lang.NoSuchMethodException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.foreign.NativeLibraryProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NativeLibraryProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibraryProxy);
	});
	return class$;
}

$Class* NativeLibraryProxy::class$ = nullptr;

			} // foreign
		} // access
	} // internal
} // jdk