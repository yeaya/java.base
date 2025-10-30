#include <java/lang/Cloneable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace lang {

$ClassInfo _Cloneable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Cloneable"
};

$Object* allocate$Cloneable($Class* clazz) {
	return $of($alloc(Cloneable));
}

$Class* Cloneable::load$($String* name, bool initialize) {
	$loadClass(Cloneable, name, initialize, &_Cloneable_ClassInfo_, allocate$Cloneable);
	return class$;
}

$Class* Cloneable::class$ = nullptr;

	} // lang
} // java