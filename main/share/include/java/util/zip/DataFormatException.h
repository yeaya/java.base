#ifndef _java_util_zip_DataFormatException_h_
#define _java_util_zip_DataFormatException_h_
//$ class java.util.zip.DataFormatException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace util {
		namespace zip {

class $import DataFormatException : public ::java::lang::Exception {
	$class(DataFormatException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	DataFormatException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x1ECDB85601655EEC;
	DataFormatException(const DataFormatException& e);
	DataFormatException wrapper$();
	virtual void throwWrapper$() override;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_DataFormatException_h_