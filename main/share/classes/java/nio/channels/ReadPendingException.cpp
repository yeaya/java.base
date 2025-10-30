#include <java/nio/channels/ReadPendingException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _ReadPendingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadPendingException, serialVersionUID)},
	{}
};

$MethodInfo _ReadPendingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadPendingException::*)()>(&ReadPendingException::init$))},
	{}
};

$ClassInfo _ReadPendingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.ReadPendingException",
	"java.lang.IllegalStateException",
	nullptr,
	_ReadPendingException_FieldInfo_,
	_ReadPendingException_MethodInfo_
};

$Object* allocate$ReadPendingException($Class* clazz) {
	return $of($alloc(ReadPendingException));
}

void ReadPendingException::init$() {
	$IllegalStateException::init$();
}

ReadPendingException::ReadPendingException() {
}

ReadPendingException::ReadPendingException(const ReadPendingException& e) : $IllegalStateException(e) {
}

void ReadPendingException::throw$() {
	throw *this;
}

$Class* ReadPendingException::load$($String* name, bool initialize) {
	$loadClass(ReadPendingException, name, initialize, &_ReadPendingException_ClassInfo_, allocate$ReadPendingException);
	return class$;
}

$Class* ReadPendingException::class$ = nullptr;

		} // channels
	} // nio
} // java