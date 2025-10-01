#ifndef _com_sun_crypto_provider_SealedObjectForKeyProtector$DeserializationChecker_h_
#define _com_sun_crypto_provider_SealedObjectForKeyProtector$DeserializationChecker_h_
//$ class com.sun.crypto.provider.SealedObjectForKeyProtector$DeserializationChecker
//$ extends java.io.ObjectInputFilter

#include <java/io/ObjectInputFilter.h>

#pragma push_macro("OWN_FILTER")
#undef OWN_FILTER

namespace java {
	namespace io {
		class ObjectInputFilter$FilterInfo;
		class ObjectInputFilter$Status;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class SealedObjectForKeyProtector$DeserializationChecker : public ::java::io::ObjectInputFilter {
	$class(SealedObjectForKeyProtector$DeserializationChecker, 0, ::java::io::ObjectInputFilter)
public:
	SealedObjectForKeyProtector$DeserializationChecker();
	void init$(int32_t maxLength);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* info) override;
	static $String* lambda$static$0();
	static ::java::io::ObjectInputFilter* OWN_FILTER;
	int32_t maxLength = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("OWN_FILTER")

#endif // _com_sun_crypto_provider_SealedObjectForKeyProtector$DeserializationChecker_h_