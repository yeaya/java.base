#ifndef _java_io_SyncFailedException_h_
#define _java_io_SyncFailedException_h_
//$ class java.io.SyncFailedException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $export SyncFailedException : public ::java::io::IOException {
	$class(SyncFailedException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	SyncFailedException();
	void init$($String* desc);
	static const int64_t serialVersionUID = (int64_t)0xDF573F4C0CD5053E;
	SyncFailedException(const SyncFailedException& e);
	virtual void throw$() override;
	inline SyncFailedException* operator ->() {
		return (SyncFailedException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_SyncFailedException_h_