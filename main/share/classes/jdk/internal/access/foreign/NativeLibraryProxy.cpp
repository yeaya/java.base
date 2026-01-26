#include <jdk/internal/access/foreign/NativeLibraryProxy.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

$MethodInfo _NativeLibraryProxy_MethodInfo_[] = {
	{"lookup", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NativeLibraryProxy, lookup, int64_t, $String*), "java.lang.NoSuchMethodException"},
	{}
};

$ClassInfo _NativeLibraryProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.foreign.NativeLibraryProxy",
	nullptr,
	nullptr,
	nullptr,
	_NativeLibraryProxy_MethodInfo_
};

$Object* allocate$NativeLibraryProxy($Class* clazz) {
	return $of($alloc(NativeLibraryProxy));
}

$Class* NativeLibraryProxy::load$($String* name, bool initialize) {
	$loadClass(NativeLibraryProxy, name, initialize, &_NativeLibraryProxy_ClassInfo_, allocate$NativeLibraryProxy);
	return class$;
}

$Class* NativeLibraryProxy::class$ = nullptr;

			} // foreign
		} // access
	} // internal
} // jdk