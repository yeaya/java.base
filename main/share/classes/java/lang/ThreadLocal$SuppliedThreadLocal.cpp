#include <java/lang/ThreadLocal$SuppliedThreadLocal.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Objects = ::java::util::Objects;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace lang {

$FieldInfo _ThreadLocal$SuppliedThreadLocal_FieldInfo_[] = {
	{"supplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+TT;>;", $PRIVATE | $FINAL, $field(ThreadLocal$SuppliedThreadLocal, supplier)},
	{}
};

$MethodInfo _ThreadLocal$SuppliedThreadLocal_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<+TT;>;)V", 0, $method(static_cast<void(ThreadLocal$SuppliedThreadLocal::*)($Supplier*)>(&ThreadLocal$SuppliedThreadLocal::init$))},
	{"initialValue", "()Ljava/lang/Object;", "()TT;", $PROTECTED},
	{}
};

$InnerClassInfo _ThreadLocal$SuppliedThreadLocal_InnerClassesInfo_[] = {
	{"java.lang.ThreadLocal$SuppliedThreadLocal", "java.lang.ThreadLocal", "SuppliedThreadLocal", $STATIC | $FINAL},
	{}
};

$ClassInfo _ThreadLocal$SuppliedThreadLocal_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.ThreadLocal$SuppliedThreadLocal",
	"java.lang.ThreadLocal",
	nullptr,
	_ThreadLocal$SuppliedThreadLocal_FieldInfo_,
	_ThreadLocal$SuppliedThreadLocal_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ThreadLocal<TT;>;",
	nullptr,
	_ThreadLocal$SuppliedThreadLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ThreadLocal"
};

$Object* allocate$ThreadLocal$SuppliedThreadLocal($Class* clazz) {
	return $of($alloc(ThreadLocal$SuppliedThreadLocal));
}

void ThreadLocal$SuppliedThreadLocal::init$($Supplier* supplier) {
	$ThreadLocal::init$();
	$set(this, supplier, $cast($Supplier, $Objects::requireNonNull(supplier)));
}

$Object* ThreadLocal$SuppliedThreadLocal::initialValue() {
	return $of($nc(this->supplier)->get());
}

ThreadLocal$SuppliedThreadLocal::ThreadLocal$SuppliedThreadLocal() {
}

$Class* ThreadLocal$SuppliedThreadLocal::load$($String* name, bool initialize) {
	$loadClass(ThreadLocal$SuppliedThreadLocal, name, initialize, &_ThreadLocal$SuppliedThreadLocal_ClassInfo_, allocate$ThreadLocal$SuppliedThreadLocal);
	return class$;
}

$Class* ThreadLocal$SuppliedThreadLocal::class$ = nullptr;

	} // lang
} // java