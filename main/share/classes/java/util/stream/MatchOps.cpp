#include <java/util/stream/MatchOps.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/MatchOps$1MatchSink.h>
#include <java/util/stream/MatchOps$2MatchSink.h>
#include <java/util/stream/MatchOps$3MatchSink.h>
#include <java/util/stream/MatchOps$4MatchSink.h>
#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps$MatchOp.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/TerminalOp.h>
#include <jcpp.h>

#undef DOUBLE_VALUE
#undef INT_VALUE
#undef LONG_VALUE
#undef REFERENCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $IntPredicate = ::java::util::function::IntPredicate;
using $LongPredicate = ::java::util::function::LongPredicate;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $MatchOps$1MatchSink = ::java::util::stream::MatchOps$1MatchSink;
using $MatchOps$2MatchSink = ::java::util::stream::MatchOps$2MatchSink;
using $MatchOps$3MatchSink = ::java::util::stream::MatchOps$3MatchSink;
using $MatchOps$4MatchSink = ::java::util::stream::MatchOps$4MatchSink;
using $MatchOps$BooleanTerminalSink = ::java::util::stream::MatchOps$BooleanTerminalSink;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $MatchOps$MatchOp = ::java::util::stream::MatchOps$MatchOp;
using $StreamShape = ::java::util::stream::StreamShape;
using $TerminalOp = ::java::util::stream::TerminalOp;

namespace java {
	namespace util {
		namespace stream {

class MatchOps$$Lambda$lambda$makeRef$0 : public $Supplier {
	$class(MatchOps$$Lambda$lambda$makeRef$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($MatchOps$MatchKind* matchKind, $Predicate* predicate) {
		$set(this, matchKind, matchKind);
		$set(this, predicate, predicate);
	}
	virtual $Object* get() override {
		 return $of(MatchOps::lambda$makeRef$0(matchKind, predicate));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MatchOps$$Lambda$lambda$makeRef$0>());
	}
	$MatchOps$MatchKind* matchKind = nullptr;
	$Predicate* predicate = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MatchOps$$Lambda$lambda$makeRef$0::fieldInfos[3] = {
	{"matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeRef$0, matchKind)},
	{"predicate", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeRef$0, predicate)},
	{}
};
$MethodInfo MatchOps$$Lambda$lambda$makeRef$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(static_cast<void(MatchOps$$Lambda$lambda$makeRef$0::*)($MatchOps$MatchKind*,$Predicate*)>(&MatchOps$$Lambda$lambda$makeRef$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MatchOps$$Lambda$lambda$makeRef$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.MatchOps$$Lambda$lambda$makeRef$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* MatchOps$$Lambda$lambda$makeRef$0::load$($String* name, bool initialize) {
	$loadClass(MatchOps$$Lambda$lambda$makeRef$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MatchOps$$Lambda$lambda$makeRef$0::class$ = nullptr;

class MatchOps$$Lambda$lambda$makeInt$1$1 : public $Supplier {
	$class(MatchOps$$Lambda$lambda$makeInt$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($MatchOps$MatchKind* matchKind, $IntPredicate* predicate) {
		$set(this, matchKind, matchKind);
		$set(this, predicate, predicate);
	}
	virtual $Object* get() override {
		 return $of(MatchOps::lambda$makeInt$1(matchKind, predicate));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MatchOps$$Lambda$lambda$makeInt$1$1>());
	}
	$MatchOps$MatchKind* matchKind = nullptr;
	$IntPredicate* predicate = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MatchOps$$Lambda$lambda$makeInt$1$1::fieldInfos[3] = {
	{"matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeInt$1$1, matchKind)},
	{"predicate", "Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeInt$1$1, predicate)},
	{}
};
$MethodInfo MatchOps$$Lambda$lambda$makeInt$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(MatchOps$$Lambda$lambda$makeInt$1$1::*)($MatchOps$MatchKind*,$IntPredicate*)>(&MatchOps$$Lambda$lambda$makeInt$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MatchOps$$Lambda$lambda$makeInt$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.MatchOps$$Lambda$lambda$makeInt$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* MatchOps$$Lambda$lambda$makeInt$1$1::load$($String* name, bool initialize) {
	$loadClass(MatchOps$$Lambda$lambda$makeInt$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MatchOps$$Lambda$lambda$makeInt$1$1::class$ = nullptr;

class MatchOps$$Lambda$lambda$makeLong$2$2 : public $Supplier {
	$class(MatchOps$$Lambda$lambda$makeLong$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($MatchOps$MatchKind* matchKind, $LongPredicate* predicate) {
		$set(this, matchKind, matchKind);
		$set(this, predicate, predicate);
	}
	virtual $Object* get() override {
		 return $of(MatchOps::lambda$makeLong$2(matchKind, predicate));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MatchOps$$Lambda$lambda$makeLong$2$2>());
	}
	$MatchOps$MatchKind* matchKind = nullptr;
	$LongPredicate* predicate = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MatchOps$$Lambda$lambda$makeLong$2$2::fieldInfos[3] = {
	{"matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeLong$2$2, matchKind)},
	{"predicate", "Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeLong$2$2, predicate)},
	{}
};
$MethodInfo MatchOps$$Lambda$lambda$makeLong$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(MatchOps$$Lambda$lambda$makeLong$2$2::*)($MatchOps$MatchKind*,$LongPredicate*)>(&MatchOps$$Lambda$lambda$makeLong$2$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MatchOps$$Lambda$lambda$makeLong$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.MatchOps$$Lambda$lambda$makeLong$2$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* MatchOps$$Lambda$lambda$makeLong$2$2::load$($String* name, bool initialize) {
	$loadClass(MatchOps$$Lambda$lambda$makeLong$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MatchOps$$Lambda$lambda$makeLong$2$2::class$ = nullptr;

class MatchOps$$Lambda$lambda$makeDouble$3$3 : public $Supplier {
	$class(MatchOps$$Lambda$lambda$makeDouble$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($MatchOps$MatchKind* matchKind, $DoublePredicate* predicate) {
		$set(this, matchKind, matchKind);
		$set(this, predicate, predicate);
	}
	virtual $Object* get() override {
		 return $of(MatchOps::lambda$makeDouble$3(matchKind, predicate));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MatchOps$$Lambda$lambda$makeDouble$3$3>());
	}
	$MatchOps$MatchKind* matchKind = nullptr;
	$DoublePredicate* predicate = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MatchOps$$Lambda$lambda$makeDouble$3$3::fieldInfos[3] = {
	{"matchKind", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeDouble$3$3, matchKind)},
	{"predicate", "Ljava/util/function/DoublePredicate;", nullptr, $PUBLIC, $field(MatchOps$$Lambda$lambda$makeDouble$3$3, predicate)},
	{}
};
$MethodInfo MatchOps$$Lambda$lambda$makeDouble$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/DoublePredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(MatchOps$$Lambda$lambda$makeDouble$3$3::*)($MatchOps$MatchKind*,$DoublePredicate*)>(&MatchOps$$Lambda$lambda$makeDouble$3$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MatchOps$$Lambda$lambda$makeDouble$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.MatchOps$$Lambda$lambda$makeDouble$3$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* MatchOps$$Lambda$lambda$makeDouble$3$3::load$($String* name, bool initialize) {
	$loadClass(MatchOps$$Lambda$lambda$makeDouble$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MatchOps$$Lambda$lambda$makeDouble$3$3::class$ = nullptr;

$MethodInfo _MatchOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MatchOps::*)()>(&MatchOps::init$))},
	{"lambda$makeDouble$3", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/DoublePredicate;)Ljava/util/stream/MatchOps$BooleanTerminalSink;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MatchOps$BooleanTerminalSink*(*)($MatchOps$MatchKind*,$DoublePredicate*)>(&MatchOps::lambda$makeDouble$3))},
	{"lambda$makeInt$1", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/IntPredicate;)Ljava/util/stream/MatchOps$BooleanTerminalSink;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MatchOps$BooleanTerminalSink*(*)($MatchOps$MatchKind*,$IntPredicate*)>(&MatchOps::lambda$makeInt$1))},
	{"lambda$makeLong$2", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/LongPredicate;)Ljava/util/stream/MatchOps$BooleanTerminalSink;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MatchOps$BooleanTerminalSink*(*)($MatchOps$MatchKind*,$LongPredicate*)>(&MatchOps::lambda$makeLong$2))},
	{"lambda$makeRef$0", "(Ljava/util/stream/MatchOps$MatchKind;Ljava/util/function/Predicate;)Ljava/util/stream/MatchOps$BooleanTerminalSink;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MatchOps$BooleanTerminalSink*(*)($MatchOps$MatchKind*,$Predicate*)>(&MatchOps::lambda$makeRef$0))},
	{"makeDouble", "(Ljava/util/function/DoublePredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;", "(Ljava/util/function/DoublePredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp<Ljava/lang/Double;Ljava/lang/Boolean;>;", $PUBLIC | $STATIC, $method(static_cast<$TerminalOp*(*)($DoublePredicate*,$MatchOps$MatchKind*)>(&MatchOps::makeDouble))},
	{"makeInt", "(Ljava/util/function/IntPredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;", "(Ljava/util/function/IntPredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp<Ljava/lang/Integer;Ljava/lang/Boolean;>;", $PUBLIC | $STATIC, $method(static_cast<$TerminalOp*(*)($IntPredicate*,$MatchOps$MatchKind*)>(&MatchOps::makeInt))},
	{"makeLong", "(Ljava/util/function/LongPredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;", "(Ljava/util/function/LongPredicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp<Ljava/lang/Long;Ljava/lang/Boolean;>;", $PUBLIC | $STATIC, $method(static_cast<$TerminalOp*(*)($LongPredicate*,$MatchOps$MatchKind*)>(&MatchOps::makeLong))},
	{"makeRef", "(Ljava/util/function/Predicate;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp;", "<T:Ljava/lang/Object;>(Ljava/util/function/Predicate<-TT;>;Ljava/util/stream/MatchOps$MatchKind;)Ljava/util/stream/TerminalOp<TT;Ljava/lang/Boolean;>;", $PUBLIC | $STATIC, $method(static_cast<$TerminalOp*(*)($Predicate*,$MatchOps$MatchKind*)>(&MatchOps::makeRef))},
	{}
};

$InnerClassInfo _MatchOps_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$MatchTask", "java.util.stream.MatchOps", "MatchTask", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.MatchOps$BooleanTerminalSink", "java.util.stream.MatchOps", "BooleanTerminalSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.MatchOps$MatchOp", "java.util.stream.MatchOps", "MatchOp", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
	{"java.util.stream.MatchOps$4MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$3MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$2MatchSink", nullptr, "MatchSink", 0},
	{"java.util.stream.MatchOps$1MatchSink", nullptr, "MatchSink", 0},
	{}
};

$ClassInfo _MatchOps_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.MatchOps",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MatchOps_MethodInfo_,
	nullptr,
	nullptr,
	_MatchOps_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps$MatchTask,java.util.stream.MatchOps$BooleanTerminalSink,java.util.stream.MatchOps$MatchOp,java.util.stream.MatchOps$MatchKind,java.util.stream.MatchOps$4MatchSink,java.util.stream.MatchOps$3MatchSink,java.util.stream.MatchOps$2MatchSink,java.util.stream.MatchOps$1MatchSink"
};

$Object* allocate$MatchOps($Class* clazz) {
	return $of($alloc(MatchOps));
}

void MatchOps::init$() {
}

$TerminalOp* MatchOps::makeRef($Predicate* predicate, $MatchOps$MatchKind* matchKind) {
	$Objects::requireNonNull(predicate);
	$Objects::requireNonNull(matchKind);
	{
	}
	$init($StreamShape);
	return $new($MatchOps$MatchOp, $StreamShape::REFERENCE, matchKind, static_cast<$Supplier*>($$new(MatchOps$$Lambda$lambda$makeRef$0, matchKind, predicate)));
}

$TerminalOp* MatchOps::makeInt($IntPredicate* predicate, $MatchOps$MatchKind* matchKind) {
	$Objects::requireNonNull(predicate);
	$Objects::requireNonNull(matchKind);
	{
	}
	$init($StreamShape);
	return $new($MatchOps$MatchOp, $StreamShape::INT_VALUE, matchKind, static_cast<$Supplier*>($$new(MatchOps$$Lambda$lambda$makeInt$1$1, matchKind, predicate)));
}

$TerminalOp* MatchOps::makeLong($LongPredicate* predicate, $MatchOps$MatchKind* matchKind) {
	$Objects::requireNonNull(predicate);
	$Objects::requireNonNull(matchKind);
	{
	}
	$init($StreamShape);
	return $new($MatchOps$MatchOp, $StreamShape::LONG_VALUE, matchKind, static_cast<$Supplier*>($$new(MatchOps$$Lambda$lambda$makeLong$2$2, matchKind, predicate)));
}

$TerminalOp* MatchOps::makeDouble($DoublePredicate* predicate, $MatchOps$MatchKind* matchKind) {
	$Objects::requireNonNull(predicate);
	$Objects::requireNonNull(matchKind);
	{
	}
	$init($StreamShape);
	return $new($MatchOps$MatchOp, $StreamShape::DOUBLE_VALUE, matchKind, static_cast<$Supplier*>($$new(MatchOps$$Lambda$lambda$makeDouble$3$3, matchKind, predicate)));
}

$MatchOps$BooleanTerminalSink* MatchOps::lambda$makeDouble$3($MatchOps$MatchKind* matchKind, $DoublePredicate* predicate) {
	return $new($MatchOps$4MatchSink, matchKind, predicate);
}

$MatchOps$BooleanTerminalSink* MatchOps::lambda$makeLong$2($MatchOps$MatchKind* matchKind, $LongPredicate* predicate) {
	return $new($MatchOps$3MatchSink, matchKind, predicate);
}

$MatchOps$BooleanTerminalSink* MatchOps::lambda$makeInt$1($MatchOps$MatchKind* matchKind, $IntPredicate* predicate) {
	return $new($MatchOps$2MatchSink, matchKind, predicate);
}

$MatchOps$BooleanTerminalSink* MatchOps::lambda$makeRef$0($MatchOps$MatchKind* matchKind, $Predicate* predicate) {
	return $new($MatchOps$1MatchSink, matchKind, predicate);
}

MatchOps::MatchOps() {
}

$Class* MatchOps::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MatchOps$$Lambda$lambda$makeRef$0::classInfo$.name)) {
			return MatchOps$$Lambda$lambda$makeRef$0::load$(name, initialize);
		}
		if (name->equals(MatchOps$$Lambda$lambda$makeInt$1$1::classInfo$.name)) {
			return MatchOps$$Lambda$lambda$makeInt$1$1::load$(name, initialize);
		}
		if (name->equals(MatchOps$$Lambda$lambda$makeLong$2$2::classInfo$.name)) {
			return MatchOps$$Lambda$lambda$makeLong$2$2::load$(name, initialize);
		}
		if (name->equals(MatchOps$$Lambda$lambda$makeDouble$3$3::classInfo$.name)) {
			return MatchOps$$Lambda$lambda$makeDouble$3$3::load$(name, initialize);
		}
	}
	$loadClass(MatchOps, name, initialize, &_MatchOps_ClassInfo_, allocate$MatchOps);
	return class$;
}

$Class* MatchOps::class$ = nullptr;

		} // stream
	} // util
} // java