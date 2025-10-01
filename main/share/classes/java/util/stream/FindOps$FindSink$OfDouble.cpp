#include <java/util/stream/FindOps$FindSink$OfDouble.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <java/util/OptionalDouble.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/FindOps$FindOp.h>
#include <java/util/stream/FindOps$FindSink.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

#undef DOUBLE_VALUE
#undef OP_FIND_ANY
#undef OP_FIND_FIRST

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $OptionalDouble = ::java::util::OptionalDouble;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $FindOps$FindOp = ::java::util::stream::FindOps$FindOp;
using $FindOps$FindSink = ::java::util::stream::FindOps$FindSink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;
using $StreamShape = ::java::util::stream::StreamShape;
using $TerminalOp = ::java::util::stream::TerminalOp;
using $TerminalSink = ::java::util::stream::TerminalSink;

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindSink$OfDouble$$Lambda$isPresent : public $Predicate {
	$class(FindOps$FindSink$OfDouble$$Lambda$isPresent, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($OptionalDouble, inst$)->isPresent();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfDouble$$Lambda$isPresent>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfDouble$$Lambda$isPresent::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfDouble$$Lambda$isPresent::*)()>(&FindOps$FindSink$OfDouble$$Lambda$isPresent::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfDouble$$Lambda$isPresent::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfDouble$$Lambda$isPresent",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfDouble$$Lambda$isPresent::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfDouble$$Lambda$isPresent, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfDouble$$Lambda$isPresent::class$ = nullptr;

class FindOps$FindSink$OfDouble$$Lambda$OfDouble$1 : public $Supplier {
	$class(FindOps$FindSink$OfDouble$$Lambda$OfDouble$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new(FindOps$FindSink$OfDouble));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfDouble$$Lambda$OfDouble$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::*)()>(&FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfDouble$$Lambda$OfDouble$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfDouble$$Lambda$OfDouble$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::class$ = nullptr;

$FieldInfo _FindOps$FindSink$OfDouble_FieldInfo_[] = {
	{"OP_FIND_FIRST", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<Ljava/lang/Double;Ljava/util/OptionalDouble;>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfDouble, OP_FIND_FIRST)},
	{"OP_FIND_ANY", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<Ljava/lang/Double;Ljava/util/OptionalDouble;>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfDouble, OP_FIND_ANY)},
	{}
};

$MethodInfo _FindOps$FindSink$OfDouble_MethodInfo_[] = {
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FindOps$FindSink$OfDouble::*)()>(&FindOps$FindSink$OfDouble::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Double;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/util/OptionalDouble;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindSink$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.FindOps$FindSink$OfDouble", "java.util.stream.FindOps$FindSink", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FindOps$FindSink$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps$FindSink$OfDouble",
	"java.util.stream.FindOps$FindSink",
	"java.util.stream.Sink$OfDouble",
	_FindOps$FindSink$OfDouble_FieldInfo_,
	_FindOps$FindSink$OfDouble_MethodInfo_,
	"Ljava/util/stream/FindOps$FindSink<Ljava/lang/Double;Ljava/util/OptionalDouble;>;Ljava/util/stream/Sink$OfDouble;",
	nullptr,
	_FindOps$FindSink$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindSink$OfDouble($Class* clazz) {
	return $of($alloc(FindOps$FindSink$OfDouble));
}

void FindOps$FindSink$OfDouble::accept(Object$* value) {
	this->$FindOps$FindSink::accept(value);
}

bool FindOps$FindSink$OfDouble::cancellationRequested() {
	 return this->$FindOps$FindSink::cancellationRequested();
}

void FindOps$FindSink$OfDouble::begin(int64_t size) {
	this->$FindOps$FindSink::begin(size);
}

void FindOps$FindSink$OfDouble::end() {
	this->$FindOps$FindSink::end();
}

void FindOps$FindSink$OfDouble::accept(int32_t value) {
	this->$FindOps$FindSink::accept(value);
}

void FindOps$FindSink$OfDouble::accept(int64_t value) {
	this->$FindOps$FindSink::accept(value);
}

$Consumer* FindOps$FindSink$OfDouble::andThen($Consumer* after) {
	 return this->$FindOps$FindSink::andThen(after);
}

int32_t FindOps$FindSink$OfDouble::hashCode() {
	 return this->$FindOps$FindSink::hashCode();
}

bool FindOps$FindSink$OfDouble::equals(Object$* obj) {
	 return this->$FindOps$FindSink::equals(obj);
}

$Object* FindOps$FindSink$OfDouble::clone() {
	 return this->$FindOps$FindSink::clone();
}

$String* FindOps$FindSink$OfDouble::toString() {
	 return this->$FindOps$FindSink::toString();
}

void FindOps$FindSink$OfDouble::finalize() {
	this->$FindOps$FindSink::finalize();
}

$TerminalOp* FindOps$FindSink$OfDouble::OP_FIND_FIRST = nullptr;
$TerminalOp* FindOps$FindSink$OfDouble::OP_FIND_ANY = nullptr;

void FindOps$FindSink$OfDouble::init$() {
	$FindOps$FindSink::init$();
}

void FindOps$FindSink$OfDouble::accept(double value) {
	accept($($Double::valueOf(value)));
}

$Object* FindOps$FindSink$OfDouble::get() {
	return $of(this->hasValue ? $OptionalDouble::of($nc(($cast($Double, this->value)))->doubleValue()) : ($OptionalDouble*)nullptr);
}

void FindOps$FindSink$OfDouble::accept($Double* value) {
	$FindOps$FindSink::accept($of(value));
}

void clinit$FindOps$FindSink$OfDouble($Class* class$) {
	$init($StreamShape);
	$var($StreamShape, var$0, $StreamShape::DOUBLE_VALUE);
	$var($Object, var$1, $of($OptionalDouble::empty()));
	$var($Predicate, var$2, static_cast<$Predicate*>($new(FindOps$FindSink$OfDouble$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfDouble::OP_FIND_FIRST, $new($FindOps$FindOp, true, var$0, var$1, var$2, static_cast<$Supplier*>($$new(FindOps$FindSink$OfDouble$$Lambda$OfDouble$1))));
	$var($StreamShape, var$3, $StreamShape::DOUBLE_VALUE);
	$var($Object, var$4, $of($OptionalDouble::empty()));
	$var($Predicate, var$5, static_cast<$Predicate*>($new(FindOps$FindSink$OfDouble$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfDouble::OP_FIND_ANY, $new($FindOps$FindOp, false, var$3, var$4, var$5, static_cast<$Supplier*>($$new(FindOps$FindSink$OfDouble$$Lambda$OfDouble$1))));
}

FindOps$FindSink$OfDouble::FindOps$FindSink$OfDouble() {
}

$Class* FindOps$FindSink$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FindOps$FindSink$OfDouble$$Lambda$isPresent::classInfo$.name)) {
			return FindOps$FindSink$OfDouble$$Lambda$isPresent::load$(name, initialize);
		}
		if (name->equals(FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::classInfo$.name)) {
			return FindOps$FindSink$OfDouble$$Lambda$OfDouble$1::load$(name, initialize);
		}
	}
	$loadClass(FindOps$FindSink$OfDouble, name, initialize, &_FindOps$FindSink$OfDouble_ClassInfo_, clinit$FindOps$FindSink$OfDouble, allocate$FindOps$FindSink$OfDouble);
	return class$;
}

$Class* FindOps$FindSink$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java