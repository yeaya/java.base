#include <sun/reflect/generics/reflectiveObjects/NotImplementedException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

$FieldInfo _NotImplementedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotImplementedException, serialVersionUID)},
	{}
};

$MethodInfo _NotImplementedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NotImplementedException, init$, void)},
	{}
};

$ClassInfo _NotImplementedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.reflectiveObjects.NotImplementedException",
	"java.lang.RuntimeException",
	nullptr,
	_NotImplementedException_FieldInfo_,
	_NotImplementedException_MethodInfo_
};

$Object* allocate$NotImplementedException($Class* clazz) {
	return $of($alloc(NotImplementedException));
}

void NotImplementedException::init$() {
	$RuntimeException::init$();
}

NotImplementedException::NotImplementedException() {
}

NotImplementedException::NotImplementedException(const NotImplementedException& e) : $RuntimeException(e) {
}

void NotImplementedException::throw$() {
	throw *this;
}

$Class* NotImplementedException::load$($String* name, bool initialize) {
	$loadClass(NotImplementedException, name, initialize, &_NotImplementedException_ClassInfo_, allocate$NotImplementedException);
	return class$;
}

$Class* NotImplementedException::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun