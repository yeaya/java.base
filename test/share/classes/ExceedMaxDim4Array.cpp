#include <ExceedMaxDim4Array.h>

#include <java/lang/reflect/Array.h>
#include <jcpp.h>

#undef TYPE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;

$MethodInfo _ExceedMaxDim4Array_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExceedMaxDim4Array, init$, void)},
	{"getArrayOf256Dimensions", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(ExceedMaxDim4Array, getArrayOf256Dimensions, $Object*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExceedMaxDim4Array, main, void, $StringArray*), "java.lang.Exception"},
	{"newInstanceMulti", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ExceedMaxDim4Array, newInstanceMulti, void), "java.lang.Exception"},
	{"newInstanceOne", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ExceedMaxDim4Array, newInstanceOne, void), "java.lang.Exception"},
	{"zeroDimension", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ExceedMaxDim4Array, zeroDimension, void), "java.lang.Exception"},
	{}
};

$ClassInfo _ExceedMaxDim4Array_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExceedMaxDim4Array",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExceedMaxDim4Array_MethodInfo_
};

$Object* allocate$ExceedMaxDim4Array($Class* clazz) {
	return $of($alloc(ExceedMaxDim4Array));
}

void ExceedMaxDim4Array::init$() {
}

void ExceedMaxDim4Array::main($StringArray* args) {
	newInstanceOne();
	newInstanceMulti();
	zeroDimension();
}

void ExceedMaxDim4Array::newInstanceOne() {
	$var($Object, o, getArrayOf256Dimensions());
	try {
		$assign(o, $1Array::newInstance($nc($of(o))->getClass(), 1));
	} catch ($IllegalArgumentException& iae) {
		$nc($System::out)->println("success: newInstanceOne test"_s);
		return;
	}
	$throwNew($Exception, "NewArray allowed dimensions > MAXDIM"_s);
}

void ExceedMaxDim4Array::newInstanceMulti() {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, getArrayOf256Dimensions());
	try {
		$assign(o, $1Array::newInstance($nc($of(o))->getClass(), $$new($ints, {
			1,
			1
		})));
		$assign(o, $1Array::newInstance($of(o)->getClass(), $$new($ints, {1})));
	} catch ($IllegalArgumentException& iae) {
		$nc($System::out)->println("success: newInstanceMulti test"_s);
		return;
	}
	$throwNew($Exception, "MultiNewArray allowed dimensions > MAXDIM"_s);
}

void ExceedMaxDim4Array::zeroDimension() {
	try {
		$init($Integer);
		$1Array::newInstance($Integer::TYPE, $$new($ints, 0));
	} catch ($IllegalArgumentException& iae) {
		$nc($System::out)->println("success: zeroDimension test"_s);
		return;
	}
	$throwNew($Exception, "MultiNewArray allowed dimension == 0"_s);
}

$Object* ExceedMaxDim4Array::getArrayOf256Dimensions() {
	$init($Integer);
	$var($Object, o, $1Array::newInstance($Integer::TYPE, 0));
	for (int32_t i = 1; i <= 254; ++i) {
		$assign(o, $1Array::newInstance($of(o)->getClass(), 1));
	}
	return $of(o);
}

ExceedMaxDim4Array::ExceedMaxDim4Array() {
}

$Class* ExceedMaxDim4Array::load$($String* name, bool initialize) {
	$loadClass(ExceedMaxDim4Array, name, initialize, &_ExceedMaxDim4Array_ClassInfo_, allocate$ExceedMaxDim4Array);
	return class$;
}

$Class* ExceedMaxDim4Array::class$ = nullptr;