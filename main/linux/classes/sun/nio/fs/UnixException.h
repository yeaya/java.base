#ifndef _sun_nio_fs_UnixException_h_
#define _sun_nio_fs_UnixException_h_
//$ class sun.nio.fs.UnixException
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
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixException : public ::java::lang::Exception {
	$class(UnixException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	UnixException();
	void init$(int32_t errno$);
	void init$($String* msg);
	virtual ::java::io::IOException* asIOException(::sun::nio::fs::UnixPath* file);
	virtual int32_t errno$();
	virtual $String* errorString();
	virtual $Throwable* fillInStackTrace() override;
	virtual $String* getMessage() override;
	virtual void rethrowAsIOException(::sun::nio::fs::UnixPath* file, ::sun::nio::fs::UnixPath* other);
	virtual void rethrowAsIOException(::sun::nio::fs::UnixPath* file);
	virtual void setError(int32_t errno$);
	::java::io::IOException* translateToIOException($String* file, $String* other);
	static const int64_t serialVersionUID = (int64_t)0x644B857BEB44DD12;
	int32_t errno$$ = 0;
	$String* msg = nullptr;
	UnixException(const UnixException& e);
	virtual void throw$() override;
	inline UnixException* operator ->() {
		return (UnixException*)throwing$;
	}
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixException_h_