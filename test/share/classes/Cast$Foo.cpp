#include <Cast$Foo.h>

#include <Cast.h>
#include <jcpp.h>

using $Cast = ::Cast;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Cast$Foo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Cast$Foo::*)()>(&Cast$Foo::init$))},
	{}
};

$InnerClassInfo _Cast$Foo_InnerClassesInfo_[] = {
	{"Cast$Foo", "Cast", "Foo", $STATIC},
	{}
};

$ClassInfo _Cast$Foo_ClassInfo_ = {
	$ACC_SUPER,
	"Cast$Foo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Cast$Foo_MethodInfo_,
	nullptr,
	nullptr,
	_Cast$Foo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Cast"
};

$Object* allocate$Cast$Foo($Class* clazz) {
	return $of($alloc(Cast$Foo));
}

void Cast$Foo::init$() {
}

Cast$Foo::Cast$Foo() {
}

$Class* Cast$Foo::load$($String* name, bool initialize) {
	$loadClass(Cast$Foo, name, initialize, &_Cast$Foo_ClassInfo_, allocate$Cast$Foo);
	return class$;
}

$Class* Cast$Foo::class$ = nullptr;