#include <ReadCloseRaceNPE.h>
#include <java/io/CharArrayReader.h>
#include <java/io/IOException.h>
#include <java/io/PushbackReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/io/StringReader.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef BUF_SIZE
#undef TIMEOUT_MS

using $CharArrayReader = ::java::io::CharArrayReader;
using $IOException = ::java::io::IOException;
using $PushbackReader = ::java::io::PushbackReader;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;

class ReadCloseRaceNPE$$Lambda$lambda$testReader$0 : public $Runnable {
	$class(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($AtomicReference* readerRef, $Supplier* readerSupplier, $AtomicBoolean* isFinished) {
		$set(this, readerRef, readerRef);
		$set(this, readerSupplier, readerSupplier);
		$set(this, isFinished, isFinished);
	}
	virtual void run() override {
		ReadCloseRaceNPE::lambda$testReader$0(readerRef, readerSupplier, isFinished);
	}
	$AtomicReference* readerRef = nullptr;
	$Supplier* readerSupplier = nullptr;
	$AtomicBoolean* isFinished = nullptr;
};
$Class* ReadCloseRaceNPE$$Lambda$lambda$testReader$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"readerRef", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, readerRef)},
		{"readerSupplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, readerSupplier)},
		{"isFinished", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, isFinished)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;Ljava/util/function/Supplier;Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, init$, void, $AtomicReference*, $Supplier*, $AtomicBoolean*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ReadCloseRaceNPE$$Lambda$lambda$testReader$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadCloseRaceNPE$$Lambda$lambda$testReader$0);
	});
	return class$;
}
$Class* ReadCloseRaceNPE$$Lambda$lambda$testReader$0::class$ = nullptr;

class ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1 : public $Runnable {
	$class(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($AtomicBoolean* isFinished, $AtomicReference* readerRef) {
		$set(this, isFinished, isFinished);
		$set(this, readerRef, readerRef);
	}
	virtual void run() override {
		ReadCloseRaceNPE::lambda$testReader$1(isFinished, readerRef);
	}
	$AtomicBoolean* isFinished = nullptr;
	$AtomicReference* readerRef = nullptr;
};
$Class* ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isFinished", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, isFinished)},
		{"readerRef", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, readerRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PUBLIC, $method(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, init$, void, $AtomicBoolean*, $AtomicReference*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1);
	});
	return class$;
}
$Class* ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1::class$ = nullptr;

class ReadCloseRaceNPE$$Lambda$lambda$main$2$2 : public $Supplier {
	$class(ReadCloseRaceNPE$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(ReadCloseRaceNPE::lambda$main$2());
	}
};
$Class* ReadCloseRaceNPE$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadCloseRaceNPE$$Lambda$lambda$main$2$2, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ReadCloseRaceNPE$$Lambda$lambda$main$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ReadCloseRaceNPE$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadCloseRaceNPE$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadCloseRaceNPE$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* ReadCloseRaceNPE$$Lambda$lambda$main$2$2::class$ = nullptr;

class ReadCloseRaceNPE$$Lambda$lambda$main$3$3 : public $Supplier {
	$class(ReadCloseRaceNPE$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(ReadCloseRaceNPE::lambda$main$3());
	}
};
$Class* ReadCloseRaceNPE$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadCloseRaceNPE$$Lambda$lambda$main$3$3, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ReadCloseRaceNPE$$Lambda$lambda$main$3$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ReadCloseRaceNPE$$Lambda$lambda$main$3$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadCloseRaceNPE$$Lambda$lambda$main$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadCloseRaceNPE$$Lambda$lambda$main$3$3);
	});
	return class$;
}
$Class* ReadCloseRaceNPE$$Lambda$lambda$main$3$3::class$ = nullptr;

class ReadCloseRaceNPE$$Lambda$lambda$main$4$4 : public $Consumer {
	$class(ReadCloseRaceNPE$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* x) override {
		ReadCloseRaceNPE::lambda$main$4($cast($Exception, x));
	}
};
$Class* ReadCloseRaceNPE$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadCloseRaceNPE$$Lambda$lambda$main$4$4, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ReadCloseRaceNPE$$Lambda$lambda$main$4$4, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ReadCloseRaceNPE$$Lambda$lambda$main$4$4",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadCloseRaceNPE$$Lambda$lambda$main$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadCloseRaceNPE$$Lambda$lambda$main$4$4);
	});
	return class$;
}
$Class* ReadCloseRaceNPE$$Lambda$lambda$main$4$4::class$ = nullptr;

$List* ReadCloseRaceNPE::failures = nullptr;

void ReadCloseRaceNPE::init$() {
}

void ReadCloseRaceNPE::testReader($Supplier* readerSupplier) {
	$init(ReadCloseRaceNPE);
	$useLocalObjectStack();
	$var($AtomicReference, readerRef, $new($AtomicReference, $$cast($Reader, $nc(readerSupplier)->get())));
	$var($AtomicBoolean, isFinished, $new($AtomicBoolean));
	$var($Runnable, readTask, $new(ReadCloseRaceNPE$$Lambda$lambda$testReader$0, readerRef, readerSupplier, isFinished));
	$var($Runnable, closeTask, $new(ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1, isFinished, readerRef));
	$var($Thread, readThread, $new($Thread, readTask));
	$var($Thread, closeThread, $new($Thread, closeTask));
	readThread->start();
	closeThread->start();
	readThread->join();
	closeThread->join();
}

void ReadCloseRaceNPE::main($StringArray* args) {
	$init(ReadCloseRaceNPE);
	$useLocalObjectStack();
	$var($String, s, "Two riders were approaching.\\n"_s);
	$var($Supplier, charPushbackReaderSupplier, $new(ReadCloseRaceNPE$$Lambda$lambda$main$2$2));
	testReader(charPushbackReaderSupplier);
	$var($Supplier, stringPushbackReaderSupplier, $new(ReadCloseRaceNPE$$Lambda$lambda$main$3$3));
	testReader(stringPushbackReaderSupplier);
	if (!ReadCloseRaceNPE::failures->isEmpty()) {
		$$nc(ReadCloseRaceNPE::failures->stream())->forEach($$new(ReadCloseRaceNPE$$Lambda$lambda$main$4$4));
		$throwNew($RuntimeException, "PushbackReaderNPE failed"_s);
	}
}

void ReadCloseRaceNPE::lambda$main$4($Exception* x) {
	$init(ReadCloseRaceNPE);
	$nc((x))->printStackTrace();
}

$Reader* ReadCloseRaceNPE::lambda$main$3() {
	$init(ReadCloseRaceNPE);
	$useLocalObjectStack();
	$var($String, s, "Two riders were approaching.\\n"_s);
	$var($StringReader, in, $new($StringReader, s));
	return $new($PushbackReader, in, ReadCloseRaceNPE::BUF_SIZE);
}

$Reader* ReadCloseRaceNPE::lambda$main$2() {
	$init(ReadCloseRaceNPE);
	$useLocalObjectStack();
	$var($String, s, "Two riders were approaching.\\n"_s);
	$var($chars, buf, $new($chars, s->length()));
	s->getChars(0, s->length(), buf, 0);
	$var($CharArrayReader, in, $new($CharArrayReader, buf));
	return $new($PushbackReader, in, ReadCloseRaceNPE::BUF_SIZE);
}

void ReadCloseRaceNPE::lambda$testReader$1($AtomicBoolean* isFinished, $AtomicReference* readerRef) {
	$init(ReadCloseRaceNPE);
	$useLocalObjectStack();
	while (!$nc(isFinished)->get()) {
		try {
			$$sure($Reader, $nc(readerRef)->get())->close();
		} catch ($Exception& e) {
			if (!($instanceOf($IOException, e))) {
				e->printStackTrace();
			}
		}
	}
}

void ReadCloseRaceNPE::lambda$testReader$0($AtomicReference* readerRef, $Supplier* readerSupplier, $AtomicBoolean* isFinished) {
	$init(ReadCloseRaceNPE);
	$useLocalObjectStack();
	int64_t startTime = $System::currentTimeMillis();
	while ($System::currentTimeMillis() - startTime < ReadCloseRaceNPE::TIMEOUT_MS) {
		try {
			$$sure($Reader, $nc(readerRef)->get())->read();
		} catch ($Exception& e) {
			if (!($instanceOf($IOException, e))) {
				ReadCloseRaceNPE::failures->add(e);
				break;
			}
			$nc(readerRef)->set($$cast($Reader, $nc(readerSupplier)->get()));
		}
	}
	$nc(isFinished)->set(true);
}

void ReadCloseRaceNPE::clinit$($Class* clazz) {
	$assignStatic(ReadCloseRaceNPE::failures, $new($ArrayList));
}

ReadCloseRaceNPE::ReadCloseRaceNPE() {
}

$Class* ReadCloseRaceNPE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ReadCloseRaceNPE$$Lambda$lambda$testReader$0")) {
			return ReadCloseRaceNPE$$Lambda$lambda$testReader$0::load$(name, initialize);
		}
		if (name->equals("ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1")) {
			return ReadCloseRaceNPE$$Lambda$lambda$testReader$1$1::load$(name, initialize);
		}
		if (name->equals("ReadCloseRaceNPE$$Lambda$lambda$main$2$2")) {
			return ReadCloseRaceNPE$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("ReadCloseRaceNPE$$Lambda$lambda$main$3$3")) {
			return ReadCloseRaceNPE$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals("ReadCloseRaceNPE$$Lambda$lambda$main$4$4")) {
			return ReadCloseRaceNPE$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadCloseRaceNPE, BUF_SIZE)},
		{"TIMEOUT_MS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadCloseRaceNPE, TIMEOUT_MS)},
		{"failures", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Exception;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ReadCloseRaceNPE, failures)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadCloseRaceNPE, init$, void)},
		{"lambda$main$2", "()Ljava/io/Reader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ReadCloseRaceNPE, lambda$main$2, $Reader*)},
		{"lambda$main$3", "()Ljava/io/Reader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ReadCloseRaceNPE, lambda$main$3, $Reader*)},
		{"lambda$main$4", "(Ljava/lang/Exception;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ReadCloseRaceNPE, lambda$main$4, void, $Exception*)},
		{"lambda$testReader$0", "(Ljava/util/concurrent/atomic/AtomicReference;Ljava/util/function/Supplier;Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ReadCloseRaceNPE, lambda$testReader$0, void, $AtomicReference*, $Supplier*, $AtomicBoolean*)},
		{"lambda$testReader$1", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ReadCloseRaceNPE, lambda$testReader$1, void, $AtomicBoolean*, $AtomicReference*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadCloseRaceNPE, main, void, $StringArray*), "java.lang.Throwable"},
		{"testReader", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/io/Reader;>;)V", $PRIVATE | $STATIC, $staticMethod(ReadCloseRaceNPE, testReader, void, $Supplier*), "java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadCloseRaceNPE",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadCloseRaceNPE, name, initialize, &classInfo$$, ReadCloseRaceNPE::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReadCloseRaceNPE);
	});
	return class$;
}

$Class* ReadCloseRaceNPE::class$ = nullptr;