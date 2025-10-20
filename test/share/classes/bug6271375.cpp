#include <bug6271375.h>

#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormatSymbols.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $Arrays = ::java::util::Arrays;

$MethodInfo _bug6271375_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6271375::*)()>(&bug6271375::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6271375::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6271375_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6271375",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6271375_MethodInfo_
};

$Object* allocate$bug6271375($Class* clazz) {
	return $of($alloc(bug6271375));
}

void bug6271375::init$() {
}

void bug6271375::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DateFormatSymbols, dfsSrc, $DateFormatSymbols::getInstance());
	try {
		$var($FileOutputStream, fos, $new($FileOutputStream, "dfs.ser"_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ObjectOutputStream, oStream, $new($ObjectOutputStream, fos));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								oStream->writeObject(dfsSrc);
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									oStream->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							oStream->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fos->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				fos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, "An exception is thrown."_s, e);
	}
	try {
		$var($FileInputStream, fis, $new($FileInputStream, "dfs.ser"_s));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$var($ObjectInputStream, iStream, $new($ObjectInputStream, fis));
					{
						$var($Throwable, var$3, nullptr);
						try {
							try {
								$var($DateFormatSymbols, dfsDest, $cast($DateFormatSymbols, iStream->readObject()));
								$var($StringArray2, zoneStringsSrc, $nc(dfsSrc)->getZoneStrings());
								$var($StringArray2, zoneStringsDest, $nc(dfsDest)->getZoneStrings());
								if (!$Arrays::deepEquals(zoneStringsSrc, zoneStringsDest)) {
									$throwNew($RuntimeException, "src and dest zone strings are not equal"_s);
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									iStream->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$3, $catch());
						} /*finally*/ {
							iStream->close();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fis->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				fis->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, "An exception is thrown."_s, e);
	}
}

bug6271375::bug6271375() {
}

$Class* bug6271375::load$($String* name, bool initialize) {
	$loadClass(bug6271375, name, initialize, &_bug6271375_ClassInfo_, allocate$bug6271375);
	return class$;
}

$Class* bug6271375::class$ = nullptr;