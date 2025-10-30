#include <Bug7196316.h>

#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/math/RoundingMode.h>
#include <java/text/DecimalFormat.h>
#include <jcpp.h>

#undef DOWN

using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $RoundingMode = ::java::math::RoundingMode;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;

$FieldInfo _Bug7196316_FieldInfo_[] = {
	{"filename", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug7196316, filename)},
	{}
};

$MethodInfo _Bug7196316_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug7196316::*)()>(&Bug7196316::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug7196316::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug7196316_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug7196316",
	"java.lang.Object",
	nullptr,
	_Bug7196316_FieldInfo_,
	_Bug7196316_MethodInfo_
};

$Object* allocate$Bug7196316($Class* clazz) {
	return $of($alloc(Bug7196316));
}

$String* Bug7196316::filename = nullptr;

void Bug7196316::init$() {
}

void Bug7196316::main($StringArray* args) {
	$init(Bug7196316);
	$useLocalCurrentObjectStackCache();
	$var($DecimalFormat, df, nullptr);
	$init($RoundingMode);
	$RoundingMode* mode = $RoundingMode::DOWN;
	double given = 6.6;
	$var($String, expected, nullptr);
	$var($String, actual, nullptr);
	{
		$var($ObjectOutputStream, os, $new($ObjectOutputStream, $$new($FileOutputStream, Bug7196316::filename)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(df, $new($DecimalFormat, "#"_s));
					df->setRoundingMode(mode);
					$assign(expected, df->format(given));
					os->writeObject(df);
				} catch ($Throwable& t$) {
					try {
						os->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				os->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($ObjectInputStream, is, $new($ObjectInputStream, $$new($FileInputStream, Bug7196316::filename)));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$assign(df, $cast($DecimalFormat, is->readObject()));
				} catch ($Throwable& t$) {
					try {
						is->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				is->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	$RoundingMode* newMode = $nc(df)->getRoundingMode();
	if (mode != newMode) {
		$throwNew($RuntimeException, $$str({"Unexpected roundig mode: "_s, newMode}));
	} else {
		$assign(actual, df->format(given));
		if (!$nc(expected)->equals(actual)) {
			$throwNew($RuntimeException, $$str({"Unexpected formatted result: \""_s, actual, "\""_s}));
		} else {
			$nc($System::out)->println($$str({"Passed: Expected rounding mode ("_s, newMode, ") & formatted result: \""_s, actual, "\""_s}));
		}
	}
}

Bug7196316::Bug7196316() {
}

void clinit$Bug7196316($Class* class$) {
	$assignStatic(Bug7196316::filename, "bug7196316.ser"_s);
}

$Class* Bug7196316::load$($String* name, bool initialize) {
	$loadClass(Bug7196316, name, initialize, &_Bug7196316_ClassInfo_, clinit$Bug7196316, allocate$Bug7196316);
	return class$;
}

$Class* Bug7196316::class$ = nullptr;