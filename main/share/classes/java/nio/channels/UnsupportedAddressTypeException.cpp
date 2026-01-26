#include <java/nio/channels/UnsupportedAddressTypeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _UnsupportedAddressTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedAddressTypeException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedAddressTypeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedAddressTypeException, init$, void)},
	{}
};

$ClassInfo _UnsupportedAddressTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.UnsupportedAddressTypeException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_UnsupportedAddressTypeException_FieldInfo_,
	_UnsupportedAddressTypeException_MethodInfo_
};

$Object* allocate$UnsupportedAddressTypeException($Class* clazz) {
	return $of($alloc(UnsupportedAddressTypeException));
}

void UnsupportedAddressTypeException::init$() {
	$IllegalArgumentException::init$();
}

UnsupportedAddressTypeException::UnsupportedAddressTypeException() {
}

UnsupportedAddressTypeException::UnsupportedAddressTypeException(const UnsupportedAddressTypeException& e) : $IllegalArgumentException(e) {
}

void UnsupportedAddressTypeException::throw$() {
	throw *this;
}

$Class* UnsupportedAddressTypeException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedAddressTypeException, name, initialize, &_UnsupportedAddressTypeException_ClassInfo_, allocate$UnsupportedAddressTypeException);
	return class$;
}

$Class* UnsupportedAddressTypeException::class$ = nullptr;

		} // channels
	} // nio
} // java