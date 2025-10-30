#include <java/nio/file/OpenOption.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {

$ClassInfo _OpenOption_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.OpenOption"
};

$Object* allocate$OpenOption($Class* clazz) {
	return $of($alloc(OpenOption));
}

$Class* OpenOption::load$($String* name, bool initialize) {
	$loadClass(OpenOption, name, initialize, &_OpenOption_ClassInfo_, allocate$OpenOption);
	return class$;
}

$Class* OpenOption::class$ = nullptr;

		} // file
	} // nio
} // java