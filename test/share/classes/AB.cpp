#include <AB.h>

#include <jcpp.h>

#undef AB

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AB_Attribute_var$0[] = {
	{"declaringClass", 'c', "LAB;"},
	{}
};

$CompoundAttribute _AB_MethodAnnotations_foo1[] = {
	{"LExpectedModel;", AB_Attribute_var$0},
	{}
};

$MethodInfo _AB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AB, init$, void)},
	{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(AB, foo, void), nullptr, nullptr, _AB_MethodAnnotations_foo1},
	{}
};

$ClassInfo _AB_ClassInfo_ = {
	$ACC_SUPER,
	"AB",
	"java.lang.Object",
	"SuperIwithDefault",
	nullptr,
	_AB_MethodInfo_
};

$Object* allocate$AB($Class* clazz) {
	return $of($alloc(AB));
}

void AB::init$() {
}

void AB::foo() {
}

AB::AB() {
}

$Class* AB::load$($String* name, bool initialize) {
	$loadClass(AB, name, initialize, &_AB_ClassInfo_, allocate$AB);
	return class$;
}

$Class* AB::class$ = nullptr;