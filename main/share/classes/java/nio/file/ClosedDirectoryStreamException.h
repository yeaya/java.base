#ifndef _java_nio_file_ClosedDirectoryStreamException_h_
#define _java_nio_file_ClosedDirectoryStreamException_h_
//$ class java.nio.file.ClosedDirectoryStreamException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace file {

class $export ClosedDirectoryStreamException : public ::java::lang::IllegalStateException {
	$class(ClosedDirectoryStreamException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ClosedDirectoryStreamException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x3aae3f418bf396a8;
	ClosedDirectoryStreamException(const ClosedDirectoryStreamException& e);
	virtual void throw$() override;
	inline ClosedDirectoryStreamException* operator ->() const {
		return (ClosedDirectoryStreamException*)throwing$;
	}
	inline operator ClosedDirectoryStreamException*() const {
		return (ClosedDirectoryStreamException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ClosedDirectoryStreamException_h_