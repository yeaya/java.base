#include <java/nio/channels/FileLockInterruptionException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _FileLockInterruptionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileLockInterruptionException, serialVersionUID)},
	{}
};

$MethodInfo _FileLockInterruptionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileLockInterruptionException::*)()>(&FileLockInterruptionException::init$))},
	{}
};

$ClassInfo _FileLockInterruptionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.channels.FileLockInterruptionException",
	"java.io.IOException",
	nullptr,
	_FileLockInterruptionException_FieldInfo_,
	_FileLockInterruptionException_MethodInfo_
};

$Object* allocate$FileLockInterruptionException($Class* clazz) {
	return $of($alloc(FileLockInterruptionException));
}

void FileLockInterruptionException::init$() {
	$IOException::init$();
}

FileLockInterruptionException::FileLockInterruptionException() {
}

FileLockInterruptionException::FileLockInterruptionException(const FileLockInterruptionException& e) {
}

FileLockInterruptionException FileLockInterruptionException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FileLockInterruptionException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FileLockInterruptionException::load$($String* name, bool initialize) {
	$loadClass(FileLockInterruptionException, name, initialize, &_FileLockInterruptionException_ClassInfo_, allocate$FileLockInterruptionException);
	return class$;
}

$Class* FileLockInterruptionException::class$ = nullptr;

		} // channels
	} // nio
} // java