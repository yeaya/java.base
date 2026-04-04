#include <jdk/internal/access/foreign/UnmapperProxy.h>
#include <java/io/FileDescriptor.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

$Class* UnmapperProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"address", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnmapperProxy, address, int64_t)},
		{"fileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnmapperProxy, fileDescriptor, $FileDescriptor*)},
		{"isSync", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnmapperProxy, isSync, bool)},
		{"unmap", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnmapperProxy, unmap, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.foreign.UnmapperProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UnmapperProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnmapperProxy);
	});
	return class$;
}

$Class* UnmapperProxy::class$ = nullptr;

			} // foreign
		} // access
	} // internal
} // jdk