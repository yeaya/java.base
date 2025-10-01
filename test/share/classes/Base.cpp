#include <Base.h>

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

$NamedAttribute Base_Attribute_var$0[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LBase;"},
	{}
};

$CompoundAttribute _Base_MethodAnnotations_baz1[] = {
	{"LExpectedModel;", Base_Attribute_var$0},
	{}
};

$NamedAttribute Base_Attribute_var$1[] = {
	{"declaringClass", 'c', "LBase;"},
	{}
};

$CompoundAttribute _Base_MethodAnnotations_quux2[] = {
	{"LExpectedModel;", Base_Attribute_var$1},
	{}
};

$MethodInfo _Base_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Base::*)()>(&Base::init$))},
	{"baz", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _Base_MethodAnnotations_baz1},
	{"quux", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Base_MethodAnnotations_quux2},
	{}
};

$ClassInfo _Base_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Base",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Base_MethodInfo_
};

$Object* allocate$Base($Class* clazz) {
	return $of($alloc(Base));
}

void Base::init$() {
}

void Base::quux() {
}

Base::Base() {
}

$Class* Base::load$($String* name, bool initialize) {
	$loadClass(Base, name, initialize, &_Base_ClassInfo_, allocate$Base);
	return class$;
}

$Class* Base::class$ = nullptr;