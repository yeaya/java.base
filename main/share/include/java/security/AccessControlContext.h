#ifndef _java_security_AccessControlContext_h_
#define _java_security_AccessControlContext_h_
//$ class java.security.AccessControlContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class DomainCombiner;
		class Permission;
		class ProtectionDomain;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $import AccessControlContext : public ::java::lang::Object {
	$class(AccessControlContext, $PRELOAD, ::java::lang::Object)
public:
	AccessControlContext();
	void init$($Array<::java::security::ProtectionDomain>* context);
	void init$(::java::security::AccessControlContext* acc, ::java::security::DomainCombiner* combiner);
	void init$(::java::security::AccessControlContext* acc, ::java::security::DomainCombiner* combiner, bool preauthorized);
	void init$(::java::security::ProtectionDomain* caller, ::java::security::DomainCombiner* combiner, ::java::security::AccessControlContext* parent, ::java::security::AccessControlContext* context, $Array<::java::security::Permission>* perms);
	void init$($Array<::java::security::ProtectionDomain>* context, bool isPrivileged);
	void init$($Array<::java::security::ProtectionDomain>* context, ::java::security::AccessControlContext* privilegedContext);
	void calculateFields(::java::security::AccessControlContext* assigned, ::java::security::AccessControlContext* parent, $Array<::java::security::Permission>* permissions);
	void checkPermission(::java::security::Permission* perm);
	void checkPermission2(::java::security::Permission* perm);
	static $Array<::java::security::ProtectionDomain>* combine($Array<::java::security::ProtectionDomain>* current, $Array<::java::security::ProtectionDomain>* assigned);
	bool containsAllLimits(::java::security::AccessControlContext* that);
	static bool containsAllPDs($Array<::java::security::ProtectionDomain>* thisContext, $Array<::java::security::ProtectionDomain>* thatContext);
	bool equalContext(::java::security::AccessControlContext* that);
	bool equalLimitedContext(::java::security::AccessControlContext* that);
	bool equalPDs($Array<::java::security::ProtectionDomain>* a, $Array<::java::security::ProtectionDomain>* b);
	virtual bool equals(Object$* obj) override;
	::java::security::DomainCombiner* getAssignedCombiner();
	::java::security::DomainCombiner* getCombiner();
	$Array<::java::security::ProtectionDomain>* getContext();
	static ::sun::security::util::Debug* getDebug();
	::java::security::DomainCombiner* getDomainCombiner();
	static ::java::security::AccessControlContext* getNextPC(::java::security::AccessControlContext* acc);
	virtual int32_t hashCode() override;
	bool isAuthorized();
	bool isPrivileged();
	::java::security::AccessControlContext* optimize();
	$Array<::java::security::ProtectionDomain>* context = nullptr;
	bool isPrivileged$ = false;
	bool isAuthorized$ = false;
	::java::security::AccessControlContext* privilegedContext = nullptr;
	::java::security::DomainCombiner* combiner = nullptr;
	$Array<::java::security::Permission>* permissions = nullptr;
	::java::security::AccessControlContext* parent = nullptr;
	bool isWrapped = false;
	bool isLimited = false;
	$Array<::java::security::ProtectionDomain>* limitedContext = nullptr;
	static bool debugInit;
	static ::sun::security::util::Debug* debug;
};

	} // security
} // java

#endif // _java_security_AccessControlContext_h_