#include <CB.h>

#include <BB.h>
#include <jcpp.h>

#undef CB

using $BB = ::BB;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute CB_Attribute_var$0[] = {
	{"declaringClass", 'c', "LCB;"},
	{}
};

$CompoundAttribute _CB_MethodAnnotations_bar1[] = {
	{"LExpectedModel;", CB_Attribute_var$0},
	{}
};

$MethodInfo _CB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CB, init$, void)},
	{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(CB, bar, void), nullptr, nullptr, _CB_MethodAnnotations_bar1},
	{}
};

$ClassInfo _CB_ClassInfo_ = {
	$ACC_SUPER,
	"CB",
	"BB",
	nullptr,
	nullptr,
	_CB_MethodInfo_
};

$Object* allocate$CB($Class* clazz) {
	return $of($alloc(CB));
}

void CB::init$() {
	$BB::init$();
}

void CB::bar() {
}

CB::CB() {
}

$Class* CB::load$($String* name, bool initialize) {
	$loadClass(CB, name, initialize, &_CB_ClassInfo_, allocate$CB);
	return class$;
}

$Class* CB::class$ = nullptr;