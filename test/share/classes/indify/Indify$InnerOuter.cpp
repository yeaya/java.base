#include <indify/Indify$InnerOuter.h>

#include <indify/Indify$Outer.h>
#include <indify/Indify.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Inner = ::indify::Indify$Inner;
using $Indify$Outer = ::indify::Indify$Outer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$FieldInfo _Indify$InnerOuter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Indify$InnerOuter, $assertionsDisabled)},
	{"outer", "Lindify/Indify$Outer;", nullptr, $PUBLIC, $field(Indify$InnerOuter, outer$)},
	{}
};

$MethodInfo _Indify$InnerOuter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Indify$InnerOuter::*)()>(&Indify$InnerOuter::init$))},
	{"linkOuter", "(Lindify/Indify$Outer;)V", nullptr, $PUBLIC},
	{"outer", "()Lindify/Indify$Outer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Indify$InnerOuter_InnerClassesInfo_[] = {
	{"indify.Indify$InnerOuter", "indify.Indify", "InnerOuter", $PUBLIC | $STATIC | $ABSTRACT},
	{"indify.Indify$Outer", "indify.Indify", "Outer", $PUBLIC | $STATIC | $ABSTRACT},
	{"indify.Indify$Inner", "indify.Indify", "Inner", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Indify$InnerOuter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"indify.Indify$InnerOuter",
	"indify.Indify$Outer",
	"indify.Indify$Inner",
	_Indify$InnerOuter_FieldInfo_,
	_Indify$InnerOuter_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$InnerOuter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$InnerOuter($Class* clazz) {
	return $of($alloc(Indify$InnerOuter));
}

int32_t Indify$InnerOuter::hashCode() {
	 return this->$Indify$Outer::hashCode();
}

bool Indify$InnerOuter::equals(Object$* arg0) {
	 return this->$Indify$Outer::equals(arg0);
}

$Object* Indify$InnerOuter::clone() {
	 return this->$Indify$Outer::clone();
}

$String* Indify$InnerOuter::toString() {
	 return this->$Indify$Outer::toString();
}

void Indify$InnerOuter::finalize() {
	this->$Indify$Outer::finalize();
}

bool Indify$InnerOuter::$assertionsDisabled = false;

void Indify$InnerOuter::init$() {
	$Indify$Outer::init$();
}

$Indify$Outer* Indify$InnerOuter::outer() {
	return this->outer$;
}

void Indify$InnerOuter::linkOuter($Indify$Outer* o) {
	if (!Indify$InnerOuter::$assertionsDisabled && !(this->outer$ == nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, outer$, o);
}

void clinit$Indify$InnerOuter($Class* class$) {
	$load($Indify);
	Indify$InnerOuter::$assertionsDisabled = !$Indify::class$->desiredAssertionStatus();
}

Indify$InnerOuter::Indify$InnerOuter() {
}

$Class* Indify$InnerOuter::load$($String* name, bool initialize) {
	$loadClass(Indify$InnerOuter, name, initialize, &_Indify$InnerOuter_ClassInfo_, clinit$Indify$InnerOuter, allocate$Indify$InnerOuter);
	return class$;
}

$Class* Indify$InnerOuter::class$ = nullptr;

} // indify