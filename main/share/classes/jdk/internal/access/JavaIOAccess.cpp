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

$MethodInfo _JavaIOAccess_MethodInfo_[] = {
	{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOAccess, charset, $Charset*)},
	{"console", "()Ljava/io/Console;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaIOAccess, console, $Console*)},
	{}
};

$ClassInfo _JavaIOAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaIOAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaIOAccess_MethodInfo_
};

$Object* allocate$JavaIOAccess($Class* clazz) {
	return $of($alloc(JavaIOAccess));
}

$Class* JavaIOAccess::load$($String* name, bool initialize) {
	$loadClass(JavaIOAccess, name, initialize, &_JavaIOAccess_ClassInfo_, allocate$JavaIOAccess);
	return class$;
}

$Class* JavaIOAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk