#include <A1.h>
#include <B1.h>
#include <jcpp.h>

using $B1 = ::B1;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t A1::hashCode() {
	 return this->$B1::hashCode();
}

bool A1::equals(Object$* arg0) {
	 return this->$B1::equals(arg0);
}

$Object* A1::clone() {
	 return this->$B1::clone();
}

$String* A1::toString() {
	 return this->$B1::toString();
}

void A1::finalize() {
	this->$B1::finalize();
}

$Class* A1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*m", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"A1",
		nullptr,
		"B1,C1",
		nullptr,
		methodInfos$$
	};
	$loadClass(A1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(A1));
	});
	return class$;
}

$Class* A1::class$ = nullptr;