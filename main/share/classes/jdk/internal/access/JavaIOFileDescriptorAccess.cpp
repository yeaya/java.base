#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/io/FileDescriptor;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAppend", "(Ljava/io/FileDescriptor;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getHandle", "(Ljava/io/FileDescriptor;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"registerCleanup", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"registerCleanup", "(Ljava/io/FileDescriptor;Ljdk/internal/ref/PhantomCleanable;)V", "(Ljava/io/FileDescriptor;Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;)V", $PUBLIC | $ABSTRACT},
	{"set", "(Ljava/io/FileDescriptor;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAppend", "(Ljava/io/FileDescriptor;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setHandle", "(Ljava/io/FileDescriptor;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unregisterCleanup", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $ABSTRACT},
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