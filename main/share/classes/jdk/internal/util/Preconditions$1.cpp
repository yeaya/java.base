#include <jdk/internal/util/Preconditions$1.h>

#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace jdk {
	namespace internal {
		namespace util {

$FieldInfo _Preconditions$1_FieldInfo_[] = {
	{"val$f", "Ljava/util/function/Function;", nullptr, $FINAL | $SYNTHETIC, $field(Preconditions$1, val$f)},
	{}
};

$MethodInfo _Preconditions$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Function;)V", "()V", 0, $method(static_cast<void(Preconditions$1::*)($Function*)>(&Preconditions$1::init$))},
	{"apply", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/RuntimeException;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;)TX;", $PUBLIC},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Preconditions$1_EnclosingMethodInfo_ = {
	"jdk.internal.util.Preconditions",
	"outOfBoundsExceptionFormatter",
	"(Ljava/util/function/Function;)Ljava/util/function/BiFunction;"
};

$InnerClassInfo _Preconditions$1_InnerClassesInfo_[] = {
	{"jdk.internal.util.Preconditions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Preconditions$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.util.Preconditions$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	_Preconditions$1_FieldInfo_,
	_Preconditions$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;TX;>;",
	&_Preconditions$1_EnclosingMethodInfo_,
	_Preconditions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.Preconditions"
};

$Object* allocate$Preconditions$1($Class* clazz) {
	return $of($alloc(Preconditions$1));
}

void Preconditions$1::init$($Function* val$f) {
	$set(this, val$f, val$f);
}

$RuntimeException* Preconditions$1::apply($String* checkKind, $List* args) {
	return $cast($RuntimeException, $nc(this->val$f)->apply($($Preconditions::outOfBoundsMessage(checkKind, args))));
}

$Object* Preconditions$1::apply(Object$* checkKind, Object$* args) {
	return $of(this->apply($cast($String, checkKind), $cast($List, args)));
}

Preconditions$1::Preconditions$1() {
}

$Class* Preconditions$1::load$($String* name, bool initialize) {
	$loadClass(Preconditions$1, name, initialize, &_Preconditions$1_ClassInfo_, allocate$Preconditions$1);
	return class$;
}

$Class* Preconditions$1::class$ = nullptr;

		} // util
	} // internal
} // jdk