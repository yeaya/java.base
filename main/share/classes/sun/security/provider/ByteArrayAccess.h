#ifndef _sun_security_provider_ByteArrayAccess_h_
#define _sun_security_provider_ByteArrayAccess_h_
//$ class sun.security.provider.ByteArrayAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace provider {

class ByteArrayAccess : public ::java::lang::Object {
	$class(ByteArrayAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ByteArrayAccess();
	void init$();
	static void b2iBig($bytes* in, int32_t inOfs, $ints* out, int32_t outOfs, int32_t len);
	static void b2iBig64($bytes* in, int32_t inOfs, $ints* out);
	static void b2lBig($bytes* in, int32_t inOfs, $longs* out, int32_t outOfs, int32_t len);
	static void b2lBig128($bytes* in, int32_t inOfs, $longs* out);
	static void b2lLittle($bytes* in, int32_t inOfs, $longs* out, int32_t outOfs, int32_t len);
	static void i2bBig($ints* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len);
	static void i2bBig4(int32_t val, $bytes* out, int32_t outOfs);
	static void i2bLittle($ints* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len);
	static void i2bLittle4(int32_t val, $bytes* out, int32_t outOfs);
	static void l2bBig($longs* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len);
	static void l2bLittle($longs* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len);
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_ByteArrayAccess_h_