#include <jdk/internal/access/JavaObjectInputStreamReadString.h>

#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$CompoundAttribute _JavaObjectInputStreamReadString_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _JavaObjectInputStreamReadString_MethodInfo_[] = {
	{"readString", "(Ljava/io/ObjectInputStream;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JavaObjectInputStreamReadString_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaObjectInputStreamReadString",
	nullptr,
	nullptr,
	nullptr,
	_JavaObjectInputStreamReadString_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_JavaObjectInputStreamReadString_Annotations_
};

$Object* allocate$JavaObjectInputStreamReadString($Class* clazz) {
	return $of($alloc(JavaObjectInputStreamReadString));
}

$Class* JavaObjectInputStreamReadString::load$($String* name, bool initialize) {
	$loadClass(JavaObjectInputStreamReadString, name, initialize, &_JavaObjectInputStreamReadString_ClassInfo_, allocate$JavaObjectInputStreamReadString);
	return class$;
}

$Class* JavaObjectInputStreamReadString::class$ = nullptr;

		} // access
	} // internal
} // jdk