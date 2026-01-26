#include <sun/nio/fs/WindowsException.h>

#include <java/io/IOException.h>
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
	{"<init>", "(I)V", nullptr, 0, $method(WindowsException, init$, void, int32_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(WindowsException, init$, void, $String*)},
	{"asIOException", "(Lsun/nio/fs/WindowsPath;)Ljava/io/IOException;", nullptr, 0, $virtualMethod(WindowsException, asIOException, $IOException*, $WindowsPath*)},
	{"errorString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(WindowsException, errorString, $String*)},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(WindowsException, fillInStackTrace, $Throwable*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsException, getMessage, $String*)},
	{"lastError", "()I", nullptr, 0, $virtualMethod(WindowsException, lastError, int32_t)},
	{"rethrowAsIOException", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(WindowsException, rethrowAsIOException, void, $String*), "java.io.IOException"},
	{"rethrowAsIOException", "(Lsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;)V", nullptr, 0, $virtualMethod(WindowsException, rethrowAsIOException, void, $WindowsPath*, $WindowsPath*), "java.io.IOException"},
	{"rethrowAsIOException", "(Lsun/nio/fs/WindowsPath;)V", nullptr, 0, $virtualMethod(WindowsException, rethrowAsIOException, void, $WindowsPath*), "java.io.IOException"},
	{"translateToIOException", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/IOException;", nullptr, $PRIVATE, $method(WindowsException, translateToIOException, $IOException*, $String*, $String*)},
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

WindowsException::WindowsException(const WindowsException& e) : $Exception(e) {
}

void WindowsException::throw$() {
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