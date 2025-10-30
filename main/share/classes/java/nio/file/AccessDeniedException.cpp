#include <java/nio/file/AccessDeniedException.h>

#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _AccessDeniedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccessDeniedException, serialVersionUID)},
	{}
};

$MethodInfo _AccessDeniedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessDeniedException::*)($String*)>(&AccessDeniedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessDeniedException::*)($String*,$String*,$String*)>(&AccessDeniedException::init$))},
	{}
};

$ClassInfo _AccessDeniedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.AccessDeniedException",
	"java.nio.file.FileSystemException",
	nullptr,
	_AccessDeniedException_FieldInfo_,
	_AccessDeniedException_MethodInfo_
};

$Object* allocate$AccessDeniedException($Class* clazz) {
	return $of($alloc(AccessDeniedException));
}

void AccessDeniedException::init$($String* file) {
	$FileSystemException::init$(file);
}

void AccessDeniedException::init$($String* file, $String* other, $String* reason) {
	$FileSystemException::init$(file, other, reason);
}

AccessDeniedException::AccessDeniedException() {
}

AccessDeniedException::AccessDeniedException(const AccessDeniedException& e) : $FileSystemException(e) {
}

void AccessDeniedException::throw$() {
	throw *this;
}

$Class* AccessDeniedException::load$($String* name, bool initialize) {
	$loadClass(AccessDeniedException, name, initialize, &_AccessDeniedException_ClassInfo_, allocate$AccessDeniedException);
	return class$;
}

$Class* AccessDeniedException::class$ = nullptr;

		} // file
	} // nio
} // java