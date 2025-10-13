#ifndef _StringConcatFactoryInvariants_h_
#define _StringConcatFactoryInvariants_h_
//$ class StringConcatFactoryInvariants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TAG_ARG")
#undef TAG_ARG
#pragma push_macro("TAG_CONST")
#undef TAG_CONST

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

class $export StringConcatFactoryInvariants : public ::java::lang::Object {
	$class(StringConcatFactoryInvariants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringConcatFactoryInvariants();
	void init$();
	static void fail($String* msg, ::java::util::concurrent::Callable* runnable);
	static void failNPE($String* msg, ::java::util::concurrent::Callable* runnable);
	static $Object* lambda$main$0($String* methodName, ::java::lang::invoke::MethodType* mt);
	static $Object* lambda$main$1(::java::lang::invoke::MethodHandles$Lookup* lookup, ::java::lang::invoke::MethodType* mt);
	static $Object* lambda$main$10(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$11(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$12(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$13(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$14(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$15(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$16(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$17(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$18(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$19(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$2(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$20(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$21(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mtUnderThreshold);
	static $Object* lambda$main$24(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mtUnderThreshold, $String* recipeUnderThreshold, $Array<::java::lang::Object, 2>* constants);
	static $Object* lambda$main$27(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mtThreshold, $String* recipeThreshold);
	static $Object* lambda$main$28(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mtThreshold, $String* recipeThreshold);
	static $Object* lambda$main$29(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mtThreshold, $String* recipeThreshold);
	static $Object* lambda$main$3($String* methodName, ::java::lang::invoke::MethodType* mt, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$30(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mtThreshold, $String* recipeThreshold);
	static $Object* lambda$main$34(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$35(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static $Object* lambda$main$38($String* methodName, ::java::lang::invoke::MethodType* mtEmpty);
	static $Object* lambda$main$39($String* methodName, ::java::lang::invoke::MethodType* mtEmpty, $String* recipeEmpty);
	static $Object* lambda$main$4(::java::lang::invoke::MethodHandles$Lookup* lookup, ::java::lang::invoke::MethodType* mt, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$5(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts);
	static $Object* lambda$main$6(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mt, $ObjectArray* consts);
	static $Object* lambda$main$7(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mt, $String* recipe);
	static $Object* lambda$main$8(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName, ::java::lang::invoke::MethodType* mt, $String* recipe);
	static $Object* lambda$main$9(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* methodName);
	static void main($StringArray* args);
	static void ok($String* msg, ::java::util::concurrent::Callable* runnable);
	static void test($String* expected, $String* actual);
	static const char16_t TAG_ARG = ((char16_t)1);
	static const char16_t TAG_CONST = ((char16_t)2);
};

#pragma pop_macro("TAG_ARG")
#pragma pop_macro("TAG_CONST")

#endif // _StringConcatFactoryInvariants_h_