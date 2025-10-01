#include <Roebling.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Roebling_Attribute_var$0[] = {
	{"value", 's', "public int Roebling.compareTo(Roebling)"},
	{"bridgeValue", 's', "public int Roebling.compareTo(java.lang.Object)"},
	{}
};

$CompoundAttribute _Roebling_MethodAnnotations_compareTo1[] = {
	{"LExpectedGenericString;", Roebling_Attribute_var$0},
	{}
};

$NamedAttribute Roebling_Attribute_var$1[] = {
	{"value", 's', "public int Roebling.compareTo(Roebling)"},
	{"bridgeValue", 's', "public int Roebling.compareTo(java.lang.Object)"},
	{}
};

$CompoundAttribute _Roebling_MethodAnnotations_compareTo2[] = {
	{"LExpectedGenericString;", Roebling_Attribute_var$1},
	{}
};

$NamedAttribute Roebling_Attribute_var$2[] = {
	{"value", 's', "void Roebling.varArg(java.lang.Object...)"},
	{}
};

$NamedAttribute Roebling_Attribute_var$3[] = {
	{"value", 's', "void Roebling.varArg(java.lang.Object[])"},
	{}
};

$CompoundAttribute _Roebling_MethodAnnotations_varArg3[] = {
	{"LExpectedGenericString;", Roebling_Attribute_var$2},
	{"LExpectedString;", Roebling_Attribute_var$3},
	{}
};

$MethodInfo _Roebling_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Roebling::*)()>(&Roebling::init$))},
	{"compareTo", "(LRoebling;)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Roebling_MethodAnnotations_compareTo1},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, nullptr, nullptr, _Roebling_MethodAnnotations_compareTo2},
	{"varArg", "([Ljava/lang/Object;)V", nullptr, $TRANSIENT, nullptr, nullptr, nullptr, _Roebling_MethodAnnotations_varArg3},
	{}
};

$ClassInfo _Roebling_ClassInfo_ = {
	$ACC_SUPER,
	"Roebling",
	"java.lang.Object",
	"java.lang.Comparable",
	nullptr,
	_Roebling_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<LRoebling;>;"
};

$Object* allocate$Roebling($Class* clazz) {
	return $of($alloc(Roebling));
}

void Roebling::init$() {
}

int32_t Roebling::compareTo(Roebling* r) {
	$throwNew($IllegalArgumentException);
	$shouldNotReachHere();
}

void Roebling::varArg($ObjectArray* arg) {
}

int32_t Roebling::compareTo(Object$* r) {
	return this->compareTo($cast(Roebling, r));
}

Roebling::Roebling() {
}

$Class* Roebling::load$($String* name, bool initialize) {
	$loadClass(Roebling, name, initialize, &_Roebling_ClassInfo_, allocate$Roebling);
	return class$;
}

$Class* Roebling::class$ = nullptr;