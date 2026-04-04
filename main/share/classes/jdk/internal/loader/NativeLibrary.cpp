#include <jdk/internal/loader/NativeLibrary.h>
#include <java/lang/NoSuchMethodException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;

namespace jdk {
	namespace internal {
		namespace loader {

int64_t NativeLibrary::lookup($String* name) {
	$useLocalObjectStack();
	int64_t addr = find(name);
	if (0 == addr) {
		$throwNew($NoSuchMethodException, $$str({"Cannot find symbol "_s, name, " in library "_s, $(this->name())}));
	}
	return addr;
}

$Class* NativeLibrary::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"find", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NativeLibrary, find, int64_t, $String*)},
		{"lookup", "(Ljava/lang/String;)J", nullptr, $PUBLIC, $virtualMethod(NativeLibrary, lookup, int64_t, $String*), "java.lang.NoSuchMethodException"},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NativeLibrary, name, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.loader.NativeLibrary",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NativeLibrary, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibrary);
	});
	return class$;
}

$Class* NativeLibrary::class$ = nullptr;

		} // loader
	} // internal
} // jdk