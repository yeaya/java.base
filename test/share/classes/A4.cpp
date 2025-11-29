#include <A4.h>

#include <B4.h>
#include <jcpp.h>

using $B4 = ::B4;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _A4_MethodInfo_[] = {
	{"*m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _A4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"A4",
	nullptr,
	"B4,C4",
	nullptr,
	_A4_MethodInfo_
};

$Object* allocate$A4($Class* clazz) {
	return $of($alloc(A4));
}

int32_t A4::hashCode() {
	 return this->$B4::hashCode();
}

bool A4::equals(Object$* arg0) {
	 return this->$B4::equals(arg0);
}

$Object* A4::clone() {
	 return this->$B4::clone();
}

$String* A4::toString() {
	 return this->$B4::toString();
}

void A4::finalize() {
	this->$B4::finalize();
}

$Class* A4::load$($String* name, bool initialize) {
	$loadClass(A4, name, initialize, &_A4_ClassInfo_, allocate$A4);
	return class$;
}

$Class* A4::class$ = nullptr;