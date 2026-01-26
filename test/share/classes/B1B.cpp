#include <B1B.h>

#include <A1B.h>
#include <jcpp.h>

#undef B1B

using $A1B = ::A1B;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute B1B_Attribute_var$0[] = {
	{"declaringClass", 'c', "LB1B;"},
	{}
};

$CompoundAttribute _B1B_MethodAnnotations_baz1[] = {
	{"LExpectedModel;", B1B_Attribute_var$0},
	{}
};

$NamedAttribute B1B_Attribute_var$1[] = {
	{"declaringClass", 'c', "LB1B;"},
	{}
};

$CompoundAttribute _B1B_MethodAnnotations_foo2[] = {
	{"LExpectedModel;", B1B_Attribute_var$1},
	{}
};

$MethodInfo _B1B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(B1B, init$, void)},
	{"baz", "()V", nullptr, $PUBLIC, $virtualMethod(B1B, baz, void), nullptr, nullptr, _B1B_MethodAnnotations_baz1},
	{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(B1B, foo, void), nullptr, nullptr, _B1B_MethodAnnotations_foo2},
	{}
};

$ClassInfo _B1B_ClassInfo_ = {
	$ACC_SUPER,
	"B1B",
	"A1B",
	nullptr,
	nullptr,
	_B1B_MethodInfo_
};

$Object* allocate$B1B($Class* clazz) {
	return $of($alloc(B1B));
}

void B1B::init$() {
	$A1B::init$();
}

void B1B::foo() {
}

void B1B::baz() {
}

B1B::B1B() {
}

$Class* B1B::load$($String* name, bool initialize) {
	$loadClass(B1B, name, initialize, &_B1B_ClassInfo_, allocate$B1B);
	return class$;
}

$Class* B1B::class$ = nullptr;