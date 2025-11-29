#include <StackTraceSerialization.h>

#include <HighLevelException.h>
#include <LowLevelException.h>
#include <MidLevelException.h>
#include <StackTraceSerialization$TestThrowable.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/StackTraceElement.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef OUR_CLASS
#undef OUR_FILE_NAME

using $HighLevelException = ::HighLevelException;
using $LowLevelException = ::LowLevelException;
using $MidLevelException = ::MidLevelException;
using $StackTraceSerialization$TestThrowable = ::StackTraceSerialization$TestThrowable;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;

$FieldInfo _StackTraceSerialization_FieldInfo_[] = {
	{"OUR_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceSerialization, OUR_CLASS)},
	{"OUR_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceSerialization, OUR_FILE_NAME)},
	{}
};

$MethodInfo _StackTraceSerialization_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StackTraceSerialization::*)()>(&StackTraceSerialization::init$))},
	{"a", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::a)), "HighLevelException"},
	{"assertEmptyStackTrace", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*)>(&StackTraceSerialization::assertEmptyStackTrace))},
	{"b", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::b)), "MidLevelException"},
	{"c", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::c)), "MidLevelException"},
	{"check", "(Ljava/lang/StackTraceElement;Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StackTraceElement*,$String*,int32_t)>(&StackTraceSerialization::check))},
	{"d", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::d)), "LowLevelException"},
	{"e", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::e)), "LowLevelException"},
	{"equal", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Throwable*,$Throwable*)>(&StackTraceSerialization::equal))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StackTraceSerialization::main)), "java.lang.Exception"},
	{"reconstitute", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Throwable*(*)($Throwable*)>(&StackTraceSerialization::reconstitute))},
	{"testWithFillInStackTrace", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::testWithFillInStackTrace))},
	{"testWithSetStackTrace", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&StackTraceSerialization::testWithSetStackTrace))},
	{}
};

$InnerClassInfo _StackTraceSerialization_InnerClassesInfo_[] = {
	{"StackTraceSerialization$TestThrowable", "StackTraceSerialization", "TestThrowable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StackTraceSerialization_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StackTraceSerialization",
	"java.lang.Object",
	nullptr,
	_StackTraceSerialization_FieldInfo_,
	_StackTraceSerialization_MethodInfo_,
	nullptr,
	nullptr,
	_StackTraceSerialization_InnerClassesInfo_,
	nullptr,
	nullptr,
	"StackTraceSerialization$TestThrowable"
};

$Object* allocate$StackTraceSerialization($Class* clazz) {
	return $of($alloc(StackTraceSerialization));
}

$String* StackTraceSerialization::OUR_CLASS = nullptr;
$String* StackTraceSerialization::OUR_FILE_NAME = nullptr;

void StackTraceSerialization::init$() {
}

void StackTraceSerialization::main($StringArray* args) {
	$init(StackTraceSerialization);
	testWithSetStackTrace();
	testWithFillInStackTrace();
}

void StackTraceSerialization::testWithSetStackTrace() {
	$init(StackTraceSerialization);
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElementArray, stackTrace, $new($StackTraceElementArray, {$$new($StackTraceElement, "foo"_s, "bar"_s, "baz"_s, -1)}));
	$var($Throwable, t, $new($StackTraceSerialization$TestThrowable, true, false));
	assertEmptyStackTrace(t);
	t->fillInStackTrace();
	assertEmptyStackTrace(t);
	t->setStackTrace(stackTrace);
	assertEmptyStackTrace(t);
	try {
		t->setStackTrace(nullptr);
		$throwNew($RuntimeException, "No NPE on a null stack trace."_s);
	} catch ($NullPointerException& npe) {
		assertEmptyStackTrace(t);
	}
	try {
		t->setStackTrace($$new($StackTraceElementArray, {($StackTraceElement*)nullptr}));
		$throwNew($RuntimeException, "No NPE on a null stack trace element."_s);
	} catch ($NullPointerException& npe) {
		assertEmptyStackTrace(t);
	}
	if (!equal(t, $(reconstitute(t)))) {
		$throwNew($RuntimeException, "Unequal Throwables with set stacktrace"_s);
	}
	$var($Throwable, t2, $new($Throwable));
	t2->setStackTrace(stackTrace);
	if (!equal(t2, $(reconstitute(t2)))) {
		$throwNew($RuntimeException, "Unequal Throwables with set stacktrace"_s);
	}
}

void StackTraceSerialization::assertEmptyStackTrace($Throwable* t) {
	$init(StackTraceSerialization);
	if ($nc($($nc(t)->getStackTrace()))->length != 0) {
		$throwNew($AssertionError, $of("Nonempty stacktrace."_s));
	}
}

void StackTraceSerialization::testWithFillInStackTrace() {
	$init(StackTraceSerialization);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, original, nullptr);
	try {
		a();
	} catch ($HighLevelException& e) {
		$assign(original, e);
	}
	if (!equal(original, $(reconstitute(original)))) {
		$throwNew($RuntimeException, "Unequal Throwables with filled-in stacktrace"_s);
	}
}

$Throwable* StackTraceSerialization::reconstitute($Throwable* t) {
	$init(StackTraceSerialization);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, result, nullptr);
	try {
		$var($ByteArrayOutputStream, bout, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ObjectOutputStream, out, $new($ObjectOutputStream, bout));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								out->writeObject(t);
								out->flush();
								{
									$var($ByteArrayInputStream, bin, $new($ByteArrayInputStream, $(bout->toByteArray())));
									{
										$var($Throwable, var$2, nullptr);
										try {
											try {
												$var($ObjectInputStream, in, $new($ObjectInputStream, bin));
												{
													$var($Throwable, var$3, nullptr);
													try {
														try {
															$assign(result, $cast($Throwable, in->readObject()));
														} catch ($Throwable& t$) {
															try {
																in->close();
															} catch ($Throwable& x2) {
																t$->addSuppressed(x2);
															}
															$throw(t$);
														}
													} catch ($Throwable& var$4) {
														$assign(var$3, var$4);
													} /*finally*/ {
														in->close();
													}
													if (var$3 != nullptr) {
														$throw(var$3);
													}
												}
											} catch ($Throwable& t$) {
												try {
													bin->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
												$throw(t$);
											}
										} catch ($Throwable& var$5) {
											$assign(var$2, var$5);
										} /*finally*/ {
											bin->close();
										}
										if (var$2 != nullptr) {
											$throw(var$2);
										}
									}
								}
							} catch ($Throwable& t$) {
								try {
									out->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$1, var$6);
						} /*finally*/ {
							out->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						bout->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} /*finally*/ {
				bout->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	return result;
}

bool StackTraceSerialization::equal($Throwable* t1, $Throwable* t2) {
	$init(StackTraceSerialization);
	$useLocalCurrentObjectStackCache();
	bool var$0 = t1 == t2;
	if (!var$0) {
		$var($ObjectArray, var$3, $nc(t1)->getStackTrace());
		bool var$2 = $Arrays::equals(var$3, $($nc(t2)->getStackTrace()));
		if (var$2) {
			$var($Throwable, var$4, $nc(t1)->getCause());
			var$2 = equal(var$4, $($nc(t2)->getCause()));
		}
		bool var$1 = var$2;
		if (var$1) {
			$var($Object, var$5, $of($nc(t1)->getSuppressed()));
			var$1 = $Objects::equals(var$5, $($nc(t2)->getSuppressed()));
		}
		var$0 = (var$1);
	}
	return var$0;
}

void StackTraceSerialization::a() {
	$init(StackTraceSerialization);
	try {
		b();
	} catch ($MidLevelException& e) {
		$throwNew($HighLevelException, e);
	}
}

void StackTraceSerialization::b() {
	$init(StackTraceSerialization);
	c();
}

void StackTraceSerialization::c() {
	$init(StackTraceSerialization);
	try {
		d();
	} catch ($LowLevelException& e) {
		$throwNew($MidLevelException, e);
	}
}

void StackTraceSerialization::d() {
	$init(StackTraceSerialization);
	e();
}

void StackTraceSerialization::e() {
	$init(StackTraceSerialization);
	$throwNew($LowLevelException);
}

void StackTraceSerialization::check($StackTraceElement* e, $String* methodName, int32_t n) {
	$init(StackTraceSerialization);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(e)->getClassName()))->equals(StackTraceSerialization::OUR_CLASS)) {
		$throwNew($RuntimeException, $$str({"Class: "_s, e}));
	}
	if (!$nc($($nc(e)->getMethodName()))->equals(methodName)) {
		$throwNew($RuntimeException, $$str({"Method name: "_s, e}));
	}
	if (!$nc($($nc(e)->getFileName()))->equals(StackTraceSerialization::OUR_FILE_NAME)) {
		$throwNew($RuntimeException, $$str({"File name: "_s, e}));
	}
	if ($nc(e)->getLineNumber() != n) {
		$throwNew($RuntimeException, $$str({"Line number: "_s, e}));
	}
}

void clinit$StackTraceSerialization($Class* class$) {
	$assignStatic(StackTraceSerialization::OUR_FILE_NAME, "StackTraceSerialization.java"_s);
	$assignStatic(StackTraceSerialization::OUR_CLASS, StackTraceSerialization::class$->getName());
}

StackTraceSerialization::StackTraceSerialization() {
}

$Class* StackTraceSerialization::load$($String* name, bool initialize) {
	$loadClass(StackTraceSerialization, name, initialize, &_StackTraceSerialization_ClassInfo_, clinit$StackTraceSerialization, allocate$StackTraceSerialization);
	return class$;
}

$Class* StackTraceSerialization::class$ = nullptr;