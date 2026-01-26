#include <jdk/internal/platform/CgroupUtil.h>

#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/List.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/platform/CgroupSubsystemController.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $List = ::java::util::List;
using $Stream = ::java::util::stream::Stream;
using $CgroupSubsystemController = ::jdk::internal::platform::CgroupSubsystemController;

namespace jdk {
	namespace internal {
		namespace platform {

class CgroupUtil$$Lambda$lambda$readFilePrivileged$0 : public $PrivilegedExceptionAction {
	$class(CgroupUtil$$Lambda$lambda$readFilePrivileged$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* path) {
		$set(this, path, path);
	}
	virtual $Object* run() override {
		 return $of(CgroupUtil::lambda$readFilePrivileged$0(path));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupUtil$$Lambda$lambda$readFilePrivileged$0>());
	}
	$Path* path = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CgroupUtil$$Lambda$lambda$readFilePrivileged$0::fieldInfos[2] = {
	{"path", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(CgroupUtil$$Lambda$lambda$readFilePrivileged$0, path)},
	{}
};
$MethodInfo CgroupUtil$$Lambda$lambda$readFilePrivileged$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(CgroupUtil$$Lambda$lambda$readFilePrivileged$0, init$, void, $Path*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CgroupUtil$$Lambda$lambda$readFilePrivileged$0, run, $Object*)},
	{}
};
$ClassInfo CgroupUtil$$Lambda$lambda$readFilePrivileged$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.CgroupUtil$$Lambda$lambda$readFilePrivileged$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* CgroupUtil$$Lambda$lambda$readFilePrivileged$0::load$($String* name, bool initialize) {
	$loadClass(CgroupUtil$$Lambda$lambda$readFilePrivileged$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupUtil$$Lambda$lambda$readFilePrivileged$0::class$ = nullptr;

class CgroupUtil$$Lambda$lambda$readStringValue$1$1 : public $PrivilegedExceptionAction {
	$class(CgroupUtil$$Lambda$lambda$readStringValue$1$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($CgroupSubsystemController* controller, $String* param) {
		$set(this, controller, controller);
		$set(this, param, param);
	}
	virtual $Object* run() override {
		 return $of(CgroupUtil::lambda$readStringValue$1(controller, param));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupUtil$$Lambda$lambda$readStringValue$1$1>());
	}
	$CgroupSubsystemController* controller = nullptr;
	$String* param = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CgroupUtil$$Lambda$lambda$readStringValue$1$1::fieldInfos[3] = {
	{"controller", "Ljdk/internal/platform/CgroupSubsystemController;", nullptr, $PUBLIC, $field(CgroupUtil$$Lambda$lambda$readStringValue$1$1, controller)},
	{"param", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CgroupUtil$$Lambda$lambda$readStringValue$1$1, param)},
	{}
};
$MethodInfo CgroupUtil$$Lambda$lambda$readStringValue$1$1::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CgroupUtil$$Lambda$lambda$readStringValue$1$1, init$, void, $CgroupSubsystemController*, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CgroupUtil$$Lambda$lambda$readStringValue$1$1, run, $Object*)},
	{}
};
$ClassInfo CgroupUtil$$Lambda$lambda$readStringValue$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.CgroupUtil$$Lambda$lambda$readStringValue$1$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* CgroupUtil$$Lambda$lambda$readStringValue$1$1::load$($String* name, bool initialize) {
	$loadClass(CgroupUtil$$Lambda$lambda$readStringValue$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupUtil$$Lambda$lambda$readStringValue$1$1::class$ = nullptr;

class CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2 : public $PrivilegedExceptionAction {
	$class(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* path) {
		$set(this, path, path);
	}
	virtual $Object* run() override {
		 return $of(CgroupUtil::lambda$readAllLinesPrivileged$2(path));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2>());
	}
	$Path* path = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::fieldInfos[2] = {
	{"path", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2, path)},
	{}
};
$MethodInfo CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2, init$, void, $Path*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2, run, $Object*)},
	{}
};
$ClassInfo CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.platform.CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::load$($String* name, bool initialize) {
	$loadClass(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::class$ = nullptr;

$MethodInfo _CgroupUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CgroupUtil, init$, void)},
	{"lambda$readAllLinesPrivileged$2", "(Ljava/nio/file/Path;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CgroupUtil, lambda$readAllLinesPrivileged$2, $List*, $Path*), "java.lang.Exception"},
	{"lambda$readFilePrivileged$0", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CgroupUtil, lambda$readFilePrivileged$0, $Stream*, $Path*), "java.lang.Exception"},
	{"lambda$readStringValue$1", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)Ljava/io/BufferedReader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CgroupUtil, lambda$readStringValue$1, $BufferedReader*, $CgroupSubsystemController*, $String*), "java.lang.Exception"},
	{"readAllLinesPrivileged", "(Ljava/nio/file/Path;)Ljava/util/List;", "(Ljava/nio/file/Path;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(CgroupUtil, readAllLinesPrivileged, $List*, $Path*), "java.io.IOException"},
	{"readFilePrivileged", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(CgroupUtil, readFilePrivileged, $Stream*, $Path*), "java.io.IOException"},
	{"readStringValue", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(CgroupUtil, readStringValue, $String*, $CgroupSubsystemController*, $String*), "java.io.IOException"},
	{"unwrapIOExceptionAndRethrow", "(Ljava/security/PrivilegedActionException;)V", nullptr, $STATIC, $staticMethod(CgroupUtil, unwrapIOExceptionAndRethrow, void, $PrivilegedActionException*), "java.io.IOException"},
	{}
};

$ClassInfo _CgroupUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.platform.CgroupUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CgroupUtil_MethodInfo_
};

$Object* allocate$CgroupUtil($Class* clazz) {
	return $of($alloc(CgroupUtil));
}

void CgroupUtil::init$() {
}

$Stream* CgroupUtil::readFilePrivileged($Path* path) {
	$load(CgroupUtil);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($PrivilegedExceptionAction, pea, static_cast<$PrivilegedExceptionAction*>($new(CgroupUtil$$Lambda$lambda$readFilePrivileged$0, path)));
		return $cast($Stream, $AccessController::doPrivileged(pea));
	} catch ($PrivilegedActionException& e) {
		unwrapIOExceptionAndRethrow(e);
		$throwNew($InternalError, $(e->getCause()));
	} catch ($UncheckedIOException& e) {
		$throw($($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

void CgroupUtil::unwrapIOExceptionAndRethrow($PrivilegedActionException* pae) {
	$var($Throwable, x, $nc(pae)->getCause());
	if ($instanceOf($IOException, x)) {
		$throw($cast($IOException, x));
	}
	if ($instanceOf($RuntimeException, x)) {
		$throw($cast($RuntimeException, x));
	}
	if ($instanceOf($Error, x)) {
		$throw($cast($Error, x));
	}
}

$String* CgroupUtil::readStringValue($CgroupSubsystemController* controller, $String* param) {
	$load(CgroupUtil);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, pea, static_cast<$PrivilegedExceptionAction*>($new(CgroupUtil$$Lambda$lambda$readStringValue$1$1, controller, param)));
	try {
		$var($BufferedReader, bufferedReader, $cast($BufferedReader, $AccessController::doPrivileged(pea)));
		{
			$var($Throwable, var$0, nullptr);
			$var($String, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($String, line, $nc(bufferedReader)->readLine());
					$assign(var$2, line);
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (bufferedReader != nullptr) {
						try {
							bufferedReader->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (bufferedReader != nullptr) {
					bufferedReader->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($PrivilegedActionException& e) {
		unwrapIOExceptionAndRethrow(e);
		$throwNew($InternalError, $(e->getCause()));
	} catch ($UncheckedIOException& e) {
		$throw($($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

$List* CgroupUtil::readAllLinesPrivileged($Path* path) {
	$load(CgroupUtil);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($PrivilegedExceptionAction, pea, static_cast<$PrivilegedExceptionAction*>($new(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2, path)));
		return $cast($List, $AccessController::doPrivileged(pea));
	} catch ($PrivilegedActionException& e) {
		unwrapIOExceptionAndRethrow(e);
		$throwNew($InternalError, $(e->getCause()));
	} catch ($UncheckedIOException& e) {
		$throw($($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

$List* CgroupUtil::lambda$readAllLinesPrivileged$2($Path* path) {
	return $Files::readAllLines(path);
}

$BufferedReader* CgroupUtil::lambda$readStringValue$1($CgroupSubsystemController* controller, $String* param) {
	$useLocalCurrentObjectStackCache();
	return $Files::newBufferedReader($($Paths::get($($nc(controller)->path()), $$new($StringArray, {param}))));
}

$Stream* CgroupUtil::lambda$readFilePrivileged$0($Path* path) {
	return $Files::lines(path);
}

CgroupUtil::CgroupUtil() {
}

$Class* CgroupUtil::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CgroupUtil$$Lambda$lambda$readFilePrivileged$0::classInfo$.name)) {
			return CgroupUtil$$Lambda$lambda$readFilePrivileged$0::load$(name, initialize);
		}
		if (name->equals(CgroupUtil$$Lambda$lambda$readStringValue$1$1::classInfo$.name)) {
			return CgroupUtil$$Lambda$lambda$readStringValue$1$1::load$(name, initialize);
		}
		if (name->equals(CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::classInfo$.name)) {
			return CgroupUtil$$Lambda$lambda$readAllLinesPrivileged$2$2::load$(name, initialize);
		}
	}
	$loadClass(CgroupUtil, name, initialize, &_CgroupUtil_ClassInfo_, allocate$CgroupUtil);
	return class$;
}

$Class* CgroupUtil::class$ = nullptr;

		} // platform
	} // internal
} // jdk