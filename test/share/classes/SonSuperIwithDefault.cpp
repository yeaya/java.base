#include <SonSuperIwithDefault.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SuperIwithDefault = ::SuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SonSuperIwithDefault_Attribute_var$0[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LSonSuperIwithDefault;"},
	{}
};

$CompoundAttribute _SonSuperIwithDefault_MethodAnnotations_baz0[] = {
	{"LExpectedModel;", SonSuperIwithDefault_Attribute_var$0},
	{}
};

$NamedAttribute SonSuperIwithDefault_Attribute_var$1[] = {
	{"isDefault", 'Z', "true"},
	{"declaringClass", 'c', "LSonSuperIwithDefault;"},
	{}
};

$CompoundAttribute _SonSuperIwithDefault_MethodAnnotations_bazD1[] = {
	{"LExpectedModel;", SonSuperIwithDefault_Attribute_var$1},
	{}
};

$MethodInfo _SonSuperIwithDefault_MethodInfo_[] = {
	{"baz", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _SonSuperIwithDefault_MethodAnnotations_baz0},
	{"bazD", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _SonSuperIwithDefault_MethodAnnotations_bazD1},
	{}
};

$ClassInfo _SonSuperIwithDefault_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SonSuperIwithDefault",
	nullptr,
	"SuperIwithDefault",
	nullptr,
	_SonSuperIwithDefault_MethodInfo_
};

$Object* allocate$SonSuperIwithDefault($Class* clazz) {
	return $of($alloc(SonSuperIwithDefault));
}

void SonSuperIwithDefault::bazD() {
}

$Class* SonSuperIwithDefault::load$($String* name, bool initialize) {
	$loadClass(SonSuperIwithDefault, name, initialize, &_SonSuperIwithDefault_ClassInfo_, allocate$SonSuperIwithDefault);
	return class$;
}

$Class* SonSuperIwithDefault::class$ = nullptr;