#include <p1/impl/Type.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace impl {

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type::*)()>(&Type::init$))},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.impl.Type",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Type_MethodInfo_
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

void Type::init$() {
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

	} // impl
} // p1