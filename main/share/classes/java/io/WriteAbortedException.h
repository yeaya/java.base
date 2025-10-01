#ifndef _java_io_WriteAbortedException_h_
#define _java_io_WriteAbortedException_h_
//$ class java.io.WriteAbortedException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace lang {
		class Exception;
		class Throwable;
	}
}

namespace java {
	namespace io {

class $export WriteAbortedException : public ::java::io::ObjectStreamException {
	$class(WriteAbortedException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	WriteAbortedException();
	void init$($String* s, ::java::lang::Exception* ex);
	virtual $Throwable* getCause() override;
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xD1D6289BB1DF6776;
	::java::lang::Exception* detail = nullptr;
	WriteAbortedException(const WriteAbortedException& e);
	WriteAbortedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_WriteAbortedException_h_