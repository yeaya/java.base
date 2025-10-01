#include <java/security/AccessController.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController$AccHolder.h>
#include <java/security/BasicPermission.h>
#include <java/security/DomainCombiner.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/SecurityPermission.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef CREATE_ACC_PERMISSION

using $PermissionArray = $Array<::java::security::Permission>;
using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Reference = ::java::lang::ref::Reference;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController$AccHolder = ::java::security::AccessController$AccHolder;
using $BasicPermission = ::java::security::BasicPermission;
using $DomainCombiner = ::java::security::DomainCombiner;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $SecurityPermission = ::java::security::SecurityPermission;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $Debug = ::sun::security::util::Debug;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace security {

$NamedAttribute AccessController_Attribute_var$0[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _AccessController_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AccessController_Attribute_var$0},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivileged4[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivileged5[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivileged6[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivileged7[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivileged8[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivileged9[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivilegedWithCombiner10[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivilegedWithCombiner11[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivilegedWithCombiner12[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_doPrivilegedWithCombiner13[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_ensureMaterializedForStackWalk14[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_executePrivileged15[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_executePrivileged16[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _AccessController_MethodAnnotations_wrapException24[] = {
	{"Ljdk/internal/vm/annotation/Hidden;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};


$FieldInfo _AccessController_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AccessController, $assertionsDisabled)},
	{}
};

$MethodInfo _AccessController_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AccessController::*)()>(&AccessController::init$))},
	{"checkContext", "(Ljava/security/AccessControlContext;Ljava/lang/Class;)Ljava/security/AccessControlContext;", "(Ljava/security/AccessControlContext;Ljava/lang/Class<*>;)Ljava/security/AccessControlContext;", $PRIVATE | $STATIC, $method(static_cast<$AccessControlContext*(*)($AccessControlContext*,$Class*)>(&AccessController::checkContext))},
	{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Permission*)>(&AccessController::checkPermission)), "java.security.AccessControlException"},
	{"createWrapper", "(Ljava/security/DomainCombiner;Ljava/lang/Class;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/security/AccessControlContext;", "(Ljava/security/DomainCombiner;Ljava/lang/Class<*>;Ljava/security/AccessControlContext;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/security/AccessControlContext;", $PRIVATE | $STATIC, $method(static_cast<$AccessControlContext*(*)($DomainCombiner*,$Class*,$AccessControlContext*,$AccessControlContext*,$PermissionArray*)>(&AccessController::createWrapper))},
	{"doPrivileged", "(Ljava/security/PrivilegedAction;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($PrivilegedAction*)>(&AccessController::doPrivileged)), nullptr, nullptr, _AccessController_MethodAnnotations_doPrivileged4},
	{"doPrivileged", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($PrivilegedAction*,$AccessControlContext*)>(&AccessController::doPrivileged)), nullptr, nullptr, _AccessController_MethodAnnotations_doPrivileged5},
	{"doPrivileged", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;[Ljava/security/Permission;)TT;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($PrivilegedAction*,$AccessControlContext*,$PermissionArray*)>(&AccessController::doPrivileged)), nullptr, nullptr, _AccessController_MethodAnnotations_doPrivileged6},
	{"doPrivileged", "(Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedExceptionAction<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($PrivilegedExceptionAction*)>(&AccessController::doPrivileged)), "java.security.PrivilegedActionException", nullptr, _AccessController_MethodAnnotations_doPrivileged7},
	{"doPrivileged", "(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedExceptionAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($PrivilegedExceptionAction*,$AccessControlContext*)>(&AccessController::doPrivileged)), "java.security.PrivilegedActionException", nullptr, _AccessController_MethodAnnotations_doPrivileged8},
	{"doPrivileged", "(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedExceptionAction<TT;>;Ljava/security/AccessControlContext;[Ljava/security/Permission;)TT;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($PrivilegedExceptionAction*,$AccessControlContext*,$PermissionArray*)>(&AccessController::doPrivileged)), "java.security.PrivilegedActionException", nullptr, _AccessController_MethodAnnotations_doPrivileged9},
	{"doPrivilegedWithCombiner", "(Ljava/security/PrivilegedAction;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($PrivilegedAction*)>(&AccessController::doPrivilegedWithCombiner)), nullptr, nullptr, _AccessController_MethodAnnotations_doPrivilegedWithCombiner10},
	{"doPrivilegedWithCombiner", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;[Ljava/security/Permission;)TT;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($PrivilegedAction*,$AccessControlContext*,$PermissionArray*)>(&AccessController::doPrivilegedWithCombiner)), nullptr, nullptr, _AccessController_MethodAnnotations_doPrivilegedWithCombiner11},
	{"doPrivilegedWithCombiner", "(Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedExceptionAction<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($PrivilegedExceptionAction*)>(&AccessController::doPrivilegedWithCombiner)), "java.security.PrivilegedActionException", nullptr, _AccessController_MethodAnnotations_doPrivilegedWithCombiner12},
	{"doPrivilegedWithCombiner", "(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedExceptionAction<TT;>;Ljava/security/AccessControlContext;[Ljava/security/Permission;)TT;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($PrivilegedExceptionAction*,$AccessControlContext*,$PermissionArray*)>(&AccessController::doPrivilegedWithCombiner)), "java.security.PrivilegedActionException", nullptr, _AccessController_MethodAnnotations_doPrivilegedWithCombiner13},
	{"ensureMaterializedForStackWalk", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(Object$*)>(&AccessController::ensureMaterializedForStackWalk)), nullptr, nullptr, _AccessController_MethodAnnotations_ensureMaterializedForStackWalk14},
	{"executePrivileged", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;Ljava/lang/Class<*>;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($PrivilegedAction*,$AccessControlContext*,$Class*)>(&AccessController::executePrivileged)), nullptr, nullptr, _AccessController_MethodAnnotations_executePrivileged15},
	{"executePrivileged", "(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/security/PrivilegedExceptionAction<TT;>;Ljava/security/AccessControlContext;Ljava/lang/Class<*>;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($PrivilegedExceptionAction*,$AccessControlContext*,$Class*)>(&AccessController::executePrivileged)), "java.lang.Exception", nullptr, _AccessController_MethodAnnotations_executePrivileged16},
	{"getContext", "()Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessControlContext*(*)()>(&AccessController::getContext))},
	{"getInheritedAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $STATIC | $NATIVE, $method(static_cast<$AccessControlContext*(*)()>(&AccessController::getInheritedAccessControlContext))},
	{"getInnocuousAcc", "()Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AccessControlContext*(*)()>(&AccessController::getInnocuousAcc))},
	{"getProtectionDomain", "(Ljava/lang/Class;)Ljava/security/ProtectionDomain;", "(Ljava/lang/Class<*>;)Ljava/security/ProtectionDomain;", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$ProtectionDomain*(*)($Class*)>(&AccessController::getProtectionDomain))},
	{"getStackAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$AccessControlContext*(*)()>(&AccessController::getStackAccessControlContext))},
	{"isPrivileged", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&AccessController::isPrivileged))},
	{"preserveCombiner", "(Ljava/security/DomainCombiner;Ljava/lang/Class;)Ljava/security/AccessControlContext;", "(Ljava/security/DomainCombiner;Ljava/lang/Class<*>;)Ljava/security/AccessControlContext;", $PRIVATE | $STATIC, $method(static_cast<$AccessControlContext*(*)($DomainCombiner*,$Class*)>(&AccessController::preserveCombiner))},
	{"wrapException", "(Ljava/lang/Exception;)Ljava/security/PrivilegedActionException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PrivilegedActionException*(*)($Exception*)>(&AccessController::wrapException)), nullptr, nullptr, _AccessController_MethodAnnotations_wrapException24},
	{}
};

#define _METHOD_INDEX_ensureMaterializedForStackWalk 14
#define _METHOD_INDEX_getInheritedAccessControlContext 18
#define _METHOD_INDEX_getProtectionDomain 20
#define _METHOD_INDEX_getStackAccessControlContext 21

$InnerClassInfo _AccessController_InnerClassesInfo_[] = {
	{"java.security.AccessController$AccHolder", "java.security.AccessController", "AccHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AccessController_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.AccessController",
	"java.lang.Object",
	nullptr,
	_AccessController_FieldInfo_,
	_AccessController_MethodInfo_,
	nullptr,
	nullptr,
	_AccessController_InnerClassesInfo_,
	_AccessController_Annotations_,
	nullptr,
	"java.security.AccessController$AccHolder"
};

$Object* allocate$AccessController($Class* clazz) {
	return $of($alloc(AccessController));
}

bool AccessController::$assertionsDisabled = false;

void AccessController::init$() {
}

$Object* AccessController::doPrivileged($PrivilegedAction* action) {
	$init(AccessController);
	return $of(executePrivileged(action, ($AccessControlContext*)nullptr, $Reflection::getCallerClass()));
}

$Object* AccessController::doPrivilegedWithCombiner($PrivilegedAction* action) {
	$init(AccessController);
	$var($AccessControlContext, acc, getStackAccessControlContext());
	if (acc == nullptr) {
		return $of(AccessController::doPrivileged(action));
	}
	$var($DomainCombiner, dc, $nc(acc)->getAssignedCombiner());
	return $of(AccessController::doPrivileged(action, $(preserveCombiner(dc, $Reflection::getCallerClass()))));
}

$Object* AccessController::doPrivileged($PrivilegedAction* action, $AccessControlContext* context$renamed) {
	$init(AccessController);
	$var($AccessControlContext, context, context$renamed);
	$Class* caller = $Reflection::getCallerClass();
	$assign(context, checkContext(context, caller));
	return $of(executePrivileged(action, context, caller));
}

$Object* AccessController::doPrivileged($PrivilegedAction* action, $AccessControlContext* context, $PermissionArray* perms) {
	$init(AccessController);
	$var($AccessControlContext, parent, getContext());
	if (perms == nullptr) {
		$throwNew($NullPointerException, "null permissions parameter"_s);
	}
	$Class* caller = $Reflection::getCallerClass();
	$var($DomainCombiner, dc, (context == nullptr) ? ($DomainCombiner*)nullptr : $nc(context)->getCombiner());
	return $of(AccessController::doPrivileged(action, $(createWrapper(dc, caller, parent, context, perms))));
}

$Object* AccessController::doPrivilegedWithCombiner($PrivilegedAction* action, $AccessControlContext* context, $PermissionArray* perms) {
	$init(AccessController);
	$var($AccessControlContext, parent, getContext());
	$var($DomainCombiner, dc, $nc(parent)->getCombiner());
	if (dc == nullptr && context != nullptr) {
		$assign(dc, context->getCombiner());
	}
	if (perms == nullptr) {
		$throwNew($NullPointerException, "null permissions parameter"_s);
	}
	$Class* caller = $Reflection::getCallerClass();
	return $of(AccessController::doPrivileged(action, $(createWrapper(dc, caller, parent, context, perms))));
}

$Object* AccessController::doPrivileged($PrivilegedExceptionAction* action) {
	$init(AccessController);
	$var($AccessControlContext, context, nullptr);
	$Class* caller = $Reflection::getCallerClass();
	try {
		return $of(executePrivileged(action, context, caller));
	} catch ($RuntimeException&) {
		$var($RuntimeException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throw($(wrapException(e)));
	}
	$shouldNotReachHere();
}

$Object* AccessController::doPrivilegedWithCombiner($PrivilegedExceptionAction* action) {
	$init(AccessController);
	$var($AccessControlContext, acc, getStackAccessControlContext());
	if (acc == nullptr) {
		return $of(AccessController::doPrivileged(action));
	}
	$var($DomainCombiner, dc, $nc(acc)->getAssignedCombiner());
	return $of(AccessController::doPrivileged(action, $(preserveCombiner(dc, $Reflection::getCallerClass()))));
}

$AccessControlContext* AccessController::preserveCombiner($DomainCombiner* combiner, $Class* caller) {
	$init(AccessController);
	return createWrapper(combiner, caller, nullptr, nullptr, nullptr);
}

$AccessControlContext* AccessController::createWrapper($DomainCombiner* combiner, $Class* caller, $AccessControlContext* parent, $AccessControlContext* context, $PermissionArray* perms) {
	$init(AccessController);
	$var($ProtectionDomain, callerPD, getProtectionDomain(caller));
	bool var$1 = $System::getSecurityManager() != nullptr && context != nullptr;
	bool var$0 = var$1 && !context->isAuthorized();
	$init($SecurityConstants);
	if (var$0 && !$nc(callerPD)->implies($SecurityConstants::CREATE_ACC_PERMISSION)) {
		return getInnocuousAcc();
	} else {
		return $new($AccessControlContext, callerPD, combiner, parent, context, perms);
	}
}

$AccessControlContext* AccessController::getInnocuousAcc() {
	$init(AccessController);
	$init($AccessController$AccHolder);
	return $AccessController$AccHolder::innocuousAcc;
}

$ProtectionDomain* AccessController::getProtectionDomain($Class* caller) {
	return nullptr;
}

$Object* AccessController::doPrivileged($PrivilegedExceptionAction* action, $AccessControlContext* context$renamed) {
	$init(AccessController);
	$var($AccessControlContext, context, context$renamed);
	$Class* caller = $Reflection::getCallerClass();
	$assign(context, checkContext(context, caller));
	try {
		return $of(executePrivileged(action, context, caller));
	} catch ($RuntimeException&) {
		$var($RuntimeException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throw($(wrapException(e)));
	}
	$shouldNotReachHere();
}

$AccessControlContext* AccessController::checkContext($AccessControlContext* context, $Class* caller) {
	$init(AccessController);
	bool var$1 = $System::getSecurityManager() != nullptr && context != nullptr;
	bool var$0 = var$1 && !context->isAuthorized();
	if (var$0 && context != getInnocuousAcc()) {
		$var($ProtectionDomain, callerPD, getProtectionDomain(caller));
		$init($SecurityConstants);
		if (callerPD != nullptr && !callerPD->implies($SecurityConstants::CREATE_ACC_PERMISSION)) {
			return getInnocuousAcc();
		}
	}
	return context;
}

void AccessController::ensureMaterializedForStackWalk(Object$* o) {
}

bool AccessController::isPrivileged() {
	$init(AccessController);
	$var($AccessControlContext, ctx, getStackAccessControlContext());
	return ctx == nullptr || $nc(ctx)->isPrivileged();
}

$Object* AccessController::executePrivileged($PrivilegedAction* action, $AccessControlContext* context, $Class* caller) {
	$init(AccessController);
	if (context != nullptr) {
		ensureMaterializedForStackWalk(context);
	}
	if (!AccessController::$assertionsDisabled && !isPrivileged()) {
		$throwNew($AssertionError);
	}
	$var($Object, result, $nc(action)->run());
	if (!AccessController::$assertionsDisabled && !isPrivileged()) {
		$throwNew($AssertionError);
	}
	$Reference::reachabilityFence(context);
	$Reference::reachabilityFence(caller);
	return $of(result);
}

$Object* AccessController::executePrivileged($PrivilegedExceptionAction* action, $AccessControlContext* context, $Class* caller) {
	$init(AccessController);
	if (context != nullptr) {
		ensureMaterializedForStackWalk(context);
	}
	if (!AccessController::$assertionsDisabled && !isPrivileged()) {
		$throwNew($AssertionError);
	}
	$var($Object, result, $nc(action)->run());
	if (!AccessController::$assertionsDisabled && !isPrivileged()) {
		$throwNew($AssertionError);
	}
	$Reference::reachabilityFence(context);
	$Reference::reachabilityFence(caller);
	return $of(result);
}

$PrivilegedActionException* AccessController::wrapException($Exception* e) {
	$init(AccessController);
	return $new($PrivilegedActionException, e);
}

$Object* AccessController::doPrivileged($PrivilegedExceptionAction* action, $AccessControlContext* context, $PermissionArray* perms) {
	$init(AccessController);
	$var($AccessControlContext, parent, getContext());
	if (perms == nullptr) {
		$throwNew($NullPointerException, "null permissions parameter"_s);
	}
	$Class* caller = $Reflection::getCallerClass();
	$var($DomainCombiner, dc, (context == nullptr) ? ($DomainCombiner*)nullptr : $nc(context)->getCombiner());
	return $of(AccessController::doPrivileged(action, $(createWrapper(dc, caller, parent, context, perms))));
}

$Object* AccessController::doPrivilegedWithCombiner($PrivilegedExceptionAction* action, $AccessControlContext* context, $PermissionArray* perms) {
	$init(AccessController);
	$var($AccessControlContext, parent, getContext());
	$var($DomainCombiner, dc, $nc(parent)->getCombiner());
	if (dc == nullptr && context != nullptr) {
		$assign(dc, context->getCombiner());
	}
	if (perms == nullptr) {
		$throwNew($NullPointerException, "null permissions parameter"_s);
	}
	$Class* caller = $Reflection::getCallerClass();
	return $of(AccessController::doPrivileged(action, $(createWrapper(dc, caller, parent, context, perms))));
}

$AccessControlContext* AccessController::getStackAccessControlContext() {
	return nullptr;
}

$AccessControlContext* AccessController::getInheritedAccessControlContext() {
	return nullptr;
}

$AccessControlContext* AccessController::getContext() {
	$init(AccessController);
	$var($AccessControlContext, acc, getStackAccessControlContext());
	if (acc == nullptr) {
		return $new($AccessControlContext, ($ProtectionDomainArray*)nullptr, true);
	} else {
		return $nc(acc)->optimize();
	}
}

void AccessController::checkPermission($Permission* perm) {
	$init(AccessController);
	if (perm == nullptr) {
		$throwNew($NullPointerException, "permission can\'t be null"_s);
	}
	$var($AccessControlContext, stack, getStackAccessControlContext());
	if (stack == nullptr) {
		$var($Debug, debug, $AccessControlContext::getDebug());
		bool dumpDebug = false;
		if (debug != nullptr) {
			dumpDebug = !$Debug::isOn("codebase="_s);
			bool var$0 = !$Debug::isOn("permission="_s);
			dumpDebug &= var$0 || $Debug::isOn($$str({"permission="_s, $($nc($of(perm))->getClass()->getCanonicalName())}));
		}
		if (dumpDebug && $Debug::isOn("stack"_s)) {
			$Thread::dumpStack();
		}
		if (dumpDebug && $Debug::isOn("domain"_s)) {
			$nc(debug)->println("domain (context is null)"_s);
		}
		if (dumpDebug) {
			$nc(debug)->println($$str({"access allowed "_s, perm}));
		}
		return;
	}
	$var($AccessControlContext, acc, $nc(stack)->optimize());
	$nc(acc)->checkPermission(perm);
}

void clinit$AccessController($Class* class$) {
	AccessController::$assertionsDisabled = !AccessController::class$->desiredAssertionStatus();
}

AccessController::AccessController() {
}

$Class* AccessController::load$($String* name, bool initialize) {
	$loadClass(AccessController, name, initialize, &_AccessController_ClassInfo_, clinit$AccessController, allocate$AccessController);
	return class$;
}

$Class* AccessController::class$ = nullptr;

	} // security
} // java