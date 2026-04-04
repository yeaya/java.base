#include <java/nio/file/OpenOption.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {

$Class* OpenOption::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.OpenOption"
	};
	$loadClass(OpenOption, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenOption);
	});
	return class$;
}

$Class* OpenOption::class$ = nullptr;

		} // file
	} // nio
} // java