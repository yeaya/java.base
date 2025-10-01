#include <VerifyStackTrace$TestCase1.h>

#include <VerifyStackTrace.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $VerifyStackTrace = ::VerifyStackTrace;
using $VerifyStackTrace$TestCase = ::VerifyStackTrace$TestCase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;

$FieldInfo _VerifyStackTrace$TestCase1_FieldInfo_[] = {
	{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $FINAL, $field(VerifyStackTrace$TestCase1, walker$)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(VerifyStackTrace$TestCase1, description$)},
	{"expected", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(VerifyStackTrace$TestCase1, expected$)},
	{}
};

$MethodInfo _VerifyStackTrace$TestCase1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VerifyStackTrace$TestCase1::*)()>(&VerifyStackTrace$TestCase1::init$))},
	{"description", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"expected", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"walker", "()Ljava/lang/StackWalker;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VerifyStackTrace$TestCase1_InnerClassesInfo_[] = {
	{"VerifyStackTrace$TestCase1", "VerifyStackTrace", "TestCase1", $STATIC | $FINAL},
	{"VerifyStackTrace$TestCase", "VerifyStackTrace", "TestCase", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VerifyStackTrace$TestCase1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"VerifyStackTrace$TestCase1",
	"java.lang.Object",
	"VerifyStackTrace$TestCase",
	_VerifyStackTrace$TestCase1_FieldInfo_,
	_VerifyStackTrace$TestCase1_MethodInfo_,
	nullptr,
	nullptr,
	_VerifyStackTrace$TestCase1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"VerifyStackTrace"
};

$Object* allocate$VerifyStackTrace$TestCase1($Class* clazz) {
	return $of($alloc(VerifyStackTrace$TestCase1));
}

void VerifyStackTrace$TestCase1::init$() {
	$init($StackWalker$Option);
	$set(this, walker$, $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE));
	$set(this, description$, "StackWalker.getInstance(StackWalker.Option.RETAIN_CLASS_REFERENCE)"_s);
	$set(this, expected$, "1: VerifyStackTrace.lambda$test$1(VerifyStackTrace.java:209)\n2: VerifyStackTrace$Handle.execute(VerifyStackTrace.java:145)\n3: VerifyStackTrace$Handle.run(VerifyStackTrace.java:158)\n4: VerifyStackTrace.invoke(VerifyStackTrace.java:188)\n5: VerifyStackTrace$1.run(VerifyStackTrace.java:218)\n6: java.base/java.security.AccessController.doPrivileged(AccessController.java:310)\n7: VerifyStackTrace.test(VerifyStackTrace.java:227)\n8: VerifyStackTrace.main(VerifyStackTrace.java:182)\n"_s);
}

$StackWalker* VerifyStackTrace$TestCase1::walker() {
	return this->walker$;
}

$String* VerifyStackTrace$TestCase1::description() {
	return this->description$;
}

$String* VerifyStackTrace$TestCase1::expected() {
	return this->expected$;
}

VerifyStackTrace$TestCase1::VerifyStackTrace$TestCase1() {
}

$Class* VerifyStackTrace$TestCase1::load$($String* name, bool initialize) {
	$loadClass(VerifyStackTrace$TestCase1, name, initialize, &_VerifyStackTrace$TestCase1_ClassInfo_, allocate$VerifyStackTrace$TestCase1);
	return class$;
}

$Class* VerifyStackTrace$TestCase1::class$ = nullptr;