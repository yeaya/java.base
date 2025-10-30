#include <java/nio/channels/NonReadableChannelException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _NonReadableChannelException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NonReadableChannelException, serialVersionUID)},
	{}
};

$MethodInfo _NonReadableChannelException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NonReadableChannelException::*)()>(&NonReadableChannelException::init$))},
	{}
};

$ClassInfo _NonReadableChannelException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.NonReadableChannelException",
	"java.lang.IllegalStateException",
	nullptr,
	_NonReadableChannelException_FieldInfo_,
	_NonReadableChannelException_MethodInfo_
};

$Object* allocate$NonReadableChannelException($Class* clazz) {
	return $of($alloc(NonReadableChannelException));
}

void NonReadableChannelException::init$() {
	$IllegalStateException::init$();
}

NonReadableChannelException::NonReadableChannelException() {
}

NonReadableChannelException::NonReadableChannelException(const NonReadableChannelException& e) : $IllegalStateException(e) {
}

void NonReadableChannelException::throw$() {
	throw *this;
}

$Class* NonReadableChannelException::load$($String* name, bool initialize) {
	$loadClass(NonReadableChannelException, name, initialize, &_NonReadableChannelException_ClassInfo_, allocate$NonReadableChannelException);
	return class$;
}

$Class* NonReadableChannelException::class$ = nullptr;

		} // channels
	} // nio
} // java