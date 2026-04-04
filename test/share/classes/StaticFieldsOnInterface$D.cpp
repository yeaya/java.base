#include <StaticFieldsOnInterface$D.h>
#include <StaticFieldsOnInterface$B.h>
#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $StaticFieldsOnInterface$B = ::StaticFieldsOnInterface$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t StaticFieldsOnInterface$D::hashCode() {
	 return this->$StaticFieldsOnInterface$B::hashCode();
}

bool StaticFieldsOnInterface$D::equals(Object$* arg0) {
	 return this->$StaticFieldsOnInterface$B::equals(arg0);
}

$Object* StaticFieldsOnInterface$D::clone() {
	 return this->$StaticFieldsOnInterface$B::clone();
}

$String* StaticFieldsOnInterface$D::toString() {
	 return this->$StaticFieldsOnInterface$B::toString();
}

void StaticFieldsOnInterface$D::finalize() {
	this->$StaticFieldsOnInterface$B::finalize();
}

$Class* StaticFieldsOnInterface$D::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticFieldsOnInterface$D", "StaticFieldsOnInterface", "D", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticFieldsOnInterface$B", "StaticFieldsOnInterface", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"StaticFieldsOnInterface$C", "StaticFieldsOnInterface", "C", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticFieldsOnInterface$D",
		nullptr,
		"StaticFieldsOnInterface$B,StaticFieldsOnInterface$C",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticFieldsOnInterface"
	};
	$loadClass(StaticFieldsOnInterface$D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StaticFieldsOnInterface$D));
	});
	return class$;
}

$Class* StaticFieldsOnInterface$D::class$ = nullptr;