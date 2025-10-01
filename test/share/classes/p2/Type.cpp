#include <p2/Type.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

$FieldInfo _Type_FieldInfo_[] = {
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Type, obj)},
	{}
};

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Type::*)()>(&Type::init$))},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$ACC_SUPER,
	"p2.Type",
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

} // p2