#include <java/security/IdentityScope.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Identity.h>
#include <java/security/IdentityScope$1.h>
#include <java/security/Principal.h>
#include <java/security/PublicKey.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $Identity = ::java::security::Identity;
using $IdentityScope$1 = ::java::security::IdentityScope$1;
using $Principal = ::java::security::Principal;
using $PublicKey = ::java::security::PublicKey;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace security {

IdentityScope* IdentityScope::scope = nullptr;

void IdentityScope::initializeSystemScope() {
	$init(IdentityScope);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, classname, $cast($String, $AccessController::doPrivileged($$new($IdentityScope$1))));
	if (classname == nullptr) {
		return;
	} else {
		try {
			$Class::forName(classname);
		} catch ($ClassNotFoundException& e) {
			$nc($System::err)->println($$str({"unable to establish a system scope from "_s, classname}));
			e->printStackTrace();
		}
	}
}

void IdentityScope::init$() {
	IdentityScope::init$("restoring..."_s);
}

void IdentityScope::init$($String* name) {
	$Identity::init$(name);
}

void IdentityScope::init$($String* name, IdentityScope* scope) {
	$Identity::init$(name, scope);
}

IdentityScope* IdentityScope::getSystemScope() {
	$init(IdentityScope);
	if (IdentityScope::scope == nullptr) {
		initializeSystemScope();
	}
	return IdentityScope::scope;
}

void IdentityScope::setSystemScope(IdentityScope* scope) {
	$init(IdentityScope);
	check("setSystemScope"_s);
	$assignStatic(IdentityScope::scope, scope);
}

$Identity* IdentityScope::getIdentity($Principal* principal) {
	return getIdentity($($nc(principal)->getName()));
}

$String* IdentityScope::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Identity::toString()));
	var$0->append("["_s);
	var$0->append(size());
	var$0->append("]"_s);
	return $str(var$0);
}

void IdentityScope::check($String* directive) {
	$init(IdentityScope);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkSecurityAccess(directive);
	}
}

IdentityScope::IdentityScope() {
}

$Class* IdentityScope::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IdentityScope, serialVersionUID)},
		{"scope", "Ljava/security/IdentityScope;", nullptr, $PRIVATE | $STATIC, $staticField(IdentityScope, scope)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(IdentityScope, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IdentityScope, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V", nullptr, $PUBLIC, $method(IdentityScope, init$, void, $String*, IdentityScope*), "java.security.KeyManagementException"},
		{"addIdentity", "(Ljava/security/Identity;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IdentityScope, addIdentity, void, $Identity*), "java.security.KeyManagementException"},
		{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(IdentityScope, check, void, $String*)},
		{"getIdentity", "(Ljava/lang/String;)Ljava/security/Identity;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IdentityScope, getIdentity, $Identity*, $String*)},
		{"getIdentity", "(Ljava/security/Principal;)Ljava/security/Identity;", nullptr, $PUBLIC, $virtualMethod(IdentityScope, getIdentity, $Identity*, $Principal*)},
		{"getIdentity", "(Ljava/security/PublicKey;)Ljava/security/Identity;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IdentityScope, getIdentity, $Identity*, $PublicKey*)},
		{"getSystemScope", "()Ljava/security/IdentityScope;", nullptr, $PUBLIC | $STATIC, $staticMethod(IdentityScope, getSystemScope, IdentityScope*)},
		{"identities", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Identity;>;", $PUBLIC | $ABSTRACT, $virtualMethod(IdentityScope, identities, $Enumeration*)},
		{"initializeSystemScope", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(IdentityScope, initializeSystemScope, void)},
		{"removeIdentity", "(Ljava/security/Identity;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IdentityScope, removeIdentity, void, $Identity*), "java.security.KeyManagementException"},
		{"setSystemScope", "(Ljava/security/IdentityScope;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(IdentityScope, setSystemScope, void, IdentityScope*)},
		{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IdentityScope, size, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityScope, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.IdentityScope$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.IdentityScope",
		"java.security.Identity",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"java.security.IdentityScope$1"
	};
	$loadClass(IdentityScope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IdentityScope));
	});
	return class$;
}

$Class* IdentityScope::class$ = nullptr;

	} // security
} // java