#include <java/security/IdentityScope.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/Identity.h>
#include <java/security/IdentityScope$1.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PublicKey.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PublicKey = ::java::security::PublicKey;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace security {

$NamedAttribute IdentityScope_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _IdentityScope_Annotations_[] = {
	{"Ljava/lang/Deprecated;", IdentityScope_Attribute_var$0},
	{}
};


$FieldInfo _IdentityScope_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IdentityScope, serialVersionUID)},
	{"scope", "Ljava/security/IdentityScope;", nullptr, $PRIVATE | $STATIC, $staticField(IdentityScope, scope)},
	{}
};

$MethodInfo _IdentityScope_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(IdentityScope::*)()>(&IdentityScope::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IdentityScope::*)($String*)>(&IdentityScope::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V", nullptr, $PUBLIC, $method(static_cast<void(IdentityScope::*)($String*,IdentityScope*)>(&IdentityScope::init$)), "java.security.KeyManagementException"},
	{"addIdentity", "(Ljava/security/Identity;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyManagementException"},
	{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&IdentityScope::check))},
	{"getIdentity", "(Ljava/lang/String;)Ljava/security/Identity;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIdentity", "(Ljava/security/Principal;)Ljava/security/Identity;", nullptr, $PUBLIC},
	{"getIdentity", "(Ljava/security/PublicKey;)Ljava/security/Identity;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemScope", "()Ljava/security/IdentityScope;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IdentityScope*(*)()>(&IdentityScope::getSystemScope))},
	{"identities", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Identity;>;", $PUBLIC | $ABSTRACT},
	{"initializeSystemScope", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IdentityScope::initializeSystemScope))},
	{"removeIdentity", "(Ljava/security/Identity;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyManagementException"},
	{"setSystemScope", "(Ljava/security/IdentityScope;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)(IdentityScope*)>(&IdentityScope::setSystemScope))},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IdentityScope_InnerClassesInfo_[] = {
	{"java.security.IdentityScope$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IdentityScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.IdentityScope",
	"java.security.Identity",
	nullptr,
	_IdentityScope_FieldInfo_,
	_IdentityScope_MethodInfo_,
	nullptr,
	nullptr,
	_IdentityScope_InnerClassesInfo_,
	_IdentityScope_Annotations_,
	nullptr,
	"java.security.IdentityScope$1"
};

$Object* allocate$IdentityScope($Class* clazz) {
	return $of($alloc(IdentityScope));
}

IdentityScope* IdentityScope::scope = nullptr;

void IdentityScope::initializeSystemScope() {
	$init(IdentityScope);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, classname, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($IdentityScope$1)))));
	if (classname == nullptr) {
		return;
	} else {
		try {
			$Class::forName(classname);
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$init($System);
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
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($Identity::toString()), "["_s}));
	$var($String, var$0, $$concat(var$1, $$str(size())));
	return $concat(var$0, "]");
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
	$loadClass(IdentityScope, name, initialize, &_IdentityScope_ClassInfo_, allocate$IdentityScope);
	return class$;
}

$Class* IdentityScope::class$ = nullptr;

	} // security
} // java