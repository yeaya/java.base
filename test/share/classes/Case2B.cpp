#include <Case2B.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Case2B_Attribute_var$3[] = {
	{"isDirect", 'Z', "false"},
	{}
};

$CompoundAttribute Case2B_CompoundAttribute_var$2 = {
"LFoo4OrderUnitTest;", Case2B_Attribute_var$3
};

$Attribute Case2B_Attribute_var$1[] = {
	{'@', &Case2B_CompoundAttribute_var$2},
	{'-'}
};

$NamedAttribute Case2B_Attribute_var$0[] = {
	{"value", '[', Case2B_Attribute_var$1},
	{}
};

$NamedAttribute Case2B_Attribute_var$4[] = {
	{"isDirect", 'Z', "true"},
	{}
};

$CompoundAttribute _Case2B_Annotations_[] = {
	{"LFooContainer;", Case2B_Attribute_var$0},
	{"LFoo4OrderUnitTest;", Case2B_Attribute_var$4},
	{}
};

$MethodInfo _Case2B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Case2B, init$, void)},
	{}
};

$ClassInfo _Case2B_ClassInfo_ = {
	$ACC_SUPER,
	"Case2B",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Case2B_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Case2B_Annotations_
};

$Object* allocate$Case2B($Class* clazz) {
	return $of($alloc(Case2B));
}

void Case2B::init$() {
}

Case2B::Case2B() {
}

$Class* Case2B::load$($String* name, bool initialize) {
	$loadClass(Case2B, name, initialize, &_Case2B_ClassInfo_, allocate$Case2B);
	return class$;
}

$Class* Case2B::class$ = nullptr;