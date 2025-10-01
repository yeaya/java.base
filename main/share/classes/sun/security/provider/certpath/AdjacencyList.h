#ifndef _sun_security_provider_certpath_AdjacencyList_h_
#define _sun_security_provider_certpath_AdjacencyList_h_
//$ class sun.security.provider.certpath.AdjacencyList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
		class Iterator;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class BuildStep;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $export AdjacencyList : public ::java::lang::Object {
	$class(AdjacencyList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AdjacencyList();
	void init$(::java::util::List* list);
	bool buildList(::java::util::List* theList, int32_t index, ::sun::security::provider::certpath::BuildStep* follow);
	virtual ::java::util::Iterator* iterator();
	virtual $String* toString() override;
	::java::util::ArrayList* mStepList = nullptr;
	::java::util::List* mOrigList = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_AdjacencyList_h_