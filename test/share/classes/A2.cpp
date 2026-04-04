#include <A2.h>
#include <B2.h>
#include <jcpp.h>

using $B2 = ::B2;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t A2::hashCode() {
	 return this->$B2::hashCode();
}

bool A2::equals(Object$* arg0) {
	 return this->$B2::equals(arg0);
}

$Object* A2::clone() {
	 return this->$B2::clone();
}

$String* A2::toString() {
	 return this->$B2::toString();
}

void A2::finalize() {
	this->$B2::finalize();
}

$Class* A2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"A2",
		nullptr,
		"B2,C2",
		nullptr,
		methodInfos$$
	};
	$loadClass(A2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(A2));
	});
	return class$;
}

$Class* A2::class$ = nullptr;