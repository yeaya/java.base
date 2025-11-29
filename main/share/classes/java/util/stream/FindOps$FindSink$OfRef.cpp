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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfRef$$Lambda$isPresent>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfRef$$Lambda$isPresent::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfRef$$Lambda$isPresent::*)()>(&FindOps$FindSink$OfRef$$Lambda$isPresent::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfRef$$Lambda$isPresent::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfRef$$Lambda$isPresent",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfRef$$Lambda$isPresent::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfRef$$Lambda$isPresent, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfRef$$Lambda$OfRef$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfRef$$Lambda$OfRef$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfRef$$Lambda$OfRef$1::*)()>(&FindOps$FindSink$OfRef$$Lambda$OfRef$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfRef$$Lambda$OfRef$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfRef$$Lambda$OfRef$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfRef$$Lambda$OfRef$1::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfRef$$Lambda$OfRef$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfRef$$Lambda$OfRef$1::class$ = nullptr;

$FieldInfo _FindOps$FindSink$OfRef_FieldInfo_[] = {
	{"OP_FIND_FIRST", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<**>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfRef, OP_FIND_FIRST)},
	{"OP_FIND_ANY", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<**>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfRef, OP_FIND_ANY)},
	{}
};

$MethodInfo _FindOps$FindSink$OfRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FindOps$FindSink$OfRef::*)()>(&FindOps$FindSink$OfRef::init$))},
	{"get", "()Ljava/util/Optional;", "()Ljava/util/Optional<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindSink$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.FindOps$FindSink$OfRef", "java.util.stream.FindOps$FindSink", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _FindOps$FindSink$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps$FindSink$OfRef",
	"java.util.stream.FindOps$FindSink",
	nullptr,
	_FindOps$FindSink$OfRef_FieldInfo_,
	_FindOps$FindSink$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/FindOps$FindSink<TT;Ljava/util/Optional<TT;>;>;",
	nullptr,
	_FindOps$FindSink$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindSink$OfRef($Class* clazz) {
	return $of($alloc(FindOps$FindSink$OfRef));
}

$TerminalOp* FindOps$FindSink$OfRef::OP_FIND_FIRST = nullptr;
$TerminalOp* FindOps$FindSink$OfRef::OP_FIND_ANY = nullptr;

void FindOps$FindSink$OfRef::init$() {
	$FindOps$FindSink::init$();
}

$Object* FindOps$FindSink$OfRef::get() {
	return $of(this->hasValue ? $Optional::of(this->value) : ($Optional*)nullptr);
}

void clinit$FindOps$FindSink$OfRef($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($StreamShape);
	$var($StreamShape, var$0, $StreamShape::REFERENCE);
	$var($Object, var$1, $of($Optional::empty()));
	$var($Predicate, var$2, static_cast<$Predicate*>($new(FindOps$FindSink$OfRef$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfRef::OP_FIND_FIRST, $new($FindOps$FindOp, true, var$0, var$1, var$2, static_cast<$Supplier*>($$new(FindOps$FindSink$OfRef$$Lambda$OfRef$1))));
	$var($StreamShape, var$3, $StreamShape::REFERENCE);
	$var($Object, var$4, $of($Optional::empty()));
	$var($Predicate, var$5, static_cast<$Predicate*>($new(FindOps$FindSink$OfRef$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfRef::OP_FIND_ANY, $new($FindOps$FindOp, false, var$3, var$4, var$5, static_cast<$Supplier*>($$new(FindOps$FindSink$OfRef$$Lambda$OfRef$1))));
}

FindOps$FindSink$OfRef::FindOps$FindSink$OfRef() {
}

$Class* FindOps$FindSink$OfRef::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FindOps$FindSink$OfRef$$Lambda$isPresent::classInfo$.name)) {
			return FindOps$FindSink$OfRef$$Lambda$isPresent::load$(name, initialize);
		}
		if (name->equals(FindOps$FindSink$OfRef$$Lambda$OfRef$1::classInfo$.name)) {
			return FindOps$FindSink$OfRef$$Lambda$OfRef$1::load$(name, initialize);
		}
	}
	$loadClass(FindOps$FindSink$OfRef, name, initialize, &_FindOps$FindSink$OfRef_ClassInfo_, clinit$FindOps$FindSink$OfRef, allocate$FindOps$FindSink$OfRef);
	return class$;
}

$Class* FindOps$FindSink$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java