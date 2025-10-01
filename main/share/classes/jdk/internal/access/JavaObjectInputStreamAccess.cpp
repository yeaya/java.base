#include <jdk/internal/access/JavaObjectInputStreamAccess.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {
$CompoundAttribute _JavaObjectInputStreamAccess_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _JavaObjectInputStreamAccess_MethodInfo_[] = {
	{"checkArray", "(Ljava/io/ObjectInputStream;Ljava/lang/Class;I)V", "(Ljava/io/ObjectInputStream;Ljava/lang/Class<*>;I)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.InvalidClassException"},
	{}
};

$ClassInfo _JavaObjectInputStreamAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaObjectInputStreamAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaObjectInputStreamAccess_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_JavaObjectInputStreamAccess_Annotations_
};

$Object* allocate$JavaObjectInputStreamAccess($Class* clazz) {
	return $of($alloc(JavaObjectInputStreamAccess));
}

$Class* JavaObjectInputStreamAccess::load$($String* name, bool initialize) {
	$loadClass(JavaObjectInputStreamAccess, name, initialize, &_JavaObjectInputStreamAccess_ClassInfo_, allocate$JavaObjectInputStreamAccess);
	return class$;
}

$Class* JavaObjectInputStreamAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk