#include <A3.h>

#include <B3.h>
#include <jcpp.h>

using $B3 = ::B3;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _A3_MethodInfo_[] = {
	{"*m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _A3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"A3",
	nullptr,
	"B3,C3",
	nullptr,
	_A3_MethodInfo_
};

$Object* allocate$A3($Class* clazz) {
	return $of($alloc(A3));
}

int32_t A3::hashCode() {
	 return this->$B3::hashCode();
}

bool A3::equals(Object$* arg0) {
	 return this->$B3::equals(arg0);
}

$Object* A3::clone() {
	 return this->$B3::clone();
}

$String* A3::toString() {
	 return this->$B3::toString();
}

void A3::finalize() {
	this->$B3::finalize();
}

$Class* A3::load$($String* name, bool initialize) {
	$loadClass(A3, name, initialize, &_A3_ClassInfo_, allocate$A3);
	return class$;
}

$Class* A3::class$ = nullptr;