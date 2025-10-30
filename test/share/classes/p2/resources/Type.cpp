#include <p2/resources/Type.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {
	namespace resources {

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type::*)()>(&Type::init$))},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.resources.Type",
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

	} // resources
} // p2