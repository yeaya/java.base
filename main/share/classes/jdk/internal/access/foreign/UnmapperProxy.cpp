#include <jdk/internal/access/foreign/UnmapperProxy.h>

#include <java/io/FileDescriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

$MethodInfo _UnmapperProxy_MethodInfo_[] = {
	{"address", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"fileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSync", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unmap", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnmapperProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.foreign.UnmapperProxy",
	nullptr,
	nullptr,
	nullptr,
	_UnmapperProxy_MethodInfo_
};

$Object* allocate$UnmapperProxy($Class* clazz) {
	return $of($alloc(UnmapperProxy));
}

$Class* UnmapperProxy::load$($String* name, bool initialize) {
	$loadClass(UnmapperProxy, name, initialize, &_UnmapperProxy_ClassInfo_, allocate$UnmapperProxy);
	return class$;
}

$Class* UnmapperProxy::class$ = nullptr;

			} // foreign
		} // access
	} // internal
} // jdk