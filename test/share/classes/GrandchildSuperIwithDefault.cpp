#include <GrandchildSuperIwithDefault.h>
#include <SonSuperIwithDefault.h>
#include <jcpp.h>

using $SonSuperIwithDefault = ::SonSuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void GrandchildSuperIwithDefault::bar() {
	this->$SonSuperIwithDefault::bar();
}

int32_t GrandchildSuperIwithDefault::hashCode() {
	 return this->$SonSuperIwithDefault::hashCode();
}

bool GrandchildSuperIwithDefault::equals(Object$* arg0) {
	 return this->$SonSuperIwithDefault::equals(arg0);
}

$Object* GrandchildSuperIwithDefault::clone() {
	 return this->$SonSuperIwithDefault::clone();
}

$String* GrandchildSuperIwithDefault::toString() {
	 return this->$SonSuperIwithDefault::toString();
}

void GrandchildSuperIwithDefault::finalize() {
	this->$SonSuperIwithDefault::finalize();
}

void GrandchildSuperIwithDefault::wombatD() {
	;
}

$Class* GrandchildSuperIwithDefault::load$($String* name, bool initialize) {
	$NamedAttribute wombatmethodAnnotations$$$namedAttribute[] = {
		{"modifiers", 'I', "1025"},
		{"declaringClass", 'c', "LGrandchildSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute wombatmethodAnnotations$$[] = {
		{"LExpectedModel;", wombatmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute wombatDmethodAnnotations$$$namedAttribute[] = {
		{"isDefault", 'Z', "true"},
		{"declaringClass", 'c', "LGrandchildSuperIwithDefault;"},
		{}
	};
	$CompoundAttribute wombatDmethodAnnotations$$[] = {
		{"LExpectedModel;", wombatDmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*bar", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"wombat", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GrandchildSuperIwithDefault, wombat, void), nullptr, nullptr, wombatmethodAnnotations$$},
		{"wombatD", "()V", nullptr, $PUBLIC, $virtualMethod(GrandchildSuperIwithDefault, wombatD, void), nullptr, nullptr, wombatDmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"GrandchildSuperIwithDefault",
		nullptr,
		"SonSuperIwithDefault,DaughterSuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(GrandchildSuperIwithDefault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GrandchildSuperIwithDefault));
	});
	return class$;
}

$Class* GrandchildSuperIwithDefault::class$ = nullptr;