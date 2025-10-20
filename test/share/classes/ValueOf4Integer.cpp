#include <ValueOf4Integer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TEST_HIGH
#undef TEST_LOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _ValueOf4Integer_FieldInfo_[] = {
	{"TEST_LOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ValueOf4Integer, TEST_LOW)},
	{"TEST_HIGH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ValueOf4Integer, TEST_HIGH)},
	{}
};

$MethodInfo _ValueOf4Integer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ValueOf4Integer::*)()>(&ValueOf4Integer::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ValueOf4Integer::main))},
	{}
};

$ClassInfo _ValueOf4Integer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ValueOf4Integer",
	"java.lang.Object",
	nullptr,
	_ValueOf4Integer_FieldInfo_,
	_ValueOf4Integer_MethodInfo_
};

$Object* allocate$ValueOf4Integer($Class* clazz) {
	return $of($alloc(ValueOf4Integer));
}

void ValueOf4Integer::init$() {
}

void ValueOf4Integer::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t i = ValueOf4Integer::TEST_LOW;
	while (i <= ValueOf4Integer::TEST_HIGH) {
		if ($nc($($Integer::valueOf(i)))->intValue() != i) {
			$throwNew($RuntimeException);
		}
		if (i >= -128 && i <= 127) {
			if ($Integer::valueOf(i) != $Integer::valueOf(i)) {
				$throwNew($RuntimeException);
			}
		}
		++i;
	}
}

ValueOf4Integer::ValueOf4Integer() {
}

$Class* ValueOf4Integer::load$($String* name, bool initialize) {
	$loadClass(ValueOf4Integer, name, initialize, &_ValueOf4Integer_ClassInfo_, allocate$ValueOf4Integer);
	return class$;
}

$Class* ValueOf4Integer::class$ = nullptr;