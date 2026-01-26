#include <Combo1.h>

#include <Base.h>
#include <jcpp.h>

using $Base = ::Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Combo1_Attribute_var$0[] = {
	{"declaringClass", 'c', "LCombo1;"},
	{}
};

$CompoundAttribute _Combo1_MethodAnnotations_wombat1[] = {
	{"LExpectedModel;", Combo1_Attribute_var$0},
	{}
};

$MethodInfo _Combo1_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(Combo1, init$, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wombat", "()V", nullptr, $PUBLIC, $virtualMethod(Combo1, wombat, void), nullptr, nullptr, _Combo1_MethodAnnotations_wombat1},
	{}
};

$ClassInfo _Combo1_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"Combo1",
	"Base",
	"SuperI",
	nullptr,
	_Combo1_MethodInfo_
};

$Object* allocate$Combo1($Class* clazz) {
	return $of($alloc(Combo1));
}

int32_t Combo1::hashCode() {
	 return this->$Base::hashCode();
}

bool Combo1::equals(Object$* arg0) {
	 return this->$Base::equals(arg0);
}

$Object* Combo1::clone() {
	 return this->$Base::clone();
}

$String* Combo1::toString() {
	 return this->$Base::toString();
}

void Combo1::finalize() {
	this->$Base::finalize();
}

void Combo1::init$() {
	$Base::init$();
}

void Combo1::wombat() {
}

Combo1::Combo1() {
}

$Class* Combo1::load$($String* name, bool initialize) {
	$loadClass(Combo1, name, initialize, &_Combo1_ClassInfo_, allocate$Combo1);
	return class$;
}

$Class* Combo1::class$ = nullptr;