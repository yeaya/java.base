#include <java/util/stream/FindOps$FindSink$OfInt.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/OptionalInt.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/FindOps$FindOp.h>
#include <java/util/stream/FindOps$FindSink.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

#undef INT_VALUE
#undef OP_FIND_ANY
#undef OP_FIND_FIRST

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $OptionalInt = ::java::util::OptionalInt;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $FindOps$FindOp = ::java::util::stream::FindOps$FindOp;
using $FindOps$FindSink = ::java::util::stream::FindOps$FindSink;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;
using $StreamShape = ::java::util::stream::StreamShape;
using $TerminalOp = ::java::util::stream::TerminalOp;
using $TerminalSink = ::java::util::stream::TerminalSink;

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindSink$OfInt$$Lambda$isPresent : public $Predicate {
	$class(FindOps$FindSink$OfInt$$Lambda$isPresent, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($OptionalInt, inst$)->isPresent();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfInt$$Lambda$isPresent>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfInt$$Lambda$isPresent::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfInt$$Lambda$isPresent::*)()>(&FindOps$FindSink$OfInt$$Lambda$isPresent::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfInt$$Lambda$isPresent::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfInt$$Lambda$isPresent",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfInt$$Lambda$isPresent::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfInt$$Lambda$isPresent, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfInt$$Lambda$isPresent::class$ = nullptr;

class FindOps$FindSink$OfInt$$Lambda$OfInt$1 : public $Supplier {
	$class(FindOps$FindSink$OfInt$$Lambda$OfInt$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new(FindOps$FindSink$OfInt));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfInt$$Lambda$OfInt$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfInt$$Lambda$OfInt$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfInt$$Lambda$OfInt$1::*)()>(&FindOps$FindSink$OfInt$$Lambda$OfInt$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfInt$$Lambda$OfInt$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfInt$$Lambda$OfInt$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfInt$$Lambda$OfInt$1::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfInt$$Lambda$OfInt$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfInt$$Lambda$OfInt$1::class$ = nullptr;

$FieldInfo _FindOps$FindSink$OfInt_FieldInfo_[] = {
	{"OP_FIND_FIRST", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<Ljava/lang/Integer;Ljava/util/OptionalInt;>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfInt, OP_FIND_FIRST)},
	{"OP_FIND_ANY", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<Ljava/lang/Integer;Ljava/util/OptionalInt;>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfInt, OP_FIND_ANY)},
	{}
};

$MethodInfo _FindOps$FindSink$OfInt_MethodInfo_[] = {
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FindOps$FindSink$OfInt::*)()>(&FindOps$FindSink$OfInt::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindSink$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.FindOps$FindSink$OfInt", "java.util.stream.FindOps$FindSink", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FindOps$FindSink$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps$FindSink$OfInt",
	"java.util.stream.FindOps$FindSink",
	"java.util.stream.Sink$OfInt",
	_FindOps$FindSink$OfInt_FieldInfo_,
	_FindOps$FindSink$OfInt_MethodInfo_,
	"Ljava/util/stream/FindOps$FindSink<Ljava/lang/Integer;Ljava/util/OptionalInt;>;Ljava/util/stream/Sink$OfInt;",
	nullptr,
	_FindOps$FindSink$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindSink$OfInt($Class* clazz) {
	return $of($alloc(FindOps$FindSink$OfInt));
}

void FindOps$FindSink$OfInt::accept(Object$* value) {
	this->$FindOps$FindSink::accept(value);
}

bool FindOps$FindSink$OfInt::cancellationRequested() {
	 return this->$FindOps$FindSink::cancellationRequested();
}

void FindOps$FindSink$OfInt::begin(int64_t size) {
	this->$FindOps$FindSink::begin(size);
}

void FindOps$FindSink$OfInt::end() {
	this->$FindOps$FindSink::end();
}

void FindOps$FindSink$OfInt::accept(int64_t value) {
	this->$FindOps$FindSink::accept(value);
}

void FindOps$FindSink$OfInt::accept(double value) {
	this->$FindOps$FindSink::accept(value);
}

$Consumer* FindOps$FindSink$OfInt::andThen($Consumer* after) {
	 return this->$FindOps$FindSink::andThen(after);
}

int32_t FindOps$FindSink$OfInt::hashCode() {
	 return this->$FindOps$FindSink::hashCode();
}

bool FindOps$FindSink$OfInt::equals(Object$* obj) {
	 return this->$FindOps$FindSink::equals(obj);
}

$Object* FindOps$FindSink$OfInt::clone() {
	 return this->$FindOps$FindSink::clone();
}

$String* FindOps$FindSink$OfInt::toString() {
	 return this->$FindOps$FindSink::toString();
}

void FindOps$FindSink$OfInt::finalize() {
	this->$FindOps$FindSink::finalize();
}

$TerminalOp* FindOps$FindSink$OfInt::OP_FIND_FIRST = nullptr;
$TerminalOp* FindOps$FindSink$OfInt::OP_FIND_ANY = nullptr;

void FindOps$FindSink$OfInt::init$() {
	$FindOps$FindSink::init$();
}

void FindOps$FindSink$OfInt::accept(int32_t value) {
	accept($($Integer::valueOf(value)));
}

$Object* FindOps$FindSink$OfInt::get() {
	return $of(this->hasValue ? $OptionalInt::of($nc(($cast($Integer, this->value)))->intValue()) : ($OptionalInt*)nullptr);
}

void FindOps$FindSink$OfInt::accept($Integer* value) {
	$FindOps$FindSink::accept($of(value));
}

void clinit$FindOps$FindSink$OfInt($Class* class$) {
	$init($StreamShape);
	$var($StreamShape, var$0, $StreamShape::INT_VALUE);
	$var($Object, var$1, $of($OptionalInt::empty()));
	$var($Predicate, var$2, static_cast<$Predicate*>($new(FindOps$FindSink$OfInt$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfInt::OP_FIND_FIRST, $new($FindOps$FindOp, true, var$0, var$1, var$2, static_cast<$Supplier*>($$new(FindOps$FindSink$OfInt$$Lambda$OfInt$1))));
	$var($StreamShape, var$3, $StreamShape::INT_VALUE);
	$var($Object, var$4, $of($OptionalInt::empty()));
	$var($Predicate, var$5, static_cast<$Predicate*>($new(FindOps$FindSink$OfInt$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfInt::OP_FIND_ANY, $new($FindOps$FindOp, false, var$3, var$4, var$5, static_cast<$Supplier*>($$new(FindOps$FindSink$OfInt$$Lambda$OfInt$1))));
}

FindOps$FindSink$OfInt::FindOps$FindSink$OfInt() {
}

$Class* FindOps$FindSink$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FindOps$FindSink$OfInt$$Lambda$isPresent::classInfo$.name)) {
			return FindOps$FindSink$OfInt$$Lambda$isPresent::load$(name, initialize);
		}
		if (name->equals(FindOps$FindSink$OfInt$$Lambda$OfInt$1::classInfo$.name)) {
			return FindOps$FindSink$OfInt$$Lambda$OfInt$1::load$(name, initialize);
		}
	}
	$loadClass(FindOps$FindSink$OfInt, name, initialize, &_FindOps$FindSink$OfInt_ClassInfo_, clinit$FindOps$FindSink$OfInt, allocate$FindOps$FindSink$OfInt);
	return class$;
}

$Class* FindOps$FindSink$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java