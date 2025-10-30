#include <SuperI.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute SuperI_Attribute_var$0[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LSuperI;"},
	{}
};

$CompoundAttribute _SuperI_MethodAnnotations_bar0[] = {
	{"LExpectedModel;", SuperI_Attribute_var$0},
	{}
};

$NamedAttribute SuperI_Attribute_var$1[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LSuperI;"},
	{}
};

$CompoundAttribute _SuperI_MethodAnnotations_foo1[] = {
	{"LExpectedModel;", SuperI_Attribute_var$1},
	{}
};

$MethodInfo _SuperI_MethodInfo_[] = {
	{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _SuperI_MethodAnnotations_bar0},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _SuperI_MethodAnnotations_foo1},
	{}
};

$ClassInfo _SuperI_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SuperI",
	nullptr,
	nullptr,
	nullptr,
	_SuperI_MethodInfo_
};

$Object* allocate$SuperI($Class* clazz) {
	return $of($alloc(SuperI));
}

$Class* SuperI::load$($String* name, bool initialize) {
	$loadClass(SuperI, name, initialize, &_SuperI_ClassInfo_, allocate$SuperI);
	return class$;
}

$Class* SuperI::class$ = nullptr;