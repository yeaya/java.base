#include <sun/util/calendar/ZoneInfoFile$1.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/ZoneId.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/util/calendar/ZoneInfoFile.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ZoneId = ::java::time::ZoneId;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $ZoneInfoFile = ::sun::util::calendar::ZoneInfoFile;

namespace sun {
	namespace util {
		namespace calendar {

$MethodInfo _ZoneInfoFile$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZoneInfoFile$1::*)()>(&ZoneInfoFile$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ZoneInfoFile$1_EnclosingMethodInfo_ = {
	"sun.util.calendar.ZoneInfoFile",
	nullptr,
	nullptr
};

$InnerClassInfo _ZoneInfoFile$1_InnerClassesInfo_[] = {
	{"sun.util.calendar.ZoneInfoFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZoneInfoFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.calendar.ZoneInfoFile$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ZoneInfoFile$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ZoneInfoFile$1_EnclosingMethodInfo_,
	_ZoneInfoFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.ZoneInfoFile"
};

$Object* allocate$ZoneInfoFile$1($Class* clazz) {
	return $of($alloc(ZoneInfoFile$1));
}

void ZoneInfoFile$1::init$() {
}

$Object* ZoneInfoFile$1::run() {
	$beforeCallerSensitive();
	try {
		$init($File);
		$var($String, libDir, $str({$($StaticProperty::javaHome()), $File::separator, "lib"_s}));
		if ($$new($File, libDir, "tzdb.dat"_s)->exists()) {
			{
				$var($DataInputStream, dis, $new($DataInputStream, $$new($BufferedInputStream, $$new($FileInputStream, $$new($File, libDir, "tzdb.dat"_s)))));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$ZoneInfoFile::load(dis);
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							try {
								dis->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						dis->close();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} else {
			{
				$load($ZoneId);
				$var($DataInputStream, dis, $new($DataInputStream, $$new($BufferedInputStream, $($ZoneId::class$->getResourceAsStream("tzdb.dat"_s)))));
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							$ZoneInfoFile::load(dis);
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							try {
								dis->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						dis->close();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		}
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		$throwNew($Error, static_cast<$Throwable*>(x));
	}
	return $of(nullptr);
}

ZoneInfoFile$1::ZoneInfoFile$1() {
}

$Class* ZoneInfoFile$1::load$($String* name, bool initialize) {
	$loadClass(ZoneInfoFile$1, name, initialize, &_ZoneInfoFile$1_ClassInfo_, allocate$ZoneInfoFile$1);
	return class$;
}

$Class* ZoneInfoFile$1::class$ = nullptr;

		} // calendar
	} // util
} // sun