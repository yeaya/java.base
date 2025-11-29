#include <java/util/stream/FindOps$FindSink$OfLong.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/OptionalLong.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/FindOps$FindOp.h>
#include <java/util/stream/FindOps$FindSink.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/TerminalSink.h>
#include <jcpp.h>

#undef LONG_VALUE
#undef OP_FIND_ANY
#undef OP_FIND_FIRST

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $OptionalLong = ::java::util::OptionalLong;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $FindOps$FindOp = ::java::util::stream::FindOps$FindOp;
using $FindOps$FindSink = ::java::util::stream::FindOps$FindSink;
using $StreamShape = ::java::util::stream::StreamShape;
using $TerminalOp = ::java::util::stream::TerminalOp;

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindSink$OfLong$$Lambda$isPresent : public $Predicate {
	$class(FindOps$FindSink$OfLong$$Lambda$isPresent, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($OptionalLong, inst$)->isPresent();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfLong$$Lambda$isPresent>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfLong$$Lambda$isPresent::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfLong$$Lambda$isPresent::*)()>(&FindOps$FindSink$OfLong$$Lambda$isPresent::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfLong$$Lambda$isPresent::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfLong$$Lambda$isPresent",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfLong$$Lambda$isPresent::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfLong$$Lambda$isPresent, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfLong$$Lambda$isPresent::class$ = nullptr;

class FindOps$FindSink$OfLong$$Lambda$OfLong$1 : public $Supplier {
	$class(FindOps$FindSink$OfLong$$Lambda$OfLong$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new(FindOps$FindSink$OfLong));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FindOps$FindSink$OfLong$$Lambda$OfLong$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FindOps$FindSink$OfLong$$Lambda$OfLong$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindOps$FindSink$OfLong$$Lambda$OfLong$1::*)()>(&FindOps$FindSink$OfLong$$Lambda$OfLong$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FindOps$FindSink$OfLong$$Lambda$OfLong$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.FindOps$FindSink$OfLong$$Lambda$OfLong$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* FindOps$FindSink$OfLong$$Lambda$OfLong$1::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink$OfLong$$Lambda$OfLong$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FindOps$FindSink$OfLong$$Lambda$OfLong$1::class$ = nullptr;

$FieldInfo _FindOps$FindSink$OfLong_FieldInfo_[] = {
	{"OP_FIND_FIRST", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<Ljava/lang/Long;Ljava/util/OptionalLong;>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfLong, OP_FIND_FIRST)},
	{"OP_FIND_ANY", "Ljava/util/stream/TerminalOp;", "Ljava/util/stream/TerminalOp<Ljava/lang/Long;Ljava/util/OptionalLong;>;", $STATIC | $FINAL, $staticField(FindOps$FindSink$OfLong, OP_FIND_ANY)},
	{}
};

$MethodInfo _FindOps$FindSink$OfLong_MethodInfo_[] = {
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FindOps$FindSink$OfLong::*)()>(&FindOps$FindSink$OfLong::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Long;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindSink$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.FindOps$FindSink$OfLong", "java.util.stream.FindOps$FindSink", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FindOps$FindSink$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.FindOps$FindSink$OfLong",
	"java.util.stream.FindOps$FindSink",
	"java.util.stream.Sink$OfLong",
	_FindOps$FindSink$OfLong_FieldInfo_,
	_FindOps$FindSink$OfLong_MethodInfo_,
	"Ljava/util/stream/FindOps$FindSink<Ljava/lang/Long;Ljava/util/OptionalLong;>;Ljava/util/stream/Sink$OfLong;",
	nullptr,
	_FindOps$FindSink$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindSink$OfLong($Class* clazz) {
	return $of($alloc(FindOps$FindSink$OfLong));
}

void FindOps$FindSink$OfLong::accept(Object$* value) {
	this->$FindOps$FindSink::accept(value);
}

bool FindOps$FindSink$OfLong::cancellationRequested() {
	 return this->$FindOps$FindSink::cancellationRequested();
}

void FindOps$FindSink$OfLong::begin(int64_t size) {
	this->$FindOps$FindSink::begin(size);
}

void FindOps$FindSink$OfLong::end() {
	this->$FindOps$FindSink::end();
}

void FindOps$FindSink$OfLong::accept(int32_t value) {
	this->$FindOps$FindSink::accept(value);
}

void FindOps$FindSink$OfLong::accept(double value) {
	this->$FindOps$FindSink::accept(value);
}

$Consumer* FindOps$FindSink$OfLong::andThen($Consumer* after) {
	 return this->$FindOps$FindSink::andThen(after);
}

int32_t FindOps$FindSink$OfLong::hashCode() {
	 return this->$FindOps$FindSink::hashCode();
}

bool FindOps$FindSink$OfLong::equals(Object$* obj) {
	 return this->$FindOps$FindSink::equals(obj);
}

$Object* FindOps$FindSink$OfLong::clone() {
	 return this->$FindOps$FindSink::clone();
}

$String* FindOps$FindSink$OfLong::toString() {
	 return this->$FindOps$FindSink::toString();
}

void FindOps$FindSink$OfLong::finalize() {
	this->$FindOps$FindSink::finalize();
}

$TerminalOp* FindOps$FindSink$OfLong::OP_FIND_FIRST = nullptr;
$TerminalOp* FindOps$FindSink$OfLong::OP_FIND_ANY = nullptr;

void FindOps$FindSink$OfLong::init$() {
	$FindOps$FindSink::init$();
}

void FindOps$FindSink$OfLong::accept(int64_t value) {
	accept($($Long::valueOf(value)));
}

$Object* FindOps$FindSink$OfLong::get() {
	return $of(this->hasValue ? $OptionalLong::of($nc(($cast($Long, this->value)))->longValue()) : ($OptionalLong*)nullptr);
}

void FindOps$FindSink$OfLong::accept($Long* value) {
	$FindOps$FindSink::accept($of(value));
}

void clinit$FindOps$FindSink$OfLong($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($StreamShape);
	$var($StreamShape, var$0, $StreamShape::LONG_VALUE);
	$var($Object, var$1, $of($OptionalLong::empty()));
	$var($Predicate, var$2, static_cast<$Predicate*>($new(FindOps$FindSink$OfLong$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfLong::OP_FIND_FIRST, $new($FindOps$FindOp, true, var$0, var$1, var$2, static_cast<$Supplier*>($$new(FindOps$FindSink$OfLong$$Lambda$OfLong$1))));
	$var($StreamShape, var$3, $StreamShape::LONG_VALUE);
	$var($Object, var$4, $of($OptionalLong::empty()));
	$var($Predicate, var$5, static_cast<$Predicate*>($new(FindOps$FindSink$OfLong$$Lambda$isPresent)));
	$assignStatic(FindOps$FindSink$OfLong::OP_FIND_ANY, $new($FindOps$FindOp, false, var$3, var$4, var$5, static_cast<$Supplier*>($$new(FindOps$FindSink$OfLong$$Lambda$OfLong$1))));
}

FindOps$FindSink$OfLong::FindOps$FindSink$OfLong() {
}

$Class* FindOps$FindSink$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FindOps$FindSink$OfLong$$Lambda$isPresent::classInfo$.name)) {
			return FindOps$FindSink$OfLong$$Lambda$isPresent::load$(name, initialize);
		}
		if (name->equals(FindOps$FindSink$OfLong$$Lambda$OfLong$1::classInfo$.name)) {
			return FindOps$FindSink$OfLong$$Lambda$OfLong$1::load$(name, initialize);
		}
	}
	$loadClass(FindOps$FindSink$OfLong, name, initialize, &_FindOps$FindSink$OfLong_ClassInfo_, clinit$FindOps$FindSink$OfLong, allocate$FindOps$FindSink$OfLong);
	return class$;
}

$Class* FindOps$FindSink$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java