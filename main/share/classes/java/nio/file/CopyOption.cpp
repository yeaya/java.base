#include <java/nio/file/CopyOption.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {

$Class* CopyOption::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.CopyOption"
	};
	$loadClass(CopyOption, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CopyOption);
	});
	return class$;
}

$Class* CopyOption::class$ = nullptr;

		} // file
	} // nio
} // java