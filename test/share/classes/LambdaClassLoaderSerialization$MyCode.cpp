#include <LambdaClassLoaderSerialization$MyCode.h>
#include <LambdaClassLoaderSerialization$SerializableRunnable.h>
#include <LambdaClassLoaderSerialization.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <jcpp.h>

using $LambdaClassLoaderSerialization$SerializableRunnable = ::LambdaClassLoaderSerialization$SerializableRunnable;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;

class LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1 : public $LambdaClassLoaderSerialization$SerializableRunnable {
	$class(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1, $NO_CLASS_INIT, $LambdaClassLoaderSerialization$SerializableRunnable)
public:
	void init$() {
	}
	virtual void run() override {
		LambdaClassLoaderSerialization$MyCode::lambda$run$776879b6$1();
	}
};
$Class* LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1",
		"java.lang.Object",
		"LambdaClassLoaderSerialization$SerializableRunnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1));
	});
	return class$;
}
$Class* LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::class$ = nullptr;

void LambdaClassLoaderSerialization$MyCode::init$() {
}

$bytes* LambdaClassLoaderSerialization$MyCode::serialize(Object$* o) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, baos, nullptr);
	try {
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, $assign(baos, $new($ByteArrayOutputStream))));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				oos->writeObject(o);
			} catch ($Throwable& t$) {
				try {
					oos->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			oos->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, e);
	}
	return $nc(baos)->toByteArray();
}

$Object* LambdaClassLoaderSerialization$MyCode::deserialize($bytes* bytes) {
	$useLocalObjectStack();
	try {
		$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, bytes)));
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, ois->readObject());
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				try {
					ois->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			ois->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, e);
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

void LambdaClassLoaderSerialization$MyCode::run() {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"                this: "_s, this}));
	$var($LambdaClassLoaderSerialization$SerializableRunnable, deSerializedThis, $cast($LambdaClassLoaderSerialization$SerializableRunnable, deserialize($(serialize(this)))));
	$System::out->println($$str({"    deSerializedThis: "_s, deSerializedThis}));
	$var($LambdaClassLoaderSerialization$SerializableRunnable, runnable, $new(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1));
	$System::out->println($$str({"            runnable: "_s, runnable}));
	$var($LambdaClassLoaderSerialization$SerializableRunnable, deSerializedRunnable, $cast($LambdaClassLoaderSerialization$SerializableRunnable, deserialize($(serialize(runnable)))));
	$System::out->println($$str({"deSerializedRunnable: "_s, deSerializedRunnable}));
}

$Object* LambdaClassLoaderSerialization$MyCode::$deserializeLambda$($SerializedLambda* lambda) {
	$init(LambdaClassLoaderSerialization$MyCode);
	$useLocalObjectStack();
	{
		$var($String, s1583$, $nc(lambda)->getImplMethodName());
		int32_t tmp1583$ = -1;
		switch ($nc(s1583$)->hashCode()) {
		case (int32_t)0x8c5f5fdb:
			if (s1583$->equals("lambda$run$776879b6$1"_s)) {
				tmp1583$ = 0;
			}
			break;
		}
		switch (tmp1583$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $$nc(lambda->getFunctionalInterfaceClass())->equals("LambdaClassLoaderSerialization$SerializableRunnable"_s);
				bool var$2 = var$3 && $$nc(lambda->getFunctionalInterfaceMethodName())->equals("run"_s);
				bool var$1 = var$2 && $$nc(lambda->getFunctionalInterfaceMethodSignature())->equals("()V"_s);
				bool var$0 = var$1 && $$nc(lambda->getImplClass())->equals("LambdaClassLoaderSerialization$MyCode"_s);
				if (var$0 && $$nc(lambda->getImplMethodSignature())->equals("()V"_s)) {
					return $of($new(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

void LambdaClassLoaderSerialization$MyCode::lambda$run$776879b6$1() {
	$init(LambdaClassLoaderSerialization$MyCode);
	$nc($System::out)->println("HELLO"_s);
}

LambdaClassLoaderSerialization$MyCode::LambdaClassLoaderSerialization$MyCode() {
}

$Class* LambdaClassLoaderSerialization$MyCode::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1")) {
			return LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaClassLoaderSerialization$MyCode, $deserializeLambda$, $Object*, $SerializedLambda*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaClassLoaderSerialization$MyCode, init$, void)},
		{"deserialize", "([B)Ljava/lang/Object;", "<T:Ljava/lang/Object;>([B)TT;", $PRIVATE, $method(LambdaClassLoaderSerialization$MyCode, deserialize, $Object*, $bytes*)},
		{"lambda$run$776879b6$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaClassLoaderSerialization$MyCode, lambda$run$776879b6$1, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LambdaClassLoaderSerialization$MyCode, run, void)},
		{"serialize", "(Ljava/lang/Object;)[B", nullptr, $PRIVATE, $method(LambdaClassLoaderSerialization$MyCode, serialize, $bytes*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaClassLoaderSerialization$MyCode", "LambdaClassLoaderSerialization", "MyCode", $PUBLIC | $STATIC},
		{"LambdaClassLoaderSerialization$SerializableRunnable", "LambdaClassLoaderSerialization", "SerializableRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LambdaClassLoaderSerialization$MyCode",
		"java.lang.Object",
		"LambdaClassLoaderSerialization$SerializableRunnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LambdaClassLoaderSerialization"
	};
	$loadClass(LambdaClassLoaderSerialization$MyCode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LambdaClassLoaderSerialization$MyCode));
	});
	return class$;
}

$Class* LambdaClassLoaderSerialization$MyCode::class$ = nullptr;