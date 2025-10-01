#ifndef _java_security_UnresolvedPermissionCollection$1_h_
#define _java_security_UnresolvedPermissionCollection$1_h_
//$ class java.security.UnresolvedPermissionCollection$1
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace security {
		class UnresolvedPermission;
		class UnresolvedPermissionCollection;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace security {

class UnresolvedPermissionCollection$1 : public ::java::util::function::BiFunction {
	$class(UnresolvedPermissionCollection$1, $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	UnresolvedPermissionCollection$1();
	void init$(::java::security::UnresolvedPermissionCollection* this$0, ::java::security::UnresolvedPermission* val$unresolvedPermission);
	virtual ::java::util::List* apply($String* key, ::java::util::List* oldValue);
	virtual $Object* apply(Object$* key, Object$* oldValue) override;
	::java::security::UnresolvedPermissionCollection* this$0 = nullptr;
	::java::security::UnresolvedPermission* val$unresolvedPermission = nullptr;
};

	} // security
} // java

#endif // _java_security_UnresolvedPermissionCollection$1_h_