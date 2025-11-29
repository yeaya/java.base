#include <java/nio/file/attribute/UserPrincipal.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$ClassInfo _UserPrincipal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.UserPrincipal",
	nullptr,
	"java.security.Principal"
};

$Object* allocate$UserPrincipal($Class* clazz) {
	return $of($alloc(UserPrincipal));
}

$Class* UserPrincipal::load$($String* name, bool initialize) {
	$loadClass(UserPrincipal, name, initialize, &_UserPrincipal_ClassInfo_, allocate$UserPrincipal);
	return class$;
}

$Class* UserPrincipal::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java