#ifndef _java_lang_CloneNotSupportedException_h_
#define _java_lang_CloneNotSupportedException_h_
//$ class java.lang.CloneNotSupportedException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {

class $export CloneNotSupportedException : public ::java::lang::Exception {
	$class(CloneNotSupportedException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	CloneNotSupportedException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x481A29F4778B29FB;
	CloneNotSupportedException(const CloneNotSupportedException& e);
	virtual void throw$() override;
	inline CloneNotSupportedException* operator ->() {
		return (CloneNotSupportedException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_CloneNotSupportedException_h_