#include <TimeZoneLastModified.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef TIME

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _TimeZoneLastModified_FieldInfo_[] = {
	{"TIME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeZoneLastModified, TIME)},
	{}
};

$MethodInfo _TimeZoneLastModified_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeZoneLastModified::*)()>(&TimeZoneLastModified::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TimeZoneLastModified::main)), "java.lang.Throwable"},
	{"test", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&TimeZoneLastModified::test)), "java.lang.Throwable"},
	{}
};

$ClassInfo _TimeZoneLastModified_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TimeZoneLastModified",
	"java.lang.Object",
	nullptr,
	_TimeZoneLastModified_FieldInfo_,
	_TimeZoneLastModified_MethodInfo_
};

$Object* allocate$TimeZoneLastModified($Class* clazz) {
	return $of($alloc(TimeZoneLastModified));
}

void TimeZoneLastModified::init$() {
}

void TimeZoneLastModified::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = test(nullptr);
	{
		$var($StringArray, arr$, $TimeZone::getAvailableIDs());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, timeZoneID, arr$->get(i$));
			{
				failures += test(timeZoneID);
			}
		}
	}
	if (failures != 0) {
		$throwNew($RuntimeException, "TimeZoneLastModified failed"_s);
	}
	$init($System);
	$nc($System::out)->println("TimeZoneLastModified passed"_s);
}

int32_t TimeZoneLastModified::test($String* timeZoneID) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, "test-timezone.txt"_s));
	int32_t failures = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			f->createNewFile();
			if (timeZoneID != nullptr) {
				$TimeZone::setDefault($($TimeZone::getTimeZone(timeZoneID)));
			}
			bool succeeded = f->setLastModified(TimeZoneLastModified::TIME);
			if (!succeeded) {
				$init($System);
				$nc($System::err)->format("Setting time to %d failed for time zone %s%n"_s, $$new($ObjectArray, {
					$($of($Long::valueOf(TimeZoneLastModified::TIME))),
					$of(timeZoneID)
				}));
				++failures;
			}
			int64_t time = f->lastModified();
			if ($Math::abs(time - TimeZoneLastModified::TIME) > 999) {
				$init($System);
				$nc($System::err)->format("Wrong modification time (ms): expected %d, obtained %d%n"_s, $$new($ObjectArray, {
					$($of($Long::valueOf(TimeZoneLastModified::TIME))),
					$($of($Long::valueOf(time)))
				}));
				++failures;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			f->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return failures;
}

TimeZoneLastModified::TimeZoneLastModified() {
}

$Class* TimeZoneLastModified::load$($String* name, bool initialize) {
	$loadClass(TimeZoneLastModified, name, initialize, &_TimeZoneLastModified_ClassInfo_, allocate$TimeZoneLastModified);
	return class$;
}

$Class* TimeZoneLastModified::class$ = nullptr;