#include <SuperCchild.h>

#include <SuperC.h>
#include <jcpp.h>

using $SuperC = ::SuperC;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SuperCchild_Attribute_var$0[] = {
	{"declaringClass", 'c', "LSuperCchild;"},
	{}
};

$CompoundAttribute _SuperCchild_MethodAnnotations_foo1[] = {
	{"LExpectedModel;", SuperCchild_Attribute_var$0},
	{}
};

$MethodInfo _SuperCchild_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SuperCchild, init$, void)},
	{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(SuperCchild, foo, void), nullptr, nullptr, _SuperCchild_MethodAnnotations_foo1},
	{}
};

$ClassInfo _SuperCchild_ClassInfo_ = {
	$ACC_SUPER,
	"SuperCchild",
	"SuperC",
	nullptr,
	nullptr,
	_SuperCchild_MethodInfo_
};

$Object* allocate$SuperCchild($Class* clazz) {
	return $of($alloc(SuperCchild));
}

void SuperCchild::init$() {
	$SuperC::init$();
}

void SuperCchild::foo() {
}

SuperCchild::SuperCchild() {
}

$Class* SuperCchild::load$($String* name, bool initialize) {
	$loadClass(SuperCchild, name, initialize, &_SuperCchild_ClassInfo_, allocate$SuperCchild);
	return class$;
}

$Class* SuperCchild::class$ = nullptr;