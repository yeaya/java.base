#include <java/nio/channels/OverlappingFileLockException.h>

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

$FieldInfo _OverlappingFileLockException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OverlappingFileLockException, serialVersionUID)},
	{}
};

$MethodInfo _OverlappingFileLockException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OverlappingFileLockException::*)()>(&OverlappingFileLockException::init$))},
	{}
};

$ClassInfo _OverlappingFileLockException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.OverlappingFileLockException",
	"java.lang.IllegalStateException",
	nullptr,
	_OverlappingFileLockException_FieldInfo_,
	_OverlappingFileLockException_MethodInfo_
};

$Object* allocate$OverlappingFileLockException($Class* clazz) {
	return $of($alloc(OverlappingFileLockException));
}

void OverlappingFileLockException::init$() {
	$IllegalStateException::init$();
}

OverlappingFileLockException::OverlappingFileLockException() {
}

OverlappingFileLockException::OverlappingFileLockException(const OverlappingFileLockException& e) {
}

OverlappingFileLockException OverlappingFileLockException::wrapper$() {
	$pendingException(this);
	return *this;
}

void OverlappingFileLockException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* OverlappingFileLockException::load$($String* name, bool initialize) {
	$loadClass(OverlappingFileLockException, name, initialize, &_OverlappingFileLockException_ClassInfo_, allocate$OverlappingFileLockException);
	return class$;
}

$Class* OverlappingFileLockException::class$ = nullptr;

		} // channels
	} // nio
} // java