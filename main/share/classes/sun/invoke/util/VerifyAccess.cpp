#include <sun/invoke/util/VerifyAccess.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/invoke/util/VerifyAccess$1.h>
#include <jcpp.h>

#undef MODULE_ALLOWED
#undef PACKAGE_ONLY
#undef PROTECTED_OR_PACKAGE_ALLOWED
#undef ALL_ACCESS_MODES
#undef UNCONDITIONAL_ALLOWED
#undef ORIGINAL_ALLOWED
#undef PACKAGE_ALLOWED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Modifier = ::java::lang::reflect::Modifier;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $VM = ::jdk::internal::misc::VM;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $VerifyAccess$1 = ::sun::invoke::util::VerifyAccess$1;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _VerifyAccess_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VerifyAccess, $assertionsDisabled)},
	{"UNCONDITIONAL_ALLOWED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, UNCONDITIONAL_ALLOWED)},
	{"ORIGINAL_ALLOWED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, ORIGINAL_ALLOWED)},
	{"MODULE_ALLOWED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, MODULE_ALLOWED)},
	{"PACKAGE_ONLY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, PACKAGE_ONLY)},
	{"PACKAGE_ALLOWED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, PACKAGE_ALLOWED)},
	{"PROTECTED_OR_PACKAGE_ALLOWED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, PROTECTED_OR_PACKAGE_ALLOWED)},
	{"ALL_ACCESS_MODES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyAccess, ALL_ACCESS_MODES)},
	{}
};

$MethodInfo _VerifyAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VerifyAccess::*)()>(&VerifyAccess::init$))},
	{"classLoaderIsAncestor", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::classLoaderIsAncestor))},
	{"getClassModifiers", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $STATIC, $method(static_cast<int32_t(*)($Class*)>(&VerifyAccess::getClassModifiers))},
	{"getOutermostEnclosingClass", "(Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Class*)>(&VerifyAccess::getOutermostEnclosingClass))},
	{"isClassAccessible", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;I)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;I)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*,$Class*,int32_t)>(&VerifyAccess::isClassAccessible))},
	{"isMemberAccessible", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/lang/Class;Ljava/lang/Class;I)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;ILjava/lang/Class<*>;Ljava/lang/Class<*>;I)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*,int32_t,$Class*,$Class*,int32_t)>(&VerifyAccess::isMemberAccessible))},
	{"isModuleAccessible", "(Ljava/lang/Class;Ljava/lang/Module;Ljava/lang/Module;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Module;Ljava/lang/Module;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Module*,$Module*)>(&VerifyAccess::isModuleAccessible))},
	{"isRelatedClass", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::isRelatedClass))},
	{"isSameModule", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::isSameModule))},
	{"isSamePackage", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::isSamePackage))},
	{"isSamePackageMember", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::isSamePackageMember))},
	{"isSubClass", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::isSubClass))},
	{"isTypeVisible", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$Class*)>(&VerifyAccess::isTypeVisible))},
	{"isTypeVisible", "(Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Z", "(Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($MethodType*,$Class*)>(&VerifyAccess::isTypeVisible))},
	{"loadersAreRelated", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ClassLoader*,$ClassLoader*,bool)>(&VerifyAccess::loadersAreRelated))},
	{}
};

$InnerClassInfo _VerifyAccess_InnerClassesInfo_[] = {
	{"sun.invoke.util.VerifyAccess$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VerifyAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.invoke.util.VerifyAccess",
	"java.lang.Object",
	nullptr,
	_VerifyAccess_FieldInfo_,
	_VerifyAccess_MethodInfo_,
	nullptr,
	nullptr,
	_VerifyAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.invoke.util.VerifyAccess$1"
};

$Object* allocate$VerifyAccess($Class* clazz) {
	return $of($alloc(VerifyAccess));
}

bool VerifyAccess::$assertionsDisabled = false;

void VerifyAccess::init$() {
}

bool VerifyAccess::isMemberAccessible($Class* refc, $Class* defc, int32_t mods, $Class* lookupClass, $Class* prevLookupClass, int32_t allowedModes) {
	$init(VerifyAccess);
	if (allowedModes == 0) {
		return false;
	}
	if (!VerifyAccess::$assertionsDisabled && !(((int32_t)(allowedModes & (uint32_t)~((((VerifyAccess::ALL_ACCESS_MODES | VerifyAccess::PACKAGE_ALLOWED) | VerifyAccess::MODULE_ALLOWED) | VerifyAccess::UNCONDITIONAL_ALLOWED) | VerifyAccess::ORIGINAL_ALLOWED))) == 0)) {
		$throwNew($AssertionError);
	}
	if (!isClassAccessible(refc, lookupClass, prevLookupClass, allowedModes)) {
		return false;
	}
	if (defc == lookupClass && ((int32_t)(allowedModes & (uint32_t)2)) != 0) {
		return true;
	}
	{
		bool canAccess = false;
		switch ((int32_t)(mods & (uint32_t)VerifyAccess::ALL_ACCESS_MODES)) {
		case 1:
			{
				if (!VerifyAccess::$assertionsDisabled && !(((int32_t)(allowedModes & (uint32_t)1)) != 0 || ((int32_t)(allowedModes & (uint32_t)VerifyAccess::UNCONDITIONAL_ALLOWED)) != 0)) {
					$throwNew($AssertionError);
				}
				return true;
			}
		case 4:
			{
				if (!VerifyAccess::$assertionsDisabled && ! !$nc(defc)->isInterface()) {
					$throwNew($AssertionError);
				}
				if (((int32_t)(allowedModes & (uint32_t)VerifyAccess::PROTECTED_OR_PACKAGE_ALLOWED)) != 0 && isSamePackage(defc, lookupClass)) {
					return true;
				}
				if (((int32_t)(allowedModes & (uint32_t)4)) == 0) {
					return false;
				}
				if (((int32_t)(mods & (uint32_t)8)) != 0 && !isRelatedClass(refc, lookupClass)) {
					return false;
				}
				if (((int32_t)(allowedModes & (uint32_t)4)) != 0 && isSubClass(lookupClass, defc)) {
					return true;
				}
				return false;
			}
		case VerifyAccess::PACKAGE_ONLY:
			{
				if (!VerifyAccess::$assertionsDisabled && ! !$nc(defc)->isInterface()) {
					$throwNew($AssertionError);
				}
				return (((int32_t)(allowedModes & (uint32_t)VerifyAccess::PACKAGE_ALLOWED)) != 0 && isSamePackage(defc, lookupClass));
			}
		case 2:
			{
				canAccess = (((int32_t)(allowedModes & (uint32_t)2)) != 0 && $Reflection::areNestMates(defc, lookupClass));
				if (!VerifyAccess::$assertionsDisabled && !((canAccess && refc == defc) || !canAccess)) {
					$throwNew($AssertionError);
				}
				return canAccess;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"bad modifiers: "_s, $($Modifier::toString(mods))}));
			}
		}
	}
}

bool VerifyAccess::isRelatedClass($Class* refc, $Class* lookupClass) {
	$init(VerifyAccess);
	bool var$0 = refc == lookupClass || isSubClass(refc, lookupClass);
	return (var$0 || isSubClass(lookupClass, refc));
}

bool VerifyAccess::isSubClass($Class* lookupClass, $Class* defc) {
	$init(VerifyAccess);
	bool var$0 = $nc(defc)->isAssignableFrom(lookupClass);
	return var$0 && !$nc(lookupClass)->isInterface();
}

int32_t VerifyAccess::getClassModifiers($Class* c) {
	$init(VerifyAccess);
	bool var$0 = $nc(c)->isArray();
	if (var$0 || $nc(c)->isPrimitive()) {
		return c->getModifiers();
	}
	return $Reflection::getClassAccessFlags(c);
}

bool VerifyAccess::isClassAccessible($Class* refc, $Class* lookupClass, $Class* prevLookupClass, int32_t allowedModes) {
	$init(VerifyAccess);
	if (allowedModes == 0) {
		return false;
	}
	if (!VerifyAccess::$assertionsDisabled && !(((int32_t)(allowedModes & (uint32_t)~((((VerifyAccess::ALL_ACCESS_MODES | VerifyAccess::PACKAGE_ALLOWED) | VerifyAccess::MODULE_ALLOWED) | VerifyAccess::UNCONDITIONAL_ALLOWED) | VerifyAccess::ORIGINAL_ALLOWED))) == 0)) {
		$throwNew($AssertionError);
	}
	if (((int32_t)(allowedModes & (uint32_t)VerifyAccess::PACKAGE_ALLOWED)) != 0 && isSamePackage(lookupClass, refc)) {
		return true;
	}
	int32_t mods = getClassModifiers(refc);
	if ($Modifier::isPublic(mods)) {
		$var($Module, lookupModule, $nc(lookupClass)->getModule());
		$var($Module, refModule, $nc(refc)->getModule());
		if (lookupModule == nullptr) {
			if (!VerifyAccess::$assertionsDisabled && !(refModule == nullptr)) {
				$throwNew($AssertionError);
			}
			return true;
		}
		if (((int32_t)(allowedModes & (uint32_t)VerifyAccess::UNCONDITIONAL_ALLOWED)) != 0) {
			return $nc(refModule)->isExported($(refc->getPackageName()));
		}
		if (lookupModule == refModule && prevLookupClass == nullptr) {
			if (((int32_t)(allowedModes & (uint32_t)VerifyAccess::MODULE_ALLOWED)) != 0) {
				return true;
			}
			if (!VerifyAccess::$assertionsDisabled && !(((int32_t)(allowedModes & (uint32_t)1)) != 0)) {
				$throwNew($AssertionError);
			}
			return $nc(refModule)->isExported($(refc->getPackageName()));
		}
		$var($Module, prevLookupModule, prevLookupClass != nullptr ? $nc(prevLookupClass)->getModule() : ($Module*)nullptr);
		if (!VerifyAccess::$assertionsDisabled && !(refModule != lookupModule || refModule != prevLookupModule)) {
			$throwNew($AssertionError);
		}
		if (isModuleAccessible(refc, lookupModule, prevLookupModule)) {
			return true;
		}
		if (!$VM::isModuleSystemInited()) {
			return true;
		}
		return false;
	}
	return false;
}

bool VerifyAccess::isModuleAccessible($Class* refc, $Module* m1, $Module* m2) {
	$init(VerifyAccess);
	$var($Module, refModule, $nc(refc)->getModule());
	if (!VerifyAccess::$assertionsDisabled && !(refModule != m1 || refModule != m2)) {
		$throwNew($AssertionError);
	}
	int32_t mods = getClassModifiers(refc);
	if ($Modifier::isPublic(mods)) {
		bool var$0 = $nc(m1)->canRead(refModule);
		if (var$0 && (m2 == nullptr || $nc(m2)->canRead(refModule))) {
			$var($String, pn, refc->getPackageName());
			bool var$1 = $nc(refModule)->isExported(pn, m1);
			if (var$1 && (m2 == nullptr || $nc(refModule)->isExported(pn, m2))) {
				return true;
			}
		}
	}
	return false;
}

bool VerifyAccess::isTypeVisible($Class* type, $Class* refc) {
	$init(VerifyAccess);
	$beforeCallerSensitive();
	if (type == refc) {
		return true;
	}
	while ($nc(type)->isArray()) {
		type = type->getComponentType();
	}
	$load($Object);
	if ($nc(type)->isPrimitive() || type == $Object::class$) {
		return true;
	}
	$var($ClassLoader, typeLoader, $nc(type)->getClassLoader());
	$var($ClassLoader, refcLoader, $nc(refc)->getClassLoader());
	if (typeLoader == refcLoader) {
		return true;
	}
	if (refcLoader == nullptr && typeLoader != nullptr) {
		return false;
	}
	if (typeLoader == nullptr && $nc($(type->getName()))->startsWith("java."_s)) {
		return true;
	}
	$var($String, name, type->getName());
	$Class* res = $cast($Class, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($VerifyAccess$1, name, refcLoader))));
	return (type == res);
}

bool VerifyAccess::isTypeVisible($MethodType* type, $Class* refc) {
	$init(VerifyAccess);
	if (!isTypeVisible($($cast($Class, $nc(type)->returnType())), refc)) {
		return false;
	}
	{
		int32_t n = 0;
		int32_t max = $nc(type)->parameterCount();
		for (; n < max; ++n) {
			if (!isTypeVisible($($cast($Class, type->parameterType(n))), refc)) {
				return false;
			}
		}
	}
	return true;
}

bool VerifyAccess::isSameModule($Class* class1, $Class* class2) {
	$init(VerifyAccess);
	return $nc(class1)->getModule() == $nc(class2)->getModule();
}

bool VerifyAccess::isSamePackage($Class* class1, $Class* class2) {
	$init(VerifyAccess);
	$beforeCallerSensitive();
	if (class1 == class2) {
		return true;
	}
	if ($nc(class1)->getClassLoader() != $nc(class2)->getClassLoader()) {
		return false;
	}
	return $nc(class1)->getPackageName() == $nc(class2)->getPackageName();
}

bool VerifyAccess::isSamePackageMember($Class* class1, $Class* class2) {
	$init(VerifyAccess);
	if (class1 == class2) {
		return true;
	}
	if (!isSamePackage(class1, class2)) {
		return false;
	}
	if (getOutermostEnclosingClass(class1) != getOutermostEnclosingClass(class2)) {
		return false;
	}
	return true;
}

$Class* VerifyAccess::getOutermostEnclosingClass($Class* c) {
	$init(VerifyAccess);
	$beforeCallerSensitive();
	$Class* pkgmem = c;
	{
		$Class* enc = c;
		for (; (enc = $nc(enc)->getEnclosingClass()) != nullptr;) {
			pkgmem = enc;
		}
	}
	return pkgmem;
}

bool VerifyAccess::loadersAreRelated($ClassLoader* loader1, $ClassLoader* loader2, bool loader1MustBeParent) {
	$init(VerifyAccess);
	$beforeCallerSensitive();
	if (loader1 == loader2 || loader1 == nullptr || (loader2 == nullptr && !loader1MustBeParent)) {
		return true;
	}
	{
		$var($ClassLoader, scan2, loader2);
		for (; scan2 != nullptr; $assign(scan2, $nc(scan2)->getParent())) {
			if (scan2 == loader1) {
				return true;
			}
		}
	}
	if (loader1MustBeParent) {
		return false;
	}
	{
		$var($ClassLoader, scan1, loader1);
		for (; scan1 != nullptr; $assign(scan1, $nc(scan1)->getParent())) {
			if (scan1 == loader2) {
				return true;
			}
		}
	}
	return false;
}

bool VerifyAccess::classLoaderIsAncestor($Class* parentClass, $Class* childClass) {
	$init(VerifyAccess);
	$beforeCallerSensitive();
	$var($ClassLoader, var$0, $nc(parentClass)->getClassLoader());
	return loadersAreRelated(var$0, $($nc(childClass)->getClassLoader()), true);
}

void clinit$VerifyAccess($Class* class$) {
	VerifyAccess::$assertionsDisabled = !VerifyAccess::class$->desiredAssertionStatus();
}

VerifyAccess::VerifyAccess() {
}

$Class* VerifyAccess::load$($String* name, bool initialize) {
	$loadClass(VerifyAccess, name, initialize, &_VerifyAccess_ClassInfo_, clinit$VerifyAccess, allocate$VerifyAccess);
	return class$;
}

$Class* VerifyAccess::class$ = nullptr;

		} // util
	} // invoke
} // sun