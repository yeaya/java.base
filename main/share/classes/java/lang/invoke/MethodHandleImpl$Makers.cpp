#include <java/lang/invoke/MethodHandleImpl$Makers.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassValue.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleImpl$Makers$1.h>
#include <java/lang/invoke/MethodHandleImpl$Makers$2.h>
#include <java/lang/invoke/MethodHandleImpl$Makers$3.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef PRODUCE_REINVOKER_FORM
#undef PRODUCE_BLOCK_INLINING_FORM
#undef TYPED_COLLECTORS

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$Makers$1 = ::java::lang::invoke::MethodHandleImpl$Makers$1;
using $MethodHandleImpl$Makers$2 = ::java::lang::invoke::MethodHandleImpl$Makers$2;
using $MethodHandleImpl$Makers$3 = ::java::lang::invoke::MethodHandleImpl$Makers$3;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$Makers_FieldInfo_[] = {
	{"PRODUCE_BLOCK_INLINING_FORM", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$Makers, PRODUCE_BLOCK_INLINING_FORM)},
	{"PRODUCE_REINVOKER_FORM", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/LambdaForm;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$Makers, PRODUCE_REINVOKER_FORM)},
	{"TYPED_COLLECTORS", "Ljava/lang/ClassValue;", "Ljava/lang/ClassValue<[Ljava/lang/invoke/MethodHandle;>;", $STATIC | $FINAL, $staticField(MethodHandleImpl$Makers, TYPED_COLLECTORS)},
	{}
};

$MethodInfo _MethodHandleImpl$Makers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodHandleImpl$Makers::*)()>(&MethodHandleImpl$Makers::init$))},
	{}
};

$InnerClassInfo _MethodHandleImpl$Makers_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$Makers", "java.lang.invoke.MethodHandleImpl", "Makers", $PRIVATE | $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandleImpl$Makers$3", nullptr, nullptr, 0},
	{"java.lang.invoke.MethodHandleImpl$Makers$2", nullptr, nullptr, 0},
	{"java.lang.invoke.MethodHandleImpl$Makers$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$Makers_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$Makers",
	"java.lang.Object",
	nullptr,
	_MethodHandleImpl$Makers_FieldInfo_,
	_MethodHandleImpl$Makers_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$Makers_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$Makers($Class* clazz) {
	return $of($alloc(MethodHandleImpl$Makers));
}


$Function* MethodHandleImpl$Makers::PRODUCE_BLOCK_INLINING_FORM = nullptr;

$Function* MethodHandleImpl$Makers::PRODUCE_REINVOKER_FORM = nullptr;

$ClassValue* MethodHandleImpl$Makers::TYPED_COLLECTORS = nullptr;

void MethodHandleImpl$Makers::init$() {
}

void clinit$MethodHandleImpl$Makers($Class* class$) {
	$assignStatic(MethodHandleImpl$Makers::PRODUCE_BLOCK_INLINING_FORM, $new($MethodHandleImpl$Makers$1));
	$assignStatic(MethodHandleImpl$Makers::PRODUCE_REINVOKER_FORM, $new($MethodHandleImpl$Makers$2));
	$assignStatic(MethodHandleImpl$Makers::TYPED_COLLECTORS, $new($MethodHandleImpl$Makers$3));
}

MethodHandleImpl$Makers::MethodHandleImpl$Makers() {
}

$Class* MethodHandleImpl$Makers::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$Makers, name, initialize, &_MethodHandleImpl$Makers_ClassInfo_, clinit$MethodHandleImpl$Makers, allocate$MethodHandleImpl$Makers);
	return class$;
}

$Class* MethodHandleImpl$Makers::class$ = nullptr;

		} // invoke
	} // lang
} // java