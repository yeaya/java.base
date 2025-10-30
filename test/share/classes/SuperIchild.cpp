#include <SuperIchild.h>

#include <jcpp.h>

using $SuperI = ::SuperI;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SuperIchild_Attribute_var$0[] = {
	{"declaringClass", 'c', "LSuperIchild;"},
	{}
};

$CompoundAttribute _SuperIchild_MethodAnnotations_bar1[] = {
	{"LExpectedModel;", SuperIchild_Attribute_var$0},
	{}
};

$NamedAttribute SuperIchild_Attribute_var$1[] = {
	{"declaringClass", 'c', "LSuperIchild;"},
	{}
};

$CompoundAttribute _SuperIchild_MethodAnnotations_foo2[] = {
	{"LExpectedModel;", SuperIchild_Attribute_var$1},
	{}
};

$MethodInfo _SuperIchild_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SuperIchild::*)()>(&SuperIchild::init$))},
	{"bar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _SuperIchild_MethodAnnotations_bar1},
	{"foo", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _SuperIchild_MethodAnnotations_foo2},
	{}
};

$ClassInfo _SuperIchild_ClassInfo_ = {
	$ACC_SUPER,
	"SuperIchild",
	"java.lang.Object",
	"SuperI",
	nullptr,
	_SuperIchild_MethodInfo_
};

$Object* allocate$SuperIchild($Class* clazz) {
	return $of($alloc(SuperIchild));
}

void SuperIchild::init$() {
}

void SuperIchild::foo() {
}

void SuperIchild::bar() {
}

SuperIchild::SuperIchild() {
}

$Class* SuperIchild::load$($String* name, bool initialize) {
	$loadClass(SuperIchild, name, initialize, &_SuperIchild_ClassInfo_, allocate$SuperIchild);
	return class$;
}

$Class* SuperIchild::class$ = nullptr;