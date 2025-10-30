#include <java/nio/ReadOnlyBufferException.h>

#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace nio {

$FieldInfo _ReadOnlyBufferException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadOnlyBufferException, serialVersionUID)},
	{}
};

$MethodInfo _ReadOnlyBufferException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadOnlyBufferException::*)()>(&ReadOnlyBufferException::init$))},
	{}
};

$ClassInfo _ReadOnlyBufferException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.ReadOnlyBufferException",
	"java.lang.UnsupportedOperationException",
	nullptr,
	_ReadOnlyBufferException_FieldInfo_,
	_ReadOnlyBufferException_MethodInfo_
};

$Object* allocate$ReadOnlyBufferException($Class* clazz) {
	return $of($alloc(ReadOnlyBufferException));
}

void ReadOnlyBufferException::init$() {
	$UnsupportedOperationException::init$();
}

ReadOnlyBufferException::ReadOnlyBufferException() {
}

ReadOnlyBufferException::ReadOnlyBufferException(const ReadOnlyBufferException& e) : $UnsupportedOperationException(e) {
}

void ReadOnlyBufferException::throw$() {
	throw *this;
}

$Class* ReadOnlyBufferException::load$($String* name, bool initialize) {
	$loadClass(ReadOnlyBufferException, name, initialize, &_ReadOnlyBufferException_ClassInfo_, allocate$ReadOnlyBufferException);
	return class$;
}

$Class* ReadOnlyBufferException::class$ = nullptr;

	} // nio
} // java