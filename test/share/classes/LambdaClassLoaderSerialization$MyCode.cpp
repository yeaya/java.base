#include <LambdaClassLoaderSerialization$MyCode.h>

#include <LambdaClassLoaderSerialization$SerializableRunnable.h>
#include <LambdaClassLoaderSerialization.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
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
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::*)()>(&LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1",
	"java.lang.Object",
	"LambdaClassLoaderSerialization$SerializableRunnable",
	nullptr,
	methodInfos
};
$Class* LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::load$($String* name, bool initialize) {
	$loadClass(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::class$ = nullptr;

$MethodInfo _LambdaClassLoaderSerialization$MyCode_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($SerializedLambda*)>(&LambdaClassLoaderSerialization$MyCode::$deserializeLambda$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaClassLoaderSerialization$MyCode::*)()>(&LambdaClassLoaderSerialization$MyCode::init$))},
	{"deserialize", "([B)Ljava/lang/Object;", "<T:Ljava/lang/Object;>([B)TT;", $PRIVATE, $method(static_cast<$Object*(LambdaClassLoaderSerialization$MyCode::*)($bytes*)>(&LambdaClassLoaderSerialization$MyCode::deserialize))},
	{"lambda$run$776879b6$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LambdaClassLoaderSerialization$MyCode::lambda$run$776879b6$1))},
	{"run", "()V", nullptr, $PUBLIC},
	{"serialize", "(Ljava/lang/Object;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(LambdaClassLoaderSerialization$MyCode::*)(Object$*)>(&LambdaClassLoaderSerialization$MyCode::serialize))},
	{}
};

$InnerClassInfo _LambdaClassLoaderSerialization$MyCode_InnerClassesInfo_[] = {
	{"LambdaClassLoaderSerialization$MyCode", "LambdaClassLoaderSerialization", "MyCode", $PUBLIC | $STATIC},
	{"LambdaClassLoaderSerialization$SerializableRunnable", "LambdaClassLoaderSerialization", "SerializableRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaClassLoaderSerialization$MyCode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LambdaClassLoaderSerialization$MyCode",
	"java.lang.Object",
	"LambdaClassLoaderSerialization$SerializableRunnable",
	nullptr,
	_LambdaClassLoaderSerialization$MyCode_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaClassLoaderSerialization$MyCode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LambdaClassLoaderSerialization"
};

$Object* allocate$LambdaClassLoaderSerialization$MyCode($Class* clazz) {
	return $of($alloc(LambdaClassLoaderSerialization$MyCode));
}

void LambdaClassLoaderSerialization$MyCode::init$() {
}

$bytes* LambdaClassLoaderSerialization$MyCode::serialize(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, nullptr);
	try {
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, ($assign(baos, $new($ByteArrayOutputStream)))));
		{
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
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	return $nc(baos)->toByteArray();
}

$Object* LambdaClassLoaderSerialization$MyCode::deserialize($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, bytes)));
		{
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
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void LambdaClassLoaderSerialization$MyCode::run() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"                this: "_s, this}));
	$var($LambdaClassLoaderSerialization$SerializableRunnable, deSerializedThis, $cast($LambdaClassLoaderSerialization$SerializableRunnable, deserialize($(serialize(this)))));
	$nc($System::out)->println($$str({"    deSerializedThis: "_s, deSerializedThis}));
	$var($LambdaClassLoaderSerialization$SerializableRunnable, runnable, static_cast<$LambdaClassLoaderSerialization$SerializableRunnable*>($new(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1)));
	$nc($System::out)->println($$str({"            runnable: "_s, runnable}));
	$var($LambdaClassLoaderSerialization$SerializableRunnable, deSerializedRunnable, $cast($LambdaClassLoaderSerialization$SerializableRunnable, deserialize($(serialize(runnable)))));
	$nc($System::out)->println($$str({"deSerializedRunnable: "_s, deSerializedRunnable}));
}

$Object* LambdaClassLoaderSerialization$MyCode::$deserializeLambda$($SerializedLambda* lambda) {
	$init(LambdaClassLoaderSerialization$MyCode);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s1583$, $nc(lambda)->getImplMethodName());
		int32_t tmp1583$ = -1;
		switch ($nc(s1583$)->hashCode()) {
		case (int32_t)0x8C5F5FDB:
			{
				if (s1583$->equals("lambda$run$776879b6$1"_s)) {
					tmp1583$ = 0;
				}
				break;
			}
		}
		switch (tmp1583$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("LambdaClassLoaderSerialization$SerializableRunnable"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("run"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("()V"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("LambdaClassLoaderSerialization$MyCode"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("()V"_s)) {
					return $of(static_cast<$LambdaClassLoaderSerialization$SerializableRunnable*>($new(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1)));
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
		if (name->equals(LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::classInfo$.name)) {
			return LambdaClassLoaderSerialization$MyCode$$Lambda$lambda$run$776879b6$1::load$(name, initialize);
		}
	}
	$loadClass(LambdaClassLoaderSerialization$MyCode, name, initialize, &_LambdaClassLoaderSerialization$MyCode_ClassInfo_, allocate$LambdaClassLoaderSerialization$MyCode);
	return class$;
}

$Class* LambdaClassLoaderSerialization$MyCode::class$ = nullptr;