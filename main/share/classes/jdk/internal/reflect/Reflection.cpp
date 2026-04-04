#include <jdk/internal/reflect/Reflection.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalCallerException.h>
#include <java/lang/Module.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/JavaLangReflectAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/reflect/CallerSensitive.h>
#include <jcpp.h>

#include "StackWalk.h"
#include <java/lang/Machine.h>

#undef ALL_MEMBERS
#undef WILDCARD

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $MemberArray = $Array<::java::lang::reflect::Member>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalCallerException = ::java::lang::IllegalCallerException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Member = ::java::lang::reflect::Member;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $VM = ::jdk::internal::misc::VM;
using $CallerSensitive = ::jdk::internal::reflect::CallerSensitive;

namespace jdk {
	namespace internal {
		namespace reflect {

$String* forLambdaClass($String* className) {
	if (className == nullptr) {
		return nullptr;
	}
 //   int32_t index = className->indexOf("$$Lambda");
  //  if (index > 0) {
  //	  return className->substring(0, index);
   // }
	if (::java::lang::Machine::isLambdaClass(className)) {
		return ::java::lang::Machine::getLambdaHoder(className);
	}
	return className;
}

$volatile($Map*) Reflection::fieldFilterMap = nullptr;
$volatile($Map*) Reflection::methodFilterMap = nullptr;
$String* Reflection::WILDCARD = nullptr;
$Set* Reflection::ALL_MEMBERS = nullptr;

void Reflection::init$() {
}

$Class* Reflection::getCallerClass() {
	::java::lang::Class* callerClass = ::java::lang::CallerHelper::getCallerClass();
	if (callerClass != nullptr) {
		return callerClass;
	}
	return StackWalk::getCallerClass();
}

int32_t Reflection::getClassAccessFlags($Class* c) {
	if ($nullcheck(c)->isPrimitive()) {
		return $Modifier::ABSTRACT | $Modifier::FINAL | $Modifier::PUBLIC;
	}
	#define JVM_ACC_WRITTEN_FLAGS 0x00007FFF
	return c->getModifiers() & JVM_ACC_WRITTEN_FLAGS;
}

void Reflection::ensureMemberAccess($Class* currentClass, $Class* memberClass, $Class* targetClass, int32_t modifiers) {
	$init(Reflection);
	if (!verifyMemberAccess(currentClass, memberClass, targetClass, modifiers)) {
		$throw($(newIllegalAccessException(currentClass, memberClass, targetClass, modifiers)));
	}
}

void Reflection::ensureNativeAccess($Class* currentClass) {
	$init(Reflection);
	$useLocalObjectStack();
	$var($Module, module, $nc(currentClass)->getModule());
	if (!$$nc($SharedSecrets::getJavaLangAccess())->isEnableNativeAccess(module)) {
		$throwNew($IllegalCallerException, $$str({"Illegal native access from: "_s, module}));
	}
}

bool Reflection::verifyMemberAccess($Class* currentClass, $Class* memberClass, $Class* targetClass, int32_t modifiers) {
	$init(Reflection);
	$Objects::requireNonNull(currentClass);
	$Objects::requireNonNull(memberClass);
	if (currentClass == memberClass) {
		return true;
	}
	if (!verifyModuleAccess($(currentClass->getModule()), memberClass)) {
		return false;
	}
	bool gotIsSameClassPackage = false;
	bool isSameClassPackage = false;
	if (!$Modifier::isPublic(getClassAccessFlags(memberClass))) {
		isSameClassPackage = Reflection::isSameClassPackage(currentClass, memberClass);
		gotIsSameClassPackage = true;
		if (!isSameClassPackage) {
			return false;
		}
	}
	if ($Modifier::isPublic(modifiers)) {
		return true;
	}
	if ($Modifier::isPrivate(modifiers)) {
		if (areNestMates(currentClass, memberClass)) {
			return true;
		}
	}
	bool successSoFar = false;
	if ($Modifier::isProtected(modifiers)) {
		if (isSubclassOf(currentClass, memberClass)) {
			successSoFar = true;
		}
	}
	if (!successSoFar && !$Modifier::isPrivate(modifiers)) {
		if (!gotIsSameClassPackage) {
			isSameClassPackage = Reflection::isSameClassPackage(currentClass, memberClass);
			gotIsSameClassPackage = true;
		}
		if (isSameClassPackage) {
			successSoFar = true;
		}
	}
	if (!successSoFar) {
		return false;
	}
	if (targetClass != nullptr && $Modifier::isProtected(modifiers) && targetClass != currentClass) {
		if (!gotIsSameClassPackage) {
			isSameClassPackage = Reflection::isSameClassPackage(currentClass, memberClass);
			gotIsSameClassPackage = true;
		}
		if (!isSameClassPackage) {
			if (!isSubclassOf(targetClass, currentClass)) {
				return false;
			}
		}
	}
	return true;
}

bool Reflection::verifyPublicMemberAccess($Class* memberClass, int32_t modifiers) {
	$init(Reflection);
	$useLocalObjectStack();
	$var($Module, m, $nc(memberClass)->getModule());
	bool var$1 = $Modifier::isPublic(modifiers);
	bool var$0 = var$1 && $nc(m)->isExported($(memberClass->getPackageName()));
	return var$0 && $Modifier::isPublic(Reflection::getClassAccessFlags(memberClass));
}

bool Reflection::verifyModuleAccess($Module* currentModule, $Class* memberClass) {
	$init(Reflection);
	$useLocalObjectStack();
	$var($Module, memberModule, $nc(memberClass)->getModule());
	if (currentModule == memberModule) {
		return true;
	} else {
		$var($String, pkg, memberClass->getPackageName());
		return $nc(memberModule)->isExported(pkg, currentModule);
	}
}

bool Reflection::isSameClassPackage($Class* c1, $Class* c2) {
	$init(Reflection);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($nc(c1)->getClassLoader() != $nc(c2)->getClassLoader()) {
		return false;
	}
	$var($Object, var$0, c1->getPackageName());
	return $Objects::equals(var$0, $(c2->getPackageName()));
}

bool Reflection::isSubclassOf($Class* queryClass, $Class* ofClass) {
	$init(Reflection);
	while (queryClass != nullptr) {
		if (queryClass == ofClass) {
			return true;
		}
		queryClass = queryClass->getSuperclass();
	}
	return false;
}

void Reflection::registerFieldsToFilter($Class* containingClass, $Set* fieldNames) {
	$init(Reflection);
	$synchronized(class$) {
		$assignStatic(Reflection::fieldFilterMap, registerFilter(Reflection::fieldFilterMap, containingClass, fieldNames));
	}
}

void Reflection::registerMethodsToFilter($Class* containingClass, $Set* methodNames) {
	$init(Reflection);
	$synchronized(class$) {
		$assignStatic(Reflection::methodFilterMap, registerFilter(Reflection::methodFilterMap, containingClass, methodNames));
	}
}

$Map* Reflection::registerFilter($Map* map$renamed, $Class* containingClass, $Set* names) {
	$init(Reflection);
	$useLocalObjectStack();
	$var($Map, map, map$renamed);
	if ($nc(map)->get(containingClass) != nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Filter already registered: "_s, containingClass}));
	}
	$assign(map, $new($HashMap, map));
	map->put(containingClass, $($Set::copyOf(names)));
	return map;
}

$FieldArray* Reflection::filterFields($Class* containingClass, $FieldArray* fields) {
	$init(Reflection);
	if (Reflection::fieldFilterMap == nullptr) {
		return fields;
	}
	return $cast($FieldArray, filter($cast($MemberArray, fields), $$cast($Set, $nc(Reflection::fieldFilterMap)->get(containingClass))));
}

$MethodArray* Reflection::filterMethods($Class* containingClass, $MethodArray* methods) {
	$init(Reflection);
	if (Reflection::methodFilterMap == nullptr) {
		return methods;
	}
	return $cast($MethodArray, filter($cast($MemberArray, methods), $$cast($Set, $nc(Reflection::methodFilterMap)->get(containingClass))));
}

$MemberArray* Reflection::filter($MemberArray* members, $Set* filteredNames) {
	$init(Reflection);
	$useLocalObjectStack();
	if ((filteredNames == nullptr) || ($nc(members)->length == 0)) {
		return members;
	}
	$Class* memberType = $nc($nc(members)->get(0))->getClass();
	if ($nc(filteredNames)->contains(Reflection::WILDCARD)) {
		return $cast($MemberArray, $1Array::newInstance(memberType, 0));
	}
	int32_t numNewMembers = 0;
	{
		$var($MemberArray, arr$, members);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Member, member, arr$->get(i$));
			if (!filteredNames->contains($($nc(member)->getName()))) {
				++numNewMembers;
			}
		}
	}
	$var($MemberArray, newMembers, $cast($MemberArray, $1Array::newInstance(memberType, numNewMembers)));
	int32_t destIdx = 0;
	{
		$var($MemberArray, arr$, members);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Member, member, arr$->get(i$));
			if (!filteredNames->contains($($nc(member)->getName()))) {
				newMembers->set(destIdx++, member);
			}
		}
	}
	return newMembers;
}

bool Reflection::isCallerSensitive($Method* m) {
	$init(Reflection);
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $nc($nc(m)->getDeclaringClass())->getClassLoader());
	if ($VM::isSystemDomainLoader(loader)) {
		$load($CallerSensitive);
		return m->isAnnotationPresent($CallerSensitive::class$);
	}
	return false;
}

bool Reflection::isTrustedFinalField($Field* field) {
	$init(Reflection);
	return $$nc($SharedSecrets::getJavaLangReflectAccess())->isTrustedFinalField(field);
}

$IllegalAccessException* Reflection::newIllegalAccessException($Class* currentClass, $Class* memberClass, $Class* targetClass, int32_t modifiers) {
	$init(Reflection);
	$useLocalObjectStack();
	if (currentClass == nullptr) {
		return newIllegalAccessException(memberClass, modifiers);
	}
	$var($String, currentSuffix, ""_s);
	$var($String, memberSuffix, ""_s);
	$var($Module, m1, $nc(currentClass)->getModule());
	if ($nc(m1)->isNamed()) {
		$assign(currentSuffix, $str({" (in "_s, m1, ")"_s}));
	}
	$var($Module, m2, $nc(memberClass)->getModule());
	if ($nc(m2)->isNamed()) {
		$assign(memberSuffix, $str({" (in "_s, m2, ")"_s}));
	}
	$var($String, memberPackageName, memberClass->getPackageName());
	$var($String, msg, $str({currentClass, currentSuffix, " cannot access "_s}));
	if (m2->isExported(memberPackageName, m1)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("a member of "_s);
		var$0->append(memberClass);
		var$0->append(memberSuffix);
		var$0->append(" with modifiers \""_s);
		var$0->append($($Modifier::toString(modifiers)));
		var$0->append("\""_s);
		$plusAssign(msg, $$str(var$0));
	} else {
		$plusAssign(msg, $$str({memberClass, memberSuffix, " because "_s, m2, " does not export "_s, memberPackageName}));
		if (m2->isNamed()) {
			$plusAssign(msg, $$str({" to "_s, m1}));
		}
	}
	return $new($IllegalAccessException, msg);
}

$IllegalAccessException* Reflection::newIllegalAccessException($Class* memberClass, int32_t modifiers) {
	$init(Reflection);
	$useLocalObjectStack();
	$var($String, memberSuffix, ""_s);
	$var($Module, m2, $nc(memberClass)->getModule());
	if ($nc(m2)->isNamed()) {
		$assign(memberSuffix, $str({" (in "_s, m2, ")"_s}));
	}
	$var($String, memberPackageName, memberClass->getPackageName());
	$var($String, msg, "JNI attached native thread (null caller frame) cannot access "_s);
	if (m2->isExported(memberPackageName)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("a member of "_s);
		var$0->append(memberClass);
		var$0->append(memberSuffix);
		var$0->append(" with modifiers \""_s);
		var$0->append($($Modifier::toString(modifiers)));
		var$0->append("\""_s);
		$plusAssign(msg, $$str(var$0));
	} else {
		$plusAssign(msg, $$str({memberClass, memberSuffix, " because "_s, m2, " does not export "_s, memberPackageName}));
	}
	return $new($IllegalAccessException, msg);
}

bool Reflection::areNestMates($Class* currentClass, $Class* memberClass) {
	$Class* currentClassNestHost = currentClass->getNestHost();
	$Class* memberClassNestHost = memberClass->getNestHost();
	if (currentClassNestHost != nullptr && currentClassNestHost == memberClassNestHost) {
		return true;
	}
	$var($String, curreentClassName, forLambdaClass(currentClass->name));
	$var($String, memberClassName, forLambdaClass(memberClass->name));
	if (curreentClassName == nullptr) {
		return false;
	}
	return curreentClassName->equals(memberClassName);
}

void Reflection::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Reflection::WILDCARD, "*"_s);
	$assignStatic(Reflection::ALL_MEMBERS, $Set::of(Reflection::WILDCARD));
	{
		$var($Object, var$0, Reflection::class$);
		$var($Object, var$1, Reflection::ALL_MEMBERS);
		$load($AccessibleObject);
		$var($Object, var$2, $AccessibleObject::class$);
		$var($Object, var$3, Reflection::ALL_MEMBERS);
		$var($Object, var$4, $Class::class$);
		$var($Object, var$5, $Set::of("classLoader"_s, "classData"_s));
		$load($ClassLoader);
		$var($Object, var$6, $ClassLoader::class$);
		$var($Object, var$7, Reflection::ALL_MEMBERS);
		$load($Constructor);
		$var($Object, var$8, $Constructor::class$);
		$var($Object, var$9, Reflection::ALL_MEMBERS);
		$load($Field);
		$var($Object, var$10, $Field::class$);
		$var($Object, var$11, Reflection::ALL_MEMBERS);
		$load($Method);
		$var($Object, var$12, $Method::class$);
		$var($Object, var$13, Reflection::ALL_MEMBERS);
		$load($Module);
		$var($Object, var$14, $Module::class$);
		$var($Object, var$15, Reflection::ALL_MEMBERS);
		$var($Object, var$16, $System::class$);
		$assignStatic(Reflection::fieldFilterMap, $Map::of(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, var$13, var$14, var$15, var$16, $($Set::of("security"_s))));
		$assignStatic(Reflection::methodFilterMap, $Map::of());
	}
}

Reflection::Reflection() {
}

$Class* Reflection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fieldFilterMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(Reflection, fieldFilterMap)},
		{"methodFilterMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(Reflection, methodFilterMap)},
		{"WILDCARD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Reflection, WILDCARD)},
		{"ALL_MEMBERS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Reflection, ALL_MEMBERS)},
		{}
	};
	$CompoundAttribute getCallerClassmethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getClassAccessFlagsmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Reflection, init$, void)},
		{"areNestMates", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC | $NATIVE, $staticMethod(Reflection, areNestMates, bool, $Class*, $Class*)},
		{"ensureMemberAccess", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;I)V", $PUBLIC | $STATIC, $staticMethod(Reflection, ensureMemberAccess, void, $Class*, $Class*, $Class*, int32_t), "java.lang.IllegalAccessException"},
		{"ensureNativeAccess", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(Reflection, ensureNativeAccess, void, $Class*)},
		{"filter", "([Ljava/lang/reflect/Member;Ljava/util/Set;)[Ljava/lang/reflect/Member;", "([Ljava/lang/reflect/Member;Ljava/util/Set<Ljava/lang/String;>;)[Ljava/lang/reflect/Member;", $PRIVATE | $STATIC, $staticMethod(Reflection, filter, $MemberArray*, $MemberArray*, $Set*)},
		{"filterFields", "(Ljava/lang/Class;[Ljava/lang/reflect/Field;)[Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;[Ljava/lang/reflect/Field;)[Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $staticMethod(Reflection, filterFields, $FieldArray*, $Class*, $FieldArray*)},
		{"filterMethods", "(Ljava/lang/Class;[Ljava/lang/reflect/Method;)[Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;[Ljava/lang/reflect/Method;)[Ljava/lang/reflect/Method;", $PUBLIC | $STATIC, $staticMethod(Reflection, filterMethods, $MethodArray*, $Class*, $MethodArray*)},
		{"getCallerClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $STATIC | $NATIVE, $staticMethod(Reflection, getCallerClass, $Class*), nullptr, nullptr, getCallerClassmethodAnnotations$$},
		{"getClassAccessFlags", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC | $STATIC | $NATIVE, $staticMethod(Reflection, getClassAccessFlags, int32_t, $Class*), nullptr, nullptr, getClassAccessFlagsmethodAnnotations$$},
		{"isCallerSensitive", "(Ljava/lang/reflect/Method;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Reflection, isCallerSensitive, bool, $Method*)},
		{"isSameClassPackage", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $staticMethod(Reflection, isSameClassPackage, bool, $Class*, $Class*)},
		{"isSubclassOf", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $STATIC, $staticMethod(Reflection, isSubclassOf, bool, $Class*, $Class*)},
		{"isTrustedFinalField", "(Ljava/lang/reflect/Field;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Reflection, isTrustedFinalField, bool, $Field*)},
		{"newIllegalAccessException", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;I)Ljava/lang/IllegalAccessException;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;I)Ljava/lang/IllegalAccessException;", $PUBLIC | $STATIC, $staticMethod(Reflection, newIllegalAccessException, $IllegalAccessException*, $Class*, $Class*, $Class*, int32_t)},
		{"newIllegalAccessException", "(Ljava/lang/Class;I)Ljava/lang/IllegalAccessException;", "(Ljava/lang/Class<*>;I)Ljava/lang/IllegalAccessException;", $PRIVATE | $STATIC, $staticMethod(Reflection, newIllegalAccessException, $IllegalAccessException*, $Class*, int32_t)},
		{"registerFieldsToFilter", "(Ljava/lang/Class;Ljava/util/Set;)V", "(Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(Reflection, registerFieldsToFilter, void, $Class*, $Set*)},
		{"registerFilter", "(Ljava/util/Map;Ljava/lang/Class;Ljava/util/Set;)Ljava/util/Map;", "(Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;)Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE | $STATIC, $staticMethod(Reflection, registerFilter, $Map*, $Map*, $Class*, $Set*)},
		{"registerMethodsToFilter", "(Ljava/lang/Class;Ljava/util/Set;)V", "(Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(Reflection, registerMethodsToFilter, void, $Class*, $Set*)},
		{"verifyMemberAccess", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;I)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;I)Z", $PUBLIC | $STATIC, $staticMethod(Reflection, verifyMemberAccess, bool, $Class*, $Class*, $Class*, int32_t)},
		{"verifyModuleAccess", "(Ljava/lang/Module;Ljava/lang/Class;)Z", "(Ljava/lang/Module;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $staticMethod(Reflection, verifyModuleAccess, bool, $Module*, $Class*)},
		{"verifyPublicMemberAccess", "(Ljava/lang/Class;I)Z", "(Ljava/lang/Class<*>;I)Z", $PUBLIC | $STATIC, $staticMethod(Reflection, verifyPublicMemberAccess, bool, $Class*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.reflect.Reflection",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Reflection, name, initialize, &classInfo$$, Reflection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Reflection);
	});
	return class$;
}

$Class* Reflection::class$ = nullptr;

		} // reflect
	} // internal
} // jdk