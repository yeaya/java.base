#ifndef _javax_security_auth_Subject$ClassSet_h_
#define _javax_security_auth_Subject$ClassSet_h_
//$ class javax.security.auth.Subject$ClassSet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$ClassSet : public ::java::util::AbstractSet {
	$class(Subject$ClassSet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	Subject$ClassSet();
	void init$(::javax::security::auth::Subject* this$0, int32_t which, $Class* c);
	virtual bool add(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	void populateSet();
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::javax::security::auth::Subject* this$0 = nullptr;
	int32_t which = 0;
	$Class* c = nullptr;
	::java::util::Set* set = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$ClassSet_h_