#include <java/lang/invoke/VarHandle$1.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VarHandle$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandle$1::*)()>(&VarHandle$1::init$))},
	{"apply", "(Ljava/lang/String;)Ljava/lang/ArrayIndexOutOfBoundsException;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _VarHandle$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.VarHandle",
	nullptr,
	nullptr
};

$InnerClassInfo _VarHandle$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VarHandle$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandle$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_VarHandle$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/ArrayIndexOutOfBoundsException;>;",
	&_VarHandle$1_EnclosingMethodInfo_,
	_VarHandle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$1($Class* clazz) {
	return $of($alloc(VarHandle$1));
}

void VarHandle$1::init$() {
}

$ArrayIndexOutOfBoundsException* VarHandle$1::apply($String* s) {
	return $new($ArrayIndexOutOfBoundsException, s);
}

$Object* VarHandle$1::apply(Object$* s) {
	return $of(this->apply($cast($String, s)));
}

VarHandle$1::VarHandle$1() {
}

$Class* VarHandle$1::load$($String* name, bool initialize) {
	$loadClass(VarHandle$1, name, initialize, &_VarHandle$1_ClassInfo_, allocate$VarHandle$1);
	return class$;
}

$Class* VarHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java