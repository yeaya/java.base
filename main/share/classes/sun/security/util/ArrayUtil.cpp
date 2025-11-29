#include <sun/security/util/ArrayUtil.h>

#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/ProviderException.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER

using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ProviderException = ::java::security::ProviderException;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace sun {
	namespace security {
		namespace util {

class ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::*)()>(&ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.util.ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$FieldInfo _ArrayUtil_FieldInfo_[] = {
	{"AIOOBE_SUPPLIER", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ArrayUtil, AIOOBE_SUPPLIER)},
	{}
};

$MethodInfo _ArrayUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayUtil::*)()>(&ArrayUtil::init$))},
	{"blockSizeCheck", "(II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&ArrayUtil::blockSizeCheck))},
	{"nullAndBoundsCheck", "([BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&ArrayUtil::nullAndBoundsCheck))},
	{"reverse", "([B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*)>(&ArrayUtil::reverse))},
	{"swap", "([BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&ArrayUtil::swap))},
	{}
};

$ClassInfo _ArrayUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.ArrayUtil",
	"java.lang.Object",
	nullptr,
	_ArrayUtil_FieldInfo_,
	_ArrayUtil_MethodInfo_
};

$Object* allocate$ArrayUtil($Class* clazz) {
	return $of($alloc(ArrayUtil));
}

$BiFunction* ArrayUtil::AIOOBE_SUPPLIER = nullptr;

void ArrayUtil::init$() {
}

void ArrayUtil::blockSizeCheck(int32_t len, int32_t blockSize) {
	$init(ArrayUtil);
	if (($mod(len, blockSize)) != 0) {
		$throwNew($ProviderException, "Internal error in input buffering"_s);
	}
}

void ArrayUtil::nullAndBoundsCheck($bytes* array, int32_t offset, int32_t len) {
	$init(ArrayUtil);
	$Preconditions::checkFromIndexSize(offset, len, $nc(array)->length, ArrayUtil::AIOOBE_SUPPLIER);
}

void ArrayUtil::swap($bytes* arr, int32_t i, int32_t j) {
	$init(ArrayUtil);
	int8_t tmp = $nc(arr)->get(i);
	arr->set(i, arr->get(j));
	arr->set(j, tmp);
}

void ArrayUtil::reverse($bytes* arr) {
	$init(ArrayUtil);
	int32_t i = 0;
	int32_t j = $nc(arr)->length - 1;
	while (i < j) {
		swap(arr, i, j);
		++i;
		--j;
	}
}

void clinit$ArrayUtil($Class* class$) {
	$assignStatic(ArrayUtil::AIOOBE_SUPPLIER, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException))));
}

ArrayUtil::ArrayUtil() {
}

$Class* ArrayUtil::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return ArrayUtil$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(ArrayUtil, name, initialize, &_ArrayUtil_ClassInfo_, clinit$ArrayUtil, allocate$ArrayUtil);
	return class$;
}

$Class* ArrayUtil::class$ = nullptr;

		} // util
	} // security
} // sun