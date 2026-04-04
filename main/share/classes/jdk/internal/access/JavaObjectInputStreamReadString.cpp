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

$Class* JavaObjectInputStreamReadString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readString", "(Ljava/io/ObjectInputStream;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaObjectInputStreamReadString, readString, $String*, $ObjectInputStream*), "java.io.IOException"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaObjectInputStreamReadString",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(JavaObjectInputStreamReadString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaObjectInputStreamReadString);
	});
	return class$;
}

$Class* JavaObjectInputStreamReadString::class$ = nullptr;

		} // access
	} // internal
} // jdk