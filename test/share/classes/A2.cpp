#include <A2.h>

#include <B2.h>
#include <jcpp.h>

using $B2 = ::B2;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _A2_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _A2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"A2",
	nullptr,
	"B2,C2",
	nullptr,
	_A2_MethodInfo_
};

$Object* allocate$A2($Class* clazz) {
	return $of($alloc(A2));
}

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
	$loadClass(A2, name, initialize, &_A2_ClassInfo_, allocate$A2);
	return class$;
}

$Class* A2::class$ = nullptr;