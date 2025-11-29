#include <DynamicConstantDescTest$InvokeOfCanonical.h>

#include <DynamicConstantDescTest$MyEnum.h>
#include <DynamicConstantDescTest.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/constant/MethodHandleDesc.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

#undef A
#undef STATIC

using $DynamicConstantDescTest$MyEnum = ::DynamicConstantDescTest$MyEnum;
using $ClassDescArray = $Array<::java::lang::constant::ClassDesc>;
using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _DynamicConstantDescTest$InvokeOfCanonical_FieldInfo_[] = {
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDescTest$InvokeOfCanonical, latch)},
	{}
};

$MethodInfo _DynamicConstantDescTest$InvokeOfCanonical_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE, $method(static_cast<void(DynamicConstantDescTest$InvokeOfCanonical::*)($CountDownLatch*)>(&DynamicConstantDescTest$InvokeOfCanonical::init$))},
	{"boostrapMethodForEnumConstant", "()Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DirectMethodHandleDesc*(*)()>(&DynamicConstantDescTest$InvokeOfCanonical::boostrapMethodForEnumConstant))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DynamicConstantDescTest$InvokeOfCanonical_InnerClassesInfo_[] = {
	{"DynamicConstantDescTest$InvokeOfCanonical", "DynamicConstantDescTest", "InvokeOfCanonical", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DynamicConstantDescTest$InvokeOfCanonical_ClassInfo_ = {
	$ACC_SUPER,
	"DynamicConstantDescTest$InvokeOfCanonical",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_DynamicConstantDescTest$InvokeOfCanonical_FieldInfo_,
	_DynamicConstantDescTest$InvokeOfCanonical_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Object;>;",
	nullptr,
	_DynamicConstantDescTest$InvokeOfCanonical_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DynamicConstantDescTest"
};

$Object* allocate$DynamicConstantDescTest$InvokeOfCanonical($Class* clazz) {
	return $of($alloc(DynamicConstantDescTest$InvokeOfCanonical));
}

void DynamicConstantDescTest$InvokeOfCanonical::init$($CountDownLatch* latch) {
	$set(this, latch, latch);
}

$Object* DynamicConstantDescTest$InvokeOfCanonical::call() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({$($($Thread::currentThread())->getName()), " calling  DynamicConstantDesc.ofCanonical()"_s}));
	try {
		$nc(this->latch)->countDown();
		$nc(this->latch)->await();
		$var($DirectMethodHandleDesc, var$0, boostrapMethodForEnumConstant());
		$var($String, var$1, "A"_s);
		$var($ConstantDesc, desc, $DynamicConstantDesc::ofCanonical(var$0, var$1, $($nc($($ClassDesc::of("DynamicConstantDescTest"_s)))->nested("MyEnum"_s)), $$new($ConstantDescArray, 0)));
		if (desc == nullptr) {
			$throwNew($Exception, "DynamicConstantDesc.ofCanonical unexpectedly returned null"_s);
		}
		$init($DynamicConstantDescTest$MyEnum);
		if (!$DynamicConstantDescTest$MyEnum::A->equals($($nc(desc)->resolveConstantDesc($($MethodHandles::lookup()))))) {
			$throwNew($Exception, $$str({"DynamicConstantDesc.ofCanonical returned unexpected result "_s, desc}));
		}
		return $of(desc);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$DirectMethodHandleDesc* DynamicConstantDescTest$InvokeOfCanonical::boostrapMethodForEnumConstant() {
	$init(DynamicConstantDescTest$InvokeOfCanonical);
	$useLocalCurrentObjectStackCache();
	$var($ClassDescArray, args, $new($ClassDescArray, {
		$($nc($($ClassDesc::of("java.lang.invoke.MethodHandles"_s)))->nested("Lookup"_s)),
		$($ClassDesc::of("java.lang.String"_s)),
		$($ClassDesc::of("java.lang.Class"_s))
	}));
	$init($DirectMethodHandleDesc$Kind);
	$var($DirectMethodHandleDesc$Kind, var$0, $DirectMethodHandleDesc$Kind::STATIC);
	$var($ClassDesc, var$1, $ClassDesc::of("java.lang.invoke.ConstantBootstraps"_s));
	$var($String, var$2, "enumConstant"_s);
	return $MethodHandleDesc::ofMethod(var$0, var$1, var$2, $($nc($($MethodTypeDesc::of($($ClassDesc::of("java.lang.Enum"_s)), $$new($ClassDescArray, 0))))->insertParameterTypes(0, args)));
}

DynamicConstantDescTest$InvokeOfCanonical::DynamicConstantDescTest$InvokeOfCanonical() {
}

$Class* DynamicConstantDescTest$InvokeOfCanonical::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDescTest$InvokeOfCanonical, name, initialize, &_DynamicConstantDescTest$InvokeOfCanonical_ClassInfo_, allocate$DynamicConstantDescTest$InvokeOfCanonical);
	return class$;
}

$Class* DynamicConstantDescTest$InvokeOfCanonical::class$ = nullptr;