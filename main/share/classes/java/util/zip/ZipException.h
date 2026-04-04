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
	static const int64_t serialVersionUID = (int64_t)0x6f0668a23bc0d4cf;
	ZipException(const ZipException& e);
	virtual void throw$() override;
	inline ZipException* operator ->() const {
		return (ZipException*)throwing$;
	}
	inline operator ZipException*() const {
		return (ZipException*)throwing$;
	}
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipException_h_