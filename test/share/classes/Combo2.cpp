#include <Combo2.h>
#include <Base.h>
#include <jcpp.h>

using $Base = ::Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

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
	$NamedAttribute wombatmethodAnnotations$$$namedAttribute[] = {
		{"declaringClass", 'c', "LCombo2;"},
		{}
	};
	$CompoundAttribute wombatmethodAnnotations$$[] = {
		{"LExpectedModel;", wombatmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(Combo2, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"wombat", "()V", nullptr, $PUBLIC, $virtualMethod(Combo2, wombat, void), nullptr, nullptr, wombatmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"Combo2",
		"Base",
		"SuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(Combo2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Combo2));
	});
	return class$;
}

$Class* Combo2::class$ = nullptr;