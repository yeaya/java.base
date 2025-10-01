#ifndef _javax_security_auth_Subject$SecureSet$1_h_
#define _javax_security_auth_Subject$SecureSet$1_h_
//$ class javax.security.auth.Subject$SecureSet$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class LinkedList;
		class ListIterator;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject$SecureSet;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$SecureSet$1 : public ::java::util::Iterator {
	$class(Subject$SecureSet$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Subject$SecureSet$1();
	void init$(::javax::security::auth::Subject$SecureSet* this$0, ::java::util::LinkedList* val$list);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::javax::security::auth::Subject$SecureSet* this$0 = nullptr;
	::java::util::LinkedList* val$list = nullptr;
	::java::util::ListIterator* i = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$SecureSet$1_h_