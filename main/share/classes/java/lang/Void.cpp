#include <java/lang/Void.h>

#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _Void_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Void, TYPE)},
	{}
};

$MethodInfo _Void_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Void::*)()>(&Void::init$))},
	{}
};

$ClassInfo _Void_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Void",
	"java.lang.Object",
	nullptr,
	_Void_FieldInfo_,
	_Void_MethodInfo_
};

$Object* allocate$Void($Class* clazz) {
	return $of($alloc(Void));
}

$Class* Void::TYPE = nullptr;

void Void::init$() {
}

void clinit$Void($Class* class$) {
	$assignStatic(Void::TYPE, $Class::getPrimitiveClass("void"_s));
}

Void::Void() {
}

Void* Void::VOID$ = nullptr;

$Class* Void::load$($String* name, bool initialize) {
	$loadClass(Void, name, initialize, &_Void_ClassInfo_, clinit$Void, allocate$Void);
	return class$;
}

$Class* Void::class$ = nullptr;

	} // lang
} // java