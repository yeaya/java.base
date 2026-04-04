#include <java/util/stream/FindOps$FindSink$OfRef.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Optional.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/FindOps$FindOp.h>
#include <java/util/stream/FindOps$FindSink.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

#undef OP_FIND_ANY
#undef OP_FIND_FIRST
#undef REFERENCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Optional = ::java::util::Optional;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $FindOps$FindOp = ::java::util::stream::FindOps$FindOp;
using $FindOps$FindSink = ::java::util::stream::FindOps$FindSink;
using $StreamShape = ::java::util::stream::StreamShape;
using $TerminalOp = ::java::util::stream::TerminalOp;

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindSink$OfRef$$Lambda$isPresent : public $Predicate {
	$class(FindOps$FindSink$OfRef$$Lambda$isPresent, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($Optional, inst$)->isPresent();
	}
};
$Class* FindOps$FindSink$OfRef$$Lambda$isPresent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FindOps$FindSink$OfRef$$Lambda$isPresent, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FindOps$FindSink$OfRef$$Lambda$isPresent, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.FindOps$FindSink$OfRef$$Lambda$isPresent",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(FindOps$FindSink$OfRef$$Lambda$isPresent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FindOps$FindSink$OfRef$$Lambda$isPresent);
	});
	return class$;
}
$Class* FindOps$FindSink$OfRef$$Lambda$isPresent::class$ = nullptr;

class FindOps$FindSink$OfRef$$Lambda$OfRef$1 : public $Supplier {
	$class(FindOps$FindSink$OfRef$$Lambda$OfRef$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new(FindOps$FindSink$OfRef));
	}
};
$Class* FindOps$FindSink$OfRef$$Lambda$OfRef$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FindOps$FindSink$OfRef$$Lambda$OfRef$1, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FindOps$FindSink$OfRef$$Lambda$OfRef$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.FindOps$FindSink$OfRef$$Lambda$OfRef$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(FindOps$FindSink$OfRef$$Lambda$OfRef$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FindOps$FindSink$OfRef$$Lambda$OfRef$1);
	});
	return class$;
}
$Class* FindOps$FindSink$OfRef$$Lambda$OfRef$1::class$ = nullptr;

$TerminalOp* FindOps$FindSink$OfRef::OP_FIND_FIRST = nullptr;
$TerminalOp* FindOps$FindSink$OfRef::OP_FIND_ANY = nullptr;

void FindOps$FindSink$OfRef::init$() {
	$FindOps$FindSink::init$();
}

$Object* FindOps$FindSink$OfRef::get() {
	return this->hasValue ? $Optional::of(this->value) : ($Optional*)nullptr;
}

void FindOps$FindSink$OfRef::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($StreamShape);
	$var($StreamShape, var$0, $StreamShape::REFERENCE);
	$var($Object, var$1, $Optional::empty());
	$var($Predicate, var$2, $new(FindOps$FindSink$OfRef$$Lambda$isPresent));
	$assignStatic(FindOps$FindSink$OfRef::OP_FIND_FIRST, $new($FindOps$FindOp, true, var$0, var$1, var$2, $$new(FindOps$FindSink$OfRef$$Lambda$OfRef$1)));
	$var($StreamShape, var$3, $StreamShape::REFERENCE);
	$var($Object, var$4, $Optional::empty());
	$var($Predicate, var$5, $new(FindOps$FindSink$OfRef$$Lambda$isPresent));
	$assignStatic(FindOps$FindSink$OfRef::OP_FIND_ANY, $new($FindOps$FindOp, false, var$3, var$4, var$5, $$new(FindOps$FindSink$OfRef$$Lambda$OfRef$1)));
}

FindOps$FindSink$OfRef::FindOps$FindSink$OfRef() {
}

$Class* FindOps$FindSink$OfRef::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.FindOps$FindSink$OfRef$$Lambda$isPresent")) {
			return FindOps$FindSink$OfRef$$Lambda$isPresent::load$(name, initialize);
		}
		if (name->equals("java.util.stream.FindOps$FindSink$OfRef$$Lambda$OfRef$1")) {
			return FindOps$FindSink$OfRef$$Lambda$OfRef$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"OP_FIND_FIRST", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<**>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfRef, OP_FIND_FIRST)},
		{"OP_FIND_ANY", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<**>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfRef, OP_FIND_ANY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FindOps$FindSink$OfRef, init$, void)},
		{"get", "()Ljava/util/Optional;", "()Ljava/util/Optional<TT;>;", $PUBLIC, $virtualMethod(FindOps$FindSink$OfRef, get, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.FindOps$FindSink$OfRef", "java.util.stream.FindOps$FindSink", "OfRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.FindOps$FindSink$OfRef",
		"java.util.stream.FindOps$FindSink",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/FindOps$FindSink<TT;Ljava/util/Optional<TT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.FindOps"
	};
	$loadClass(FindOps$FindSink$OfRef, name, initialize, &classInfo$$, FindOps$FindSink$OfRef::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FindOps$FindSink$OfRef));
	});
	return class$;
}

$Class* FindOps$FindSink$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java