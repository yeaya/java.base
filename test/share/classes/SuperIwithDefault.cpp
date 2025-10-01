#include <SuperIwithDefault.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SuperIwithDefault_Attribute_var$0[] = {
	{"isDefault", 'Z', "true"},
	{"declaringClass", 'c', "LSuperIwithDefault;"},
	{}
};

$CompoundAttribute _SuperIwithDefault_MethodAnnotations_bar0[] = {
	{"LExpectedModel;", SuperIwithDefault_Attribute_var$0},
	{}
};

$NamedAttribute SuperIwithDefault_Attribute_var$1[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LSuperIwithDefault;"},
	{}
};

$CompoundAttribute _SuperIwithDefault_MethodAnnotations_foo1[] = {
	{"LExpectedModel;", SuperIwithDefault_Attribute_var$1},
	{}
};

$MethodInfo _SuperIwithDefault_MethodInfo_[] = {
	{"bar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _SuperIwithDefault_MethodAnnotations_bar0},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _SuperIwithDefault_MethodAnnotations_foo1},
	{}
};

$ClassInfo _SuperIwithDefault_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SuperIwithDefault",
	nullptr,
	nullptr,
	nullptr,
	_SuperIwithDefault_MethodInfo_
};

$Object* allocate$SuperIwithDefault($Class* clazz) {
	return $of($alloc(SuperIwithDefault));
}

void SuperIwithDefault::bar() {
}

$Class* SuperIwithDefault::load$($String* name, bool initialize) {
	$loadClass(SuperIwithDefault, name, initialize, &_SuperIwithDefault_ClassInfo_, allocate$SuperIwithDefault);
	return class$;
}

$Class* SuperIwithDefault::class$ = nullptr;