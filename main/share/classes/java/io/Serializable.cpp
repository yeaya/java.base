#include <java/io/Serializable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace io {

$ClassInfo _Serializable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.Serializable"
};

$Object* allocate$Serializable($Class* clazz) {
	return $of($alloc(Serializable));
}

$Class* Serializable::load$($String* name, bool initialize) {
	$loadClass(Serializable, name, initialize, &_Serializable_ClassInfo_, allocate$Serializable);
	return class$;
}

$Class* Serializable::class$ = nullptr;

	} // io
} // java