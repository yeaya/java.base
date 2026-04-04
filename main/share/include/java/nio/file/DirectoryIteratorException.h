#ifndef _java_nio_file_DirectoryIteratorException_h_
#define _java_nio_file_DirectoryIteratorException_h_
//$ class java.nio.file.DirectoryIteratorException
//$ extends java.util.ConcurrentModificationException

#include <java/util/ConcurrentModificationException.h>

namespace java {
	namespace io {
		class IOException;
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace nio {
		namespace file {

class $import DirectoryIteratorException : public ::java::util::ConcurrentModificationException {
	$class(DirectoryIteratorException, $NO_CLASS_INIT, ::java::util::ConcurrentModificationException)
public:
	DirectoryIteratorException();
	void init$(::java::io::IOException* cause);
	virtual $Throwable* getCause() override;
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xac8e994f6cccb2f6;
	DirectoryIteratorException(const DirectoryIteratorException& e);
	virtual void throw$() override;
	inline DirectoryIteratorException* operator ->() const {
		return (DirectoryIteratorException*)throwing$;
	}
	inline operator DirectoryIteratorException*() const {
		return (DirectoryIteratorException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_DirectoryIteratorException_h_