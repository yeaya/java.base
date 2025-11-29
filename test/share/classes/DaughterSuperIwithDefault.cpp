#include <DaughterSuperIwithDefault.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute DaughterSuperIwithDefault_Attribute_var$0[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LDaughterSuperIwithDefault;"},
	{}
};

$CompoundAttribute _DaughterSuperIwithDefault_MethodAnnotations_quux0[] = {
	{"LExpectedModel;", DaughterSuperIwithDefault_Attribute_var$0},
	{}
};

$NamedAttribute DaughterSuperIwithDefault_Attribute_var$1[] = {
	{"isDefault", 'Z', "true"},
	{"declaringClass", 'c', "LDaughterSuperIwithDefault;"},
	{}
};

$CompoundAttribute _DaughterSuperIwithDefault_MethodAnnotations_quuxD1[] = {
	{"LExpectedModel;", DaughterSuperIwithDefault_Attribute_var$1},
	{}
};

$MethodInfo _DaughterSuperIwithDefault_MethodInfo_[] = {
	{"quux", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _DaughterSuperIwithDefault_MethodAnnotations_quux0},
	{"quuxD", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DaughterSuperIwithDefault_MethodAnnotations_quuxD1},
	{}
};

$ClassInfo _DaughterSuperIwithDefault_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"DaughterSuperIwithDefault",
	nullptr,
	"SuperIwithDefault",
	nullptr,
	_DaughterSuperIwithDefault_MethodInfo_
};

$Object* allocate$DaughterSuperIwithDefault($Class* clazz) {
	return $of($alloc(DaughterSuperIwithDefault));
}

void DaughterSuperIwithDefault::quuxD() {
}

$Class* DaughterSuperIwithDefault::load$($String* name, bool initialize) {
	$loadClass(DaughterSuperIwithDefault, name, initialize, &_DaughterSuperIwithDefault_ClassInfo_, allocate$DaughterSuperIwithDefault);
	return class$;
}

$Class* DaughterSuperIwithDefault::class$ = nullptr;