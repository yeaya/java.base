#include <ArrayAssignment.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ArrayAssignment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayAssignment::*)()>(&ArrayAssignment::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ArrayAssignment::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ArrayAssignment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ArrayAssignment",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ArrayAssignment_MethodInfo_
};

$Object* allocate$ArrayAssignment($Class* clazz) {
	return $of($alloc(ArrayAssignment));
}

void ArrayAssignment::init$() {
}

void ArrayAssignment::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($intArray2, from, $new($intArray2, 5, 5));
	$var($ObjectArray, to, static_cast<$ObjectArray*>(static_cast<$Object*>(static_cast<$intArray2*>(from))));
	$assign(to, $new($ObjectArray, 1));
	if (!$of(to)->getClass()->isAssignableFrom($of(from)->getClass())) {
		$throwNew($Exception, "bad array assignment check in reflection"_s);
	}
}

ArrayAssignment::ArrayAssignment() {
}

$Class* ArrayAssignment::load$($String* name, bool initialize) {
	$loadClass(ArrayAssignment, name, initialize, &_ArrayAssignment_ClassInfo_, allocate$ArrayAssignment);
	return class$;
}

$Class* ArrayAssignment::class$ = nullptr;