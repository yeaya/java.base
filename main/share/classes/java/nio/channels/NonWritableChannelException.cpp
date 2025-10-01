#include <java/nio/channels/NonWritableChannelException.h>

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

$FieldInfo _NonWritableChannelException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NonWritableChannelException, serialVersionUID)},
	{}
};

$MethodInfo _NonWritableChannelException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NonWritableChannelException::*)()>(&NonWritableChannelException::init$))},
	{}
};

$ClassInfo _NonWritableChannelException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.NonWritableChannelException",
	"java.lang.IllegalStateException",
	nullptr,
	_NonWritableChannelException_FieldInfo_,
	_NonWritableChannelException_MethodInfo_
};

$Object* allocate$NonWritableChannelException($Class* clazz) {
	return $of($alloc(NonWritableChannelException));
}

void NonWritableChannelException::init$() {
	$IllegalStateException::init$();
}

NonWritableChannelException::NonWritableChannelException() {
}

NonWritableChannelException::NonWritableChannelException(const NonWritableChannelException& e) {
}

NonWritableChannelException NonWritableChannelException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NonWritableChannelException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NonWritableChannelException::load$($String* name, bool initialize) {
	$loadClass(NonWritableChannelException, name, initialize, &_NonWritableChannelException_ClassInfo_, allocate$NonWritableChannelException);
	return class$;
}

$Class* NonWritableChannelException::class$ = nullptr;

		} // channels
	} // nio
} // java