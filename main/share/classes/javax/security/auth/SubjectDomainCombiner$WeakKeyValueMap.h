#ifndef _javax_security_auth_SubjectDomainCombiner$WeakKeyValueMap_h_
#define _javax_security_auth_SubjectDomainCombiner$WeakKeyValueMap_h_
//$ class javax.security.auth.SubjectDomainCombiner$WeakKeyValueMap
//$ extends java.util.WeakHashMap

#include <java/util/WeakHashMap.h>

namespace javax {
	namespace security {
		namespace auth {

class SubjectDomainCombiner$WeakKeyValueMap : public ::java::util::WeakHashMap {
	$class(SubjectDomainCombiner$WeakKeyValueMap, $NO_CLASS_INIT, ::java::util::WeakHashMap)
public:
	SubjectDomainCombiner$WeakKeyValueMap();
	void init$();
	virtual $Object* getValue(Object$* key);
	virtual $Object* putValue(Object$* key, Object$* value);
	using ::java::util::WeakHashMap::remove;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_SubjectDomainCombiner$WeakKeyValueMap_h_