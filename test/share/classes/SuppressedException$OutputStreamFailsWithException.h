#ifndef _SuppressedException$OutputStreamFailsWithException_h_
#define _SuppressedException$OutputStreamFailsWithException_h_
//$ class SuppressedException$OutputStreamFailsWithException
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

class SuppressedException;
namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

class $export SuppressedException$OutputStreamFailsWithException : public ::java::io::OutputStream {
	$class(SuppressedException$OutputStreamFailsWithException, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	SuppressedException$OutputStreamFailsWithException();
	void init$(::SuppressedException* this$0);
	void init$(::SuppressedException* this$0, bool throwCloseException, bool throwFlushException);
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t i) override;
	::SuppressedException* this$0 = nullptr;
	::java::io::IOException* sameException = nullptr;
	::java::lang::Boolean* throwSeparateCloseException = nullptr;
	::java::lang::Boolean* throwSeparateFlushException = nullptr;
};

#endif // _SuppressedException$OutputStreamFailsWithException_h_