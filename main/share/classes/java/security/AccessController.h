#ifndef _java_security_AccessController_h_
#define _java_security_AccessController_h_
//$ class java.security.AccessController
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class DomainCombiner;
		class Permission;
		class PrivilegedAction;
		class PrivilegedActionException;
		class PrivilegedExceptionAction;
		class ProtectionDomain;
	}
}

namespace java {
	namespace security {

class $export AccessController : public ::java::lang::Object {
	$class(AccessController, $PRELOAD, ::java::lang::Object)
public:
	AccessController();
	void init$();
	static ::java::security::AccessControlContext* checkContext(::java::security::AccessControlContext* context, $Class* caller);
	static void checkPermission(::java::security::Permission* perm);
	static ::java::security::AccessControlContext* createWrapper(::java::security::DomainCombiner* combiner, $Class* caller, ::java::security::AccessControlContext* parent, ::java::security::AccessControlContext* context, $Array<::java::security::Permission>* perms);
	static $Object* doPrivileged(::java::security::PrivilegedAction* action);
	static $Object* doPrivileged(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* context);
	static $Object* doPrivileged(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* context, $Array<::java::security::Permission>* perms);
	static $Object* doPrivileged(::java::security::PrivilegedExceptionAction* action);
	static $Object* doPrivileged(::java::security::PrivilegedExceptionAction* action, ::java::security::AccessControlContext* context);
	static $Object* doPrivileged(::java::security::PrivilegedExceptionAction* action, ::java::security::AccessControlContext* context, $Array<::java::security::Permission>* perms);
	static $Object* doPrivilegedWithCombiner(::java::security::PrivilegedAction* action);
	static $Object* doPrivilegedWithCombiner(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* context, $Array<::java::security::Permission>* perms);
	static $Object* doPrivilegedWithCombiner(::java::security::PrivilegedExceptionAction* action);
	static $Object* doPrivilegedWithCombiner(::java::security::PrivilegedExceptionAction* action, ::java::security::AccessControlContext* context, $Array<::java::security::Permission>* perms);
	static void ensureMaterializedForStackWalk(Object$* o);
	static $Object* executePrivileged(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* context, $Class* caller);
	static $Object* executePrivileged(::java::security::PrivilegedExceptionAction* action, ::java::security::AccessControlContext* context, $Class* caller);
	static ::java::security::AccessControlContext* getContext();
	static ::java::security::AccessControlContext* getInheritedAccessControlContext();
	static ::java::security::AccessControlContext* getInnocuousAcc();
	static ::java::security::ProtectionDomain* getProtectionDomain($Class* caller);
	static ::java::security::AccessControlContext* getStackAccessControlContext();
	static bool isPrivileged();
	static ::java::security::AccessControlContext* preserveCombiner(::java::security::DomainCombiner* combiner, $Class* caller);
	static ::java::security::PrivilegedActionException* wrapException(::java::lang::Exception* e);
	static bool $assertionsDisabled;
};

	} // security
} // java

#endif // _java_security_AccessController_h_