#include <indify/Indify$InnerOuter.h>
#include <indify/Indify$Outer.h>
#include <indify/Indify.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Outer = ::indify::Indify$Outer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

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

void Indify$InnerOuter::clinit$($Class* clazz) {
	$load($Indify);
	Indify$InnerOuter::$assertionsDisabled = !$Indify::class$->desiredAssertionStatus();
}

Indify$InnerOuter::Indify$InnerOuter() {
}

$Class* Indify$InnerOuter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Indify$InnerOuter, $assertionsDisabled)},
		{"outer", "Lindify/Indify$Outer;", nullptr, $PUBLIC, $field(Indify$InnerOuter, outer$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Indify$InnerOuter, init$, void)},
		{"linkOuter", "(Lindify/Indify$Outer;)V", nullptr, $PUBLIC, $virtualMethod(Indify$InnerOuter, linkOuter, void, $Indify$Outer*)},
		{"outer", "()Lindify/Indify$Outer;", nullptr, $PUBLIC, $virtualMethod(Indify$InnerOuter, outer, $Indify$Outer*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$InnerOuter", "indify.Indify", "InnerOuter", $PUBLIC | $STATIC | $ABSTRACT},
		{"indify.Indify$Outer", "indify.Indify", "Outer", $PUBLIC | $STATIC | $ABSTRACT},
		{"indify.Indify$Inner", "indify.Indify", "Inner", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"indify.Indify$InnerOuter",
		"indify.Indify$Outer",
		"indify.Indify$Inner",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"indify.Indify"
	};
	$loadClass(Indify$InnerOuter, name, initialize, &classInfo$$, Indify$InnerOuter::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Indify$InnerOuter));
	});
	return class$;
}

$Class* Indify$InnerOuter::class$ = nullptr;

} // indify