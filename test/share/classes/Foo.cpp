#include <Foo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Foo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Foo::*)()>(&Foo::init$))},
	{"privateMethod", "()V", nullptr, $PRIVATE, $method(static_cast<void(Foo::*)()>(&Foo::privateMethod))},
	{}
};

$ClassInfo _Foo_ClassInfo_ = {
	$ACC_SUPER,
	"Foo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Foo_MethodInfo_
};

$Object* allocate$Foo($Class* clazz) {
	return $of($alloc(Foo));
}

void Foo::init$() {
}

void Foo::privateMethod() {
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$loadClass(Foo, name, initialize, &_Foo_ClassInfo_, allocate$Foo);
	return class$;
}

$Class* Foo::class$ = nullptr;