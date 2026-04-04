#include <java/nio/file/attribute/GroupPrincipal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* GroupPrincipal::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.GroupPrincipal",
		nullptr,
		"java.nio.file.attribute.UserPrincipal"
	};
	$loadClass(GroupPrincipal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupPrincipal);
	});
	return class$;
}

$Class* GroupPrincipal::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java