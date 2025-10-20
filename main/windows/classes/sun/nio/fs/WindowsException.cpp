#include <sun/nio/fs/WindowsException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/AccessDeniedException.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/NoSuchFileException.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessDeniedException = ::java::nio::file::AccessDeniedException;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WindowsException, serialVersionUID)},
	{"lastError", "I", nullptr, $PRIVATE, $field(WindowsException, lastError$)},
	{"msg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsException, msg)},
	{}
};

$MethodInfo _WindowsException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(WindowsException::*)(int32_t)>(&WindowsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsException::*)($String*)>(&WindowsException::init$))},
	{"asIOException", "(Lsun/nio/fs/WindowsPath;)Ljava/io/IOException;", nullptr, 0},
	{"errorString", "()Ljava/lang/String;", nullptr, 0},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"lastError", "()I", nullptr, 0},
	{"rethrowAsIOException", "(Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"rethrowAsIOException", "(Lsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"rethrowAsIOException", "(Lsun/nio/fs/WindowsPath;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"translateToIOException", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/IOException;", nullptr, $PRIVATE, $method(static_cast<$IOException*(WindowsException::*)($String*,$String*)>(&WindowsException::translateToIOException))},
	{}
};

$ClassInfo _WindowsException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsException",
	"java.lang.Exception",
	nullptr,
	_WindowsException_FieldInfo_,
	_WindowsException_MethodInfo_
};

$Object* allocate$WindowsException($Class* clazz) {
	return $of($alloc(WindowsException));
}

void WindowsException::init$(int32_t lastError) {
	$Exception::init$();
	this->lastError$ = lastError;
	$set(this, msg, nullptr);
}

void WindowsException::init$($String* msg) {
	$Exception::init$();
	this->lastError$ = 0;
	$set(this, msg, msg);
}

int32_t WindowsException::lastError() {
	return this->lastError$;
}

$String* WindowsException::errorString() {
	if (this->msg == nullptr) {
		$set(this, msg, $WindowsNativeDispatcher::FormatMessage(this->lastError$));
		if (this->msg == nullptr) {
			$set(this, msg, $str({"Unknown error: 0x"_s, $($Integer::toHexString(this->lastError$))}));
		}
	}
	return this->msg;
}

$String* WindowsException::getMessage() {
	return errorString();
}

$Throwable* WindowsException::fillInStackTrace() {
	return this;
}

$IOException* WindowsException::translateToIOException($String* file, $String* other) {
	$useLocalCurrentObjectStackCache();
	if (lastError() == 0) {
		return $new($IOException, $(errorString()));
	}
	bool var$0 = lastError() == 2;
	if (var$0 || lastError() == 3) {
		return $new($NoSuchFileException, file, other, nullptr);
	}
	bool var$1 = lastError() == 80;
	if (var$1 || lastError() == 183) {
		return $new($FileAlreadyExistsException, file, other, nullptr);
	}
	if (lastError() == 5) {
		return $new($AccessDeniedException, file, other, nullptr);
	}
	return $new($FileSystemException, file, other, $(errorString()));
}

void WindowsException::rethrowAsIOException($String* file) {
	$var($IOException, x, translateToIOException(file, nullptr));
	$throw(x);
}

void WindowsException::rethrowAsIOException($WindowsPath* file, $WindowsPath* other) {
	$useLocalCurrentObjectStackCache();
	$var($String, a, (file == nullptr) ? ($String*)nullptr : $nc(file)->getPathForExceptionMessage());
	$var($String, b, (other == nullptr) ? ($String*)nullptr : $nc(other)->getPathForExceptionMessage());
	$var($IOException, x, translateToIOException(a, b));
	$throw(x);
}

void WindowsException::rethrowAsIOException($WindowsPath* file) {
	rethrowAsIOException(file, nullptr);
}

$IOException* WindowsException::asIOException($WindowsPath* file) {
	return translateToIOException($($nc(file)->getPathForExceptionMessage()), nullptr);
}

WindowsException::WindowsException() {
}

WindowsException::WindowsException(const WindowsException& e) {
}

WindowsException WindowsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WindowsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WindowsException::load$($String* name, bool initialize) {
	$loadClass(WindowsException, name, initialize, &_WindowsException_ClassInfo_, allocate$WindowsException);
	return class$;
}

$Class* WindowsException::class$ = nullptr;

		} // fs
	} // nio
} // sun