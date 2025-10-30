#ifndef _java_io_UTFDataFormatException_h_
#define _java_io_UTFDataFormatException_h_
//$ class java.io.UTFDataFormatException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $export UTFDataFormatException : public ::java::io::IOException {
	$class(UTFDataFormatException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	UTFDataFormatException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x05D6C7F018D30324;
	UTFDataFormatException(const UTFDataFormatException& e);
	virtual void throw$() override;
	inline UTFDataFormatException* operator ->() {
		return (UTFDataFormatException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_UTFDataFormatException_h_