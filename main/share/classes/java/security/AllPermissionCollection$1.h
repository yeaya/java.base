#ifndef _java_security_AllPermissionCollection$1_h_
#define _java_security_AllPermissionCollection$1_h_
//$ class java.security.AllPermissionCollection$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace security {
		class AllPermissionCollection;
	}
}

namespace java {
	namespace security {

class AllPermissionCollection$1 : public ::java::util::Enumeration {
	$class(AllPermissionCollection$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	AllPermissionCollection$1();
	void init$(::java::security::AllPermissionCollection* this$0);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::security::AllPermissionCollection* this$0 = nullptr;
	bool hasMore = false;
};

	} // security
} // java

#endif // _java_security_AllPermissionCollection$1_h_