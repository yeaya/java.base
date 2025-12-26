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
#include <java/lang/CharSequence.h>
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
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

class PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0 : public $PrivateInterfaceCall$Test {
	$class(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0, $NO_CLASS_INIT, $PrivateInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		PrivateInterfaceCall::lambda$runPositiveTests$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::*)()>(&PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27",
	"java.lang.Object",
	"PrivateInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::class$ = nullptr;

$FieldInfo _PrivateInterfaceCall_FieldInfo_[] = {
	{"mh_I2_priv_m_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_priv_m_from_I2)},
	{"mh_I2_priv_m_from_I3", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_priv_m_from_I3)},
	{"mh_I2_priv_m_from_PIC", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_priv_m_from_PIC)},
	{"mh_I2_toString_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_toString_from_I2)},
	{"mh_I2_getClass_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticField(PrivateInterfaceCall, mh_I2_getClass_from_I2)},
	{}
};

$MethodInfo _PrivateInterfaceCall_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateInterfaceCall::*)()>(&PrivateInterfaceCall::init$))},
	{"invokeDirect", "(LPrivateInterfaceCall$I2;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall::invokeDirect))},
	{"invokeInterfaceMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall::invokeInterfaceMH)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$16", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$16)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$17", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$17)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$18", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$18)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$19", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$19)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$20", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$20)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$21", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$21)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$22", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$22)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$23", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$23)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$24", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$24)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$25", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$25)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$26", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$26)), "java.lang.Throwable"},
	{"lambda$runNegativeTests$27", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runNegativeTests$27)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$0)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$1)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$10", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$10)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$11", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$11)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$12", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$12)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$13", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$13)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$14", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$14)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$15", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$15)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$2)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$3)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$4)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$5)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$6", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$6)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$7", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$7)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$8", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$8)), "java.lang.Throwable"},
	{"lambda$runPositiveTests$9", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::lambda$runPositiveTests$9)), "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PrivateInterfaceCall::main)), "java.lang.Throwable"},
	{"runNegativeTests", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::runNegativeTests))},
	{"runPositiveTests", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::runPositiveTests))},
	{"shouldNotThrow", "(LPrivateInterfaceCall$Test;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrivateInterfaceCall$Test*)>(&PrivateInterfaceCall::shouldNotThrow))},
	{"shouldThrow", "(Ljava/lang/Class;Ljava/lang/String;LPrivateInterfaceCall$Test;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;LPrivateInterfaceCall$Test;)V", $STATIC, $method(static_cast<void(*)($Class*,$String*,$PrivateInterfaceCall$Test*)>(&PrivateInterfaceCall::shouldThrow))},
	{"shouldThrowICCE", "(LPrivateInterfaceCall$Test;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrivateInterfaceCall$Test*)>(&PrivateInterfaceCall::shouldThrowICCE))},
	{"unsafeCastI2", "(Ljava/lang/Object;)LPrivateInterfaceCall$I2;", nullptr, $STATIC, $method(static_cast<$PrivateInterfaceCall$I2*(*)(Object$*)>(&PrivateInterfaceCall::unsafeCastI2))},
	{"unsafeCastI3", "(Ljava/lang/Object;)LPrivateInterfaceCall$I3;", nullptr, $STATIC, $method(static_cast<$PrivateInterfaceCall$I3*(*)(Object$*)>(&PrivateInterfaceCall::unsafeCastI3))},
	{"unsafeCastI4", "(Ljava/lang/Object;)LPrivateInterfaceCall$I4;", nullptr, $STATIC, $method(static_cast<$PrivateInterfaceCall$I4*(*)(Object$*)>(&PrivateInterfaceCall::unsafeCastI4))},
	{"warmup", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall::warmup))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall_InnerClassesInfo_[] = {
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

$ClassInfo _PrivateInterfaceCall_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PrivateInterfaceCall",
	"java.lang.Object",
	nullptr,
	_PrivateInterfaceCall_FieldInfo_,
	_PrivateInterfaceCall_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PrivateInterfaceCall$Test,PrivateInterfaceCall$E,PrivateInterfaceCall$D1,PrivateInterfaceCall$C4,PrivateInterfaceCall$C3,PrivateInterfaceCall$C2,PrivateInterfaceCall$I4,PrivateInterfaceCall$I3,PrivateInterfaceCall$I2,PrivateInterfaceCall$I1"
};

$Object* allocate$PrivateInterfaceCall($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall));
}

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
	$nc(PrivateInterfaceCall::mh_I2_priv_m_from_PIC)->invokeExact($$new($ObjectArray, {$of(i)}));
}

void PrivateInterfaceCall::runPositiveTests() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14)));
	shouldNotThrow(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15)));
}

void PrivateInterfaceCall::runNegativeTests() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("ICCE PrivateInterfaceCall.invokeDirect D1"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16)));
	$nc($System::out)->println("ICCE PrivateInterfaceCall.invokeDirect E"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17)));
	$nc($System::out)->println("ICCE PrivateInterfaceCall.invokeInterfaceMH D1"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18)));
	$nc($System::out)->println("ICCE PrivateInterfaceCall.invokeInterfaceMH E"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19)));
	$nc($System::out)->println("ICCE I2.invokeInterfaceMH D1"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20)));
	$nc($System::out)->println("ICCE I2.invokeInterfaceMH E"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21)));
	$nc($System::out)->println("ICCE I2.invokeInterfaceObjectFinalMH D1"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22)));
	$nc($System::out)->println("ICCE I2.invokeInterfaceObjectFinalMH E"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23)));
	$nc($System::out)->println("ICCE I3.invokeInterfaceMH D1"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24)));
	$nc($System::out)->println("ICCE I3.invokeInterfaceMH E"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25)));
	$nc($System::out)->println("ICCE I4.invokeDirect D1"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26)));
	$nc($System::out)->println("ICCE I4.invokeDirect E"_s);
	shouldThrowICCE(static_cast<$PrivateInterfaceCall$Test*>($$new(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27)));
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
	$nc($System::out)->println("RESOLVED:"_s);
	runNegativeTests();
	$nc($System::out)->println("WARMUP:"_s);
	warmup();
	$nc($System::out)->println("COMPILED:"_s);
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
	$useLocalCurrentObjectStackCache();
	try {
		$nc(t)->run();
	} catch ($Throwable& e) {
		if (expectedError == $of(e)->getClass()) {
			$var($String, msg, e->getMessage());
			if ((msg != nullptr && msg->contains(reason)) || msg == nullptr) {
				$nc($System::out)->println($$str({"Threw expected: "_s, e}));
				return;
			} else {
				$throwNew($AssertionError, $$str({"Wrong exception reason: expected \'"_s, reason, "\', got \'"_s, msg, "\'"_s}), e);
			}
		} else {
			$var($String, msg, $String::format("Wrong exception thrown: expected=%s; thrown=%s"_s, $$new($ObjectArray, {
				$($of(expectedError->getName())),
				$($of($of(e)->getClass()->getName()))
			})));
			$throwNew($AssertionError, msg, e);
		}
	}
	$throwNew($AssertionError, $of($$str({"No exception thrown: expected "_s, $($nc(expectedError)->getName())})));
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
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($PrivateInterfaceCall$I2);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($nc($($nc(mh)->type()))->changeReturnType($PrivateInterfaceCall$I2::class$))));
		return $cast($PrivateInterfaceCall$I2, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

$PrivateInterfaceCall$I3* PrivateInterfaceCall::unsafeCastI3(Object$* obj) {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($PrivateInterfaceCall$I3);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($nc($($nc(mh)->type()))->changeReturnType($PrivateInterfaceCall$I3::class$))));
		return $cast($PrivateInterfaceCall$I3, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

$PrivateInterfaceCall$I4* PrivateInterfaceCall::unsafeCastI4(Object$* obj) {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($PrivateInterfaceCall$I4);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($nc($($nc(mh)->type()))->changeReturnType($PrivateInterfaceCall$I4::class$))));
		return $cast($PrivateInterfaceCall$I4, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

void PrivateInterfaceCall::lambda$runNegativeTests$27() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I4::invokeDirect($(unsafeCastI4($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$26() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I4::invokeDirect($(unsafeCastI4($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$25() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I3::invokeInterfaceMH($(unsafeCastI3($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$24() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I3::invokeInterfaceMH($(unsafeCastI3($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$23() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$22() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$21() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I2::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$20() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$PrivateInterfaceCall$I2::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$19() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	PrivateInterfaceCall::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$18() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	PrivateInterfaceCall::invokeInterfaceMH($(unsafeCastI2($$new($PrivateInterfaceCall$D1))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$17() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
	PrivateInterfaceCall::invokeDirect($(unsafeCastI2($$new($PrivateInterfaceCall$E))));
}

void PrivateInterfaceCall::lambda$runNegativeTests$16() {
	$init(PrivateInterfaceCall);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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

void clinit$PrivateInterfaceCall($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		try {
			$init($Void);
			$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
			$load($PrivateInterfaceCall$I2);
			$assignStatic(PrivateInterfaceCall::mh_I2_priv_m_from_PIC, $nc($($MethodHandles::lookup()))->findVirtual($PrivateInterfaceCall$I2::class$, "priv_m"_s, mt));
			$PrivateInterfaceCall$I2::init();
			$PrivateInterfaceCall$I3::init();
		} catch ($Throwable& e) {
			$throwNew($Error, $cast($Throwable, e));
		}
	}
}

PrivateInterfaceCall::PrivateInterfaceCall() {
}

$Class* PrivateInterfaceCall::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$0::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$11$11::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$12$12::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$13$13::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$14$14::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runPositiveTests$15$15::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$22$22::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$23$23::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$24$24::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$25$25::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$26$26::load$(name, initialize);
		}
		if (name->equals(PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::classInfo$.name)) {
			return PrivateInterfaceCall$$Lambda$lambda$runNegativeTests$27$27::load$(name, initialize);
		}
	}
	$loadClass(PrivateInterfaceCall, name, initialize, &_PrivateInterfaceCall_ClassInfo_, clinit$PrivateInterfaceCall, allocate$PrivateInterfaceCall);
	return class$;
}

$Class* PrivateInterfaceCall::class$ = nullptr;