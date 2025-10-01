#include <java/nio/channels/UnresolvedAddressException.h>

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

$FieldInfo _UnresolvedAddressException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnresolvedAddressException, serialVersionUID)},
	{}
};

$MethodInfo _UnresolvedAddressException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnresolvedAddressException::*)()>(&UnresolvedAddressException::init$))},
	{}
};

$ClassInfo _UnresolvedAddressException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.UnresolvedAddressException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_UnresolvedAddressException_FieldInfo_,
	_UnresolvedAddressException_MethodInfo_
};

$Object* allocate$UnresolvedAddressException($Class* clazz) {
	return $of($alloc(UnresolvedAddressException));
}

void UnresolvedAddressException::init$() {
	$IllegalArgumentException::init$();
}

UnresolvedAddressException::UnresolvedAddressException() {
}

UnresolvedAddressException::UnresolvedAddressException(const UnresolvedAddressException& e) {
}

UnresolvedAddressException UnresolvedAddressException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnresolvedAddressException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnresolvedAddressException::load$($String* name, bool initialize) {
	$loadClass(UnresolvedAddressException, name, initialize, &_UnresolvedAddressException_ClassInfo_, allocate$UnresolvedAddressException);
	return class$;
}

$Class* UnresolvedAddressException::class$ = nullptr;

		} // channels
	} // nio
} // java