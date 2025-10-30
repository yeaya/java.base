#include <GrandchildSuperIwithDefault.h>

#include <SonSuperIwithDefault.h>
#include <jcpp.h>

using $DaughterSuperIwithDefault = ::DaughterSuperIwithDefault;
using $SonSuperIwithDefault = ::SonSuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute GrandchildSuperIwithDefault_Attribute_var$0[] = {
	{"modifiers", 'I', "1025"},
	{"declaringClass", 'c', "LGrandchildSuperIwithDefault;"},
	{}
};

$CompoundAttribute _GrandchildSuperIwithDefault_MethodAnnotations_wombat0[] = {
	{"LExpectedModel;", GrandchildSuperIwithDefault_Attribute_var$0},
	{}
};

$NamedAttribute GrandchildSuperIwithDefault_Attribute_var$1[] = {
	{"isDefault", 'Z', "true"},
	{"declaringClass", 'c', "LGrandchildSuperIwithDefault;"},
	{}
};

$CompoundAttribute _GrandchildSuperIwithDefault_MethodAnnotations_wombatD1[] = {
	{"LExpectedModel;", GrandchildSuperIwithDefault_Attribute_var$1},
	{}
};

$MethodInfo _GrandchildSuperIwithDefault_MethodInfo_[] = {
	{"*bar", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wombat", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _GrandchildSuperIwithDefault_MethodAnnotations_wombat0},
	{"wombatD", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _GrandchildSuperIwithDefault_MethodAnnotations_wombatD1},
	{}
};

$ClassInfo _GrandchildSuperIwithDefault_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"GrandchildSuperIwithDefault",
	nullptr,
	"SonSuperIwithDefault,DaughterSuperIwithDefault",
	nullptr,
	_GrandchildSuperIwithDefault_MethodInfo_
};

$Object* allocate$GrandchildSuperIwithDefault($Class* clazz) {
	return $of($alloc(GrandchildSuperIwithDefault));
}

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
}

$Class* GrandchildSuperIwithDefault::load$($String* name, bool initialize) {
	$loadClass(GrandchildSuperIwithDefault, name, initialize, &_GrandchildSuperIwithDefault_ClassInfo_, allocate$GrandchildSuperIwithDefault);
	return class$;
}

$Class* GrandchildSuperIwithDefault::class$ = nullptr;