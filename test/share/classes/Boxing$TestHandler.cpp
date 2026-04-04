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

void Boxing$TestHandler::init$($Boxing* this$0) {
	$set(this, this$0, this$0);
}

$Object* Boxing$TestHandler::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalObjectStack();
	if (!$$nc($nc(method)->getName())->equals("m"_s)) {
		$throwNew($AssertionError);
	}
	int8_t b2 = $nc($cast($Byte, $nc(args)->get(0)))->byteValue();
	if (b2 != this->this$0->b) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong byte, expected "_s, $$str(this->this$0->b), " but got "_s, $$str(b2)}));
	}
	char16_t c2 = $nc($cast($Character, args->get(1)))->charValue();
	if (c2 != this->this$0->c) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong char, expected "_s, $$str(this->this$0->c), " but got "_s, $$str(c2)}));
	}
	double d2 = $nc($cast($Double, args->get(2)))->doubleValue();
	if (d2 != this->this$0->d) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong double, expected "_s, $$str(this->this$0->d), " but got "_s, $$str(d2)}));
	}
	float f2 = $nc($cast($Float, args->get(3)))->floatValue();
	if (f2 != this->this$0->f) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong float, expected "_s, $$str(this->this$0->f), " but got "_s, $$str(f2)}));
	}
	int32_t i2 = $nc($cast($Integer, args->get(4)))->intValue();
	if (i2 != this->this$0->i) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong int, expected "_s, $$str(this->this$0->i), " but got "_s, $$str(i2)}));
	}
	int64_t j2 = $nc($cast($Long, args->get(5)))->longValue();
	if (j2 != this->this$0->j) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong long, expected "_s, $$str(this->this$0->j), " but got "_s, $$str(j2)}));
	}
	int16_t s2 = $nc($cast($Short, args->get(6)))->shortValue();
	if (s2 != this->this$0->s) {
		$throwNew($RuntimeException, $$str({"TEST FAILED: wrong short, expected "_s, $$str(this->this$0->s), " but got "_s, $$str(s2)}));
	}
	$var($Boolean, Z, $Boolean::valueOf(this->this$0->z));
	$var($Boolean, Z2, $cast($Boolean, args->get(7)));
	if (Z2 != Z) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("TEST FAILED: wrong Boolean instance, expected "_s);
		var$0->append($($Boxing::identityToString(Z)));
		var$0->append(" but got "_s);
		var$0->append($($Boxing::identityToString(Z2)));
		$throwNew($RuntimeException, $$str(var$0));
	}
	return nullptr;
}

Boxing$TestHandler::Boxing$TestHandler() {
}

$Class* Boxing$TestHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LBoxing;", nullptr, $FINAL | $SYNTHETIC, $field(Boxing$TestHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LBoxing;)V", nullptr, $PRIVATE, $method(Boxing$TestHandler, init$, void, $Boxing*)},
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Boxing$TestHandler, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Boxing$TestHandler", "Boxing", "TestHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Boxing$TestHandler",
		"java.lang.Object",
		"java.lang.reflect.InvocationHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Boxing"
	};
	$loadClass(Boxing$TestHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Boxing$TestHandler);
	});
	return class$;
}

$Class* Boxing$TestHandler::class$ = nullptr;