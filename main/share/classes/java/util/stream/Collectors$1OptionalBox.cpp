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
	$FieldInfo fieldInfos$$[] = {
		{"val$op", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1OptionalBox, val$op)},
		{"value", "Ljava/lang/Object;", "TT;", 0, $field(Collectors$1OptionalBox, value)},
		{"present", "Z", nullptr, 0, $field(Collectors$1OptionalBox, present)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;)V", "()V", 0, $method(Collectors$1OptionalBox, init$, void, $BinaryOperator*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(Collectors$1OptionalBox, accept, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.Collectors",
		"reducing",
		"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Collectors$1OptionalBox", nullptr, "OptionalBox", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.Collectors$1OptionalBox",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Consumer<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Collectors"
	};
	$loadClass(Collectors$1OptionalBox, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$1OptionalBox);
	});
	return class$;
}

$Class* Collectors$1OptionalBox::class$ = nullptr;

		} // stream
	} // util
} // java