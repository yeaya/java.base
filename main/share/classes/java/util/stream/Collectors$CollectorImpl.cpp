#include <java/util/stream/Collectors$CollectorImpl.h>

#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collectors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Collectors$CollectorImpl_FieldInfo_[] = {
	{"supplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<TA;>;", $PRIVATE | $FINAL, $field(Collectors$CollectorImpl, supplier$)},
	{"accumulator", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<TA;TT;>;", $PRIVATE | $FINAL, $field(Collectors$CollectorImpl, accumulator$)},
	{"combiner", "Ljava/util/function/BinaryOperator;", "Ljava/util/function/BinaryOperator<TA;>;", $PRIVATE | $FINAL, $field(Collectors$CollectorImpl, combiner$)},
	{"finisher", "Ljava/util/function/Function;", "Ljava/util/function/Function<TA;TR;>;", $PRIVATE | $FINAL, $field(Collectors$CollectorImpl, finisher$)},
	{"characteristics", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $PRIVATE | $FINAL, $field(Collectors$CollectorImpl, characteristics$)},
	{}
};

$MethodInfo _Collectors$CollectorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;Ljava/util/function/Function;Ljava/util/Set;)V", "(Ljava/util/function/Supplier<TA;>;Ljava/util/function/BiConsumer<TA;TT;>;Ljava/util/function/BinaryOperator<TA;>;Ljava/util/function/Function<TA;TR;>;Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;)V", 0, $method(static_cast<void(Collectors$CollectorImpl::*)($Supplier*,$BiConsumer*,$BinaryOperator*,$Function*,$Set*)>(&Collectors$CollectorImpl::init$))},
	{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;Ljava/util/Set;)V", "(Ljava/util/function/Supplier<TA;>;Ljava/util/function/BiConsumer<TA;TT;>;Ljava/util/function/BinaryOperator<TA;>;Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;)V", 0, $method(static_cast<void(Collectors$CollectorImpl::*)($Supplier*,$BiConsumer*,$BinaryOperator*,$Set*)>(&Collectors$CollectorImpl::init$))},
	{"accumulator", "()Ljava/util/function/BiConsumer;", "()Ljava/util/function/BiConsumer<TA;TT;>;", $PUBLIC},
	{"characteristics", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $PUBLIC},
	{"combiner", "()Ljava/util/function/BinaryOperator;", "()Ljava/util/function/BinaryOperator<TA;>;", $PUBLIC},
	{"finisher", "()Ljava/util/function/Function;", "()Ljava/util/function/Function<TA;TR;>;", $PUBLIC},
	{"supplier", "()Ljava/util/function/Supplier;", "()Ljava/util/function/Supplier<TA;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Collectors$CollectorImpl_InnerClassesInfo_[] = {
	{"java.util.stream.Collectors$CollectorImpl", "java.util.stream.Collectors", "CollectorImpl", $STATIC},
	{}
};

$ClassInfo _Collectors$CollectorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Collectors$CollectorImpl",
	"java.lang.Object",
	"java.util.stream.Collector",
	_Collectors$CollectorImpl_FieldInfo_,
	_Collectors$CollectorImpl_MethodInfo_,
	"<T:Ljava/lang/Object;A:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Collector<TT;TA;TR;>;",
	nullptr,
	_Collectors$CollectorImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Collectors"
};

$Object* allocate$Collectors$CollectorImpl($Class* clazz) {
	return $of($alloc(Collectors$CollectorImpl));
}

void Collectors$CollectorImpl::init$($Supplier* supplier, $BiConsumer* accumulator, $BinaryOperator* combiner, $Function* finisher, $Set* characteristics) {
	$set(this, supplier$, supplier);
	$set(this, accumulator$, accumulator);
	$set(this, combiner$, combiner);
	$set(this, finisher$, finisher);
	$set(this, characteristics$, characteristics);
}

void Collectors$CollectorImpl::init$($Supplier* supplier, $BiConsumer* accumulator, $BinaryOperator* combiner, $Set* characteristics) {
	Collectors$CollectorImpl::init$(supplier, accumulator, combiner, $($Collectors::castingIdentity()), characteristics);
}

$BiConsumer* Collectors$CollectorImpl::accumulator() {
	return this->accumulator$;
}

$Supplier* Collectors$CollectorImpl::supplier() {
	return this->supplier$;
}

$BinaryOperator* Collectors$CollectorImpl::combiner() {
	return this->combiner$;
}

$Function* Collectors$CollectorImpl::finisher() {
	return this->finisher$;
}

$Set* Collectors$CollectorImpl::characteristics() {
	return this->characteristics$;
}

Collectors$CollectorImpl::Collectors$CollectorImpl() {
}

$Class* Collectors$CollectorImpl::load$($String* name, bool initialize) {
	$loadClass(Collectors$CollectorImpl, name, initialize, &_Collectors$CollectorImpl_ClassInfo_, allocate$Collectors$CollectorImpl);
	return class$;
}

$Class* Collectors$CollectorImpl::class$ = nullptr;

		} // stream
	} // util
} // java