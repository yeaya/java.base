#include <java/lang/reflect/Type.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _Type_MethodInfo_[] = {
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.Type",
	nullptr,
	nullptr,
	nullptr,
	_Type_MethodInfo_
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

$String* Type::getTypeName() {
	return toString();
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

		} // reflect
	} // lang
} // java