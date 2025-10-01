#include <D1B.h>

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

using $DaughterSuperIwithDefault = ::DaughterSuperIwithDefault;
using $SonSuperIwithDefault = ::SonSuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute D1B_Attribute_var$0[] = {
	{"declaringClass", 'c', "LD1B;"},
	{}
};

$CompoundAttribute _D1B_MethodAnnotations_baz1[] = {
	{"LExpectedModel;", D1B_Attribute_var$0},
	{}
};

$NamedAttribute D1B_Attribute_var$1[] = {
	{"declaringClass", 'c', "LD1B;"},
	{}
};

$CompoundAttribute _D1B_MethodAnnotations_foo2[] = {
	{"LExpectedModel;", D1B_Attribute_var$1},
	{}
};

$NamedAttribute D1B_Attribute_var$2[] = {
	{"declaringClass", 'c', "LD1B;"},
	{}
};

$CompoundAttribute _D1B_MethodAnnotations_quux3[] = {
	{"LExpectedModel;", D1B_Attribute_var$2},
	{}
};

$MethodInfo _D1B_MethodInfo_[] = {
	{"*bar", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D1B::*)()>(&D1B::init$))},
	{"baz", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _D1B_MethodAnnotations_baz1},
	{"foo", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _D1B_MethodAnnotations_foo2},
	{"quux", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _D1B_MethodAnnotations_quux3},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D1B_ClassInfo_ = {
	$ACC_SUPER,
	"D1B",
	"java.lang.Object",
	"SonSuperIwithDefault,DaughterSuperIwithDefault",
	nullptr,
	_D1B_MethodInfo_
};

$Object* allocate$D1B($Class* clazz) {
	return $of($alloc(D1B));
}

void D1B::bar() {
	this->$SonSuperIwithDefault::bar();
}

int32_t D1B::hashCode() {
	 return this->$SonSuperIwithDefault::hashCode();
}

bool D1B::equals(Object$* arg0) {
	 return this->$SonSuperIwithDefault::equals(arg0);
}

$Object* D1B::clone() {
	 return this->$SonSuperIwithDefault::clone();
}

$String* D1B::toString() {
	 return this->$SonSuperIwithDefault::toString();
}

void D1B::finalize() {
	this->$SonSuperIwithDefault::finalize();
}

void D1B::init$() {
}

void D1B::foo() {
}

void D1B::baz() {
}

void D1B::quux() {
}

D1B::D1B() {
}

$Class* D1B::load$($String* name, bool initialize) {
	$loadClass(D1B, name, initialize, &_D1B_ClassInfo_, allocate$D1B);
	return class$;
}

$Class* D1B::class$ = nullptr;