#include <LambdaSerialization.h>

#include <LSI.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <jcpp.h>

using $LSI = ::LSI;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;

class LambdaSerialization$$Lambda$lambda$main$344202ae$1 : public $LSI {
	$class(LambdaSerialization$$Lambda$lambda$main$344202ae$1, $NO_CLASS_INIT, $LSI)
public:
	void init$() {
	}
	virtual $String* convert($String* z) override {
		 return LambdaSerialization::lambda$main$344202ae$1(z);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaSerialization$$Lambda$lambda$main$344202ae$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaSerialization$$Lambda$lambda$main$344202ae$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaSerialization$$Lambda$lambda$main$344202ae$1, init$, void)},
	{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LambdaSerialization$$Lambda$lambda$main$344202ae$1, convert, $String*, $String*)},
	{}
};
$ClassInfo LambdaSerialization$$Lambda$lambda$main$344202ae$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaSerialization$$Lambda$lambda$main$344202ae$1",
	"java.lang.Object",
	"LSI",
	nullptr,
	methodInfos
};
$Class* LambdaSerialization$$Lambda$lambda$main$344202ae$1::load$($String* name, bool initialize) {
	$loadClass(LambdaSerialization$$Lambda$lambda$main$344202ae$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaSerialization$$Lambda$lambda$main$344202ae$1::class$ = nullptr;

class LambdaSerialization$$Lambda$lambda$main$344202ae$2$1 : public $LSI {
	$class(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1, $NO_CLASS_INIT, $LSI)
public:
	void init$() {
	}
	virtual $String* convert($String* z) override {
		 return LambdaSerialization::lambda$main$344202ae$2(z);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaSerialization$$Lambda$lambda$main$344202ae$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaSerialization$$Lambda$lambda$main$344202ae$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1, init$, void)},
	{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1, convert, $String*, $String*)},
	{}
};
$ClassInfo LambdaSerialization$$Lambda$lambda$main$344202ae$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaSerialization$$Lambda$lambda$main$344202ae$2$1",
	"java.lang.Object",
	"LSI",
	nullptr,
	methodInfos
};
$Class* LambdaSerialization$$Lambda$lambda$main$344202ae$2$1::load$($String* name, bool initialize) {
	$loadClass(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaSerialization$$Lambda$lambda$main$344202ae$2$1::class$ = nullptr;

class LambdaSerialization$$Lambda$lambda$main$344202ae$3$2 : public $LSI {
	$class(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2, $NO_CLASS_INIT, $LSI)
public:
	void init$() {
	}
	virtual $String* convert($String* z) override {
		 return LambdaSerialization::lambda$main$344202ae$3(z);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaSerialization$$Lambda$lambda$main$344202ae$3$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaSerialization$$Lambda$lambda$main$344202ae$3$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2, init$, void)},
	{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2, convert, $String*, $String*)},
	{}
};
$ClassInfo LambdaSerialization$$Lambda$lambda$main$344202ae$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaSerialization$$Lambda$lambda$main$344202ae$3$2",
	"java.lang.Object",
	"LSI",
	nullptr,
	methodInfos
};
$Class* LambdaSerialization$$Lambda$lambda$main$344202ae$3$2::load$($String* name, bool initialize) {
	$loadClass(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaSerialization$$Lambda$lambda$main$344202ae$3$2::class$ = nullptr;

$FieldInfo _LambdaSerialization_FieldInfo_[] = {
	{"assertionCount", "I", nullptr, $STATIC, $staticField(LambdaSerialization, assertionCount)},
	{}
};

$MethodInfo _LambdaSerialization_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaSerialization, $deserializeLambda$, $Object*, $SerializedLambda*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaSerialization, init$, void)},
	{"assertTrue", "(Z)V", nullptr, $STATIC, $staticMethod(LambdaSerialization, assertTrue, void, bool)},
	{"lambda$main$344202ae$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaSerialization, lambda$main$344202ae$1, $String*, $String*)},
	{"lambda$main$344202ae$2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaSerialization, lambda$main$344202ae$2, $String*, $String*)},
	{"lambda$main$344202ae$3", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaSerialization, lambda$main$344202ae$3, $String*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaSerialization, main, void, $StringArray*), "java.lang.Exception"},
	{"readAssert", "(Ljava/io/ObjectInputStream;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(LambdaSerialization, readAssert, void, $ObjectInputStream*, $String*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"write", "(Ljava/io/ObjectOutput;LLSI;)V", nullptr, $STATIC, $staticMethod(LambdaSerialization, write, void, $ObjectOutput*, $LSI*), "java.io.IOException"},
	{}
};

$ClassInfo _LambdaSerialization_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LambdaSerialization",
	"java.lang.Object",
	nullptr,
	_LambdaSerialization_FieldInfo_,
	_LambdaSerialization_MethodInfo_
};

$Object* allocate$LambdaSerialization($Class* clazz) {
	return $of($alloc(LambdaSerialization));
}

int32_t LambdaSerialization::assertionCount = 0;

void LambdaSerialization::init$() {
}

void LambdaSerialization::assertTrue(bool cond) {
	$init(LambdaSerialization);
	++LambdaSerialization::assertionCount;
	if (!cond) {
		$throwNew($AssertionError);
	}
}

void LambdaSerialization::main($StringArray* args) {
	$init(LambdaSerialization);
	$useLocalCurrentObjectStackCache();
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutput, out, $new($ObjectOutputStream, baos));
		write(out, static_cast<$LSI*>($$new(LambdaSerialization$$Lambda$lambda$main$344202ae$1)));
		write(out, static_cast<$LSI*>($$new(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1)));
		write(out, static_cast<$LSI*>($$new(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2)));
		out->flush();
		out->close();
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, $(baos->toByteArray())));
		$var($ObjectInputStream, in, $new($ObjectInputStream, bais));
		readAssert(in, "[X]"_s);
		readAssert(in, "XX"_s);
		readAssert(in, "blah"_s);
		in->close();
	} catch ($IOException& e) {
		e->printStackTrace();
		$throw(e);
	}
	assertTrue(LambdaSerialization::assertionCount == 3);
}

void LambdaSerialization::write($ObjectOutput* out, $LSI* lamb) {
	$init(LambdaSerialization);
	$nc(out)->writeObject(lamb);
}

void LambdaSerialization::readAssert($ObjectInputStream* in, $String* expected) {
	$init(LambdaSerialization);
	$useLocalCurrentObjectStackCache();
	$var($LSI, ls, $cast($LSI, $nc(in)->readObject()));
	$var($String, result, $nc(ls)->convert("X"_s));
	$nc($System::out)->printf("Result: %s\n"_s, $$new($ObjectArray, {$of(result)}));
	assertTrue($nc(result)->equals(expected));
}

$Object* LambdaSerialization::$deserializeLambda$($SerializedLambda* lambda) {
	$init(LambdaSerialization);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s1127$, $nc(lambda)->getImplMethodName());
		int32_t tmp1127$ = -1;
		switch ($nc(s1127$)->hashCode()) {
		case 0x69232B02:
			{
				if (s1127$->equals("lambda$main$344202ae$3"_s)) {
					tmp1127$ = 0;
				}
				break;
			}
		case 0x69232B01:
			{
				if (s1127$->equals("lambda$main$344202ae$2"_s)) {
					tmp1127$ = 1;
				}
				break;
			}
		case 0x69232B00:
			{
				if (s1127$->equals("lambda$main$344202ae$1"_s)) {
					tmp1127$ = 2;
				}
				break;
			}
		}
		switch (tmp1127$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("LSI"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("convert"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/String;)Ljava/lang/String;"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("LambdaSerialization"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/lang/String;)Ljava/lang/String;"_s)) {
					return $of(static_cast<$LSI*>($new(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2)));
				}
				break;
			}
		case 1:
			{
				bool var$9 = lambda->getImplMethodKind() == 6;
				bool var$8 = var$9 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("LSI"_s);
				bool var$7 = var$8 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("convert"_s);
				bool var$6 = var$7 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/String;)Ljava/lang/String;"_s);
				bool var$5 = var$6 && $nc($of($(lambda->getImplClass())))->equals("LambdaSerialization"_s);
				if (var$5 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/lang/String;)Ljava/lang/String;"_s)) {
					return $of(static_cast<$LSI*>($new(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1)));
				}
				break;
			}
		case 2:
			{
				bool var$14 = lambda->getImplMethodKind() == 6;
				bool var$13 = var$14 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("LSI"_s);
				bool var$12 = var$13 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("convert"_s);
				bool var$11 = var$12 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/String;)Ljava/lang/String;"_s);
				bool var$10 = var$11 && $nc($of($(lambda->getImplClass())))->equals("LambdaSerialization"_s);
				if (var$10 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/lang/String;)Ljava/lang/String;"_s)) {
					return $of(static_cast<$LSI*>($new(LambdaSerialization$$Lambda$lambda$main$344202ae$1)));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

$String* LambdaSerialization::lambda$main$344202ae$3($String* z) {
	$init(LambdaSerialization);
	return "blah"_s;
}

$String* LambdaSerialization::lambda$main$344202ae$2($String* z) {
	$init(LambdaSerialization);
	return $str({z, z});
}

$String* LambdaSerialization::lambda$main$344202ae$1($String* z) {
	$init(LambdaSerialization);
	return $str({"["_s, z, "]"_s});
}

void clinit$LambdaSerialization($Class* class$) {
	LambdaSerialization::assertionCount = 0;
}

LambdaSerialization::LambdaSerialization() {
}

$Class* LambdaSerialization::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LambdaSerialization$$Lambda$lambda$main$344202ae$1::classInfo$.name)) {
			return LambdaSerialization$$Lambda$lambda$main$344202ae$1::load$(name, initialize);
		}
		if (name->equals(LambdaSerialization$$Lambda$lambda$main$344202ae$2$1::classInfo$.name)) {
			return LambdaSerialization$$Lambda$lambda$main$344202ae$2$1::load$(name, initialize);
		}
		if (name->equals(LambdaSerialization$$Lambda$lambda$main$344202ae$3$2::classInfo$.name)) {
			return LambdaSerialization$$Lambda$lambda$main$344202ae$3$2::load$(name, initialize);
		}
	}
	$loadClass(LambdaSerialization, name, initialize, &_LambdaSerialization_ClassInfo_, clinit$LambdaSerialization, allocate$LambdaSerialization);
	return class$;
}

$Class* LambdaSerialization::class$ = nullptr;