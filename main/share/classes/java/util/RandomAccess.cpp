#include <java/util/RandomAccess.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace util {

$ClassInfo _RandomAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.RandomAccess"
};

$Object* allocate$RandomAccess($Class* clazz) {
	return $of($alloc(RandomAccess));
}

$Class* RandomAccess::load$($String* name, bool initialize) {
	$loadClass(RandomAccess, name, initialize, &_RandomAccess_ClassInfo_, allocate$RandomAccess);
	return class$;
}

$Class* RandomAccess::class$ = nullptr;

	} // util
} // java