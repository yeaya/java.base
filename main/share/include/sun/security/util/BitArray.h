#ifndef _sun_security_util_BitArray_h_
#define _sun_security_util_BitArray_h_
//$ class sun.security.util.BitArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BITS_PER_UNIT")
#undef BITS_PER_UNIT
#pragma push_macro("NYBBLE")
#undef NYBBLE
#pragma push_macro("BYTES_PER_LINE")
#undef BYTES_PER_LINE

namespace sun {
	namespace security {
		namespace util {

class $import BitArray : public ::java::lang::Object {
	$class(BitArray, 0, ::java::lang::Object)
public:
	BitArray();
	void init$(int32_t length);
	void init$(int32_t length, $bytes* a);
	void init$($booleans* bits);
	void init$(::sun::security::util::BitArray* ba);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual bool get(int32_t index);
	virtual int32_t hashCode() override;
	virtual int32_t length();
	static int32_t position(int32_t idx);
	virtual void set(int32_t index, bool value);
	static int32_t subscript(int32_t idx);
	virtual $booleans* toBooleanArray();
	virtual $bytes* toByteArray();
	virtual $String* toString() override;
	virtual ::sun::security::util::BitArray* truncate();
	$bytes* repn = nullptr;
	int32_t length$ = 0;
	static const int32_t BITS_PER_UNIT = 8;
	static $Array<int8_t, 2>* NYBBLE;
	static const int32_t BYTES_PER_LINE = 8;
};

		} // util
	} // security
} // sun

#pragma pop_macro("BITS_PER_UNIT")
#pragma pop_macro("NYBBLE")
#pragma pop_macro("BYTES_PER_LINE")

#endif // _sun_security_util_BitArray_h_