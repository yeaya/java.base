#include <java/util/stream/Collectors$1PairBox.h>

#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collectors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Collectors$1PairBox_FieldInfo_[] = {
	{"val$merger", "Ljava/util/function/BiFunction;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$merger)},
	{"val$c2Finisher", "Ljava/util/function/Function;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c2Finisher)},
	{"val$c1Finisher", "Ljava/util/function/Function;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c1Finisher)},
	{"val$c2Combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c2Combiner)},
	{"val$c1Combiner", "Ljava/util/function/BinaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c1Combiner)},
	{"val$c2Accumulator", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c2Accumulator)},
	{"val$c1Accumulator", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c1Accumulator)},
	{"val$c2Supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c2Supplier)},
	{"val$c1Supplier", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$1PairBox, val$c1Supplier)},
	{"left", "Ljava/lang/Object;", "TA1;", 0, $field(Collectors$1PairBox, left)},
	{"right", "Ljava/lang/Object;", "TA2;", 0, $field(Collectors$1PairBox, right)},
	{}
};

$MethodInfo _Collectors$1PairBox_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;Ljava/util/function/BinaryOperator;Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BiFunction;)V", "()V", 0, $method(Collectors$1PairBox, init$, void, $Supplier*, $Supplier*, $BiConsumer*, $BiConsumer*, $BinaryOperator*, $BinaryOperator*, $Function*, $Function*, $BiFunction*)},
	{"add", "(Ljava/lang/Object;)V", "(TT;)V", 0, $virtualMethod(Collectors$1PairBox, add, void, Object$*)},
	{"combine", "(Ljava/util/stream/Collectors$1PairBox;)Ljava/util/stream/Collectors$1PairBox;", nullptr, 0, $virtualMethod(Collectors$1PairBox, combine, Collectors$1PairBox*, Collectors$1PairBox*)},
	{"get", "()Ljava/lang/Object;", "()TR;", 0, $virtualMethod(Collectors$1PairBox, get, $Object*)},
	{}
};

$EnclosingMethodInfo _Collectors$1PairBox_EnclosingMethodInfo_ = {
	"java.util.stream.Collectors",
	"teeing0",
	"(Ljava/util/stream/Collector;Ljava/util/stream/Collector;Ljava/util/function/BiFunction;)Ljava/util/stream/Collector;"
};

$InnerClassInfo _Collectors$1PairBox_InnerClassesInfo_[] = {
	{"java.util.stream.Collectors$1PairBox", nullptr, "PairBox", 0},
	{}
};

$ClassInfo _Collectors$1PairBox_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Collectors$1PairBox",
	"java.lang.Object",
	nullptr,
	_Collectors$1PairBox_FieldInfo_,
	_Collectors$1PairBox_MethodInfo_,
	nullptr,
	&_Collectors$1PairBox_EnclosingMethodInfo_,
	_Collectors$1PairBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Collectors"
};

$Object* allocate$Collectors$1PairBox($Class* clazz) {
	return $of($alloc(Collectors$1PairBox));
}

void Collectors$1PairBox::init$($Supplier* val$c1Supplier, $Supplier* val$c2Supplier, $BiConsumer* val$c1Accumulator, $BiConsumer* val$c2Accumulator, $BinaryOperator* val$c1Combiner, $BinaryOperator* val$c2Combiner, $Function* val$c1Finisher, $Function* val$c2Finisher, $BiFunction* val$merger) {
	$set(this, val$c1Supplier, val$c1Supplier);
	$set(this, val$c2Supplier, val$c2Supplier);
	$set(this, val$c1Accumulator, val$c1Accumulator);
	$set(this, val$c2Accumulator, val$c2Accumulator);
	$set(this, val$c1Combiner, val$c1Combiner);
	$set(this, val$c2Combiner, val$c2Combiner);
	$set(this, val$c1Finisher, val$c1Finisher);
	$set(this, val$c2Finisher, val$c2Finisher);
	$set(this, val$merger, val$merger);
	$set(this, left, $nc(this->val$c1Supplier)->get());
	$set(this, right, $nc(this->val$c2Supplier)->get());
}

void Collectors$1PairBox::add(Object$* t) {
	$nc(this->val$c1Accumulator)->accept(this->left, t);
	$nc(this->val$c2Accumulator)->accept(this->right, t);
}

Collectors$1PairBox* Collectors$1PairBox::combine(Collectors$1PairBox* other) {
	$set(this, left, $nc(this->val$c1Combiner)->apply(this->left, $nc(other)->left));
	$set(this, right, $nc(this->val$c2Combiner)->apply(this->right, $nc(other)->right));
	return this;
}

$Object* Collectors$1PairBox::get() {
	$useLocalCurrentObjectStackCache();
	$var($Object, r1, $nc(this->val$c1Finisher)->apply(this->left));
	$var($Object, r2, $nc(this->val$c2Finisher)->apply(this->right));
	return $of($nc(this->val$merger)->apply(r1, r2));
}

Collectors$1PairBox::Collectors$1PairBox() {
}

$Class* Collectors$1PairBox::load$($String* name, bool initialize) {
	$loadClass(Collectors$1PairBox, name, initialize, &_Collectors$1PairBox_ClassInfo_, allocate$Collectors$1PairBox);
	return class$;
}

$Class* Collectors$1PairBox::class$ = nullptr;

		} // stream
	} // util
} // java