#ifndef _sun_security_jca_ProviderList$PreferredList_h_
#define _sun_security_jca_ProviderList$PreferredList_h_
//$ class sun.security.jca.ProviderList$PreferredList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace security {
		namespace jca {
			class ProviderList$PreferredEntry;
			class ProviderList$ServiceList;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class $import ProviderList$PreferredList : public ::java::lang::Object {
	$class(ProviderList$PreferredList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProviderList$PreferredList();
	void init$();
	bool add(::sun::security::jca::ProviderList$PreferredEntry* e);
	::sun::security::jca::ProviderList$PreferredEntry* get(int32_t i);
	::java::util::ArrayList* getAll(::sun::security::jca::ProviderList$ServiceList* s);
	::java::util::ArrayList* getAll($String* type, $String* algorithm);
	void implGetAll(::java::util::ArrayList* l, $String* type, $String* algorithm);
	int32_t size();
	virtual $String* toString() override;
	::java::util::ArrayList* list = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$PreferredList_h_