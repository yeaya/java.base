#ifndef _sun_security_jca_ProviderList$ServiceList_h_
#define _sun_security_jca_ProviderList$ServiceList_h_
//$ class sun.security.jca.ProviderList$ServiceList
//$ extends java.util.AbstractList

#include <java/util/AbstractList.h>

namespace java {
	namespace security {
		class Provider$Service;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Iterator;
		class List;
	}
}
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

class ProviderList$ServiceList : public ::java::util::AbstractList {
	$class(ProviderList$ServiceList, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	ProviderList$ServiceList();
	using ::java::util::AbstractList::addAll;
	void init$(::sun::security::jca::ProviderList* this$0, $String* type, $String* algorithm);
	void init$(::sun::security::jca::ProviderList* this$0, ::java::util::List* ids);
	void addService(::java::security::Provider$Service* s);
	virtual $Object* get(int32_t index) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	using ::java::util::AbstractList::remove;
	virtual int32_t size() override;
	using ::java::util::AbstractList::toArray;
	::java::security::Provider$Service* tryGet(int32_t index);
	::sun::security::jca::ProviderList* this$0 = nullptr;
	$String* type = nullptr;
	$String* algorithm = nullptr;
	::java::util::List* ids = nullptr;
	::java::security::Provider$Service* firstService = nullptr;
	::java::util::List* services = nullptr;
	int32_t providerIndex = 0;
	::java::util::ArrayList* preferredList = nullptr;
	int32_t preferredIndex = 0;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderList$ServiceList_h_