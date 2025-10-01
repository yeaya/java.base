#ifndef _sun_security_provider_ByteArrayAccess$LE_h_
#define _sun_security_provider_ByteArrayAccess$LE_h_
//$ class sun.security.provider.ByteArrayAccess$LE
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INT_ARRAY")
#undef INT_ARRAY
#pragma push_macro("LONG_ARRAY")
#undef LONG_ARRAY

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class ByteArrayAccess$LE : public ::java::lang::Object {
	$class(ByteArrayAccess$LE, 0, ::java::lang::Object)
public:
	ByteArrayAccess$LE();
	void init$();
	static ::java::lang::invoke::VarHandle* INT_ARRAY;
	static ::java::lang::invoke::VarHandle* LONG_ARRAY;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INT_ARRAY")
#pragma pop_macro("LONG_ARRAY")

#endif // _sun_security_provider_ByteArrayAccess$LE_h_