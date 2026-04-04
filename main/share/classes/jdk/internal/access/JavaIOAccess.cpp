#include <jdk/internal/access/JavaIOAccess.h>
#include <java/io/Console.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaIOAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOAccess, charset, $Charset*)},
		{"console", "()Ljava/io/Console;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOAccess, console, $Console*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaIOAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaIOAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaIOAccess);
	});
	return class$;
}

$Class* JavaIOAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk