#include <java/nio/file/NotLinkException.h>

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

$FieldInfo _NotLinkException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NotLinkException, serialVersionUID)},
	{}
};

$MethodInfo _NotLinkException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotLinkException::*)($String*)>(&NotLinkException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotLinkException::*)($String*,$String*,$String*)>(&NotLinkException::init$))},
	{}
};

$ClassInfo _NotLinkException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.NotLinkException",
	"java.nio.file.FileSystemException",
	nullptr,
	_NotLinkException_FieldInfo_,
	_NotLinkException_MethodInfo_
};

$Object* allocate$NotLinkException($Class* clazz) {
	return $of($alloc(NotLinkException));
}

void NotLinkException::init$($String* file) {
	$FileSystemException::init$(file);
}

void NotLinkException::init$($String* file, $String* other, $String* reason) {
	$FileSystemException::init$(file, other, reason);
}

NotLinkException::NotLinkException() {
}

NotLinkException::NotLinkException(const NotLinkException& e) {
}

NotLinkException NotLinkException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NotLinkException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NotLinkException::load$($String* name, bool initialize) {
	$loadClass(NotLinkException, name, initialize, &_NotLinkException_ClassInfo_, allocate$NotLinkException);
	return class$;
}

$Class* NotLinkException::class$ = nullptr;

		} // file
	} // nio
} // java