#ifndef _sun_security_util_ByteArrayLexOrder_h_
#define _sun_security_util_ByteArrayLexOrder_h_
//$ class sun.security.util.ByteArrayLexOrder
//$ extends java.util.Comparator

#include <java/lang/Array.h>
#include <java/util/Comparator.h>

namespace sun {
	namespace security {
		namespace util {

class $export ByteArrayLexOrder : public ::java::util::Comparator {
	$class(ByteArrayLexOrder, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ByteArrayLexOrder();
	void init$();
	int32_t compare($bytes* bytes1, $bytes* bytes2);
	virtual int32_t compare(Object$* bytes1, Object$* bytes2) override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ByteArrayLexOrder_h_