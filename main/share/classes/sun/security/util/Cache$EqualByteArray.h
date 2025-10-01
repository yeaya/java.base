#ifndef _sun_security_util_Cache$EqualByteArray_h_
#define _sun_security_util_Cache$EqualByteArray_h_
//$ class sun.security.util.Cache$EqualByteArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace util {

class $export Cache$EqualByteArray : public ::java::lang::Object {
	$class(Cache$EqualByteArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Cache$EqualByteArray();
	void init$($bytes* b);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$bytes* b = nullptr;
	int32_t hash = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Cache$EqualByteArray_h_