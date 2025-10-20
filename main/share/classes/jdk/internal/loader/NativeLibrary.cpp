#include <jdk/internal/loader/NativeLibrary.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _NativeLibrary_MethodInfo_[] = {
	{"find", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"lookup", "(Ljava/lang/String;)J", nullptr, $PUBLIC, nullptr, "java.lang.NoSuchMethodException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NativeLibrary_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.loader.NativeLibrary",
	nullptr,
	nullptr,
	nullptr,
	_NativeLibrary_MethodInfo_
};

$Object* allocate$NativeLibrary($Class* clazz) {
	return $of($alloc(NativeLibrary));
}

int64_t NativeLibrary::lookup($String* name) {
	$useLocalCurrentObjectStackCache();
	int64_t addr = find(name);
	if (0 == addr) {
		$throwNew($NoSuchMethodException, $$str({"Cannot find symbol "_s, name, " in library "_s, $(this->name())}));
	}
	return addr;
}

$Class* NativeLibrary::load$($String* name, bool initialize) {
	$loadClass(NativeLibrary, name, initialize, &_NativeLibrary_ClassInfo_, allocate$NativeLibrary);
	return class$;
}

$Class* NativeLibrary::class$ = nullptr;

		} // loader
	} // internal
} // jdk