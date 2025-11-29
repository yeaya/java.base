#include <Boxing$TestHandler.h>

#include <Boxing.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef Z

using $Boxing = ::Boxing;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _Boxing$TestHandler_FieldInfo_[] = {
	{"this$0", "LBoxing;", nullptr, $FINAL | $SYNTHETIC, $field(Boxing$TestHandler, this$0)},
	{}
};

$MethodInfo _Boxing$TestHandler_MethodInfo_[] = {
	{"<init>", "(LBoxing;)V", nullptr, $PRIVATE, $method(static_cast<void(Boxing$TestHandler::*)($Boxing*)>(&Boxing$TestHandler::init$))},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _Boxing$TestHandler_InnerClassesInfo_[] = {
	{"Boxing$TestHandler", "Boxing", "TestHandler", $PRIVATE},
	{}
};

$ClassInfo _Boxing$TestHandler_ClassInfo_ = {
	$ACC_SUPER,
	"Boxing$TestHandler",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	_Boxing$TestHandler_FieldInfo_,
	_Boxing$TestHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Boxing$TestHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Boxing"
};

$Object* allocate$Boxing$TestHandler($Class* clazz) {
	return $of($alloc(Boxing$TestHandler));
}

void Boxing$TestHandler::init$($Boxing* this$0) {
	$set(this, this$0, this$0);
}

$Object* Boxing$TestHandler::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(method)->getName()))->equals("m"_s)) {
		$throwNew($AssertionError);
	}
	int8_t b2 = $nc(($cast($Byte, $nc(args)->get(0))))->byteValue();
	if (b2 != this->this$0->b) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong byte, expected "_s, $$str(this->this$0->b), " but got "_s, $$str(b2)}));
	}
	char16_t c2 = $nc(($cast($Character, args->get(1))))->charValue();
	if (c2 != this->this$0->c) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong char, expected "_s, $$str(this->this$0->c), " but got "_s, $$str(c2)}));
	}
	double d2 = $nc(($cast($Double, args->get(2))))->doubleValue();
	if (d2 != this->this$0->d) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong double, expected "_s, $$str(this->this$0->d), " but got "_s, $$str(d2)}));
	}
	float f2 = $nc(($cast($Float, args->get(3))))->floatValue();
	if (f2 != this->this$0->f) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong float, expected "_s, $$str(this->this$0->f), " but got "_s, $$str(f2)}));
	}
	int32_t i2 = $nc(($cast($Integer, args->get(4))))->intValue();
	if (i2 != this->this$0->i) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong int, expected "_s, $$str(this->this$0->i), " but got "_s, $$str(i2)}));
	}
	int64_t j2 = $nc(($cast($Long, args->get(5))))->longValue();
	if (j2 != this->this$0->j) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong long, expected "_s, $$str(this->this$0->j), " but got "_s, $$str(j2)}));
	}
	int16_t s2 = $nc(($cast($Short, args->get(6))))->shortValue();
	if (s2 != this->this$0->s) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong short, expected "_s, $$str(this->this$0->s), " but got "_s, $$str(s2)}));
	}
	$var($Boolean, Z, $Boolean::valueOf(this->this$0->z));
	$var($Boolean, Z2, $cast($Boolean, args->get(7)));
	if (Z2 != Z) {
		$var($String, var$0, $$str({"TEST FAILED: wrong Boolean instance, expected "_s, $($Boxing::identityToString(Z)), " but got "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $($Boxing::identityToString(Z2))));
	}
	return $of(nullptr);
}

Boxing$TestHandler::Boxing$TestHandler() {
}

$Class* Boxing$TestHandler::load$($String* name, bool initialize) {
	$loadClass(Boxing$TestHandler, name, initialize, &_Boxing$TestHandler_ClassInfo_, allocate$Boxing$TestHandler);
	return class$;
}

$Class* Boxing$TestHandler::class$ = nullptr;