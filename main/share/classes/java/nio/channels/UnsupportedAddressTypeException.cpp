#include <java/nio/channels/UnsupportedAddressTypeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedAddressTypeException::*)()>(&UnsupportedAddressTypeException::init$))},
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

UnsupportedAddressTypeException::UnsupportedAddressTypeException(const UnsupportedAddressTypeException& e) {
}

UnsupportedAddressTypeException UnsupportedAddressTypeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnsupportedAddressTypeException::throwWrapper$() {
	$pendingException(this);
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