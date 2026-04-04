#include <java/util/function/BiConsumer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
		namespace function {

class BiConsumer$$Lambda$lambda$andThen$0 : public BiConsumer {
	$class(BiConsumer$$Lambda$lambda$andThen$0, $NO_CLASS_INIT, BiConsumer)
public:
	void init$(BiConsumer* inst, BiConsumer* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual void accept(Object$* l, Object$* r) override {
		$nc(inst$)->lambda$andThen$0(after, l, r);
	}
	BiConsumer* inst$ = nullptr;
	BiConsumer* after = nullptr;
};
$Class* BiConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiConsumer$$Lambda$lambda$andThen$0, inst$)},
		{"after", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(BiConsumer$$Lambda$lambda$andThen$0, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(BiConsumer$$Lambda$lambda$andThen$0, init$, void, BiConsumer*, BiConsumer*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(BiConsumer$$Lambda$lambda$andThen$0, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BiConsumer$$Lambda$lambda$andThen$0",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BiConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiConsumer$$Lambda$lambda$andThen$0);
	});
	return class$;
}
$Class* BiConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

BiConsumer* BiConsumer::andThen(BiConsumer* after) {
	$Objects::requireNonNull(after);
	return $new(BiConsumer$$Lambda$lambda$andThen$0, this, after);
}

void BiConsumer::lambda$andThen$0(BiConsumer* after, Object$* l, Object$* r) {
	accept(l, r);
	$nc(after)->accept(l, r);
}

$Class* BiConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.BiConsumer$$Lambda$lambda$andThen$0")) {
			return BiConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TU;)V", $PUBLIC | $ABSTRACT, $virtualMethod(BiConsumer, accept, void, Object$*, Object$*)},
		{"andThen", "(Ljava/util/function/BiConsumer;)Ljava/util/function/BiConsumer;", "(Ljava/util/function/BiConsumer<-TT;-TU;>;)Ljava/util/function/BiConsumer<TT;TU;>;", $PUBLIC, $virtualMethod(BiConsumer, andThen, BiConsumer*, BiConsumer*)},
		{"lambda$andThen$0", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(BiConsumer, lambda$andThen$0, void, BiConsumer*, Object$*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.BiConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BiConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiConsumer);
	});
	return class$;
}

$Class* BiConsumer::class$ = nullptr;

		} // function
	} // util
} // java