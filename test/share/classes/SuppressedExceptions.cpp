#include <SuppressedExceptions.h>

#include <SuppressedExceptions$NoSuppression.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SuppressedExceptions$NoSuppression = ::SuppressedExceptions$NoSuppression;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _SuppressedExceptions_FieldInfo_[] = {
	{"message", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SuppressedExceptions, message)},
	{}
};

$MethodInfo _SuppressedExceptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SuppressedExceptions::*)()>(&SuppressedExceptions::init$))},
	{"basicSupressionTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SuppressedExceptions::basicSupressionTest))},
	{"initCausePlumbing", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SuppressedExceptions::initCausePlumbing))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&SuppressedExceptions::main)), "java.lang.Exception"},
	{"noModification", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SuppressedExceptions::noModification))},
	{"noSelfSuppression", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SuppressedExceptions::noSelfSuppression))},
	{"selfReference", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SuppressedExceptions::selfReference))},
	{"serializationTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SuppressedExceptions::serializationTest)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SuppressedExceptions_InnerClassesInfo_[] = {
	{"SuppressedExceptions$NoSuppression", "SuppressedExceptions", "NoSuppression", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SuppressedExceptions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SuppressedExceptions",
	"java.lang.Object",
	nullptr,
	_SuppressedExceptions_FieldInfo_,
	_SuppressedExceptions_MethodInfo_,
	nullptr,
	nullptr,
	_SuppressedExceptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SuppressedExceptions$NoSuppression"
};

$Object* allocate$SuppressedExceptions($Class* clazz) {
	return $of($alloc(SuppressedExceptions));
}

$String* SuppressedExceptions::message = nullptr;

void SuppressedExceptions::init$() {
}

void SuppressedExceptions::main($StringArray* args) {
	$init(SuppressedExceptions);
	noSelfSuppression();
	basicSupressionTest();
	serializationTest();
	selfReference();
	noModification();
	initCausePlumbing();
}

void SuppressedExceptions::noSelfSuppression() {
	$init(SuppressedExceptions);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, throwable, $new($Throwable));
	try {
		throwable->addSuppressed(throwable);
		$throwNew($RuntimeException, "IllegalArgumentException for self-suppresion not thrown."_s);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		if (iae->getCause() != throwable) {
			$throwNew($RuntimeException, "Bad cause after self-suppresion."_s);
		}
	}
}

void SuppressedExceptions::basicSupressionTest() {
	$init(SuppressedExceptions);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, throwable, $new($Throwable));
	$var($RuntimeException, suppressed, $new($RuntimeException, "A suppressed exception."_s));
	$var($AssertionError, repressed, $new($AssertionError, $of("A repressed error."_s)));
	$var($ThrowableArray, t0, throwable->getSuppressed());
	if ($nc(t0)->length != 0) {
		$throwNew($RuntimeException, SuppressedExceptions::message);
	}
	throwable->printStackTrace();
	throwable->addSuppressed(suppressed);
	$var($ThrowableArray, t1, throwable->getSuppressed());
	if ($nc(t1)->length != 1 || !$equals($nc(t1)->get(0), suppressed)) {
		$throwNew($RuntimeException, SuppressedExceptions::message);
	}
	throwable->printStackTrace();
	throwable->addSuppressed(repressed);
	$var($ThrowableArray, t2, throwable->getSuppressed());
	if ($nc(t2)->length != 2 || !$equals($nc(t2)->get(0), suppressed) || !$equals($nc(t2)->get(1), repressed)) {
		$throwNew($RuntimeException, SuppressedExceptions::message);
	}
	throwable->printStackTrace();
}

void SuppressedExceptions::serializationTest() {
	$init(SuppressedExceptions);
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, $new($bytes, {
		(int8_t)172,
		(int8_t)237,
		(int8_t)0,
		(int8_t)5,
		(int8_t)115,
		(int8_t)114,
		(int8_t)0,
		(int8_t)19,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)46,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)46,
		(int8_t)84,
		(int8_t)104,
		(int8_t)114,
		(int8_t)111,
		(int8_t)119,
		(int8_t)97,
		(int8_t)98,
		(int8_t)108,
		(int8_t)101,
		(int8_t)213,
		(int8_t)198,
		(int8_t)53,
		(int8_t)39,
		(int8_t)57,
		(int8_t)119,
		(int8_t)184,
		(int8_t)203,
		(int8_t)3,
		(int8_t)0,
		(int8_t)3,
		(int8_t)76,
		(int8_t)0,
		(int8_t)5,
		(int8_t)99,
		(int8_t)97,
		(int8_t)117,
		(int8_t)115,
		(int8_t)101,
		(int8_t)116,
		(int8_t)0,
		(int8_t)21,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)84,
		(int8_t)104,
		(int8_t)114,
		(int8_t)111,
		(int8_t)119,
		(int8_t)97,
		(int8_t)98,
		(int8_t)108,
		(int8_t)101,
		(int8_t)59,
		(int8_t)76,
		(int8_t)0,
		(int8_t)13,
		(int8_t)100,
		(int8_t)101,
		(int8_t)116,
		(int8_t)97,
		(int8_t)105,
		(int8_t)108,
		(int8_t)77,
		(int8_t)101,
		(int8_t)115,
		(int8_t)115,
		(int8_t)97,
		(int8_t)103,
		(int8_t)101,
		(int8_t)116,
		(int8_t)0,
		(int8_t)18,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)83,
		(int8_t)116,
		(int8_t)114,
		(int8_t)105,
		(int8_t)110,
		(int8_t)103,
		(int8_t)59,
		(int8_t)91,
		(int8_t)0,
		(int8_t)10,
		(int8_t)115,
		(int8_t)116,
		(int8_t)97,
		(int8_t)99,
		(int8_t)107,
		(int8_t)84,
		(int8_t)114,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)116,
		(int8_t)0,
		(int8_t)30,
		(int8_t)91,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)83,
		(int8_t)116,
		(int8_t)97,
		(int8_t)99,
		(int8_t)107,
		(int8_t)84,
		(int8_t)114,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)69,
		(int8_t)108,
		(int8_t)101,
		(int8_t)109,
		(int8_t)101,
		(int8_t)110,
		(int8_t)116,
		(int8_t)59,
		(int8_t)120,
		(int8_t)112,
		(int8_t)113,
		(int8_t)0,
		(int8_t)126,
		(int8_t)0,
		(int8_t)4,
		(int8_t)112,
		(int8_t)117,
		(int8_t)114,
		(int8_t)0,
		(int8_t)30,
		(int8_t)91,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)46,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)46,
		(int8_t)83,
		(int8_t)116,
		(int8_t)97,
		(int8_t)99,
		(int8_t)107,
		(int8_t)84,
		(int8_t)114,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)69,
		(int8_t)108,
		(int8_t)101,
		(int8_t)109,
		(int8_t)101,
		(int8_t)110,
		(int8_t)116,
		(int8_t)59,
		(int8_t)2,
		(int8_t)70,
		(int8_t)42,
		(int8_t)60,
		(int8_t)60,
		(int8_t)253,
		(int8_t)34,
		(int8_t)57,
		(int8_t)2,
		(int8_t)0,
		(int8_t)0,
		(int8_t)120,
		(int8_t)112,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)120,
		(int8_t)172,
		(int8_t)237,
		(int8_t)0,
		(int8_t)5,
		(int8_t)115,
		(int8_t)114,
		(int8_t)0,
		(int8_t)19,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)46,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)46,
		(int8_t)84,
		(int8_t)104,
		(int8_t)114,
		(int8_t)111,
		(int8_t)119,
		(int8_t)97,
		(int8_t)98,
		(int8_t)108,
		(int8_t)101,
		(int8_t)213,
		(int8_t)198,
		(int8_t)53,
		(int8_t)39,
		(int8_t)57,
		(int8_t)119,
		(int8_t)184,
		(int8_t)203,
		(int8_t)3,
		(int8_t)0,
		(int8_t)3,
		(int8_t)76,
		(int8_t)0,
		(int8_t)5,
		(int8_t)99,
		(int8_t)97,
		(int8_t)117,
		(int8_t)115,
		(int8_t)101,
		(int8_t)116,
		(int8_t)0,
		(int8_t)21,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)84,
		(int8_t)104,
		(int8_t)114,
		(int8_t)111,
		(int8_t)119,
		(int8_t)97,
		(int8_t)98,
		(int8_t)108,
		(int8_t)101,
		(int8_t)59,
		(int8_t)76,
		(int8_t)0,
		(int8_t)13,
		(int8_t)100,
		(int8_t)101,
		(int8_t)116,
		(int8_t)97,
		(int8_t)105,
		(int8_t)108,
		(int8_t)77,
		(int8_t)101,
		(int8_t)115,
		(int8_t)115,
		(int8_t)97,
		(int8_t)103,
		(int8_t)101,
		(int8_t)116,
		(int8_t)0,
		(int8_t)18,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)110,
		(int8_t)103,
		(int8_t)59,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)83,
		(int8_t)116,
		(int8_t)114,
		(int8_t)105,
		(int8_t)91,
		(int8_t)0,
		(int8_t)10,
		(int8_t)115,
		(int8_t)116,
		(int8_t)97,
		(int8_t)99,
		(int8_t)107,
		(int8_t)84,
		(int8_t)114,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)116,
		(int8_t)0,
		(int8_t)30,
		(int8_t)91,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)47,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)47,
		(int8_t)83,
		(int8_t)116,
		(int8_t)97,
		(int8_t)99,
		(int8_t)107,
		(int8_t)84,
		(int8_t)114,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)69,
		(int8_t)108,
		(int8_t)101,
		(int8_t)109,
		(int8_t)101,
		(int8_t)110,
		(int8_t)116,
		(int8_t)59,
		(int8_t)120,
		(int8_t)112,
		(int8_t)113,
		(int8_t)0,
		(int8_t)126,
		(int8_t)0,
		(int8_t)4,
		(int8_t)112,
		(int8_t)117,
		(int8_t)114,
		(int8_t)0,
		(int8_t)30,
		(int8_t)91,
		(int8_t)76,
		(int8_t)106,
		(int8_t)97,
		(int8_t)118,
		(int8_t)97,
		(int8_t)46,
		(int8_t)108,
		(int8_t)97,
		(int8_t)110,
		(int8_t)103,
		(int8_t)46,
		(int8_t)83,
		(int8_t)116,
		(int8_t)97,
		(int8_t)99,
		(int8_t)107,
		(int8_t)84,
		(int8_t)114,
		(int8_t)97,
		(int8_t)99,
		(int8_t)101,
		(int8_t)69,
		(int8_t)108,
		(int8_t)101,
		(int8_t)109,
		(int8_t)101,
		(int8_t)110,
		(int8_t)116,
		(int8_t)59,
		(int8_t)2,
		(int8_t)70,
		(int8_t)42,
		(int8_t)60,
		(int8_t)60,
		(int8_t)253,
		(int8_t)34,
		(int8_t)57,
		(int8_t)2,
		(int8_t)0,
		(int8_t)0,
		(int8_t)120,
		(int8_t)112
	}));
	{
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($Object, o, ois->readObject());
								$var($Throwable, throwable, $cast($Throwable, o));
								$init($System);
								$nc($System::err)->println("TESTING SERIALIZED EXCEPTION"_s);
								$var($ThrowableArray, t0, $nc(throwable)->getSuppressed());
								if ($nc(t0)->length != 0) {
									$throwNew($RuntimeException, SuppressedExceptions::message);
								}
								throwable->printStackTrace();
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									ois->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							ois->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						bais->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				bais->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void SuppressedExceptions::selfReference() {
	$init(SuppressedExceptions);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, throwable1, $new($RuntimeException));
	$var($Throwable, throwable2, $new($AssertionError));
	throwable1->initCause(throwable2);
	throwable2->initCause(throwable1);
	throwable1->printStackTrace();
	throwable1->addSuppressed(throwable2);
	throwable2->addSuppressed(throwable1);
	throwable1->printStackTrace();
}

void SuppressedExceptions::noModification() {
	$init(SuppressedExceptions);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, t, $new($SuppressedExceptions$NoSuppression, false));
	$var($ThrowableArray, t0, t->getSuppressed());
	if ($nc(t0)->length != 0) {
		$throwNew($RuntimeException, "Bad nonzero length of suppressed exceptions."_s);
	}
	t->addSuppressed($$new($ArithmeticException));
	$assign(t0, t->getSuppressed());
	if ($nc(t0)->length != 0) {
		$throwNew($RuntimeException, "Bad nonzero length of suppressed exceptions."_s);
	}
	$var($Throwable, suppressed, $new($ArithmeticException));
	$assign(t, $new($SuppressedExceptions$NoSuppression, true));
	try {
		t->addSuppressed(nullptr);
		$throwNew($RuntimeException, "NPE not thrown!"_s);
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
	}
	t->addSuppressed(suppressed);
	$assign(t0, t->getSuppressed());
	if ($nc(t0)->length != 1 || $nc(t0)->get(0) != suppressed) {
		$throwNew($RuntimeException, "Expected suppression did not occur."_s);
	}
}

void SuppressedExceptions::initCausePlumbing() {
	$init(SuppressedExceptions);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, t1, $new($Throwable));
	$var($Throwable, t2, $new($Throwable, "message"_s, t1));
	$var($Throwable, t3, $new($Throwable));
	try {
		t2->initCause(t3);
		$throwNew($RuntimeException, "Shouldn\'t reach."_s);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ise, $catch());
		if (ise->getCause() != t2) {
			$throwNew($RuntimeException, "Unexpected cause in ISE"_s, ise);
		}
		$var($ThrowableArray, suppressed, ise->getSuppressed());
		if ($nc(suppressed)->length != 0) {
			$throwNew($RuntimeException, "Bad suppression in ISE"_s, ise);
		}
	}
	try {
		t2->initCause(nullptr);
		$throwNew($RuntimeException, "Shouldn\'t reach."_s);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ise, $catch());
	}
	try {
		t3->initCause(t3);
		$throwNew($RuntimeException, "Shouldn\'t reach."_s);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		if (iae->getCause() != t3) {
			$throwNew($RuntimeException, "Unexpected cause in ISE"_s, iae);
		}
	}
}

void clinit$SuppressedExceptions($Class* class$) {
	$assignStatic(SuppressedExceptions::message, "Bad suppressed exception information"_s);
}

SuppressedExceptions::SuppressedExceptions() {
}

$Class* SuppressedExceptions::load$($String* name, bool initialize) {
	$loadClass(SuppressedExceptions, name, initialize, &_SuppressedExceptions_ClassInfo_, clinit$SuppressedExceptions, allocate$SuppressedExceptions);
	return class$;
}

$Class* SuppressedExceptions::class$ = nullptr;