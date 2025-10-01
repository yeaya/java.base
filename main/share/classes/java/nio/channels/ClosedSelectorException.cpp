#include <java/nio/channels/ClosedSelectorException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _ClosedSelectorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClosedSelectorException, serialVersionUID)},
	{}
};

$MethodInfo _ClosedSelectorException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedSelectorException::*)()>(&ClosedSelectorException::init$))},
	{}
};

$ClassInfo _ClosedSelectorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.ClosedSelectorException",
	"java.lang.IllegalStateException",
	nullptr,
	_ClosedSelectorException_FieldInfo_,
	_ClosedSelectorException_MethodInfo_
};

$Object* allocate$ClosedSelectorException($Class* clazz) {
	return $of($alloc(ClosedSelectorException));
}

void ClosedSelectorException::init$() {
	$IllegalStateException::init$();
}

ClosedSelectorException::ClosedSelectorException() {
}

ClosedSelectorException::ClosedSelectorException(const ClosedSelectorException& e) {
}

ClosedSelectorException ClosedSelectorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClosedSelectorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClosedSelectorException::load$($String* name, bool initialize) {
	$loadClass(ClosedSelectorException, name, initialize, &_ClosedSelectorException_ClassInfo_, allocate$ClosedSelectorException);
	return class$;
}

$Class* ClosedSelectorException::class$ = nullptr;

		} // channels
	} // nio
} // java