#ifndef _sun_nio_fs_WindowsException_h_
#define _sun_nio_fs_WindowsException_h_
//$ class sun.nio.fs.WindowsException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsException : public ::java::lang::Exception {
	$class(WindowsException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	WindowsException();
	void init$(int32_t lastError);
	void init$($String* msg);
	virtual ::java::io::IOException* asIOException(::sun::nio::fs::WindowsPath* file);
	virtual $String* errorString();
	virtual $Throwable* fillInStackTrace() override;
	virtual $String* getMessage() override;
	virtual int32_t lastError();
	virtual void rethrowAsIOException($String* file);
	virtual void rethrowAsIOException(::sun::nio::fs::WindowsPath* file, ::sun::nio::fs::WindowsPath* other);
	virtual void rethrowAsIOException(::sun::nio::fs::WindowsPath* file);
	::java::io::IOException* translateToIOException($String* file, $String* other);
	static const int64_t serialVersionUID = (int64_t)0x265F64C4E72ED9D4;
	int32_t lastError$ = 0;
	$String* msg = nullptr;
	WindowsException(const WindowsException& e);
	WindowsException wrapper$();
	virtual void throwWrapper$() override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsException_h_