#ifndef _java_util_zip_ZipException_h_
#define _java_util_zip_ZipException_h_
//$ class java.util.zip.ZipException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace util {
		namespace zip {

class $export ZipException : public ::java::io::IOException {
	$class(ZipException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ZipException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x6F0668A23BC0D4CF;
	ZipException(const ZipException& e);
	ZipException wrapper$();
	virtual void throwWrapper$() override;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipException_h_