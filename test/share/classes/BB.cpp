#include <BB.h>

#include <AB.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BB

using $AB = ::AB;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute BB_Attribute_var$0[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LBB;"},
	{}
};

$CompoundAttribute _BB_MethodAnnotations_bar1[] = {
	{"LExpectedModel;", BB_Attribute_var$0},
	{}
};

$MethodInfo _BB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BB::*)()>(&BB::init$))},
	{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _BB_MethodAnnotations_bar1},
	{}
};

$ClassInfo _BB_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"BB",
	"AB",
	nullptr,
	nullptr,
	_BB_MethodInfo_
};

$Object* allocate$BB($Class* clazz) {
	return $of($alloc(BB));
}

void BB::init$() {
	$AB::init$();
}

BB::BB() {
}

$Class* BB::load$($String* name, bool initialize) {
	$loadClass(BB, name, initialize, &_BB_ClassInfo_, allocate$BB);
	return class$;
}

$Class* BB::class$ = nullptr;