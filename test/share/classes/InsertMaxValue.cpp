#include <InsertMaxValue.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;

$MethodInfo _InsertMaxValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InsertMaxValue::*)()>(&InsertMaxValue::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InsertMaxValue::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _InsertMaxValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InsertMaxValue",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InsertMaxValue_MethodInfo_
};

$Object* allocate$InsertMaxValue($Class* clazz) {
	return $of($alloc(InsertMaxValue));
}

void InsertMaxValue::init$() {
}

void InsertMaxValue::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer, ""_s));
	$var($StringBuffer, sb1, $new($StringBuffer, "Some test StringBuffer"_s));
	try {
		sb->insert(0, $$new($chars, 5), 1, $Integer::MAX_VALUE);
		$throwNew($RuntimeException, "Exception expected"_s);
	} catch ($StringIndexOutOfBoundsException&) {
		$catch();
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, oome, $catch());
		$throwNew($RuntimeException, "Wrong exception thrown."_s);
	}
	try {
		sb1->insert(2, $$new($chars, 25), 5, $Integer::MAX_VALUE);
		$throwNew($RuntimeException, "Exception expected"_s);
	} catch ($StringIndexOutOfBoundsException&) {
		$catch();
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, aioe, $catch());
		$throwNew($RuntimeException, "Wrong exception thrown."_s);
	}
}

InsertMaxValue::InsertMaxValue() {
}

$Class* InsertMaxValue::load$($String* name, bool initialize) {
	$loadClass(InsertMaxValue, name, initialize, &_InsertMaxValue_ClassInfo_, allocate$InsertMaxValue);
	return class$;
}

$Class* InsertMaxValue::class$ = nullptr;