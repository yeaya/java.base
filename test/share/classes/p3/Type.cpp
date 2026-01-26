#include <p3/Type.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p3 {

$FieldInfo _Type_FieldInfo_[] = {
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Type, obj)},
	{}
};

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Type, init$, void)},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$ACC_SUPER,
	"p3.Type",
	"java.lang.Object",
	nullptr,
	_Type_FieldInfo_,
	_Type_MethodInfo_
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

$Object* Type::obj = nullptr;

void Type::init$() {
}

void clinit$Type($Class* class$) {
	$assignStatic(Type::obj, $new($Object));
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, clinit$Type, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

} // p3