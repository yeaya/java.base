#ifndef _sun_security_jca_ProviderList$3_h_
#define _sun_security_jca_ProviderList$3_h_
//$ class sun.security.jca.ProviderList$3
//$ extends java.util.AbstractList

#include <java/util/AbstractList.h>

namespace sun {
	namespace security {
		namespace jca {
			class ProviderList;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class ProviderList$3 : public ::java::util::AbstractList {
	$class(ProviderList$3, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	ProviderList$3();
	using ::java::util::AbstractList::addAll;
	void init$(::sun::security::jca::ProviderList* this$0);
	virtual $Object* get(int32_t index) override;
	using ::java::util::AbstractList::remove;
	virtual int32_t size() override;
	using ::java::util::AbstractList::toArray;
	::sun::security::jca::ProviderList* this$0 = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$3_h_