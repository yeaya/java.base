#include <java/lang/CharSequence.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence$1CharIterator.h>
#include <java/lang/CharSequence$1CodePointIterator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
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
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $Serializable = ::java::io::Serializable;
using $CharSequence$1CharIterator = ::java::lang::CharSequence$1CharIterator;
using $CharSequence$1CodePointIterator = ::java::lang::CharSequence$1CodePointIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators = ::java::util::Spliterators;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace lang {

class CharSequence$$Lambda$lambda$chars$0 : public $Supplier {
	$class(CharSequence$$Lambda$lambda$chars$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(CharSequence* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$chars$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharSequence$$Lambda$lambda$chars$0>());
	}
	CharSequence* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharSequence$$Lambda$lambda$chars$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CharSequence$$Lambda$lambda$chars$0, inst$)},
	{}
};
$MethodInfo CharSequence$$Lambda$lambda$chars$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(static_cast<void(CharSequence$$Lambda$lambda$chars$0::*)(CharSequence*)>(&CharSequence$$Lambda$lambda$chars$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharSequence$$Lambda$lambda$chars$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.CharSequence$$Lambda$lambda$chars$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* CharSequence$$Lambda$lambda$chars$0::load$($String* name, bool initialize) {
	$loadClass(CharSequence$$Lambda$lambda$chars$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharSequence$$Lambda$lambda$chars$0::class$ = nullptr;

class CharSequence$$Lambda$lambda$codePoints$1$1 : public $Supplier {
	$class(CharSequence$$Lambda$lambda$codePoints$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(CharSequence* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$codePoints$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharSequence$$Lambda$lambda$codePoints$1$1>());
	}
	CharSequence* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharSequence$$Lambda$lambda$codePoints$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CharSequence$$Lambda$lambda$codePoints$1$1, inst$)},
	{}
};
$MethodInfo CharSequence$$Lambda$lambda$codePoints$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(static_cast<void(CharSequence$$Lambda$lambda$codePoints$1$1::*)(CharSequence*)>(&CharSequence$$Lambda$lambda$codePoints$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharSequence$$Lambda$lambda$codePoints$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.CharSequence$$Lambda$lambda$codePoints$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* CharSequence$$Lambda$lambda$codePoints$1$1::load$($String* name, bool initialize) {
	$loadClass(CharSequence$$Lambda$lambda$codePoints$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharSequence$$Lambda$lambda$codePoints$1$1::class$ = nullptr;

$MethodInfo _CharSequence_MethodInfo_[] = {
	{"charAt", "(I)C", nullptr, $PUBLIC | $ABSTRACT},
	{"chars", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"codePoints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(CharSequence*,CharSequence*)>(&CharSequence::compare))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lambda$chars$0", "()Ljava/util/Spliterator$OfInt;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Spliterator$OfInt*(CharSequence::*)()>(&CharSequence::lambda$chars$0))},
	{"lambda$codePoints$1", "()Ljava/util/Spliterator$OfInt;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Spliterator$OfInt*(CharSequence::*)()>(&CharSequence::lambda$codePoints$1))},
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CharSequence_InnerClassesInfo_[] = {
	{"java.lang.CharSequence$1CodePointIterator", nullptr, "CodePointIterator", 0},
	{"java.lang.CharSequence$1CharIterator", nullptr, "CharIterator", 0},
	{}
};

$ClassInfo _CharSequence_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.CharSequence",
	nullptr,
	nullptr,
	nullptr,
	_CharSequence_MethodInfo_,
	nullptr,
	nullptr,
	_CharSequence_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.CharSequence$1CodePointIterator,java.lang.CharSequence$1CharIterator"
};

$Object* allocate$CharSequence($Class* clazz) {
	return $of($alloc(CharSequence));
}

$String* CharSequence::toString() {
	 return this->$Object::toString();
}

bool CharSequence::isEmpty() {
	return this->length() == 0;
}

$IntStream* CharSequence::chars() {
	{
	}
	return $StreamSupport::intStream(static_cast<$Supplier*>($$new(CharSequence$$Lambda$lambda$chars$0, this)), ($Spliterator::SUBSIZED | $Spliterator::SIZED) | $Spliterator::ORDERED, false);
}

$IntStream* CharSequence::codePoints() {
	{
	}
	return $StreamSupport::intStream(static_cast<$Supplier*>($$new(CharSequence$$Lambda$lambda$codePoints$1$1, this)), $Spliterator::ORDERED, false);
}

int32_t CharSequence::compare(CharSequence* cs1, CharSequence* cs2) {
	if ($equals($Objects::requireNonNull(cs1), $Objects::requireNonNull(cs2))) {
		return 0;
	}
	if ($nc($of(cs1))->getClass() == $nc($of(cs2))->getClass() && $instanceOf($Comparable, cs1)) {
		return $nc(($cast($Comparable, cs1)))->compareTo(cs2);
	}
	{
		int32_t i = 0;
		int32_t var$0 = $nc(cs1)->length();
		int32_t len = $Math::min(var$0, $nc(cs2)->length());
		for (; i < len; ++i) {
			char16_t a = $nc(cs1)->charAt(i);
			char16_t b = $nc(cs2)->charAt(i);
			if (a != b) {
				return a - b;
			}
		}
	}
	int32_t var$1 = $nc(cs1)->length();
	return var$1 - $nc(cs2)->length();
}

$Spliterator$OfInt* CharSequence::lambda$codePoints$1() {
	return $Spliterators::spliteratorUnknownSize(static_cast<$PrimitiveIterator$OfInt*>($$new($CharSequence$1CodePointIterator, this)), $Spliterator::ORDERED);
}

$Spliterator$OfInt* CharSequence::lambda$chars$0() {
	$var($PrimitiveIterator$OfInt, var$0, static_cast<$PrimitiveIterator$OfInt*>($new($CharSequence$1CharIterator, this)));
	return $Spliterators::spliterator(var$0, (int64_t)length(), $Spliterator::ORDERED);
}

$Class* CharSequence::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CharSequence$$Lambda$lambda$chars$0::classInfo$.name)) {
			return CharSequence$$Lambda$lambda$chars$0::load$(name, initialize);
		}
		if (name->equals(CharSequence$$Lambda$lambda$codePoints$1$1::classInfo$.name)) {
			return CharSequence$$Lambda$lambda$codePoints$1$1::load$(name, initialize);
		}
	}
	$loadClass(CharSequence, name, initialize, &_CharSequence_ClassInfo_, allocate$CharSequence);
	return class$;
}

$Class* CharSequence::class$ = nullptr;

	} // lang
} // java