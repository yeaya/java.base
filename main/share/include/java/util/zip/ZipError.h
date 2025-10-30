#ifndef _java_util_zip_ZipError_h_
#define _java_util_zip_ZipError_h_
//$ class java.util.zip.ZipError
//$ extends java.lang.InternalError

#include <java/lang/InternalError.h>

namespace java {
	namespace util {
		namespace zip {

class $import ZipError : public ::java::lang::InternalError {
	$class(ZipError, $NO_CLASS_INIT, ::java::lang::InternalError)
public:
	ZipError();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x0BD9EC4D91D7499B;
	ZipError(const ZipError& e);
	virtual void throw$() override;
	inline ZipError* operator ->() {
		return (ZipError*)throwing$;
	}
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipError_h_