#ifndef _java_nio_ReadOnlyBufferException_h_
#define _java_nio_ReadOnlyBufferException_h_
//$ class java.nio.ReadOnlyBufferException
//$ extends java.lang.UnsupportedOperationException

#include <java/lang/UnsupportedOperationException.h>

namespace java {
	namespace nio {

class $import ReadOnlyBufferException : public ::java::lang::UnsupportedOperationException {
	$class(ReadOnlyBufferException, $NO_CLASS_INIT, ::java::lang::UnsupportedOperationException)
public:
	ReadOnlyBufferException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xEF34FD397D720196;
	ReadOnlyBufferException(const ReadOnlyBufferException& e);
	virtual void throw$() override;
	inline ReadOnlyBufferException* operator ->() {
		return (ReadOnlyBufferException*)throwing$;
	}
};

	} // nio
} // java

#endif // _java_nio_ReadOnlyBufferException_h_