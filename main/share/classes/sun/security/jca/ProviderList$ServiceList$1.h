#ifndef _sun_security_jca_ProviderList$ServiceList$1_h_
#define _sun_security_jca_ProviderList$ServiceList$1_h_
//$ class sun.security.jca.ProviderList$ServiceList$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace security {
		namespace jca {
			class ProviderList$ServiceList;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class ProviderList$ServiceList$1 : public ::java::util::Iterator {
	$class(ProviderList$ServiceList$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ProviderList$ServiceList$1();
	void init$(::sun::security::jca::ProviderList$ServiceList* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::security::jca::ProviderList$ServiceList* this$1 = nullptr;
	int32_t index = 0;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$ServiceList$1_h_