#include <SuperIwithDefaultChild.h>

#include <jcpp.h>

using $SuperIwithDefault = ::SuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SuperIwithDefaultChild_Attribute_var$0[] = {
	{"declaringClass", 'c', "LSuperIwithDefaultChild;"},
	{}
};

$CompoundAttribute _SuperIwithDefaultChild_MethodAnnotations_foo1[] = {
	{"LExpectedModel;", SuperIwithDefaultChild_Attribute_var$0},
	{}
};

$MethodInfo _SuperIwithDefaultChild_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SuperIwithDefaultChild::*)()>(&SuperIwithDefaultChild::init$))},
	{"foo", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _SuperIwithDefaultChild_MethodAnnotations_foo1},
	{}
};

$ClassInfo _SuperIwithDefaultChild_ClassInfo_ = {
	$ACC_SUPER,
	"SuperIwithDefaultChild",
	"java.lang.Object",
	"SuperIwithDefault",
	nullptr,
	_SuperIwithDefaultChild_MethodInfo_
};

$Object* allocate$SuperIwithDefaultChild($Class* clazz) {
	return $of($alloc(SuperIwithDefaultChild));
}

void SuperIwithDefaultChild::init$() {
}

void SuperIwithDefaultChild::foo() {
}

SuperIwithDefaultChild::SuperIwithDefaultChild() {
}

$Class* SuperIwithDefaultChild::load$($String* name, bool initialize) {
	$loadClass(SuperIwithDefaultChild, name, initialize, &_SuperIwithDefaultChild_ClassInfo_, allocate$SuperIwithDefaultChild);
	return class$;
}

$Class* SuperIwithDefaultChild::class$ = nullptr;