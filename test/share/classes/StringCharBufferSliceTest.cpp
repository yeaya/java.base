#include <StringCharBufferSliceTest.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/InvalidMarkException.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $InvalidMarkException = ::java::nio::InvalidMarkException;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;

class StringCharBufferSliceTest$$Lambda$lambda$main$0 : public $BiConsumer {
	$class(StringCharBufferSliceTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* b, Object$* s) override {
		StringCharBufferSliceTest::lambda$main$0($cast($CharBuffer, b), $cast($CharBuffer, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringCharBufferSliceTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StringCharBufferSliceTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest$$Lambda$lambda$main$0::*)()>(&StringCharBufferSliceTest$$Lambda$lambda$main$0::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringCharBufferSliceTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringCharBufferSliceTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(StringCharBufferSliceTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$0::class$ = nullptr;

class StringCharBufferSliceTest$$Lambda$lambda$main$1$1 : public $BiConsumer {
	$class(StringCharBufferSliceTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* b, Object$* s) override {
		StringCharBufferSliceTest::lambda$main$1($cast($CharBuffer, b), $cast($CharBuffer, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringCharBufferSliceTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StringCharBufferSliceTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest$$Lambda$lambda$main$1$1::*)()>(&StringCharBufferSliceTest$$Lambda$lambda$main$1$1::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringCharBufferSliceTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringCharBufferSliceTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(StringCharBufferSliceTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class StringCharBufferSliceTest$$Lambda$lambda$main$2$2 : public $Consumer {
	$class(StringCharBufferSliceTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* s) override {
		StringCharBufferSliceTest::lambda$main$2($cast($CharBuffer, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringCharBufferSliceTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StringCharBufferSliceTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest$$Lambda$lambda$main$2$2::*)()>(&StringCharBufferSliceTest$$Lambda$lambda$main$2$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringCharBufferSliceTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringCharBufferSliceTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(StringCharBufferSliceTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class StringCharBufferSliceTest$$Lambda$lambda$main$3$3 : public $Consumer {
	$class(StringCharBufferSliceTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* s) override {
		StringCharBufferSliceTest::lambda$main$3($cast($CharBuffer, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringCharBufferSliceTest$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StringCharBufferSliceTest$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest$$Lambda$lambda$main$3$3::*)()>(&StringCharBufferSliceTest$$Lambda$lambda$main$3$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringCharBufferSliceTest$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringCharBufferSliceTest$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(StringCharBufferSliceTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$3$3::class$ = nullptr;

class StringCharBufferSliceTest$$Lambda$lambda$main$4$4 : public $Consumer {
	$class(StringCharBufferSliceTest$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* s) override {
		StringCharBufferSliceTest::lambda$main$4($cast($CharBuffer, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringCharBufferSliceTest$$Lambda$lambda$main$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StringCharBufferSliceTest$$Lambda$lambda$main$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest$$Lambda$lambda$main$4$4::*)()>(&StringCharBufferSliceTest$$Lambda$lambda$main$4$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringCharBufferSliceTest$$Lambda$lambda$main$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringCharBufferSliceTest$$Lambda$lambda$main$4$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$loadClass(StringCharBufferSliceTest$$Lambda$lambda$main$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$4$4::class$ = nullptr;

class StringCharBufferSliceTest$$Lambda$lambda$main$5$5 : public $Consumer {
	$class(StringCharBufferSliceTest$$Lambda$lambda$main$5$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* s) override {
		StringCharBufferSliceTest::lambda$main$5($cast($CharBuffer, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringCharBufferSliceTest$$Lambda$lambda$main$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StringCharBufferSliceTest$$Lambda$lambda$main$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest$$Lambda$lambda$main$5$5::*)()>(&StringCharBufferSliceTest$$Lambda$lambda$main$5$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringCharBufferSliceTest$$Lambda$lambda$main$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringCharBufferSliceTest$$Lambda$lambda$main$5$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$5$5::load$($String* name, bool initialize) {
	$loadClass(StringCharBufferSliceTest$$Lambda$lambda$main$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringCharBufferSliceTest$$Lambda$lambda$main$5$5::class$ = nullptr;

$MethodInfo _StringCharBufferSliceTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringCharBufferSliceTest::*)()>(&StringCharBufferSliceTest::init$))},
	{"lambda$main$0", "(Ljava/nio/CharBuffer;Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CharBuffer*,$CharBuffer*)>(&StringCharBufferSliceTest::lambda$main$0))},
	{"lambda$main$1", "(Ljava/nio/CharBuffer;Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CharBuffer*,$CharBuffer*)>(&StringCharBufferSliceTest::lambda$main$1))},
	{"lambda$main$2", "(Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CharBuffer*)>(&StringCharBufferSliceTest::lambda$main$2))},
	{"lambda$main$3", "(Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CharBuffer*)>(&StringCharBufferSliceTest::lambda$main$3))},
	{"lambda$main$4", "(Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CharBuffer*)>(&StringCharBufferSliceTest::lambda$main$4))},
	{"lambda$main$5", "(Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CharBuffer*)>(&StringCharBufferSliceTest::lambda$main$5))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StringCharBufferSliceTest::main)), "java.lang.Exception"},
	{"test", "(Ljava/nio/CharBuffer;Ljava/nio/CharBuffer;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($CharBuffer*,$CharBuffer*)>(&StringCharBufferSliceTest::test)), "java.lang.RuntimeException"},
	{}
};

$ClassInfo _StringCharBufferSliceTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringCharBufferSliceTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringCharBufferSliceTest_MethodInfo_
};

$Object* allocate$StringCharBufferSliceTest($Class* clazz) {
	return $of($alloc(StringCharBufferSliceTest));
}

void StringCharBufferSliceTest::init$() {
}

void StringCharBufferSliceTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing the slice method..."_s);
	$var($String, in, "for testing"_s);
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing with the position 0."_s);
	$var($CharBuffer, buff, $CharBuffer::wrap(static_cast<$CharSequence*>(in)));
	StringCharBufferSliceTest::test(buff, $($nc(buff)->slice()));
	StringCharBufferSliceTest::test(buff, $($nc(buff)->slice(0, buff->remaining())));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing with new position."_s);
	$nc(buff)->position(2);
	StringCharBufferSliceTest::test(buff, $(buff->slice()));
	StringCharBufferSliceTest::test(buff, $(buff->slice(2, buff->remaining())));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing with non zero initial position."_s);
	$assign(buff, $CharBuffer::wrap(static_cast<$CharSequence*>(in), 3, in->length()));
	StringCharBufferSliceTest::test(buff, $(buff->slice()));
	StringCharBufferSliceTest::test(buff, $(buff->slice(0, buff->remaining())));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing slice result with get()"_s);
	buff->position(4);
	buff->limit(7);
	$var($BiConsumer, bitest, static_cast<$BiConsumer*>($new(StringCharBufferSliceTest$$Lambda$lambda$main$0)));
	$nc(bitest)->accept(buff, $(buff->slice()));
	buff->position(4);
	bitest->accept(buff, $(buff->slice(4, 3)));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing slice result with get(int)"_s);
	buff->position(4);
	buff->limit(7);
	$assign(bitest, static_cast<$BiConsumer*>($new(StringCharBufferSliceTest$$Lambda$lambda$main$1$1)));
	bitest->accept(buff, $(buff->slice()));
	buff->position(4);
	bitest->accept(buff, $(buff->slice(4, 3)));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing slice with result of slice"_s);
	buff->position(0);
	buff->limit(buff->capacity());
	$var($Consumer, test, static_cast<$Consumer*>($new(StringCharBufferSliceTest$$Lambda$lambda$main$2$2)));
	$nc(test)->accept($(buff->slice()));
	test->accept($(buff->slice(0, buff->capacity())));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing toString."_s);
	buff->position(4);
	buff->limit(7);
	$assign(test, static_cast<$Consumer*>($new(StringCharBufferSliceTest$$Lambda$lambda$main$3$3)));
	test->accept($(buff->slice()));
	test->accept($(buff->slice(4, 3)));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing subSequence."_s);
	buff->position(4);
	buff->limit(8);
	$assign(test, static_cast<$Consumer*>($new(StringCharBufferSliceTest$$Lambda$lambda$main$4$4)));
	test->accept($(buff->slice()));
	test->accept($(buff->slice(4, 4)));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: testing duplicate."_s);
	buff->position(4);
	buff->limit(8);
	$assign(test, static_cast<$Consumer*>($new(StringCharBufferSliceTest$$Lambda$lambda$main$5$5)));
	test->accept($(buff->slice()));
	test->accept($(buff->slice(4, 4)));
	$nc($System::out)->println(">>> StringCharBufferSliceTest-main: done!"_s);
}

void StringCharBufferSliceTest::test($CharBuffer* buff, $CharBuffer* slice) {
	bool marked = false;
	try {
		$nc(slice)->reset();
		marked = true;
	} catch ($InvalidMarkException& ime) {
	}
	bool var$1 = marked || $nc(slice)->position() != 0;
	if (!var$1) {
		int32_t var$2 = $nc(buff)->remaining();
		var$1 = var$2 != $nc(slice)->limit();
	}
	bool var$0 = var$1;
	if (!var$0) {
		int32_t var$3 = $nc(buff)->remaining();
		var$0 = var$3 != $nc(slice)->capacity();
	}
	if (var$0) {
		$throwNew($RuntimeException, "Calling the CharBuffer.slice method failed."_s);
	}
}

void StringCharBufferSliceTest::lambda$main$5($CharBuffer* s) {
	$useLocalCurrentObjectStackCache();
	$var($CharBuffer, dupe, $nc(s)->duplicate());
	bool var$2 = $nc(dupe)->charAt(0) != u't';
	bool var$1 = var$2 || $nc(dupe)->charAt(1) != u'e';
	bool var$0 = var$1 || $nc(dupe)->charAt(2) != u's';
	if (var$0 || $nc(dupe)->charAt(3) != u't') {
		$throwNew($RuntimeException, $$str({"bad duplicate() after slice(): \'"_s, dupe, "\'"_s}));
	}
}

void StringCharBufferSliceTest::lambda$main$4($CharBuffer* s) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, subSeq, $nc(s)->subSequence(1, 3));
	bool var$0 = $nc(subSeq)->charAt(0) != u'e';
	if (var$0 || $nc(subSeq)->charAt(1) != u's') {
		$throwNew($RuntimeException, $$str({"bad subSequence() after slice(): \'"_s, subSeq, "\'"_s}));
	}
}

void StringCharBufferSliceTest::lambda$main$3($CharBuffer* s) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(s)->toString()))->equals("tes"_s)) {
		$throwNew($RuntimeException, $$str({"bad toString() after slice(): "_s, $(s->toString())}));
	}
}

void StringCharBufferSliceTest::lambda$main$2($CharBuffer* s$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($CharBuffer, s, s$renamed);
	for (int32_t i = 0; i < 4; ++i) {
		$nc(s)->position(i);
		$var($CharBuffer, nextSlice, s->slice());
		if ($nc(nextSlice)->position() != 0) {
			$throwNew($RuntimeException, "New buffer\'s position should be zero"_s);
		}
		if (!$nc(nextSlice)->equals(s)) {
			$throwNew($RuntimeException, "New buffer should be equal"_s);
		}
		$assign(s, nextSlice);
	}
}

void StringCharBufferSliceTest::lambda$main$1($CharBuffer* b, $CharBuffer* s) {
	for (int32_t i = 0; i < 3; ++i) {
		char16_t var$0 = $nc(s)->get(i);
		if (var$0 != $nc(b)->get(4 + i)) {
			$throwNew($RuntimeException, "Wrong characters in slice result."_s);
		}
	}
}

void StringCharBufferSliceTest::lambda$main$0($CharBuffer* b, $CharBuffer* s) {
	for (int32_t i = 0; i < 3; ++i) {
		char16_t var$0 = $nc(s)->get();
		if (var$0 != $nc(b)->get()) {
			$throwNew($RuntimeException, "Wrong characters in slice result."_s);
		}
	}
}

StringCharBufferSliceTest::StringCharBufferSliceTest() {
}

$Class* StringCharBufferSliceTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StringCharBufferSliceTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return StringCharBufferSliceTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(StringCharBufferSliceTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return StringCharBufferSliceTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(StringCharBufferSliceTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return StringCharBufferSliceTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(StringCharBufferSliceTest$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return StringCharBufferSliceTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(StringCharBufferSliceTest$$Lambda$lambda$main$4$4::classInfo$.name)) {
			return StringCharBufferSliceTest$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
		if (name->equals(StringCharBufferSliceTest$$Lambda$lambda$main$5$5::classInfo$.name)) {
			return StringCharBufferSliceTest$$Lambda$lambda$main$5$5::load$(name, initialize);
		}
	}
	$loadClass(StringCharBufferSliceTest, name, initialize, &_StringCharBufferSliceTest_ClassInfo_, allocate$StringCharBufferSliceTest);
	return class$;
}

$Class* StringCharBufferSliceTest::class$ = nullptr;