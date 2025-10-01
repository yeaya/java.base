#ifndef _sun_security_provider_DomainKeyStore$1_h_
#define _sun_security_provider_DomainKeyStore$1_h_
//$ class sun.security.provider.DomainKeyStore$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
		class Map$Entry;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class DomainKeyStore;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class DomainKeyStore$1 : public ::java::util::Enumeration {
	$class(DomainKeyStore$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	DomainKeyStore$1();
	void init$(::sun::security::provider::DomainKeyStore* this$0, ::java::util::Iterator* val$iterator);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::sun::security::provider::DomainKeyStore* this$0 = nullptr;
	::java::util::Iterator* val$iterator = nullptr;
	int32_t index = 0;
	::java::util::Map$Entry* keystoresEntry = nullptr;
	$String* prefix = nullptr;
	::java::util::Enumeration* aliases = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_DomainKeyStore$1_h_