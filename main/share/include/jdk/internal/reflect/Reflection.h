#ifndef _jdk_internal_reflect_Reflection_h_
#define _jdk_internal_reflect_Reflection_h_
//$ class jdk.internal.reflect.Reflection
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_MEMBERS")
#undef ALL_MEMBERS
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace java {
	namespace lang {
		class IllegalAccessException;
		class Module;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
			class Member;
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class $import Reflection : public ::java::lang::Object {
	$class(Reflection, $PRELOAD, ::java::lang::Object)
public:
	Reflection();
	void init$();
	static bool areNestMates($Class* currentClass, $Class* memberClass);
	static void ensureMemberAccess($Class* currentClass, $Class* memberClass, $Class* targetClass, int32_t modifiers);
	static void ensureNativeAccess($Class* currentClass);
	static $Array<::java::lang::reflect::Member>* filter($Array<::java::lang::reflect::Member>* members, ::java::util::Set* filteredNames);
	static $Array<::java::lang::reflect::Field>* filterFields($Class* containingClass, $Array<::java::lang::reflect::Field>* fields);
	static $Array<::java::lang::reflect::Method>* filterMethods($Class* containingClass, $Array<::java::lang::reflect::Method>* methods);
	static $Class* getCallerClass();
	static int32_t getClassAccessFlags($Class* c);
	static bool isCallerSensitive(::java::lang::reflect::Method* m);
	static bool isSameClassPackage($Class* c1, $Class* c2);
	static bool isSubclassOf($Class* queryClass, $Class* ofClass);
	static bool isTrustedFinalField(::java::lang::reflect::Field* field);
	static ::java::lang::IllegalAccessException* newIllegalAccessException($Class* currentClass, $Class* memberClass, $Class* targetClass, int32_t modifiers);
	static ::java::lang::IllegalAccessException* newIllegalAccessException($Class* memberClass, int32_t modifiers);
	static void registerFieldsToFilter($Class* containingClass, ::java::util::Set* fieldNames);
	static ::java::util::Map* registerFilter(::java::util::Map* map, $Class* containingClass, ::java::util::Set* names);
	static void registerMethodsToFilter($Class* containingClass, ::java::util::Set* methodNames);
	static bool verifyMemberAccess($Class* currentClass, $Class* memberClass, $Class* targetClass, int32_t modifiers);
	static bool verifyModuleAccess(::java::lang::Module* currentModule, $Class* memberClass);
	static bool verifyPublicMemberAccess($Class* memberClass, int32_t modifiers);
	static $volatile(::java::util::Map*) fieldFilterMap;
	static $volatile(::java::util::Map*) methodFilterMap;
	static $String* WILDCARD;
	static ::java::util::Set* ALL_MEMBERS;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("ALL_MEMBERS")
#pragma pop_macro("WILDCARD")

#endif // _jdk_internal_reflect_Reflection_h_