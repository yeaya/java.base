#include <SuperC.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SuperC_Attribute_var$0[] = {
	{"declaringClass", 'c', "LSuperC;"},
	{}
};

$CompoundAttribute _SuperC_MethodAnnotations_bar1[] = {
	{"LExpectedModel;", SuperC_Attribute_var$0},
	{}
};

$NamedAttribute SuperC_Attribute_var$1[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LSuperC;"},
	{}
};

$CompoundAttribute _SuperC_MethodAnnotations_foo2[] = {
	{"LExpectedModel;", SuperC_Attribute_var$1},
	{}
};

$MethodInfo _SuperC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SuperC::*)()>(&SuperC::init$))},
	{"bar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _SuperC_MethodAnnotations_bar1},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _SuperC_MethodAnnotations_foo2},
	{}
};

$ClassInfo _SuperC_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"SuperC",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SuperC_MethodInfo_
};

$Object* allocate$SuperC($Class* clazz) {
	return $of($alloc(SuperC));
}

void SuperC::init$() {
}

void SuperC::bar() {
}

SuperC::SuperC() {
}

$Class* SuperC::load$($String* name, bool initialize) {
	$loadClass(SuperC, name, initialize, &_SuperC_ClassInfo_, allocate$SuperC);
	return class$;
}

$Class* SuperC::class$ = nullptr;