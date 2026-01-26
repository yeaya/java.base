#include <sun/nio/fs/UnixException.h>

#include <java/io/IOException.h>
#include <java/nio/file/AccessDeniedException.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/NoSuchFileException.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef EACCES
#undef EEXIST
#undef ELOOP
#undef ENOENT

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessDeniedException = ::java::nio::file::AccessDeniedException;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnixException, serialVersionUID)},
	{"errno", "I", nullptr, $PRIVATE, $field(UnixException, errno$$)},
	{"msg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnixException, msg)},
	{}
};

$MethodInfo _UnixException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(UnixException, init$, void, int32_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(UnixException, init$, void, $String*)},
	{"asIOException", "(Lsun/nio/fs/UnixPath;)Ljava/io/IOException;", nullptr, 0, $virtualMethod(UnixException, asIOException, $IOException*, $UnixPath*)},
	{"errno", "()I", nullptr, 0, $virtualMethod(UnixException, errno$, int32_t)},
	{"errorString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(UnixException, errorString, $String*)},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(UnixException, fillInStackTrace, $Throwable*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixException, getMessage, $String*)},
	{"rethrowAsIOException", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V", nullptr, 0, $virtualMethod(UnixException, rethrowAsIOException, void, $UnixPath*, $UnixPath*), "java.io.IOException"},
	{"rethrowAsIOException", "(Lsun/nio/fs/UnixPath;)V", nullptr, 0, $virtualMethod(UnixException, rethrowAsIOException, void, $UnixPath*), "java.io.IOException"},
	{"setError", "(I)V", nullptr, 0, $virtualMethod(UnixException, setError, void, int32_t)},
	{"translateToIOException", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/IOException;", nullptr, $PRIVATE, $method(UnixException, translateToIOException, $IOException*, $String*, $String*)},
	{}
};

$ClassInfo _UnixException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixException",
	"java.lang.Exception",
	nullptr,
	_UnixException_FieldInfo_,
	_UnixException_MethodInfo_
};

$Object* allocate$UnixException($Class* clazz) {
	return $of($alloc(UnixException));
}

void UnixException::init$(int32_t errno$) {
	$Exception::init$();
	this->errno$$ = errno$;
	$set(this, msg, nullptr);
}

void UnixException::init$($String* msg) {
	$Exception::init$();
	this->errno$$ = 0;
	$set(this, msg, msg);
}

int32_t UnixException::errno$() {
	return this->errno$$;
}

void UnixException::setError(int32_t errno$) {
	this->errno$$ = errno$;
	$set(this, msg, nullptr);
}

$String* UnixException::errorString() {
	if (this->msg != nullptr) {
		return this->msg;
	} else {
		return $Util::toString($($UnixNativeDispatcher::strerror(errno$())));
	}
}

$String* UnixException::getMessage() {
	return errorString();
}

$Throwable* UnixException::fillInStackTrace() {
	return this;
}

$IOException* UnixException::translateToIOException($String* file, $String* other) {
	$useLocalCurrentObjectStackCache();
	if (this->msg != nullptr) {
		return $new($IOException, this->msg);
	}
	$init($UnixConstants);
	if (errno$() == $UnixConstants::EACCES) {
		return $new($AccessDeniedException, file, other, nullptr);
	}
	if (errno$() == $UnixConstants::ENOENT) {
		return $new($NoSuchFileException, file, other, nullptr);
	}
	if (errno$() == $UnixConstants::EEXIST) {
		return $new($FileAlreadyExistsException, file, other, nullptr);
	}
	if (errno$() == $UnixConstants::ELOOP) {
		return $new($FileSystemException, file, other, $$str({$(errorString()), " or unable to access attributes of symbolic link"_s}));
	}
	return $new($FileSystemException, file, other, $(errorString()));
}

void UnixException::rethrowAsIOException($UnixPath* file, $UnixPath* other) {
	$useLocalCurrentObjectStackCache();
	$var($String, a, (file == nullptr) ? ($String*)nullptr : $nc(file)->getPathForExceptionMessage());
	$var($String, b, (other == nullptr) ? ($String*)nullptr : $nc(other)->getPathForExceptionMessage());
	$var($IOException, x, translateToIOException(a, b));
	$throw(x);
}

void UnixException::rethrowAsIOException($UnixPath* file) {
	rethrowAsIOException(file, nullptr);
}

$IOException* UnixException::asIOException($UnixPath* file) {
	return translateToIOException($($nc(file)->getPathForExceptionMessage()), nullptr);
}

UnixException::UnixException() {
}

UnixException::UnixException(const UnixException& e) : $Exception(e) {
}

void UnixException::throw$() {
	throw *this;
}

$Class* UnixException::load$($String* name, bool initialize) {
	$loadClass(UnixException, name, initialize, &_UnixException_ClassInfo_, allocate$UnixException);
	return class$;
}

$Class* UnixException::class$ = nullptr;

		} // fs
	} // nio
} // sun