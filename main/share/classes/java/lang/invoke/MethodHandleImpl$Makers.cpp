#include <java/lang/invoke/MethodHandleImpl$Makers.h>
#include <java/lang/ClassValue.h>
#include <java/lang/invoke/MethodHandleImpl$Makers$1.h>
#include <java/lang/invoke/MethodHandleImpl$Makers$2.h>
#include <java/lang/invoke/MethodHandleImpl$Makers$3.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef PRODUCE_BLOCK_INLINING_FORM
#undef PRODUCE_REINVOKER_FORM
#undef TYPED_COLLECTORS

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl$Makers$1 = ::java::lang::invoke::MethodHandleImpl$Makers$1;
using $MethodHandleImpl$Makers$2 = ::java::lang::invoke::MethodHandleImpl$Makers$2;
using $MethodHandleImpl$Makers$3 = ::java::lang::invoke::MethodHandleImpl$Makers$3;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$Function* MethodHandleImpl$Makers::PRODUCE_BLOCK_INLINING_FORM = nullptr;
$Function* MethodHandleImpl$Makers::PRODUCE_REINVOKER_FORM = nullptr;
$ClassValue* MethodHandleImpl$Makers::TYPED_COLLECTORS = nullptr;

void MethodHandleImpl$Makers::init$() {
}

void MethodHandleImpl$Makers::clinit$($Class* clazz) {
	$assignStatic(MethodHandleImpl$Makers::PRODUCE_BLOCK_INLINING_FORM, $new($MethodHandleImpl$Makers$1));
	$assignStatic(MethodHandleImpl$Makers::PRODUCE_REINVOKER_FORM, $new($MethodHandleImpl$Makers$2));
	$assignStatic(MethodHandleImpl$Makers::TYPED_COLLECTORS, $new($MethodHandleImpl$Makers$3));
}

MethodHandleImpl$Makers::MethodHandleImpl$Makers() {
}

$Class* MethodHandleImpl$Makers::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PRODUCE_BLOCK_INLINING_FORM", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$Makers, PRODUCE_BLOCK_INLINING_FORM)},
		{"PRODUCE_REINVOKER_FORM", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$Makers, PRODUCE_REINVOKER_FORM)},
		{"TYPED_COLLECTORS", "Ljava/lang/ClassValue;", "Ljava/lang/ClassValue<[Ljava/lang/invoke/MethodHandle;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$Makers, TYPED_COLLECTORS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MethodHandleImpl$Makers, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$Makers", "java.lang.invoke.MethodHandleImpl", "Makers", $PRIVATE | $STATIC | $FINAL},
		{"java.lang.invoke.MethodHandleImpl$Makers$3", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandleImpl$Makers$2", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandleImpl$Makers$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$Makers",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$Makers, name, initialize, &classInfo$$, MethodHandleImpl$Makers::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$Makers);
	});
	return class$;
}

$Class* MethodHandleImpl$Makers::class$ = nullptr;

		} // invoke
	} // lang
} // java