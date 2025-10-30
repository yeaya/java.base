#include <Case1B.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Case1B_Attribute_var$0[] = {
	{"isDirect", 'Z', "true"},
	{}
};

$NamedAttribute Case1B_Attribute_var$4[] = {
	{"isDirect", 'Z', "false"},
	{}
};

$CompoundAttribute Case1B_CompoundAttribute_var$3 = {
"LFoo4OrderUnitTest;", Case1B_Attribute_var$4
};

$Attribute Case1B_Attribute_var$2[] = {
	{'@', &Case1B_CompoundAttribute_var$3},
	{'-'}
};

$NamedAttribute Case1B_Attribute_var$1[] = {
	{"value", '[', Case1B_Attribute_var$2},
	{}
};

$CompoundAttribute _Case1B_Annotations_[] = {
	{"LFoo4OrderUnitTest;", Case1B_Attribute_var$0},
	{"LFooContainer;", Case1B_Attribute_var$1},
	{}
};

$MethodInfo _Case1B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Case1B::*)()>(&Case1B::init$))},
	{}
};

$ClassInfo _Case1B_ClassInfo_ = {
	$ACC_SUPER,
	"Case1B",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Case1B_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Case1B_Annotations_
};

$Object* allocate$Case1B($Class* clazz) {
	return $of($alloc(Case1B));
}

void Case1B::init$() {
}

Case1B::Case1B() {
}

$Class* Case1B::load$($String* name, bool initialize) {
	$loadClass(Case1B, name, initialize, &_Case1B_ClassInfo_, allocate$Case1B);
	return class$;
}

$Class* Case1B::class$ = nullptr;