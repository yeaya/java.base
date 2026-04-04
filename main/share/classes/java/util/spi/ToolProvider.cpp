#include <java/util/spi/ToolProvider.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Predicate = ::java::util::function::Predicate;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace util {
		namespace spi {

class ToolProvider$$Lambda$lambda$findFirst$1 : public $PrivilegedAction {
	$class(ToolProvider$$Lambda$lambda$findFirst$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ClassLoader* systemClassLoader, $String* name) {
		$set(this, systemClassLoader, systemClassLoader);
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return ToolProvider::lambda$findFirst$1(systemClassLoader, name);
	}
	$ClassLoader* systemClassLoader = nullptr;
	$String* name = nullptr;
};
$Class* ToolProvider$$Lambda$lambda$findFirst$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"systemClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$findFirst$1, systemClassLoader)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$findFirst$1, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToolProvider$$Lambda$lambda$findFirst$1, init$, void, $ClassLoader*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ToolProvider$$Lambda$lambda$findFirst$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.spi.ToolProvider$$Lambda$lambda$findFirst$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ToolProvider$$Lambda$lambda$findFirst$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolProvider$$Lambda$lambda$findFirst$1);
	});
	return class$;
}
$Class* ToolProvider$$Lambda$lambda$findFirst$1::class$ = nullptr;

class ToolProvider$$Lambda$lambda$findFirst$0$1 : public $Predicate {
	$class(ToolProvider$$Lambda$lambda$findFirst$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual bool test(Object$* p) override {
		 return ToolProvider::lambda$findFirst$0(name, $cast(ToolProvider, p));
	}
	$String* name = nullptr;
};
$Class* ToolProvider$$Lambda$lambda$findFirst$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$findFirst$0$1, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToolProvider$$Lambda$lambda$findFirst$0$1, init$, void, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ToolProvider$$Lambda$lambda$findFirst$0$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.spi.ToolProvider$$Lambda$lambda$findFirst$0$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ToolProvider$$Lambda$lambda$findFirst$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolProvider$$Lambda$lambda$findFirst$0$1);
	});
	return class$;
}
$Class* ToolProvider$$Lambda$lambda$findFirst$0$1::class$ = nullptr;

int32_t ToolProvider::run($PrintStream* out, $PrintStream* err, $StringArray* args) {
	$useLocalObjectStack();
	$Objects::requireNonNull(out);
	$Objects::requireNonNull(err);
	$Objects::requireNonNull(args);
	{
		$var($StringArray, arr$, args);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, arg, arr$->get(i$));
			{
				$Objects::requireNonNull(arg);
			}
		}
	}
	$var($PrintWriter, outWriter, $new($PrintWriter, out));
	$var($PrintWriter, errWriter, $new($PrintWriter, err));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		$var($Throwable, var$3, nullptr);
		int32_t var$5 = 0;
		bool return$4 = false;
		try {
			var$5 = run(outWriter, errWriter, args);
			return$4 = true;
			goto $finally1;
		} catch ($Throwable& var$6) {
			$assign(var$3, var$6);
		} $finally1: {
			outWriter->flush();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
		if (return$4) {
			var$2 = var$5;
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$7) {
		$assign(var$0, var$7);
	} $finally: {
		errWriter->flush();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$Optional* ToolProvider::findFirst($String* name) {
	$useLocalObjectStack();
	$load(ToolProvider);
	$beforeCallerSensitive();
	$Objects::requireNonNull(name);
	$var($ClassLoader, systemClassLoader, $ClassLoader::getSystemClassLoader());
	return $cast($Optional, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(ToolProvider$$Lambda$lambda$findFirst$1, systemClassLoader, name))));
}

$Optional* ToolProvider::lambda$findFirst$1($ClassLoader* systemClassLoader, $String* name) {
	$useLocalObjectStack();
	$load(ToolProvider);
	$beforeCallerSensitive();
	$var($ServiceLoader, sl, $ServiceLoader::load(ToolProvider::class$, systemClassLoader));
	return $$nc($$nc($StreamSupport::stream($($nc(sl)->spliterator()), false))->filter($$new(ToolProvider$$Lambda$lambda$findFirst$0$1, name)))->findFirst();
}

bool ToolProvider::lambda$findFirst$0($String* name, ToolProvider* p) {
	return $$nc($nc(p)->name())->equals(name);
}

$Class* ToolProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.spi.ToolProvider$$Lambda$lambda$findFirst$1")) {
			return ToolProvider$$Lambda$lambda$findFirst$1::load$(name, initialize);
		}
		if (name->equals("java.util.spi.ToolProvider$$Lambda$lambda$findFirst$0$1")) {
			return ToolProvider$$Lambda$lambda$findFirst$0$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"findFirst", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/util/spi/ToolProvider;>;", $PUBLIC | $STATIC, $staticMethod(ToolProvider, findFirst, $Optional*, $String*)},
		{"lambda$findFirst$0", "(Ljava/lang/String;Ljava/util/spi/ToolProvider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ToolProvider, lambda$findFirst$0, bool, $String*, ToolProvider*)},
		{"lambda$findFirst$1", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ToolProvider, lambda$findFirst$1, $Optional*, $ClassLoader*, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToolProvider, name, $String*)},
		{"run", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(ToolProvider, run, int32_t, $PrintWriter*, $PrintWriter*, $StringArray*)},
		{"run", "(Ljava/io/PrintStream;Ljava/io/PrintStream;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ToolProvider, run, int32_t, $PrintStream*, $PrintStream*, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.spi.ToolProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ToolProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolProvider);
	});
	return class$;
}

$Class* ToolProvider::class$ = nullptr;

		} // spi
	} // util
} // java