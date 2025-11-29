#include <java/util/stream/Collectors$1OptionalBox.h>

#include <java/util/function/BinaryOperator.h>
#include <java/util/stream/Collectors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BinaryOperator = ::java::util::function::BinaryOperator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Collectors$1OptionalBox_FieldInfo_[] = {
	{"val$op", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1OptionalBox, val$op)},
	{"value", "Ljava/lang/Object;", "TT;", 0, $field(Collectors$1OptionalBox, value)},
	{"present", "Z", nullptr, 0, $field(Collectors$1OptionalBox, present)},
	{}
};

$MethodInfo _Collectors$1OptionalBox_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(static_cast<void(Collectors$1OptionalBox::*)($BinaryOperator*)>(&Collectors$1OptionalBox::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collectors$1OptionalBox_EnclosingMethodInfo_ = {
	"java.util.stream.Collectors",
	"reducing",
	"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;"
};

$InnerClassInfo _Collectors$1OptionalBox_InnerClassesInfo_[] = {
	{"java.util.stream.Collectors$1OptionalBox", nullptr, "OptionalBox", 0},
	{}
};

$ClassInfo _Collectors$1OptionalBox_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Collectors$1OptionalBox",
	"java.lang.Object",
	"java.util.function.Consumer",
	_Collectors$1OptionalBox_FieldInfo_,
	_Collectors$1OptionalBox_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
	&_Collectors$1OptionalBox_EnclosingMethodInfo_,
	_Collectors$1OptionalBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Collectors"
};

$Object* allocate$Collectors$1OptionalBox($Class* clazz) {
	return $of($alloc(Collectors$1OptionalBox));
}

void Collectors$1OptionalBox::init$($BinaryOperator* val$op) {
	$set(this, val$op, val$op);
	$set(this, value, nullptr);
	this->present = false;
}

void Collectors$1OptionalBox::accept(Object$* t) {
	if (this->present) {
		$set(this, value, $nc(this->val$op)->apply(this->value, t));
	} else {
		$set(this, value, t);
		this->present = true;
	}
}

Collectors$1OptionalBox::Collectors$1OptionalBox() {
}

$Class* Collectors$1OptionalBox::load$($String* name, bool initialize) {
	$loadClass(Collectors$1OptionalBox, name, initialize, &_Collectors$1OptionalBox_ClassInfo_, allocate$Collectors$1OptionalBox);
	return class$;
}

$Class* Collectors$1OptionalBox::class$ = nullptr;

		} // stream
	} // util
} // java