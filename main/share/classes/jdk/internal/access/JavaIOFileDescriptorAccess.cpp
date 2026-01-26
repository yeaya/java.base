#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>

#include <java/io/FileDescriptor.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaIOFileDescriptorAccess_MethodInfo_[] = {
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, close, void, $FileDescriptor*), "java.io.IOException"},
	{"get", "(Ljava/io/FileDescriptor;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, get, int32_t, $FileDescriptor*)},
	{"getAppend", "(Ljava/io/FileDescriptor;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, getAppend, bool, $FileDescriptor*)},
	{"getHandle", "(Ljava/io/FileDescriptor;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, getHandle, int64_t, $FileDescriptor*)},
	{"registerCleanup", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, registerCleanup, void, $FileDescriptor*)},
	{"registerCleanup", "(Ljava/io/FileDescriptor;Ljdk/internal/ref/PhantomCleanable;)V", "(Ljava/io/FileDescriptor;Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, registerCleanup, void, $FileDescriptor*, $PhantomCleanable*)},
	{"set", "(Ljava/io/FileDescriptor;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, set, void, $FileDescriptor*, int32_t)},
	{"setAppend", "(Ljava/io/FileDescriptor;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, setAppend, void, $FileDescriptor*, bool)},
	{"setHandle", "(Ljava/io/FileDescriptor;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, setHandle, void, $FileDescriptor*, int64_t)},
	{"unregisterCleanup", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOFileDescriptorAccess, unregisterCleanup, void, $FileDescriptor*)},
	{}
};

$ClassInfo _JavaIOFileDescriptorAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaIOFileDescriptorAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaIOFileDescriptorAccess_MethodInfo_
};

$Object* allocate$JavaIOFileDescriptorAccess($Class* clazz) {
	return $of($alloc(JavaIOFileDescriptorAccess));
}

$Class* JavaIOFileDescriptorAccess::load$($String* name, bool initialize) {
	$loadClass(JavaIOFileDescriptorAccess, name, initialize, &_JavaIOFileDescriptorAccess_ClassInfo_, allocate$JavaIOFileDescriptorAccess);
	return class$;
}

$Class* JavaIOFileDescriptorAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk