#include <SpecialInterfaceCall/SpecialInterfaceCall.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall$C1.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$C2.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$C3.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$C4.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$D1.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$E.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$I1.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$I2.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$I3.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$I4.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall$Test.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/IncompatibleClassChangeError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $SpecialInterfaceCall$C1 = ::SpecialInterfaceCall::SpecialInterfaceCall$C1;
using $SpecialInterfaceCall$C2 = ::SpecialInterfaceCall::SpecialInterfaceCall$C2;
using $SpecialInterfaceCall$C3 = ::SpecialInterfaceCall::SpecialInterfaceCall$C3;
using $SpecialInterfaceCall$C4 = ::SpecialInterfaceCall::SpecialInterfaceCall$C4;
using $SpecialInterfaceCall$D1 = ::SpecialInterfaceCall::SpecialInterfaceCall$D1;
using $SpecialInterfaceCall$E = ::SpecialInterfaceCall::SpecialInterfaceCall$E;
using $SpecialInterfaceCall$I1 = ::SpecialInterfaceCall::SpecialInterfaceCall$I1;
using $SpecialInterfaceCall$I2 = ::SpecialInterfaceCall::SpecialInterfaceCall$I2;
using $SpecialInterfaceCall$I3 = ::SpecialInterfaceCall::SpecialInterfaceCall$I3;
using $SpecialInterfaceCall$I4 = ::SpecialInterfaceCall::SpecialInterfaceCall$I4;
using $SpecialInterfaceCall$Test = ::SpecialInterfaceCall::SpecialInterfaceCall$Test;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace SpecialInterfaceCall {

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$5();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$6();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$7();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$8();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$9();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runPositiveTests$10();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$11();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$12();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$13();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$14();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$15();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$16();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$17();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$18();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$19();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$20();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::class$ = nullptr;

class SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21 : public $SpecialInterfaceCall$Test {
	$class(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, $NO_CLASS_INIT, $SpecialInterfaceCall$Test)
public:
	void init$() {
	}
	virtual void run() override {
		SpecialInterfaceCall::lambda$runNegativeTests$21();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, run, void)},
	{}
};
$ClassInfo SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpecialInterfaceCall.SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	methodInfos
};
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::class$ = nullptr;

$FieldInfo _SpecialInterfaceCall_FieldInfo_[] = {
	{"mh_I2_priv_m_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(SpecialInterfaceCall, mh_I2_priv_m_from_I2)},
	{"mh_I2_pub_m_from_I3", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(SpecialInterfaceCall, mh_I2_pub_m_from_I3)},
	{"mh_I1_toString_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(SpecialInterfaceCall, mh_I1_toString_from_I2)},
	{"mh_I1_getClass_from_I2", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(SpecialInterfaceCall, mh_I1_getClass_from_I2)},
	{}
};

$MethodInfo _SpecialInterfaceCall_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialInterfaceCall, init$, void)},
	{"lambda$runNegativeTests$11", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$11, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$12", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$12, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$13", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$13, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$14", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$14, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$15", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$15, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$16", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$16, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$17", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$17, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$18", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$18, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$19", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$19, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$20", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$20, void), "java.lang.Throwable"},
	{"lambda$runNegativeTests$21", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runNegativeTests$21, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$0, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$1, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$10", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$10, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$2, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$3, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$4, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$5, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$6", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$6, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$7", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$7, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$8", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$8, void), "java.lang.Throwable"},
	{"lambda$runPositiveTests$9", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpecialInterfaceCall, lambda$runPositiveTests$9, void), "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall, main, void, $StringArray*), "java.lang.Throwable"},
	{"runNegativeTests", "()V", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, runNegativeTests, void)},
	{"runPositiveTests", "()V", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, runPositiveTests, void)},
	{"shouldNotThrow", "(LSpecialInterfaceCall/SpecialInterfaceCall$Test;)V", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, shouldNotThrow, void, $SpecialInterfaceCall$Test*)},
	{"shouldThrow", "(Ljava/lang/Class;Ljava/lang/String;LSpecialInterfaceCall/SpecialInterfaceCall$Test;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;LSpecialInterfaceCall/SpecialInterfaceCall$Test;)V", $STATIC, $staticMethod(SpecialInterfaceCall, shouldThrow, void, $Class*, $String*, $SpecialInterfaceCall$Test*)},
	{"shouldThrowIAE", "(LSpecialInterfaceCall/SpecialInterfaceCall$Test;)V", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, shouldThrowIAE, void, $SpecialInterfaceCall$Test*)},
	{"shouldThrowICCE", "(LSpecialInterfaceCall/SpecialInterfaceCall$Test;)V", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, shouldThrowICCE, void, $SpecialInterfaceCall$Test*)},
	{"unsafeCastI2", "(Ljava/lang/Object;)LSpecialInterfaceCall/SpecialInterfaceCall$I2;", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, unsafeCastI2, $SpecialInterfaceCall$I2*, Object$*)},
	{"unsafeCastI3", "(Ljava/lang/Object;)LSpecialInterfaceCall/SpecialInterfaceCall$I3;", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, unsafeCastI3, $SpecialInterfaceCall$I3*, Object$*)},
	{"unsafeCastI4", "(Ljava/lang/Object;)LSpecialInterfaceCall/SpecialInterfaceCall$I4;", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, unsafeCastI4, $SpecialInterfaceCall$I4*, Object$*)},
	{"warmup", "()V", nullptr, $STATIC, $staticMethod(SpecialInterfaceCall, warmup, void)},
	{}
};

$InnerClassInfo _SpecialInterfaceCall_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$Test", "SpecialInterfaceCall.SpecialInterfaceCall", "Test", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$E", "SpecialInterfaceCall.SpecialInterfaceCall", "E", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$D1", "SpecialInterfaceCall.SpecialInterfaceCall", "D1", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$C4", "SpecialInterfaceCall.SpecialInterfaceCall", "C4", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$C3", "SpecialInterfaceCall.SpecialInterfaceCall", "C3", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$C2", "SpecialInterfaceCall.SpecialInterfaceCall", "C2", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$C1", "SpecialInterfaceCall.SpecialInterfaceCall", "C1", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I4", "SpecialInterfaceCall.SpecialInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I3", "SpecialInterfaceCall.SpecialInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall",
	"java.lang.Object",
	nullptr,
	_SpecialInterfaceCall_FieldInfo_,
	_SpecialInterfaceCall_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall$Test,SpecialInterfaceCall.SpecialInterfaceCall$E,SpecialInterfaceCall.SpecialInterfaceCall$D1,SpecialInterfaceCall.SpecialInterfaceCall$C4,SpecialInterfaceCall.SpecialInterfaceCall$C3,SpecialInterfaceCall.SpecialInterfaceCall$C2,SpecialInterfaceCall.SpecialInterfaceCall$C1,SpecialInterfaceCall.SpecialInterfaceCall$I4,SpecialInterfaceCall.SpecialInterfaceCall$I3,SpecialInterfaceCall.SpecialInterfaceCall$I2,SpecialInterfaceCall.SpecialInterfaceCall$I1"
};

$Object* allocate$SpecialInterfaceCall($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall));
}

$MethodHandle* SpecialInterfaceCall::mh_I2_priv_m_from_I2 = nullptr;
$MethodHandle* SpecialInterfaceCall::mh_I2_pub_m_from_I3 = nullptr;
$MethodHandle* SpecialInterfaceCall::mh_I1_toString_from_I2 = nullptr;
$MethodHandle* SpecialInterfaceCall::mh_I1_getClass_from_I2 = nullptr;

void SpecialInterfaceCall::init$() {
}

void SpecialInterfaceCall::runPositiveTests() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9)));
	shouldNotThrow(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10)));
}

void SpecialInterfaceCall::runNegativeTests() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("IAE I2.invokeDirect D1"_s);
	shouldThrowIAE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11)));
	$nc($System::out)->println("IAE I2.invokeDirect E"_s);
	shouldThrowIAE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12)));
	$nc($System::out)->println("ICCE I2.invokeMH D1"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13)));
	$nc($System::out)->println("ICCE I2.invokeMH E"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14)));
	$nc($System::out)->println("ICCE I3.invokeMH D1"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15)));
	$nc($System::out)->println("ICCE I3.invokeMH E"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16)));
	$nc($System::out)->println("ICCE I3.invokeMH C2"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17)));
	$nc($System::out)->println("ICCE I4.invokeDirect C1"_s);
	shouldThrowIAE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18)));
	$nc($System::out)->println("ICCE I4.invokeDirectFinal C1"_s);
	shouldThrowIAE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19)));
	$nc($System::out)->println("ICCE I2.invokeObjectMH C1"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20)));
	$nc($System::out)->println("ICCE I2.invokeObjectFinalMH C1"_s);
	shouldThrowICCE(static_cast<$SpecialInterfaceCall$Test*>($$new(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21)));
}

void SpecialInterfaceCall::warmup() {
	$init(SpecialInterfaceCall);
	for (int32_t i = 0; i < 20000; ++i) {
		runPositiveTests();
	}
}

void SpecialInterfaceCall::main($StringArray* args) {
	$init(SpecialInterfaceCall);
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

void SpecialInterfaceCall::shouldThrowICCE($SpecialInterfaceCall$Test* t) {
	$init(SpecialInterfaceCall);
	$load($IncompatibleClassChangeError);
	shouldThrow($IncompatibleClassChangeError::class$, "is not a subclass of caller class"_s, t);
}

void SpecialInterfaceCall::shouldThrowIAE($SpecialInterfaceCall$Test* t) {
	$init(SpecialInterfaceCall);
	$load($IllegalAccessError);
	shouldThrow($IllegalAccessError::class$, "must be the current class or a subtype of interface"_s, t);
}

void SpecialInterfaceCall::shouldThrow($Class* expectedError, $String* reason, $SpecialInterfaceCall$Test* t) {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	try {
		$nc(t)->run();
	} catch ($Throwable& e) {
		if ($nc(expectedError)->isInstance(e)) {
			if ($nc($(e->getMessage()))->contains(reason)) {
				$nc($System::out)->println($$str({"Threw expected: "_s, e}));
				return;
			} else {
				$throwNew($AssertionError, $$str({"Wrong exception reason: expected \'"_s, reason, "\', got \'"_s, $(e->getMessage()), "\'"_s}), e);
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

void SpecialInterfaceCall::shouldNotThrow($SpecialInterfaceCall$Test* t) {
	$init(SpecialInterfaceCall);
	try {
		$nc(t)->run();
	} catch ($Throwable& e) {
		$throwNew($AssertionError, "Exception was thrown: "_s, e);
	}
}

$SpecialInterfaceCall$I2* SpecialInterfaceCall::unsafeCastI2(Object$* obj) {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($SpecialInterfaceCall$I2);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($nc($($nc(mh)->type()))->changeReturnType($SpecialInterfaceCall$I2::class$))));
		return $cast($SpecialInterfaceCall$I2, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

$SpecialInterfaceCall$I3* SpecialInterfaceCall::unsafeCastI3(Object$* obj) {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($SpecialInterfaceCall$I3);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($nc($($nc(mh)->type()))->changeReturnType($SpecialInterfaceCall$I3::class$))));
		return $cast($SpecialInterfaceCall$I3, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

$SpecialInterfaceCall$I4* SpecialInterfaceCall::unsafeCastI4(Object$* obj) {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodHandle, mh, $MethodHandles::identity($Object::class$));
		$load($SpecialInterfaceCall$I4);
		$assign(mh, $MethodHandles::explicitCastArguments(mh, $($nc($($nc(mh)->type()))->changeReturnType($SpecialInterfaceCall$I4::class$))));
		return $cast($SpecialInterfaceCall$I4, $nc(mh)->invokeExact($$new($ObjectArray, {obj})));
	} catch ($Throwable& e) {
		$throwNew($Error, $cast($Throwable, e));
	}
	$shouldNotReachHere();
}

void SpecialInterfaceCall::lambda$runNegativeTests$21() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I2::invokeSpecialObjectFinalMH($(unsafeCastI2($$new($SpecialInterfaceCall$C1))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$20() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I2::invokeSpecialObjectMH($(unsafeCastI2($$new($SpecialInterfaceCall$C1))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$19() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I4::invokeDirectFinal($(unsafeCastI4($$new($SpecialInterfaceCall$C1))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$18() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I4::invokeDirect($(unsafeCastI4($$new($SpecialInterfaceCall$C1))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$17() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I3::invokeSpecialMH($(unsafeCastI3($$new($SpecialInterfaceCall$C2))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$16() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I3::invokeSpecialMH($(unsafeCastI3($$new($SpecialInterfaceCall$E))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$15() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I3::invokeSpecialMH($(unsafeCastI3($$new($SpecialInterfaceCall$D1))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$14() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I2::invokeSpecialMH($(unsafeCastI2($$new($SpecialInterfaceCall$E))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$13() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I2::invokeSpecialMH($(unsafeCastI2($$new($SpecialInterfaceCall$D1))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$12() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I2::invokeDirect($(unsafeCastI2($$new($SpecialInterfaceCall$E))));
}

void SpecialInterfaceCall::lambda$runNegativeTests$11() {
	$init(SpecialInterfaceCall);
	$useLocalCurrentObjectStackCache();
	$SpecialInterfaceCall$I2::invokeDirect($(unsafeCastI2($$new($SpecialInterfaceCall$D1))));
}

void SpecialInterfaceCall::lambda$runPositiveTests$10() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I4::invokeDirectFinal($$new($SpecialInterfaceCall$C4));
}

void SpecialInterfaceCall::lambda$runPositiveTests$9() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I4::invokeDirect($$new($SpecialInterfaceCall$C4));
}

void SpecialInterfaceCall::lambda$runPositiveTests$8() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I3::invokeSpecialMH($$new($SpecialInterfaceCall$C3));
}

void SpecialInterfaceCall::lambda$runPositiveTests$7() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeSpecialObjectFinalMH($$new($SpecialInterfaceCall$C3));
}

void SpecialInterfaceCall::lambda$runPositiveTests$6() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeSpecialObjectFinalMH($$new($SpecialInterfaceCall$C2));
}

void SpecialInterfaceCall::lambda$runPositiveTests$5() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeSpecialObjectMH($$new($SpecialInterfaceCall$C3));
}

void SpecialInterfaceCall::lambda$runPositiveTests$4() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeSpecialObjectMH($$new($SpecialInterfaceCall$C2));
}

void SpecialInterfaceCall::lambda$runPositiveTests$3() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeSpecialMH($$new($SpecialInterfaceCall$C3));
}

void SpecialInterfaceCall::lambda$runPositiveTests$2() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeSpecialMH($$new($SpecialInterfaceCall$C2));
}

void SpecialInterfaceCall::lambda$runPositiveTests$1() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeDirect($$new($SpecialInterfaceCall$C3));
}

void SpecialInterfaceCall::lambda$runPositiveTests$0() {
	$init(SpecialInterfaceCall);
	$SpecialInterfaceCall$I2::invokeDirect($$new($SpecialInterfaceCall$C2));
}

void clinit$SpecialInterfaceCall($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		try {
			$init($Void);
			$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
			$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
			$load($SpecialInterfaceCall$I2);
			$assignStatic(SpecialInterfaceCall::mh_I2_priv_m_from_I2, $nc(lookup)->findSpecial($SpecialInterfaceCall$I2::class$, "priv_m"_s, mt, $SpecialInterfaceCall$I2::class$));
			$load($SpecialInterfaceCall$I3);
			$assignStatic(SpecialInterfaceCall::mh_I2_pub_m_from_I3, lookup->findSpecial($SpecialInterfaceCall$I2::class$, "pub_m"_s, mt, $SpecialInterfaceCall$I3::class$));
			$assign(mt, $MethodType::methodType($String::class$));
			$load($SpecialInterfaceCall$I1);
			$assignStatic(SpecialInterfaceCall::mh_I1_toString_from_I2, lookup->findSpecial($SpecialInterfaceCall$I1::class$, "toString"_s, mt, $SpecialInterfaceCall$I2::class$));
			$assign(mt, $MethodType::methodType($Class::class$));
			$assignStatic(SpecialInterfaceCall::mh_I1_getClass_from_I2, lookup->findSpecial($SpecialInterfaceCall$I1::class$, "getClass"_s, mt, $SpecialInterfaceCall$I2::class$));
		} catch ($Throwable& e) {
			$throwNew($Error, $cast($Throwable, e));
		}
	}
}

SpecialInterfaceCall::SpecialInterfaceCall() {
}

$Class* SpecialInterfaceCall::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$0::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$1$1::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$2$2::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$3$3::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$4$4::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$5$5::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$6$6::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$7$7::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$8$8::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$9$9::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runPositiveTests$10$10::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$11$11::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$12$12::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$13$13::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$14$14::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$15$15::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$16$16::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$17$17::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$18$18::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$19$19::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$20$20::load$(name, initialize);
		}
		if (name->equals(SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::classInfo$.name)) {
			return SpecialInterfaceCall$$Lambda$lambda$runNegativeTests$21$21::load$(name, initialize);
		}
	}
	$loadClass(SpecialInterfaceCall, name, initialize, &_SpecialInterfaceCall_ClassInfo_, clinit$SpecialInterfaceCall, allocate$SpecialInterfaceCall);
	return class$;
}

$Class* SpecialInterfaceCall::class$ = nullptr;

} // SpecialInterfaceCall