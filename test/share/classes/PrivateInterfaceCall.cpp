#include <PrivateInterfaceCall.h>
#include <PrivateInterfaceCall$C2.h>
#include <PrivateInterfaceCall$C3.h>
#include <PrivateInterfaceCall$C4.h>
#include <PrivateInterfaceCall$D1.h>
#include <PrivateInterfaceCall$E.h>
#include <PrivateInterfaceCall$I2.h>
#include <PrivateInterfaceCall$I3.h>
#include <PrivateInterfaceCall$I4.h>
#include <PrivateInterfaceCall$Test.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $PrivateInterfaceCall$C2 = ::PrivateInterfaceCall$C2;
using $PrivateInterfaceCall$C3 = ::PrivateInterfaceCall$C3;
using $PrivateInterfaceCall$C4 = ::PrivateInterfaceCall$C4;
using $PrivateInterfaceCall$D1 = ::PrivateInterfaceCall$D1;
using $PrivateInterfaceCall$E = ::PrivateInterfaceCall$E;
using $PrivateInterfaceCall$I2 = ::PrivateInterfaceCall$I2;
using $PrivateInterfaceCall$I3 = ::PrivateInterfaceCall$I3;
using $PrivateInterfaceCall$I4 = ::PrivateInterfaceCall$I4;
using $PrivateInterfaceCall$Test = ::PrivateInterfaceCall$Test;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$0();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$1();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$2();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$3();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$4();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$5();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$6();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$7();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$8();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$9();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$10();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$11();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$12();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$13();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$14();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$15();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$16();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$17();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$18();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$19();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$20();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$21();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$22();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$23();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$24();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$25();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$26();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::class$ = nullptr;

class PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runNegativeTests$27();
	}
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27",
		"java.lang.Object",
		"PrivateInterfaceCall$Test",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27);
	});
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::class$ = nullptr;

$MethodHandle* PrivateInterfaceCall::mh_I2_priv_m_from_I2 = nullptr;
$MethodHandle* PrivateInterfaceCall::mh_I2_priv_m_from_I3 = nullptr;
$MethodHandle* PrivateInterfaceCall::mh_I2_priv_m_from_PIC = nullptr;
$MethodHandle* PrivateInterfaceCall::mh_I2_toString_from_I2 = nullptr;
$MethodHandle* PrivateInterfaceCall::mh_I2_getClass_from_I2 = nullptr;

void PrivateInterfaceCall::init$() {
}

void PrivateInterfaceCall::invokeDirect($PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall);
	$nc(i)->priv_m();
}

void PrivateInterfaceCall::invokeInterfaceMH($PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall);
	$nc(PrivateInterfaceCall::mh_I2_priv_m_from_PIC)->invokeExact($$new($ObjectArray, {i}));
}

void PrivateInterfaceCall::runPositiveTests() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14));
	shouldNotThrow($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15));
}

void PrivateInterfaceCall::runNegativeTests() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$nc($System::out)->println("ICCE PrivateInterfaceCall.invokeDirect D1"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16));
	$System::out->println("ICCE PrivateInterfaceCall.invokeDirect E"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17));
	$System::out->println("ICCE PrivateInterfaceCall.invokeInterfaceMH D1"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18));
	$System::out->println("ICCE PrivateInterfaceCall.invokeInterfaceMH E"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19));
	$System::out->println("ICCE I2.invokeInterfaceMH D1"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20));
	$System::out->println("ICCE I2.invokeInterfaceMH E"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21));
	$System::out->println("ICCE I2.invokeInterfaceObjectFinalMH D1"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22));
	$System::out->println("ICCE I2.invokeInterfaceObjectFinalMH E"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23));
	$System::out->println("ICCE I3.invokeInterfaceMH D1"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24));
	$System::out->println("ICCE I3.invokeInterfaceMH E"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25));
	$System::out->println("ICCE I4.invokeDirect D1"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26));
	$System::out->println("ICCE I4.invokeDirect E"_s);
	shouldThrowICCE($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27));
}

void PrivateInterfaceCall::warmup() {
	$init(PrivateInterfaceCall);
	for (int32_t i = 0; i < 20000; ++i) {
		runPositiveTests();
	}
}

void PrivateInterfaceCall::main($StringArray* args) {
	$init(PrivateInterfaceCall);
	$nc($System::out)->println("UNRESOLVED:"_s);
	runNegativeTests();
	runPositiveTests();
	$System::out->println("RESOLVED:"_s);
	runNegativeTests();
	$System::out->println("WARMUP:"_s);
	warmup();
	$System::out->println("COMPILED:"_s);
	runNegativeTests();
	runPositiveTests();
}

void PrivateInterfaceCall::shouldThrowICCE($PrivateInterfaceCall$Test* t) {
	$init(PrivateInterfaceCall);
	$load($IncompatibleClassChangeError);
	shouldThrow($IncompatibleClassChangeError::class$, "does not implement the requested interface"_s, t);
}

void PrivateInterfaceCall::shouldThrow($Class* expectedError, $String* reason, $PrivateInterfaceCall$Test* t) {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	try {
		$nc(t)->run();
	} catch ($Throwable& e) {
		if (expectedError == e->getClass()) {
			$var($String, msg, e->getMessage());
			if ((msg != nullptr && msg->contains(reason)) || msg == nullptr) {
				$nc($System::out)->println($$str({"Threw expected: "_s, e}));
				return;
			} else {
				$throwNew($AssertionError, $$str({"Wrong exception reason: expected \'"_s, reason, "\', got \'"_s, msg, "\'"_s}), e);
			}
		} else {
			$var($String, msg, $String::format("Wrong exception thrown: expected=%s; thrown=%s"_s, $$new($ObjectArray, {
				$($nc(expectedError)->getName()),
				$(e->getClass()->getName())
			})));
			$throwNew($AssertionError, msg, e);
		}
	}
	$throwNew($AssertionError, $$of($str({"No exception thrown: expected "_s, $($nc(expectedError)->getName())})));
}

void PrivateInterfaceCall::shouldNotThrow($PrivateInterfaceCall$Test* t) {
	$init(PrivateInterfaceCall);
	try {
		$nc(t)->run();
	} catch ($Throwable& e) {
		$throwNew($AssertionError, "Exception was thrown: "_s, e);
	}
}

$PrivateInterfaceCall$I2* PrivateInterfaceCall::unsafeCastI2(Object$* obj) {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($PrivateInterfaceCall$I2);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($$nc($nc(mh)->type())->changeReturnType($PrivateInterfaceCall$I2::class$))));
		return $cast($PrivateInterfaceCall$I2, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, e);
	}
	$shouldNotReachHere();
}

$PrivateInterfaceCall$I3* PrivateInterfaceCall::unsafeCastI3(Object$* obj) {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($PrivateInterfaceCall$I3);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($$nc($nc(mh)->type())->changeReturnType($PrivateInterfaceCall$I3::class$))));
		return $cast($PrivateInterfaceCall$I3, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, e);
	}
	$shouldNotReachHere();
}

$PrivateInterfaceCall$I4* PrivateInterfaceCall::unsafeCastI4(Object$* obj) {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($PrivateInterfaceCall$I4);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($$nc($nc(mh)->type())->changeReturnType($PrivateInterfaceCall$I4::class$))));
		return $cast($PrivateInterfaceCall$I4, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, e);
	}
	$shouldNotReachHere();
}

void PrivateInterfaceCall::lambda$runNegativeTests$27() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I4::invokeDirect($(unsafeCastI4($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$26() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I4::invokeDirect($(unsafeCastI4($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$25() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I3::invokeInterfaceMH($(unsafeCastI3($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$24() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I3::invokeInterfaceMH($(unsafeCastI3($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$23() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$22() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$21() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I2::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$20() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I2::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$19() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	PrivateInterfaceCall::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$18() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	PrivateInterfaceCall::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$17() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	PrivateInterfaceCall::invokeDirect($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$16() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	PrivateInterfaceCall::invokeDirect($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runPositiveTests$15() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I4::invokeDirectFinal($$new($PrivateInterfaceCall$C4));
}

void PrivateInterfaceCall::lambda$runPositiveTests$14() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I4::invokeDirect($$new($PrivateInterfaceCall$C4));
}

void PrivateInterfaceCall::lambda$runPositiveTests$13() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I3::invokeInterfaceMH($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$12() {
	$init(PrivateInterfaceCall);
	$useLocalObjectStack();
	$PrivateInterfaceCall$I3::invokeInterfaceMH($(unsafeCastI3($$new($PrivateInterfaceCall$C2))));
}

void PrivateInterfaceCall::lambda$runPositiveTests$11() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$10() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH($$new($PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall::lambda$runPositiveTests$9() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeInterfaceObjectMH($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$8() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeInterfaceObjectMH($$new($PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall::lambda$runPositiveTests$7() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeInterfaceMH($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$6() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeInterfaceMH($$new($PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall::lambda$runPositiveTests$5() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeDirect($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$4() {
	$init(PrivateInterfaceCall);
	$PrivateInterfaceCall$I2::invokeDirect($$new($PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall::lambda$runPositiveTests$3() {
	$init(PrivateInterfaceCall);
	PrivateInterfaceCall::invokeInterfaceMH($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$2() {
	$init(PrivateInterfaceCall);
	PrivateInterfaceCall::invokeInterfaceMH($$new($PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall::lambda$runPositiveTests$1() {
	$init(PrivateInterfaceCall);
	PrivateInterfaceCall::invokeDirect($$new($PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall::lambda$runPositiveTests$0() {
	$init(PrivateInterfaceCall);
	PrivateInterfaceCall::invokeDirect($$new($PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		try {
			$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
			$load($PrivateInterfaceCall$I2);
			$assignStatic(PrivateInterfaceCall::mh_I2_priv_m_from_PIC, $$nc($MethodHandles::lookup())->findVirtual($PrivateInterfaceCall$I2::class$, "priv_m"_s, mt));
			$PrivateInterfaceCall$I2::init();
			$PrivateInterfaceCall$I3::init();
		} catch ($Throwable& e) {
			$throwNew($Error, e);
		}
	}
}

PrivateInterfaceCall::PrivateInterfaceCall() {
}

$Class* PrivateInterfaceCall::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15")) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::load$(name, initialize);
		}
		if (name->equals("PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27")) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"mh_I2_priv_m_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_priv_m_from_I2)},
		{"mh_I2_priv_m_from_I3", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_priv_m_from_I3)},
		{"mh_I2_priv_m_from_PIC", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_priv_m_from_PIC)},
		{"mh_I2_toString_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_toString_from_I2)},
		{"mh_I2_getClass_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_getClass_from_I2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrivateInterfaceCall, init$, void)},
		{"invokeDirect", "(LPrivateInterfaceCall$I2;)V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, invokeDirect, void, $PrivateInterfaceCall$I2*)},
		{"invokeInterfaceMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, invokeInterfaceMH, void, $PrivateInterfaceCall$I2*), "java.lang.Throwable"},
		{"lambda$runNegativeTests$16", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$16, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$17", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$17, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$18", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$18, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$19", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$19, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$20", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$20, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$21", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$21, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$22", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$22, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$23", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$23, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$24", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$24, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$25", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$25, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$26", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$26, void), "java.lang.Throwable"},
		{"lambda$runNegativeTests$27", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runNegativeTests$27, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$0, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$1, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$10", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$10, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$11", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$11, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$12", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$12, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$13", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$13, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$14", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$14, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$15", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$15, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$2, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$3, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$4, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$5, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$6", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$6, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$7", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$7, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$8", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$8, void), "java.lang.Throwable"},
		{"lambda$runPositiveTests$9", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrivateInterfaceCall, lambda$runPositiveTests$9, void), "java.lang.Throwable"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall, main, void, $StringArray*), "java.lang.Throwable"},
		{"runNegativeTests", "()V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, runNegativeTests, void)},
		{"runPositiveTests", "()V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, runPositiveTests, void)},
		{"shouldNotThrow", "(LPrivateInterfaceCall$Test;)V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, shouldNotThrow, void, $PrivateInterfaceCall$Test*)},
		{"shouldThrow", "(Ljava/lang/Class;Ljava/lang/String;LPrivateInterfaceCall$Test;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;LPrivateInterfaceCall$Test;)V", $STATIC, $staticMethod(PrivateInterfaceCall, shouldThrow, void, $Class*, $String*, $PrivateInterfaceCall$Test*)},
		{"shouldThrowICCE", "(LPrivateInterfaceCall$Test;)V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, shouldThrowICCE, void, $PrivateInterfaceCall$Test*)},
		{"unsafeCastI2", "(Ljava/lang/Object;)LPrivateInterfaceCall$I2;", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, unsafeCastI2, $PrivateInterfaceCall$I2*, Object$*)},
		{"unsafeCastI3", "(Ljava/lang/Object;)LPrivateInterfaceCall$I3;", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, unsafeCastI3, $PrivateInterfaceCall$I3*, Object$*)},
		{"unsafeCastI4", "(Ljava/lang/Object;)LPrivateInterfaceCall$I4;", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, unsafeCastI4, $PrivateInterfaceCall$I4*, Object$*)},
		{"warmup", "()V", nullptr, $STATIC, $staticMethod(PrivateInterfaceCall, warmup, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$Test", "PrivateInterfaceCall", "Test", $STATIC | $INTERFACE | $ABSTRACT},
		{"PrivateInterfaceCall$E", "PrivateInterfaceCall", "E", $STATIC},
		{"PrivateInterfaceCall$D1", "PrivateInterfaceCall", "D1", $STATIC},
		{"PrivateInterfaceCall$C4", "PrivateInterfaceCall", "C4", $STATIC},
		{"PrivateInterfaceCall$C3", "PrivateInterfaceCall", "C3", $STATIC},
		{"PrivateInterfaceCall$C2", "PrivateInterfaceCall", "C2", $STATIC},
		{"PrivateInterfaceCall$I4", "PrivateInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
		{"PrivateInterfaceCall$I3", "PrivateInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
		{"PrivateInterfaceCall$I2", "PrivateInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
		{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PrivateInterfaceCall",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"PrivateInterfaceCall$Test,PrivateInterfaceCall$E,PrivateInterfaceCall$D1,PrivateInterfaceCall$C4,PrivateInterfaceCall$C3,PrivateInterfaceCall$C2,PrivateInterfaceCall$I4,PrivateInterfaceCall$I3,PrivateInterfaceCall$I2,PrivateInterfaceCall$I1"
	};
	$loadClass(PrivateInterfaceCall, name, initialize, &classInfo$$, PrivateInterfaceCall::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall);
	});
	return class$;
}

$Class* PrivateInterfaceCall::class$ = nullptr;