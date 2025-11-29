#include <Combo2.h>

#include <Base.h>
#include <jcpp.h>

using $Base = ::Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Combo2_Attribute_var$0[] = {
	{"declaringClass", 'c', "LCombo2;"},
	{}
};

$CompoundAttribute _Combo2_MethodAnnotations_wombat1[] = {
	{"LExpectedModel;", Combo2_Attribute_var$0},
	{}
};

$MethodInfo _Combo2_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Combo2::*)()>(&Combo2::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wombat", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Combo2_MethodAnnotations_wombat1},
	{}
};

$ClassInfo _Combo2_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Combo2",
	"Base",
	"SuperIwithDefault",
	nullptr,
	_Combo2_MethodInfo_
};

$Object* allocate$Combo2($Class* clazz) {
	return $of($alloc(Combo2));
}

int32_t Combo2::hashCode() {
	 return this->$Base::hashCode();
}

bool Combo2::equals(Object$* arg0) {
	 return this->$Base::equals(arg0);
}

$Object* Combo2::clone() {
	 return this->$Base::clone();
}

$String* Combo2::toString() {
	 return this->$Base::toString();
}

void Combo2::finalize() {
	this->$Base::finalize();
}

void Combo2::init$() {
	$Base::init$();
}

void Combo2::wombat() {
}

Combo2::Combo2() {
}

$Class* Combo2::load$($String* name, bool initialize) {
	$loadClass(Combo2, name, initialize, &_Combo2_ClassInfo_, allocate$Combo2);
	return class$;
}

$Class* Combo2::class$ = nullptr;