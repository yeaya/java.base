#include <RepetitiveLambdaSerialization.h>
#include <LSI.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <jcpp.h>

#undef REPS

using $LSI = ::LSI;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;

class RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1 : public $LSI {
	$class(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1, $NO_CLASS_INIT, $LSI)
public:
	void init$() {
	}
	virtual $String* convert($String* z) override {
		 return RepetitiveLambdaSerialization::lambda$main$4db77a28$1(z);
	}
};
$Class* RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1, init$, void)},
		{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1, convert, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1",
		"java.lang.Object",
		"LSI",
		nullptr,
		methodInfos$$
	};
	$loadClass(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1);
	});
	return class$;
}
$Class* RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1::class$ = nullptr;

void RepetitiveLambdaSerialization::init$() {
}

void RepetitiveLambdaSerialization::main($StringArray* args) {
	$useLocalObjectStack();
	$var($LSI, ls, $new(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1));
	for (int32_t i = 0; i < RepetitiveLambdaSerialization::REPS; ++i) {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutput, out, $new($ObjectOutputStream, baos));
		out->writeObject(ls);
		out->flush();
		out->close();
	}
	$nc($System::out)->println("Passed."_s);
}

$Object* RepetitiveLambdaSerialization::$deserializeLambda$($SerializedLambda* lambda) {
	$useLocalObjectStack();
	{
		$var($String, s1343$, $nc(lambda)->getImplMethodName());
		int32_t tmp1343$ = -1;
		switch ($nc(s1343$)->hashCode()) {
		case (int32_t)0xeba8db50:
			if (s1343$->equals("lambda$main$4db77a28$1"_s)) {
				tmp1343$ = 0;
			}
			break;
		}
		switch (tmp1343$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $$nc(lambda->getFunctionalInterfaceClass())->equals("LSI"_s);
				bool var$2 = var$3 && $$nc(lambda->getFunctionalInterfaceMethodName())->equals("convert"_s);
				bool var$1 = var$2 && $$nc(lambda->getFunctionalInterfaceMethodSignature())->equals("(Ljava/lang/String;)Ljava/lang/String;"_s);
				bool var$0 = var$1 && $$nc(lambda->getImplClass())->equals("RepetitiveLambdaSerialization"_s);
				if (var$0 && $$nc(lambda->getImplMethodSignature())->equals("(Ljava/lang/String;)Ljava/lang/String;"_s)) {
					return $new(RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1);
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

$String* RepetitiveLambdaSerialization::lambda$main$4db77a28$1($String* z) {
	return $str({"["_s, z, "]"_s});
}

RepetitiveLambdaSerialization::RepetitiveLambdaSerialization() {
}

$Class* RepetitiveLambdaSerialization::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1")) {
			return RepetitiveLambdaSerialization$$Lambda$lambda$main$4db77a28$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"REPS", "I", nullptr, $STATIC | $FINAL, $constField(RepetitiveLambdaSerialization, REPS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RepetitiveLambdaSerialization, $deserializeLambda$, $Object*, $SerializedLambda*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(RepetitiveLambdaSerialization, init$, void)},
		{"lambda$main$4db77a28$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RepetitiveLambdaSerialization, lambda$main$4db77a28$1, $String*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RepetitiveLambdaSerialization, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RepetitiveLambdaSerialization",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RepetitiveLambdaSerialization, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepetitiveLambdaSerialization);
	});
	return class$;
}

$Class* RepetitiveLambdaSerialization::class$ = nullptr;