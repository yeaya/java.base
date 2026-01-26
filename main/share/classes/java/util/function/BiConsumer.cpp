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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BiConsumer$$Lambda$lambda$andThen$0>());
	}
	BiConsumer* inst$ = nullptr;
	BiConsumer* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BiConsumer$$Lambda$lambda$andThen$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiConsumer$$Lambda$lambda$andThen$0, inst$)},
	{"after", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(BiConsumer$$Lambda$lambda$andThen$0, after)},
	{}
};
$MethodInfo BiConsumer$$Lambda$lambda$andThen$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(BiConsumer$$Lambda$lambda$andThen$0, init$, void, BiConsumer*, BiConsumer*)},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(BiConsumer$$Lambda$lambda$andThen$0, accept, void, Object$*, Object$*)},
	{}
};
$ClassInfo BiConsumer$$Lambda$lambda$andThen$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BiConsumer$$Lambda$lambda$andThen$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* BiConsumer$$Lambda$lambda$andThen$0::load$($String* name, bool initialize) {
	$loadClass(BiConsumer$$Lambda$lambda$andThen$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BiConsumer$$Lambda$lambda$andThen$0::class$ = nullptr;

$CompoundAttribute _BiConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _BiConsumer_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TU;)V", $PUBLIC | $ABSTRACT, $virtualMethod(BiConsumer, accept, void, Object$*, Object$*)},
	{"andThen", "(Ljava/util/function/BiConsumer;)Ljava/util/function/BiConsumer;", "(Ljava/util/function/BiConsumer<-TT;-TU;>;)Ljava/util/function/BiConsumer<TT;TU;>;", $PUBLIC, $virtualMethod(BiConsumer, andThen, BiConsumer*, BiConsumer*)},
	{"lambda$andThen$0", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(BiConsumer, lambda$andThen$0, void, BiConsumer*, Object$*, Object$*)},
	{}
};

$ClassInfo _BiConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.BiConsumer",
	nullptr,
	nullptr,
	nullptr,
	_BiConsumer_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_BiConsumer_Annotations_
};

$Object* allocate$BiConsumer($Class* clazz) {
	return $of($alloc(BiConsumer));
}

BiConsumer* BiConsumer::andThen(BiConsumer* after) {
	$Objects::requireNonNull(after);
	return static_cast<BiConsumer*>($new(BiConsumer$$Lambda$lambda$andThen$0, this, after));
}

void BiConsumer::lambda$andThen$0(BiConsumer* after, Object$* l, Object$* r) {
	accept(l, r);
	$nc(after)->accept(l, r);
}

$Class* BiConsumer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BiConsumer$$Lambda$lambda$andThen$0::classInfo$.name)) {
			return BiConsumer$$Lambda$lambda$andThen$0::load$(name, initialize);
		}
	}
	$loadClass(BiConsumer, name, initialize, &_BiConsumer_ClassInfo_, allocate$BiConsumer);
	return class$;
}

$Class* BiConsumer::class$ = nullptr;

		} // function
	} // util
} // java