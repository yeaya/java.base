#include <java/nio/file/attribute/GroupPrincipal.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$ClassInfo _GroupPrincipal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.GroupPrincipal",
	nullptr,
	"java.nio.file.attribute.UserPrincipal"
};

$Object* allocate$GroupPrincipal($Class* clazz) {
	return $of($alloc(GroupPrincipal));
}

$Class* GroupPrincipal::load$($String* name, bool initialize) {
	$loadClass(GroupPrincipal, name, initialize, &_GroupPrincipal_ClassInfo_, allocate$GroupPrincipal);
	return class$;
}

$Class* GroupPrincipal::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java