#include <java/nio/file/AtomicMoveNotSupportedException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _AtomicMoveNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AtomicMoveNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _AtomicMoveNotSupportedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AtomicMoveNotSupportedException::*)($String*,$String*,$String*)>(&AtomicMoveNotSupportedException::init$))},
	{}
};

$ClassInfo _AtomicMoveNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.AtomicMoveNotSupportedException",
	"java.nio.file.FileSystemException",
	nullptr,
	_AtomicMoveNotSupportedException_FieldInfo_,
	_AtomicMoveNotSupportedException_MethodInfo_
};

$Object* allocate$AtomicMoveNotSupportedException($Class* clazz) {
	return $of($alloc(AtomicMoveNotSupportedException));
}

void AtomicMoveNotSupportedException::init$($String* source, $String* target, $String* reason) {
	$FileSystemException::init$(source, target, reason);
}

AtomicMoveNotSupportedException::AtomicMoveNotSupportedException() {
}

AtomicMoveNotSupportedException::AtomicMoveNotSupportedException(const AtomicMoveNotSupportedException& e) {
}

AtomicMoveNotSupportedException AtomicMoveNotSupportedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AtomicMoveNotSupportedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AtomicMoveNotSupportedException::load$($String* name, bool initialize) {
	$loadClass(AtomicMoveNotSupportedException, name, initialize, &_AtomicMoveNotSupportedException_ClassInfo_, allocate$AtomicMoveNotSupportedException);
	return class$;
}

$Class* AtomicMoveNotSupportedException::class$ = nullptr;

		} // file
	} // nio
} // java