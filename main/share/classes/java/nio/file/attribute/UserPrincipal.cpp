#include <java/nio/file/attribute/UserPrincipal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* UserPrincipal::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.UserPrincipal",
		nullptr,
		"java.security.Principal"
	};
	$loadClass(UserPrincipal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserPrincipal);
	});
	return class$;
}

$Class* UserPrincipal::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java